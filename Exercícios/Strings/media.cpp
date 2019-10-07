// media identificada

#include <iostream>
#include <string>
using namespace std;

int main(){
    int q, n;

    cout << "Insira a quantidade de alunos e a quantidade de notas, respectivamente:\n";
    cin >> q >> n;
    cin.ignore();


    string nome[q];
    float notas[n], media[q];
    for (int i=0; i<q; i++){
        cout << "\n\nInsira o nome completo do aluno:\n";
        getline(cin, nome[i]);
        media[i]=0;
        for (int j=0; j<n; j++){
            cout << "Insira a " << j+1 <<"ª nota do aluno: ";
            cin >> notas[j];
            media[i] = media[i]+notas[j];
        }
        media[i]=media[i]/n;
        cin.ignore();
    }
    cout << fixed;
    cout.precision(2);
    for (int i=0; i<q; i++){
        cout << nome[i] << "\nMédia: " << media[i] << endl;
    }
}
