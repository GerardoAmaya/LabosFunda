// Realizar un programa en c++ que verifique si un número es par o impar.

#include <iostream>
using namespace std;

int main(){
    int num1;
    cout<<"Ingrese numero para verificar si es par o impar ";
    cin>>num1;
    if(num1 % 2 == 0){
        cout<<"El numero es par";
    }
    
else{
    cout<<"El numero es impar";
    
}
return 0;

}