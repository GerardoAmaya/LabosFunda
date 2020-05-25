//Realizar un programa en c++ que verifique si la palabra ingresada inicia y finaliza con la misma letra.


#include <iostream>
using namespace std;

int main(){
    string palabra, primera, ultima;
    int i, largo;
    cout<< "Digite la palabra: "<< endl;
    cin>>palabra;
    largo = palabra.length();
    primera = palabra[0];
    i=largo-1;
    ultima = palabra[i];
    if (primera == ultima) {
        cout << "Inicia y termina con la misma letra"<<endl;
    }else{
        cout<< "inicia y termina con diferente letra"<<endl;
    }

return 0;
}