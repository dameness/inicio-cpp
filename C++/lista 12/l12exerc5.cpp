#include <iostream>
#include <ctime>
using namespace std;

#define tam 30

int main()
{
    int v[tam], i, vezes=0, n, ntermos=0;
    bool repete;
    setlocale(LC_ALL, "Portuguese");
    srand(time(NULL));

    for(i=0; i<tam; i++)
    {
       do{
        n = rand()%41;
        repete = false;

        for(i=0; i<ntermos; i++)
        {
            if(v[i]==n)
            {
                repete=true;
                break;
            }
        }
        if(repete==false)
        {
            v[ntermos]=n;
            ntermos++;
        }

        vezes++;
       }while(repete==true);
    }

        for (i=0;i<tam;i++)
        {
            cout << v[i] << ", ";
        }

         cout << "\nVezes que o vetor gerou números: " << vezes << endl;




    return 0;
}
