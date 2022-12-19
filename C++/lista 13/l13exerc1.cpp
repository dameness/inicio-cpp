#include <iostream>
#include <ctime>
using namespace std;

#define n 5

int main()
{
    int a[n][n], lin, col;
    setlocale(LC_ALL, "Portuguese");
    srand(time(NULL));

    for(lin=0; lin<n; lin++){
        for(col=0; col<n; col++){
            a[lin][col]= rand()%100;
        }
    }
     int maior= a[0][0], menor = a[0][0], maiorlin=0, maiorCol=0, menorlin=0, menorCol=0, termos=0, contPar=0, contImpar=0;
     float soma=0, media, percPar, percImpar;

     for(lin=0; lin<n; lin++){
        for(col=0; col<n; col++){
           if(a[lin][col] > maior){
                maior = a[lin][col];
                maiorlin = lin;
                maiorCol = col;
            }
            if(a[lin][col] < menor){
                menor = a[lin][col];
                menorlin = lin;
                menorCol = col;
            }
            if(a[lin][col]%2==0)
                contPar++;
            if(a[lin][col]%2!=0)
                contImpar++;

            soma+=a[lin][col];
            termos++;
        }
     }

     media = float(soma) / termos;
     percPar = (contPar*100)/termos;
     percImpar = (contImpar*100)/termos;


    cout << "Matriz:\n";
    for(lin=0; lin<n; lin++){
        for(col=0; col<n; col++)
            cout << a[lin][col] << "\t";
        cout << "\n";
    }

    cout << "O maior termo foi " << maior << " da posição " << maiorlin << "," << maiorCol << endl;
    cout << "O menor termo foi " << menor << " da posição " << menorlin << "," << menorCol << endl;
    cout << "A média dos termos foi " << media << endl;
    cout << "O percentual de números pares foi " << percPar << "% e o de números ímpares foi " << percImpar << "%\n";







    return 0;
}
