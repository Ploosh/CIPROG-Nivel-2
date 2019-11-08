#include <iostream>
#include <stdlib.h>
// usando stdlib.h é necessário usar malloc e free
using namespace std;

int main(){
    int *ponteiro;
    cout << sizeof(int) << endl;
    ponteiro = new(int);
    cout << "Endereço: " << ponteiro << endl;
    *ponteiro = 10;
    cout << "Conteúdo que o ponteiro aponta: " << *ponteiro << endl;
    delete(ponteiro);
    return 0;
}