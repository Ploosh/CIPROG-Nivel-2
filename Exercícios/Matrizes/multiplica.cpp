//multiplica uma matriz por um escalar e te entrega a metriz resultante

#include <iostream>
using namespace std;

int main(){
    int linha, coluna, k;

    cout << "Digite o numero de linha, colunas e o multiplicador: ";
    cin >> linha >> coluna >> k;

    int matriz[linha][coluna];

    cout << "Preencha a matriz\n";
    for (int i=0; i<linha; i++){
        for (int j=0; j<coluna; j++){
            cin >> matriz[i][j];
        }
    }

    cout << "Sua matriz multiplicada por " << k << " é: \n";
    for (int i=0; i<linha; i++){
        for (int j=0; j<coluna; j++){
            cout << k*matriz[i][j] << " ";
        }
        cout << endl;
    }
}