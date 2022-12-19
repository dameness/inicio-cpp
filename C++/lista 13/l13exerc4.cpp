#include <iostream>
#include <ctime>
using namespace std;

int main()
{
    const int tam=8;
    int a[tam][tam], DP[tam], DS[tam], acimaDPmaior;
    int lin, col, somaDP=0, DSparTam=0, cont=1, i;
    setlocale(LC_ALL, "Portuguese");
    srand(time(NULL));

    for(lin=0; lin<tam; lin++)
    {
        for(col=0; col<tam; col++)
        {
            a[lin][col]= rand()%250;
            if(lin<col)
            {
                if((a[lin][col] > acimaDPmaior )|| cont==1)
                {
                    acimaDPmaior = a[lin][col];
                }

                cont++;
            }
        }
    }

    for(i=0; i<tam; i++)
    {
        DP[i]=a[i][i];
        somaDP += DP[i];
    }

    for(i=0; i<tam; i++)
    {
        //TAM-1  -i pois as posições da matriz encerram em tam-1
        DS[i]=a[i][tam-1-i];
        if(DS[i]%2==0)
            DSparTam++;
    }

    int DSpar[DSparTam];
    DSparTam=0;

    for(i=0; i<tam; i++)
    {
        if(DS[i]%2==0)
        {
            DSpar[DSparTam]=DS[i];
            DSparTam++;
        }
    }

    cout << "Matriz:\n\n";
    for(lin=0; lin<tam; lin++)
    {
        for(col=0; col<tam; col++)
            cout << a[lin][col] << "\t";
        cout << "\n";
    }

    cout << "\n\nOs elementos da DP da matriz: ";
    for(i=0; i<tam; i++)
    {
        cout << DP[i];
        if(i<tam-1)
            cout << ", ";
    }
    cout << "\nA soma dos elementos da DP: " << somaDP;
    cout << "\nOs elementos pares da DS: ";
    for(i=0; i<DSparTam; i++)
    {
        cout << DSpar[i];
        if(i<DSparTam-1)
            cout << ", ";
    }
    cout << "\nO maior elemento acima da DP: " << acimaDPmaior << endl;




    return 0;
}
