#include <iostream>
#include <ctime>
#include <iomanip>
using namespace std;

void repetir()
{
    cout << "Você digitou um valor inválido! Digite novamente!\n\n";
    system("pause");
}
int main()
{
    int n;
    setlocale(LC_ALL, "Portuguese");
    srand(time(NULL));

    cout << fixed << setprecision(1);

    do
    {
        system("cls");
        cout << "Informe a ordem da matriz (3<int<16): ";
        cin >> n;

        if(n>=4 && n<=15)
        {
            int matriz[n][n], lin, col, i, maior, x, contX=0, aux;
            float percX;

            for(lin=0; lin<n; lin++)
            {
                for(col=0; col<n; col++)
                {
                    matriz[lin][col]=rand()%51 + 20;

                    if(matriz[lin][col] > maior || (lin==0 && col==0))
                        maior = matriz[lin][col];
                }
            }


            cout << "Matriz:\n\n";
            for(lin=0; lin<n; lin++)
            {
                for(col=0; col<n; col++)
                    cout << matriz[lin][col] << "\t";
                cout << "\n";
            }
            cout << "\n\n";

            for(i=0; i<n; i++)
                matriz[i][i]=maior;

            cout << "Matriz após modificar DP pelo maior termo:\n\n";
            for(lin=0; lin<n; lin++)
            {
                for(col=0; col<n; col++)
                    cout << matriz[lin][col] << "\t";
                cout << "\n";
            }
            cout << "\n\n";

            do
            {
            cout << "Diga um inteiro X(maior que 20 e menor que 70): ";
            cin >> x;

            if(x>20 && x<70)
            {
                for(lin=0; lin<n; lin++)
                {
                    for(col=0; col<n; col++)
                    {
                        if(matriz[lin][col] > x)
                            contX++;
                    }
                }

                percX = (contX*100.0)/(n*n);

                cout << "\nO percentual de números maiores do que X na matriz foi: " << percX << "%\n";
            }
            else
                repetir();

            }while(x<=20 || x>=70);
            //system("pause");

            for(col=0; col<n; col++)
            {
                aux = matriz[0][col];
                matriz[0][col] = matriz[n-1][col];
                matriz[n-1][col] = aux;
            }

            cout << "\nMatriz após trocar a última linha com a primeira:\n\n";
            for(lin=0; lin<n; lin++)
            {
                for(col=0; col<n; col++)
                    cout << matriz[lin][col] << "\t";
                cout << "\n";
            }
            cout << "\n\n";

        }
        else
            repetir();

    }while(n<4 || n>15);


        return 0;
}
