#include <iostream>
using namespace std;

/*
gostaram - sim (S) ou não (N)

quando o usuário encerrar
calcule e mostre:
 qtd sim;
 qtd não;
porcentagem sexmasc que respondeu nao entre os homens
porcentagem sexfem que respondeu nao entre as mulheres




*/

int main()
{
    int  m=0, f=0, s=0, n=0, fNao=0, mNao=0;
    char sexo, entrevistar, gostar;
    setlocale(LC_ALL, "Portuguese");

    do
    {
        system("cls");

        cout << "Selecione seu sexo:\nM - masculino\nF - feminino\nN - não informar\n";
        cin >> sexo;
        sexo = tolower(sexo);

        if(sexo == 'm')
            m++;
        else if(sexo == 'f')
            f++;
        else if (sexo != 'n')
        {
            cout << "Sexo inválido! Responda novamente! ";
            system("pause");
            continue;
        }

        cout << "Você gostou do novo produto?\nS - sim\nN - não\n";
        cin >> gostar;
        gostar = tolower(gostar);

        if(gostar=='s')
        {
            s++;
        }

        else if(gostar=='n')
        {
            n++;
            if(sexo=='m')
                mNao++;
            if(sexo=='f')
                fNao++;
        }
        else
        {
            if(sexo == 'm')
            m--;
            else if(sexo == 'f')
            f--;

            cout << "Resposta inválida! Responda novamente! A aprovação do produto e o sexo respondidos nessa tentativa não serão computados. ";
            system("pause");
            continue;
        }



        cout << "Você deseja entrevistar mais pessoas? (S - sim; N - não) ";
        cin >> entrevistar;
        entrevistar = tolower(entrevistar);

        if(entrevistar!='s' && entrevistar!='n')
        {
            cout << "Resposta inválida! Responda novamente! Os dados respondidos nessa tentativa serão computados.";
            system("pause");
            continue;
        }
    }while(entrevistar != 'n');

    cout << "\nA quantidade de pessoas que responderam sim é: " << s << ".\n";
    cout << "A quantidade de pessoas que responderam não é: " << n << ".\n";
    if(m>0)
        cout << "Entre os homens, " << (mNao*100)/m<< "% responderam não.\n";
    else
        cout << "Nenhum homem respondeu a pesquisa.\n";
    if(f>0)
        cout << "Entre as mulheres, " << (fNao*100)/f<< "% responderam não.\n";
    else
        cout << "Nenhuma mulher respondeu a pesquisa\n";


    return 0;
}
