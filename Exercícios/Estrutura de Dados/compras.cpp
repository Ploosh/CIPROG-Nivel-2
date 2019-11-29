#include <iostream>
using namespace std;

struct produto{
    string nome;
    int cod;
    float preco;
};

void inserir (produto *a, int n){
    cout << "insira o nome do produto\n";
    cin >> a->nome;
    a->cod = n+1;
    cout << "insira o preço do produto\n";
    cin >> a->preco;

    cout << endl;
    
};

void imprimirtotal(produto a){
    cout << a.cod << " - " << a.nome << endl;
};

void imprimirconsulta(produto a){
    cout << a.nome << " - " << a.preco << endl;
}


int main(){
    int N;
    
    cout << "Insira a quantidade de produtos a serem cadastrados: ";
    cin >> N;

    produto lista[N];

    for (int i=0; i<N; i++){
        inserir (&lista[i], i);
        cin.ignore();
    }

    for (int i=0; i<N; i++){
        imprimirtotal(lista[i]);
    }

    int consulta;

    
    while (consulta != 0){
        cout << "Insira o codigo do produto a ser consultado: ";
        cin >> consulta;
        if (consulta <0|| consulta > N){
            cout << "Código inválido\n\n";
        }
        else{
            if (consulta == 0){
                cout << "Consulta finalzada\n\n";
                return 0;
            }
            else{
                imprimirconsulta (lista[consulta-1]);
                cout << "Para finalizar aperte 0\n\n";
            }
        }
    }
}