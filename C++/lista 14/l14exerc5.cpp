#include <iostream>
#include <iomanip>
using namespace std;

float calcMedia(float n1, float n2, float n3, char option);

int main()
{
    float n1, n2, n3;
    char option; // lembrar, locais != globais
    setlocale(LC_ALL, "Portuguese");
    cout << fixed << setprecision(2);

    cout << "Nota 1: ";
    cin >> n1;

    cout << "Nota 2: ";
    cin >> n2;

    cout << "Nota 3: ";
    cin >> n3;

    cout << "\nOpção de média (A - aritmética; P - Ponderada; H - Harmônica): ";
    cin >> option;
    option=tolower(option);


    cout << "A média calculada foi: " << calcMedia(n1, n2, n3, option) << endl;


    return 0;
}

float calcMedia(float n1, float n2, float n3, char option)
{
    float media=0;

    if (option == 'a')
    {
        media = (n1 + n2 + n3)/3.0;
    }
    else if (option == 'p')
    {
        media = (n1*5 + n2*3 + n3*2) / 10.0;
    }
    else if (option == 'h')
    {
        media = 3 / (1/n1 + 1/n2 + 1/n3);
    }

    return media;
}
