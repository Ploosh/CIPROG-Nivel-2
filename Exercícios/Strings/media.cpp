// media identificada

#include <iostream>
#include <string>
using namespace std;

int main(){
    int q, n;
    cout << "Insira a quantidade de alunos e a quantidade de notas, respectivamente: ";
    cin >> q >> n;
    cin.ignore();

    string nome[q];
    float notas[n], media[q];

    for (int i=0; i<q; i++){
        cout << "Insira o nome completo do aluno:\n";
        getline(cin, nome[i]);

        cout << "Insira as notas do aluno:\n";
        for (int j=0; j<n; j++){
            cin >> notas[j];
            media[i] = media[i]+notas[j];
        
        }
        media[i]=media[i]/n;
        cin.ignore();
    }
    for (int i=0; i<q; i++){
        cout << nome[i] << "\nMédia: " << media[i] << endl;
    }

}