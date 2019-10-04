//calcula fatorial de um numero

#include <iostream>
using namespace std;

int fatorial (int n){
    if (n>1){
        return n*fatorial(n-1);
    }
    else {
       return 1;
    }
    
}

int main(){
    int numero=0;
    cout << "Insira um número: ";
    cin >> numero;

    if (numero<0){
        cout << "Número inválido!\n";
    }
    else{
        cout << numero << "!=" << fatorial(numero) << endl;
    }
}