#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main(){
    string arr;
    char aux;
    cout << "Digite a palavra a ser ordenada: ";
    cin >> arr;

    for (int i=0; i<arr.size(); i++){
        arr[i] =(tolower(arr[i]));
    }

    cout << "A palavra a ser ordenada é " << arr << endl;

    for (int i=0; i<arr.size()-1; i++){
        for (int j=i+1; j<arr.size(); j++){
            if (arr[j]<arr[i]){
                aux=arr[i];
                arr[i]=arr[j];
                arr[j]=aux;
            }
        }
    }

    cout << "A palavra ordenada é: " << arr << endl;
}