// imprime os valores da diagonal principal de uma matriz 3x3

#include <iostream>
using namespace std;

int main(){
    int matriz[3][3];

    cout << "Preencha a matriz 3x3 \n";

    for(int i=0; i<3; i++){
        for (int j=0; j<3; j++){
            cin >> matriz[i][j];
        }
    }

    cout << "A diagonal principal é: ";
    for(int i=0; i<3; i++){
        for (int j=0; j<3; j++){
            if (i==j){
                cout << matriz[i][j] << " ";
            }
        }
    }
    cout << endl;
}