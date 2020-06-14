
#include <iostream>
using namespace std;

int main(){
int verde = 1;
int amarillo = 3;
int negro = 6;
int blanco = 7;
int gris = 8;
int eleccion;
int total;

cout<<"Escoge un color: ";
cout<<"\n 1-Verde"<<"\n 2-amarillo"<<"\n 3-negro"<<"\n 4-blanco"<<"\n 5-gris"<<endl;
cin>>eleccion;
if(eleccion == 1){
    verde;
    total = verde;
}if(eleccion == 2){
    amarillo;
    total = amarillo;
}if(eleccion == 3){
    negro;
    total = negro;
}if(eleccion == 4){
    blanco;
    total = blanco;
}if(eleccion == 5){
    gris;
    total = gris;
}

cout<<"Has ganado $ "<<total<<endl;

    return 0;
}
