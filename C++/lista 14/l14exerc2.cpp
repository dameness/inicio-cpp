#include <iostream>
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

    do
    {
        system("cls");
        cout << "Informe a ordem da matriz (inteiro ímpar de 5 a 13): ";
        cin >> n;

        if(n>=5 && n<=13 && n%2!=0)
        {
            int matriz[n][n], lin, col, i;

            for(lin=0; lin<n; lin++)
            {
                for(col=0; col<n; col++)
                    matriz[lin][col]=0;
            }
            for(i=0; i<n; i++)
            {
                matriz[n/2][i]=1;
                matriz[i][n/2]=1;
            }
            cout << "Matriz:\n\n";
            for(lin=0; lin<n; lin++)
            {
                for(col=0; col<n; col++)
                    cout << matriz[lin][col] << "\t";
                cout << "\n";
            }
            cout << "\n\n";
            system("pause");
        }
        else
            repetir();
    }
    while(n<5 || n>13 || n%2==0);



    return 0;
}
