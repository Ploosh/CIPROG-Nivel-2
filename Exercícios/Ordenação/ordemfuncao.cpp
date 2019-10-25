#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n;
    cout << "Escolha o tamanho do seu vetor: ";
    cin >> n;

    int vector[n], menor;
    cout << "Preencher vetor\n";
    for (int i=0; i<n; i++){
        cout << "Elemento " << i+1 << endl;
        cin >> vector[i];
    }

    sort(vector, vector+n);

    for (int i=0; i<n; i++){
        cout << vector[i] << " ";
    }

    cout << endl;
}   