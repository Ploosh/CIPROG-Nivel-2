#include <iostream>
using namespace std;

int main (){
    int *ponteiro, vetor[3];
    ponteiro = vetor; //ponteiro = &vetor[0];
    *ponteiro = 7;
    cout << *ponteiro << endl;
    cout << vetor[0] << endl;
    cout << ponteiro << endl;

    ponteiro++;
    *ponteiro = 3;
    cout << *ponteiro << endl;
    cout << vetor[1] << endl;
    cout << ponteiro << endl;

    ponteiro++;
    *ponteiro = 9;
    cout << *ponteiro << endl;
    cout << vetor[2] << endl;
    cout << ponteiro << "\n\n";

    for (int i=0; i<3; i++){
        cout << vetor[i] << " ";
    }

    cout << endl;
    return 0;

}