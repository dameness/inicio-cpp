#include <iostream>
#include <ctime>
using namespace std;

void again()
{
    cout << "\nValor inválido para a aposta! Digite novamente!\n\n";
    system("pause");
}

void ordenar(int vet[], int tam);
void exibir(int vet[], int tam);

int main()
{
    setlocale(LC_ALL,"Portuguese");
    srand(time(NULL));

    int apostados[6], sorteados[6], aposta_N, sorteado_N, acertos=0, i, j;
    bool repete;

    for(i=0; i<6; i++) // for faz o controle da quantidade de números dos dois vetores
    {
        // números apostados nao repetidos
        do
        {
            system("cls");

            cout << "Digite sua aposta (mín. 1 e máx. 60, os números não podem ser repetidos): ";
            cin >> aposta_N;  

            repete = false;

            if(aposta_N<1 || aposta_N>60)
                again();
            else
            {
                for(j=0; j<i; j++)
                {
                    if(aposta_N == apostados[j])
                    {
                        repete = true;
                        again();
                        break;
                    }
                }

                if(repete==false)
                apostados[i] = aposta_N;
            }
        } while (aposta_N<1 || aposta_N>60 || repete==true);
        // números sorteados não repetidos
        do
        {
            repete = false;
            sorteado_N = rand()%60 + 1;

            for(j=0; j<i; j++)
            {
                if(sorteado_N == sorteados[j])
                {
                    repete=true;
                    break;
                }
            }

            if(repete==false)
                sorteados[i] = sorteado_N;
            
        } while (repete==true);
    }

    ordenar(apostados, 6);
    ordenar(sorteados, 6);

    cout << "\nNúmeros apostados: ";
        exibir(apostados, 6);
    cout << "\nNúmeros sorteados: ";
        exibir(sorteados, 6);

    for(i=0; i<6; i++)
    {
        for(j=0; j<6; j++)
        {   // relaciona-se 1 termo dos sorteados com todos dos apostados todas as vezes, e na vez que o sorteado for acertado dá um break
            // assim, mesmo se houverem termos repetidos nos números apostados, o programa só contara a primeira vez como um acerto
            if(sorteados[i]==apostados[j])
            {
                acertos++;
                break;
            }
        }
    }
    
    cout << "\n\nAcertos: " << acertos <<"\n\n";

    if(acertos==4)
        cout << "Parabéns! Você ganhou a quadra!";
    else if(acertos==5)
        cout << "Parabéns! Você ganhou a quina!";
    else if(acertos==6)
        cout << "Parabéns! Você é o mais novo milionário!";
    
    cout << endl;
}

void ordenar(int vet[], int tam)
{
    int i, j, aux;

    for(i=0; i<tam-1; i++)
    {
        for(j=i+1; j<tam; j++)
        {
            if(vet[i]>vet[j])
            {
                aux = vet[i];
                vet[i] = vet[j];
                vet[j] = aux;
            }
        }
    }
}
void exibir(int vet[], int tam)
{
    int i;

     for(i=0; i<tam; i++)
    {
        cout << vet[i];
        if(i<tam-1)
            cout << ", ";
    }
}