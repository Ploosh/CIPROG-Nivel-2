#include <iostream>
using namespace std;

int somatorio (int h, int m){
    if (h<=m){
        return (2*h)+somatorio(h+1, m);
    }
    else{
        return 0;
    }
}

int main(){
    int k, n;

    cout << "Insira o valor para k: ";
    cin >> k;

    cout << "Insira o valor para n: ";
    cin >> n;

    if (n<k){
        while (n<k){
            cout << "Valor inválido para k\nPor favor insira um valor válido para k: ";
            cin >> k;
        }
        cout << "O resultado do somatório é: " << somatorio(k, n) << endl;
    }
    else {
        cout << "O resultado do somatório é: " << somatorio(k, n) << endl;
    }
}