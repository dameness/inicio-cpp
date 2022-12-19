#include <iostream>
#include <ctime>
using namespace std;

int main()
{
    int a[3][6], lin, col;
    setlocale(LC_ALL, "Portuguese");
    srand(time(NULL));

    for(lin=0; lin<3; lin++){
        for(col=0; col<6; col++){
            a[lin][col]= rand()%50;
        }
    }
    int contPar=0, contImpar=0;
     for(lin=0; lin<3; lin++){
        for(col=0; col<6; col++){

            if(a[lin][col]%2==0)
                contPar++;
            else
                contImpar++;
        }
     }
    int pares[contPar], impares[contImpar], i=0, j=0;

    for(lin=0; lin<3; lin++){
        for(col=0; col<6; col++){

            if(a[lin][col]%2==0){
                pares[i] = a[lin][col];
                i++;
            }
            else{
                impares[j] = a[lin][col];
                j++;
            }
        }
     }

    cout << "Matriz:\n";
    for(lin=0; lin<3; lin++){
        for(col=0; col<6; col++)
            cout << a[lin][col] << "\t";
        cout << "\n";
    }

    cout << "\n\n Pares: [";
    for(i=0; i<contPar; i++){
       cout << pares[i];
       if(i<contPar-1)
            cout << ", ";
    }
    cout << "]\n";

    cout << " Ímpares: [";
    for(i=0; i<contImpar; i++){
       cout << impares[i];
       if(i<contImpar-1)
            cout << ", ";
    }
    cout << "]\n";







    return 0;
}
