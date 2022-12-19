#include <iostream>
using namespace std;

#define tam 12

int main()
{
    int v[tam], i, n, q, vagos, minimo, qtsminimo, option, soma=0;
    setlocale(LC_ALL, "Portuguese");

    for (i=0;i<tam;i++)
        v[i]= 0;

    do{
        system("cls");
        cout << "Escolha uma opção:\n0 - sair do programa\n1 - efetuar reserva\n2 - listar todos os quartos\n3 - listar os quartos vagos\n4 - mostrar o total de pessoas hospedadas no hotel\n5 - efetuar check-out\n6 - quartos ocupados com um mínimo de um número específico de hóspedes\n\n";
        cin >> option;

        if(option==0)
        {
            cout << "\nVocê sairá do programa!\n";
            break;
        }
        else if(option==1)
        {
            cout << "\nDigite o número do quarto a ser reservado (1 a 12): ";
            cin >> n;
            if(n>12 || n<1)
            {
                cout << "Quarto inválido! Digite dados válidos!\n";
                system("pause");
                continue;
            }
            else if(v[n-1]>0)
            {
                cout << "Quarto ocupado! Escolha outro quarto!\n";
                system("pause");
                continue;
            }
            cout << "Digite a quantidade de hóspedes: ";
            cin >> q;
            if(q<0)
            {
                cout << "Número de hóspedes inválido! Digite dados válidos!\n";
                system("pause");
                continue;
            }
            v[n-1] = q;
            soma += q;

            cout << "Quarto Reservado!\n";
        }
        else if(option==2)
        {
            cout << "\nQuartos em ordem, com sua respectiva qtd. de hóspedes: [";
            for(i=0; i<tam; i++)
            {
                cout << v[i];
                if(i<tam-1)
                    cout << ", ";
            }
            cout << "]\n";
        }
        else if(option==3)
        {
            cout << endl;
            vagos=0;
            for(i=0; i<tam; i++)
            {
                if(v[i]==0)
                {
                    cout << i+1 << " ";
                    vagos++;
                }
            }
            if(vagos==0)
                    cout << "Não há quartos vagos no momento!";

            cout << endl;
        }
        else if(option==4)
        {
            cout << "\nTotal de hóspedes no hotel: " << soma << endl;
        }
        else if(option==5)
        {
            cout << "\nQual o quarto para realizar o check-out? ";
            cin >> n;
            if(n>12 || n<1)
            {
                cout << "Quarto inválido! Digite dados válidos!\n";
                system("pause");
                continue;
            }
            else if(v[n-1]==0)
            {
                cout << "Quarto inválido(estava vazio)! Digite dados válidos!\n";
                system("pause");
                continue;
            }
            v[n-1]=0;
            cout << "Check-out concluído!\n";
        }
        else if(option==6)
        {   cout<<endl;
            cout << "Digite o número mínimo de hóspedes: ";
            cin >> minimo;

            qtsminimo=0;
            for(i=0; i<tam; i++)
            {

                if(v[i]>=minimo)
                {
                    cout << i+1 << " ";
                    qtsminimo++;
                }
            }
            if(qtsminimo==0)
                cout << "Não há quartos com essa qtd. de hóspedes ou mais!\n";
            cout<<endl;
        }
        else
        {
            cout << "Opção inválida! Selecione uma opção válida!\n";
            system("pause");
            continue;
        }
        system("pause");
    }while(option!=0);

    return 0;
}
