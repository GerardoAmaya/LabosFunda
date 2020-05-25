// Realizar un programa en c++ que verifique si la palabra ingresada es mayor a 10 caracteres o no y si la longitud es par o impar

#include <iostream>
 
using namespace std;
 
void cantidad(char palabra[]);
 int main(){
    char palabra[20];
    cout<<"Ingresa la palabra: ";
    cin.getline(palabra,20);
   
    cantidad(palabra);
 
    cin.get();
    cin.get();
    return 0;
}
 
void cantidad(char palabra[]){
    int i;
    for(i = 0; palabra[i] != 0;++i);
    cout<<"Total de caracteres "<<endl<<i<<endl;
    if (i>10){
     cout<<"Por lo tanto la palabra contiene mas de 10 caracteres";
   }else if (i<10) {
    cout<<"Por lo tanto la palabra contiene menos de 10 caracteres";
   }
   if (i%2==0){
     cout<<", la longitud es par";
   }else{
    cout<<", la longitud es impar";
   }
}