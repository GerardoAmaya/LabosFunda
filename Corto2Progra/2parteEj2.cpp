
#include <iostream>
using namespace std;

int main(){

float total, precio, descuento;
float Esa = 0.13;
float Guat = 0.9;
float Hnd = 0.15;
float Esp = 0.20;

cout<<"Escoge tu pais: ";
cout<<"\n 1-El Salvador"<<"\n 2-Honduras"<<"\n 3-Guatemala"<<"\n 4-Espana"<<endl;
scanf("%f",&descuento);
cout<<"Digite la cantidad de dinero: ";
scanf("%f", &precio);
if(descuento == 1){
    Esa;
    total = precio-Esa;
}if(descuento == 2){
    Guat;
    total = precio-Guat;
}if(descuento == 3){
    Hnd;
    total = precio-Hnd;
}if(descuento == 4){
    Esp;
    total = precio-Esp;
}
printf("Tu total de dinero es $: %.2f",total);

return 0;
}