#include <iostream>
#include <cmath>
using namespace std;

float volume (float r){
    float v;

    v=(4*3.14*(pow(r,3)))/3;

    cout << fixed;
    cout.precision(2);

    cout << "O volume da esfera é: " << v << " unidade de volume\n";
    return v;
}

int main(){
    float raio;

    cout << "Insira o raio da esfera: ";
    cin >> raio;

    volume(raio);
}