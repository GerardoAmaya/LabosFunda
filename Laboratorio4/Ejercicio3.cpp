// Realizar un programa en c++ que verifique si un número es positivo, negativo o cero

#include <iostream>
using namespace std;

int main(){
float num;
cout<<"Ingrese primer numero ";
cin>>num;
if (num>0){
     cout<<"El numero es positivo";
   }else if (num<0) {
    cout<<"El numero es negativo a cero";
   }else{
    cout<<"El numero es 0";
    return 0;
   }
   

}