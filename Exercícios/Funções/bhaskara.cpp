#include <iostream>
#include <cmath>
using namespace std;

void bhaskara (float a, float b, float c){
    float D;
    D =(pow(b, 2)-4*a*c);
    cout << "Delta = " << D << endl;

    if (D>=0){
        int x1=0, x2=0;
        x1=((-b)+sqrt(D))/(2*a);
        x2=((-b)-sqrt(D))/(2*a);

        cout << "São raízes da equação:\nX1 = " << x1 << endl << "X2 = " << x2 << endl;
    }
    else{
        cout << "A equação possui raizes imaginárias, não é possível calcular as raízes da equação\n";
    }
}

int main(){
    float a, b, c, D;

    cout << "Insira o coeficiente de x²: ";
    cin >> a;

    if (a==0){
        cout << "Não é uma equação do segundo grau\n";
        return 0;
    }

    cout << "Insira o coeficiente de x: ";
    cin >> b;

    cout << "Insira o termo independente, cano não haja coloque 0: ";
    cin >> c;

    bhaskara (a, b, c);
}
