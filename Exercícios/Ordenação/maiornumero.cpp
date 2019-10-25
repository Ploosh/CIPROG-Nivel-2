#include <iostream>
using namespace std;

int main(){
    int n;

    cout << "Insira o tamanho do vetor: ";
    cin >> n;

    int vector[n], aux;

    cout << "Preenchimento do vetor:\n";
    for (int i=0; i<n; i++){
        cout << "Elemento " << i+1 << " : ";
        cin >> vector[i];
    }

    for (int i=0; i<n; i++){
        for (int j=i+1; j<n; j++){
            if (vector[j] > vector[i]){
                aux=vector[i];
                vector[i]=vector[j];
                vector[j]=aux;
            }
            else{
                continue;
            }
        }
    }

    cout << "Vetor ordenado:\n";
    for (int i=0; i<n; i++){
        cout << vector[i] << " ";
    }

    cout << endl;
}