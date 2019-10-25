#include <iostream>
#include <cmath>
using namespace std;

float delta (float a, float b, float c){
    float D;
    D =(pow(b, 2)-4*a*c);
    cout << "Delta = " << D << endl;
    return D;
}

float bhaskara (float a, float b, float delta){
    int x1=0, x2=0;
    x1=((-b)+sqrt(delta))/(2*a);
    x2=((-b)-sqrt(delta))/(2*a);

    cout << "São raízes da equação:\nX1 = " << x1 << endl << "X2 = " << x2 << endl;
}


int main(){
    float a, b, c, D;

    cout << "Insira o coeficiente de x²: ";
    cin >> a;

    cout << "Insira o coeficiente de x: ";
    cin >> b;

    cout << "Insira o termo independente, cano não haja coloque 0: ";
    cin >> c;

    D = delta (a, b, c);

    if (delta >= 0){
        bhaskara (a, b, D);
    }
    else {
        cout << "A equação possui raizes imaginárias, não é possível calcular";
    }
}
