#include <iostream>
using namespace std;

int main()
{
    int n;
    setlocale(LC_ALL, "Portuguese");

    do
    {
        system("cls");
        cout << "Diga a ordem da matriz (Impar, 5 <= ordem <=15): ";
        cin >> n;

        if(n<5 || n>15 || n%2==0)
        {
            cout << "\nValor inválido para a ordem! Digite um valor válido!\n\n";
            system("pause");
            continue;
        }
    }while(n<5 || n>15 || n%2==0);

    char matriz[n][n];
    int lin, col, i;

    for(lin=0; lin<n; lin++)
    {
        for(col=0; col<n; col++)
        {
            if(lin==n/2 || col==n/2)
                matriz[lin][col] = '#';
            else if(lin<n/2 && col<n/2)
                matriz[lin][col] = 'A';
            else if(lin<n/2 && col>n/2)
                matriz[lin][col] = 'B';
            else if(lin>n/2 && col<n/2)
                matriz[lin][col] = 'C';
            else if(lin>n/2 && col>n/2)
                matriz[lin][col] = 'D';
        }
    }

     cout << "\nMatriz:\n\n";
            for(lin=0; lin<n; lin++)
            {
                for(col=0; col<n; col++)
                    cout << matriz[lin][col] << "\t";
                cout << "\n";
            }
            cout << "\n\n";

    return 0;
}
