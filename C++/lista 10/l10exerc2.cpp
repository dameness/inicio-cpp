#include <iostream>
using namespace std;

/*
2 - Fa�a um programa que apresente todos os n�meros divis�veis por 4 que sejam maiores que 0 e
menores que 200
*/

int main()
{
    int  x;
    setlocale(LC_ALL, "Portuguese");

    cout << "Divisores do n�mero 4 menores que 200:\n\n";

    for(x=1; x<200; x++)
    {
        if(x%4==0)
            cout << x << "  ";
        if(x==76 || x==140 || x==196)
            cout << "\n\n";

    }


    return 0;
}
