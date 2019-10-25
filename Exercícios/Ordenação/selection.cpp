#include <iostream>
using namespace std;

int main (){
    int n;
    cout << "Escolha o tamanho do seu vetor: ";
    cin >> n;

    int vector[n], aux;
    cout << "Preencher vetor\n";
    for (int i=0; i<n; i++){
        cout << "Elemento " << i+1 << endl;
        cin >> vector[i];
    }

    for (int i=0; i<n-1; i++){
        for (int j=i+1; j<n; j++){
            if (vector[j] < vector[i]){
                aux=vector[i];
                vector[i]=vector[j];
                vector[j]=aux;
            }
            else{
                continue;
            }
        }
        
    }

    cout << "Vetor ordenado\n";
    for (int i=0; i<n; i++){
        cout << vector[i] << " ";
    }

    cout << endl;
}