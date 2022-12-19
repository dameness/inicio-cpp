#include <iostream>
#include <ctime>
using namespace std;

#define tam 80

int main()
{
    int v[tam], i, maior, pos;
    setlocale(LC_ALL, "Portuguese");
    srand(time(NULL));

    for(i=0; i<tam; i++)
    {
        v[i] = rand()%55 + 66;
        cout << v[i] << ", ";

        if(i==0 || v[i] > maior)
        {
            maior = v[i];
            pos = i;

        }

    }

    cout << "\nmaior: " << maior << "\npos: " << pos << "\n";





    return 0;
}
