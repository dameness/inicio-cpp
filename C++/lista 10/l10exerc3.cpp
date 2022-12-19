#include <iostream>
using namespace std;

int main()
{
  int  n, x, y;
  setlocale(LC_ALL, "Portuguese");

    do
    {
        system("cls");

        cout << "Altura do triângulo (maior que 2 e menor que 21): ";
        cin >> n;
        if(n>=3 && n<=20)
        {
            cout << "\n";

           for(x=1; x<=n; x++)
           {
               for(y=n; y>=x; y--)
                cout << "*";

                cout << "\n";
           }


        }
        else
        {
            cout << "\nValor de altura do triângulo inválido! Digite um valor válido!\n\n";
            system("pause");
            continue;
        }

        system("pause");
        break;



    }while(y>=x);


    return 0;
}
