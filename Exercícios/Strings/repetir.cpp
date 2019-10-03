// Repete n vezes uma palavra com n letras

#include <iostream>
#include <string>
using namespace std;

int main(){
    string palavra;
    cout << "Escreva a palavra a ser repetida: ";
    cin >> palavra;

    for (int i=0; i<palavra.size(); i++){
        cout << palavra << endl;
    }
}