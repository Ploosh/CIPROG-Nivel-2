#include <iostream>
using namespace std;

struct aluno{
    string nome;
    int mat;
};

void inserir (aluno * a){
    cout << "insira o nome do aluno\n";
    cin >> a->nome;

    cout << "Insira a matrícula do aluno\n";
    cin >> a->mat;

    cout << endl;
}

void imprimir(aluno a){
    cout << "Informações\n\n";
    cout << "Nome: " << a.nome << endl;
    cout << "Matricula: " << a.mat << endl;
}

int main(){
    aluno a1;

    inserir (&a1);
    imprimir (a1);

    return 0;
}