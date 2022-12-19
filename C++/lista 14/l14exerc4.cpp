#include <iostream>
#include <iomanip>
using namespace std;

float reajustarSalario(float sal, float percReajuste);

int main()
{
    float sal, percReajuste; // mesmo definida com o mesmo nome das de cima, s?o vari?veis diferentes
    setlocale(LC_ALL, "Portuguese");
    cout << fixed << setprecision(2);

    cout << "Salário atual: ";
    cin >> sal;

    cout << "Percentual de reajuste: ";
    cin >> percReajuste;

    cout << "Salário reajustado: R$" << reajustarSalario(sal, percReajuste) << endl;

    return 0;
}

float reajustarSalario(float sal, float percReajuste)
{
    float salReajustado;

    salReajustado = sal * (100.0 + percReajuste) / 100.0;

    return salReajustado;
}
