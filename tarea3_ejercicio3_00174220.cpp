//Realizar un programa en c++ que reciba 1 producto comprado (nombre,precio y cantidad comprada) y mostrar el total de dinero gastado
#include <iostream>

using namespace std;
int main(){

int n1;
int hamburguesa = 5;
int multiplicacion = 0;
int si = 1;

cout << "\nRestaurante Gerardo\n ";
cout << "\nDesea comprar una hamburguesa?:\n";
cout << "\n1.     Hamburguesa    $5\n";
           
cout<< "Digite 1 si desea comprarlo "; cin>>si;
cout<< "digite la cantidad que desea llevar" ; cin>>n1;
 multiplicacion = hamburguesa * n1;
 cout<<"Total a gastar: $"<<multiplicacion<<endl;


return 0;
}