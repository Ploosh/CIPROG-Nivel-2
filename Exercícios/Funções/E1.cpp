// Função que converte a temperatura de Fahrenheit para graus Celcius
// Fórmula: C=(F-32)*5/9

#include <iostream>
using namespace std;

void conversao (float t){
    float celcius;
    celcius = (t-32)*5/9;
    cout << celcius << "°\n";
}

int main(){
    float fahrenheit;
    cout << "Insira a temperatura em Fahrenheit: ";
    cin >> fahrenheit;

    conversao(fahrenheit);
}