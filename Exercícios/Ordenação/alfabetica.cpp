#include <iostream>
#include <string>
#include <cctype>
#include <algorithm>
using namespace std;

int main(){
    int n;

    cout << "Insira a quantidade de nomes: ";
    cin >> n;

    string nomes[n];

    cin.ignore();
    for (int i=0; i<n; i++){
        
        cout << "Insira o " << i+1 << "º nome: ";
        getline (cin, nomes[i]);
        
        for (int j=0; j<nomes[i].size(); j++){
            nomes[i][j] =(tolower(nomes[i][j]));
        }
    }
    
    sort(nomes, nomes+n );

    cout << "Os nomes em ordem alfabética são:\n";
    for (int i=0; i<n; i++){
        cout << nomes[i] << endl;
    }
}