#include <iostream>
using namespace std;

void repetir()
{
    cout << "Você digitou um valor inválido\n\n";
    system("pause");
}

int main()
{
    int n;
    setlocale(LC_ALL, "Portuguese");

    do
    {
        system("cls");
        cout << "Informe a ordem da matriz (inteiro de 4 a 6): ";
        cin >> n;

        if(n>3 && n<7)
        {
            char matriz[n][n], lin, col;

            for(lin=0; lin<n; lin++)
            {
                for(col=0; col<n; col++)
                {
                    if(lin>col)
                        matriz[lin][col] = 'B';
                    if(lin<col)
                        matriz[lin][col] = 'A';
                    if(lin==col)
                        matriz[lin][col] = 'X';
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
                system("pause");
        }
        else
            repetir();
    }while(n<=3 || n>=7);

    return 0;
}
