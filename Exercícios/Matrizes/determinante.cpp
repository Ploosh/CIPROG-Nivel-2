// determinante de uma matriz 2x2

#include <iostream>
using namespace std;

int main(){
    int matriz [2][2], det;

    cout << "Preencha a matriz 2x2\n";
    for (int i=0; i<2; i++){
        for (int j=0; j<2; j++){
            cin >> matriz[i][j];
        }
    }
    
    det = (matriz[0][0]*matriz[1][1])-(matriz[0][1]*matriz[1][0]);
    cout << "O determinante da matriz é: " << det << endl;
}