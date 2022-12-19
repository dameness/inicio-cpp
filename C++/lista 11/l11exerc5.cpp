#include <iostream>
#include <ctime>
using namespace std;

int main()
{
    setlocale(LC_ALL, "portuguese");
    srand(time(NULL));

    const int tam = 10;
    int i, n, x[tam], y[tam], aux, s[tam*2], u[tam*2], contX=0, contY=0, contXimpar=0, contXpar=0, maiorque30=0;
    bool ordenado, repete;

    for (i=0;i<tam;i++)
    {
        do{
            n = rand()%51;
            repete = false;

            for(i=0; i<contX; i++)
            {
                if(x[i]== n)
                {
                    repete=true;
                    break;
                }
            }

            if(repete==false)
            {
                x[contX]= n;
                contX++;
            }

        }while(repete==true);

        do{

            n = rand()%51;
            repete=false;

            for(i=0; i<contX; i++)
            {
                if(y[i]== n)
                {
                    repete=true;
                    break;
                }
            }

            if(repete==false)
            {
                y[contY]= n;
                contY++;
            }

        }while(repete==true);


    }

    do{
        //bubble sort algoritmo +lenta e +simples para ordenar
        ordenado=true;
        for (i=0; i<tam-1; i++)
        {
            if(x[i]>x[i+1])
            {
                aux = x[i];
                x[i] = x[i+1];
                x[i+1] = aux;
                ordenado=false;
            }
        }
    }while(ordenado==false);

    do{
        ordenado=true;
        for (i=0; i<tam-1; i++)
        {
             if(y[i]<y[i+1])
            {
                aux = y[i];
                y[i] = y[i+1];
                y[i+1] = aux;
                ordenado=false;
            }
        }
    }while(ordenado==false);


    cout << "Vetor X em ordem crescente: [";

    for (i=0;i<tam;i++)
    {
        if(x[i]%2 != 0)
        {
            contXimpar++;
        }
        else
        {
            contXpar++;
        }

        if(x[i]>30)
        {
            s[maiorque30]=x[i];
            maiorque30++;
        }


       cout << x[i];

       if(i<tam-1)
        cout << ",";
    }

    cout << "]\n";

    cout << "Vetor Y em ordem decrescente: [";

    for (i=0;i<tam;i++)
    {
        if(y[i]>30)
        {
            s[maiorque30]=y[i];
            maiorque30++;
        }

       cout << y[i];

       if(i<tam-1)
        cout << ",";
    }

    cout << "]\n";

    int z[contXimpar], w[contXpar];
    contXimpar=0;
    contXpar=0;

    cout << "Vetor Z de ímpares de X: [";

    for(i=0; i<tam; i++)
    {
        if(x[i]%2!=0)
        {
            z[contXimpar]=x[i];
            contXimpar++;
        }
    }
    for(i=0; i<contXimpar; i++)
    {
        cout << z[i];
        if(i<contXimpar-1)
            cout << ", ";
    }

    cout << "]\n";

    cout << "Vetor W de pares de X: [";

    for(i=0; i<tam; i++)
    {
        if(x[i]%2==0)
        {
            w[contXpar]=x[i];
            contXpar++;
        }
    }

    for(i=0; i<contXpar; i++)
    {
        cout << w[i];
        if(i<contXpar-1)
            cout << ", ";
    }


    cout << "]\n";

    cout << "Vetor S de valores maiores que 30 em X e Y: [";

    for (i=0;i<maiorque30;i++)
    {
       cout << s[i];

       if(i<maiorque30-1)
        cout << ",";
    }

    cout << "]\n";

    //vetor u
    for(i=0; i<tam; i++)
    {
        u[i] = x[i];
    }

    for(i=0; i<tam; i++)
    {
        u[tam + i] = y[i];
    }
    cout << "Vetor U, que une X e Y: [";

    for (i=0;i<tam*2;i++)
    {
       cout << u[i];

       if(i<tam*2 -1)
        cout << ",";
    }

    cout << "]\n";


    return 0;
}
