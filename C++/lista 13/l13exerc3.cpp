#include <iostream>
#include <ctime>
using namespace std;

int main()
{   const int totalLin=6, totalCol=5;
    int a[totalLin][totalCol], lin, col, aux;
    setlocale(LC_ALL, "Portuguese");
    srand(time(NULL));

    for(lin=0; lin<totalLin; lin++){
        for(col=0; col<totalCol; col++){
            a[lin][col]= rand()%250;
        }
    }

    cout << "Matriz antes das trocas:\n\n";
    for(lin=0; lin<totalLin; lin++){
        for(col=0; col<totalCol; col++)
            cout << a[lin][col] << "\t";
        cout << "\n";
    }

     for(lin=0; lin<totalLin/2; lin++){
        for(col=0; col<totalCol; col++){
            aux = a[lin][col];
            a[lin][col] = a[totalLin-1-lin][col];
            a[totalLin-1-lin][col] = aux;
        }
    }

    cout << "\nMatriz depois das trocas:\n\n";
    for(lin=0; lin<totalLin; lin++){
        for(col=0; col<totalCol; col++)
            cout << a[lin][col] << "\t";
        cout << "\n";
    }


    return 0;
}
