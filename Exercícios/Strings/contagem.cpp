// conta as vogais de uma frase

#include <iostream>
#include <string>
using namespace std;

int main(){
    string frase;
    int a=0,e=0,i=0,o=0,u=0;

    cout << "Insira a frase a ser analisada: ";
    getline (cin, frase);

    for (int j=0; j<frase.size(); j++){
        if (frase[j]=='a' || frase[j]=='A' || frase[j]==){
            a++;
        }
        else if (frase[j]=='e' || frase[j]=='E'){
            e++;
        }
        else if (frase[j]=='i' || frase[j]=='I'){
            i++;
        }
        else if (frase[j]=='o' || frase[j]=='O'){
            o++;
        }
        else if (frase[j]=='u' || frase[j]=='U'){
            u++;
        }
    }
    cout << "A - " << a << "; E - " << e << "; I - " << i << "; O - " << o << "; U - " << u << endl;
}