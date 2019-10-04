// media identificada
#include <iomanip>
#include <iostream>
#include <string>
using namespace std;

int main(){
    string nome[3], sobrenome[3];
    float n1, n2, n3, media[3];
    std::cout << std::setprecision(2) << std::fixed;
    for (int i=0; i<3; i++){
        cout << "Insira o nome completo do aluno:\n";
        cin >> nome[i];
        getline(cin, sobrenome[i]);

        cout << "Insira as 3 notas do aluno:\n";
        cin >> n1 >> n2 >> n3;
        media[i] = (n1+n2+n3)/3;
        cout << media[i] <<endl;
    }
   // for (int i=0; i<3; i++){
    //    cout << "A média de " << nome[i] << sobrenome[i] << " é: " << media[i] << endl;
   // }

}