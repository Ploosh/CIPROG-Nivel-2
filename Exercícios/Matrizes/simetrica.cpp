//Descobrir se a matriz é simétrica

#include <iostream>
using namespace std;

int main(){
    int n;

    cout << "Insira a ordem de sua matriz quadrada: ";
    cin >> n;

    int matriz[n][n], transposta [n][n];
    cout << "Insira a matriz para comparação:\n";
    for (int i=0; i<n; i++){
        for (int j=0; j<n; j++){
            cin >> matriz[i][j];
        }
    }
    //criação da transposta
    for (int i=0; i<n; i++){
        for (int j=0; j<n; j++){
            transposta[i][j]=matriz[j][i];
        }
    }
    //comparação
   int size=0;
    for (int i=0; i<n; i++){
        for (int j=0; j<n; j++){
            if(transposta[i][j]!= matriz[i][j]){
                cout << "Não é simétrica\n";
                return 0;
            }
            else{
                size++;
            }
        }
    }
    if (size==n*n){
        cout << "É simétrica\n";
    }
}