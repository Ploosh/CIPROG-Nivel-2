#include <iostream>
using namespace std;

struct media {
    string nome;
    float final;
};

void inserirnome (media *a){
    cout << "insira o nome do aluno\n";
    cin >> a->nome;

    cout << endl;
};

void inserirmedia (media *a, float b){
    a->final = b;
};

void imprimir(media a){
    cout << "Informações\n\n";
    cout << "Nome: " << a.nome << endl;
    cout << "Média: " << a.final << endl;
};

int main(){
    int p, q;

    cout << "Isira a quantidade de alunos: ";
    cin >> p;
    cout << "\nInsira a quantidade de notas: ";
    cin >> q;
    cin.ignore();

    float notas[q], med[p];
    media alunos[p];

    for (int i=0; i<p; i++){
        inserirnome(&alunos[i]);

        for (int j=0; j<q; j++){
            cout << "Insira a " << j+1 <<"ª nota do aluno: ";
            cin >> notas[j];
            med[i] = med[i]+notas[j];
        }
        med[i]=med[i]/q;
        inserirmedia(&alunos[i], med[i]);
        cin.ignore();
    }

    cout << fixed;
    cout.precision(2);
    for (int i=0; i<p; i++){
        imprimir(alunos[i]);
    }
}