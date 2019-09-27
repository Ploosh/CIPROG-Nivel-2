//Traço da matriz

#include <iostream>
using namespace std;

int main(){
    int n, traco=0;

    cout << "Insira a ordem da sua matriz quadrada: ";
    cin >> n;
    
    int matriz[n][n];
    
    cout << "Preencha a sua matriz\n";
    for (int i=0; i<n; i++){
        for (int j=0; j<n; j++){
            cin >> matriz[i][j];
        }
    }

    for(int i=0; i<n; i++){
        for (int j=0; j<n; j++){
            if (i==j){
                traco = traco + matriz[i][j];
            }
        }
    }
    
    cout << "O traço da matriz é: " << traco << endl;
}