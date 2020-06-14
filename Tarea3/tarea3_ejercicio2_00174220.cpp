//Realizar un programa en c++ que reciba el radio de un círculo y calcular su área y perímetro.
#include <iostream>

using namespace std;
int main(){

float r,d,perimetro,area;
printf("introduzca el radio del circulo");
cin>>r;
perimetro=2*3.1416*r;
cout<<"el perimetro del circulo es"<<endl<<perimetro<<endl;
cout<<"introduce el diametro del circulo"<<endl;
cin>>d;
area=(3.1416*d*d)/4;
cout<<"el area del circulo es"<<endl<<area<<endl;
system("PAUSE");

return 0;

}

