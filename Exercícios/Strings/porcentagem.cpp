/*1.Receber um nome;
2. Imprimir o total de caracteres que o nome possui;
3. Contar o número de vogais existentes nele;
4. Exibir a porcentagem de vogais em relação ao total de caracteres.*/

#include <iostream>
#include <string>
using namespace std;

int main(){
    string palavra;
    string vogais = "ãẽĩõũ";
    int quant=0;
    float porcento;
    cout << "Digite a palavra: ";
    cin >> palavra;

    //quantidade de caracteres
    cout << "A palavra tem " << palavra.size() <<" caracteres\n";

    //quantidade de vogais na palavra
    for (int i=0; i<palavra.size(); i++){
        for (int j=0; j<15; j++){
            if (palavra[i]==vogais[j]){
                quant++;
            }
        }
    }
    cout << "A palavra tem " << quant <<" vogais\n";

    //porcentagem de vogais na palavra
    porcento = (quant*100)/palavra.size();
    cout << "A palavra tem " << porcento <<"% de vogais\n";
}