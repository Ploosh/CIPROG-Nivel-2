#include <iostream>
using namespace std;

int fibonacci(int m){
    if (m==1 || m==2){
        return 1;
    }
    else {
       return (fibonacci(m-2)+fibonacci(m-1));
    }
}

int main(){
    int n, i=1;

    cout << "Insira a quantidade de termos: ";
    cin >> n;

    if (n<=0){
        while (n<=0){
            cout << "Insira um numero maior que 0: ";
            cin >> n;
        }
        while (i<=n){
            cout << fibonacci(i) << " ";
            i++;
        }
    }
    else {
        while (i<=n){
            cout << fibonacci(i) << " ";
            i++;
        }
    }
    cout << endl;
}