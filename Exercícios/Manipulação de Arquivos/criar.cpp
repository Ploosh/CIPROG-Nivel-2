#include <iostream>
#include <fstream>
using namespace std;

int main(){
    fstream criar;
    int n;

    criar.open("teste.txt", ios::out | ios::app | ios::in);
    if (criar.is_open()){
        cout << "Quantos nomes desejam ser gravados?\n";
        cin >> n;
        string nomes[n];
        for (int i=0; i<n; i++ ){
            cin >> nomes[i];
            criar << nomes[i] << "\n";
        }
        criar.close();
    }
    else {
        cout << "Não foi possivel abrir o arquivo. \n";
    }
    return 0;
}