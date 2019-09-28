// media identificada

#include <iostream>
#include <string>
using namespace std;

int main(){
    string nome, sobrenome;

    cout << "Insira o nome completo do aluno:\n";
    cin >> nome;
    getline(cin, sobrenome);

    float n1, n2, n3, media;
    cout << "Insira as 3 notas do aluno:\n";
    cin >> n1 >> n2 >> n3;
    media = (n1+n2+n3)/3;
    cout << "A média de " << nome << " " << sobrenome << " é: " << media << endl;

}