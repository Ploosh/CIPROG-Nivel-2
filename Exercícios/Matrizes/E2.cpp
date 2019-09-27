// programa que recebe uma matriz e cria a sua transposta

#include <iostream>
using namespace std;

int main(){
    int linha, coluna;

    cout << "Insira o valor para linha e coluna da matriz: ";
    cin >> linha >> coluna;

    int matriz[linha][coluna];
    cout << "Preenchimento da matriz \n";

    for (int i=0; i<linha; i++){
        for (int j=0; j<coluna; j++){
            cin >> matriz[i][j];
        }
    }

    cout << "A sua matriz transposta é:\n";
    for (int j=0; j<coluna; j++){
        for (int i=0; i<linha; i++){
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }
}