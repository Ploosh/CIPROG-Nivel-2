//Calcula o produto entre duas matrizes

#include <iostream>
using namespace std;

int main(){
    int l1, c1, l2, c2;

    cout << "Insira a quantidade de linhas e colunas da matriz A, respectivamente\n";
    cin >> l1 >> c1;

    cout << "Insira a quantidade de linhas e colunas da matriz B, respectivamente\n";
    cin >> l2 >> c2;

    //Verifica se as matrizes podem ser multimplicadas (c1==l1)
    //caso não possam é pedida outra entrada
    while (c1!=l2){
        cout << "As matrizes não podem ser multiplicadas\n";
        
        cout << "Insira a quantidade de linhas e colunas da matriz A, respectivamente\n";
        cin >> l1 >> c1;

        cout << "Insira a quantidade de linhas e colunas da matriz B, respectivamente\n";
        cin >> l2 >> c2;
    }

    int matrixa[l1][c2], matrixb[l2][c2], mult[l1][c2];

    //preenchendo a primeira matriz
    cout << endl << "Adicione os elementos da matriz A:" << endl;
    for(int i = 0; i < l1; ++i){
        for(int j = 0; j < c1; ++j){
            cout << "Elemento A" << i + 1 << j + 1 << " : ";
            cin >> matrixa[i][j];
        }
        
    }

    //preenchendo a segunda matriz
    cout << endl << "Adicione os elementos da matriz B:" << endl;
    for(int i = 0; i < l2; ++i){
        for(int j = 0; j < c2; ++j){
            cout << "Elemento B" << i + 1 << j + 1 << " : ";
            cin >> matrixb[i][j];
        }
        
    }

    //preenchendo matriz multiplicação com 0
    for(int i = 0; i < l1; ++i){
        for(int j = 0; j < c2; ++j){
            mult[i][j]=0;
        }
        
    }

    //multiplicando matriz A por B
    for(int i = 0; i < l1; ++i){
        for(int j = 0; j < c2; ++j){
            for(int k = 0; k < c1; ++k){
                mult[i][j] += matrixa[i][k] * matrixb[k][j];
            }
        }
            
    }
       
    //plot matriz resultante
    cout << endl << "Matriz Resultante AB: " << endl;
    for(int i = 0; i < l1; ++i){
        for(int j = 0; j < c2; ++j){
            cout << " " << mult[i][j];
            if(j == c2-1){
                cout << endl;
            }
        }        
    }
    
    return 0;
           
}