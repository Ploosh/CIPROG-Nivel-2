#include <iostream>
using namespace std;

struct dados {
    string nome;
    int sexo, CPF, altura;
    float peso;
};

void inserirdados (dados *a){
    cout << "insira o nome\n";
    cin >> a->nome;
    cout << "\nEscolha o sexo:\n 1. Feminino\n 2. Masculino\n";
    cin >> a->sexo;
    while (a->sexo!=1 || a->sexo!=2){
        cout << "Opção não existe.\nEscolha o sexo:\n 1. Feminino\n 2.Masculino\n";
        cin >> a->sexo;
    }
    cout << "insira o CPF sem pontos ou hífens\n";
    cin >> a->CPF;
    cout << "Insira a altura em centímetros\n";
    cin >> a->altura;
    cout << "Insira o peso\n";
    cin >> a->peso;

}

int main (){
    int N;
    cout << "Insira a quantidade de pessoas a serem cadastradas: ";
    cin >> N;

    dados cadastro[N];

    for (int i=0; i<N; i++){
        inserirdados (&cadastro[i]);
    }


}