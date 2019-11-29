#include <iostream>
using namespace std;

struct caderneta {
    string nome;
    int matricula;
    float final;
};

void inserir (caderneta *a){
    cout << "insira o nome do aluno\n";
    cin >> a->nome;
    cout << "insira a matricula do aluno\n";
    cin >> a->matricula;

    cout << endl;
};

void inserirmedia (caderneta *a, float b){
    a->final = b;
};

void imprimir(caderneta a){
    cout << "Informações\n\n";
    cout << "Nome: " << a.nome << endl;
    cout << "Matrícula: " << a.matricula << endl;
    cout << "Média: " << a.final << endl;
    cout << endl;
};

int main(){
    int p;

    cout << "Isira a quantidade de alunos: ";
    cin >> p;
    
    cin.ignore();

    float notas[3], med[p];
    caderneta alunos[p];

    for (int i=0; i<p; i++){
        inserir(&alunos[i]);
        
        for (int j=0; j<3; j++){
            cout << "Insira a " << j+1 <<"ª nota do aluno: ";
            cin >> notas[j];
            med[i] = med[i]+notas[j];
        }
        cout << endl;
        med[i]=med[i]/3;
        inserirmedia(&alunos[i], med[i]);
        cin.ignore();
    }

    cout << fixed;
    cout.precision(2);
    for (int i=0; i<p; i++){
        imprimir(alunos[i]);
    }
}