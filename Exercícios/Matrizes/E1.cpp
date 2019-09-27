//calcule a soma de duas matrizes em que os valores devem ser inseridos pelo usuário

#include <iostream>
using namespace std;

int main (){
    int linhas, colunas;

    cout << "Digite o tamaho de linhas e de colunas da matriz: ";
    cin >> linhas >> colunas;

    int matriz1[linhas][colunas], matriz2[linhas][colunas];

    cout << "Preenchimento da matriz 1\n";
    for (int i=0; i<linhas; i++){
        for (int j=0; j<colunas; j++){
            cin >> matriz1[i][j];
        }
    }
     cout << "Preenchimento da matriz 2\n";
    for (int i=0; i<linhas; i++){
        for (int j=0; j<colunas; j++){
            cin >> matriz2[i][j];
        }
    }

    //soma das matrizes e impressão
    cout << "A matriz resultante é:\n\n";
    for (int i=0; i<linhas; i++){
        for (int j=0; j<colunas; j++){
            cout << matriz1[i][j]+matriz2[i][j] << " ";
        }
        cout << endl;
    }
}