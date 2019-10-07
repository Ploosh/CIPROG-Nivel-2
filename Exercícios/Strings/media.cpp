// media identificada
#include <iomanip>
#include <iostream>
#include <string>
using namespace std;

int main(){
<<<<<<< Updated upstream
    int q, n;
    cout << "Insira a quantidade de alunos e a quantidade de notas, respectivamente:\n";
    cin >> q >> n;
    cin.ignore();

=======
<<<<<<< HEAD
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
=======
    int q, n;
    cout << "Insira a quantidade de alunos e a quantidade de notas, respectivamente:\n";
    cin >> q >> n;
    cin.ignore();

>>>>>>> Stashed changes
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
<<<<<<< Updated upstream
=======
>>>>>>> master
>>>>>>> Stashed changes
    }

}