//Realizar un programa en c++ que verifique si un número es divisible entre otro.

#include <iostream>
using namespace std;

int main(){
int num1, num2;
cout<<"Ingrese primer numero ";
cin>>num1;
cout<<"Ingrese segundo numero ";
cin>>num2;
if(num1 % num2 == 0) {
    cout<< "Es divisible" <<endl;

} 
else {
    cout<< "No es divisible" <<endl;
}

return 0;
}