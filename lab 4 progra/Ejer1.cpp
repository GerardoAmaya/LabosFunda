//Encriptacion
#include <iostream>
using namespace std;

char palabra[75];
int main () {

cout<<"Ingrese la palabra que desea incriptar con la clave del murcielago: "<<endl;

cin.getline(palabra, 75);

//for, recorre cada caracter de la palabra
for (int c=0; c<=75; c++) {
//swicth, confirma si algun caracter ingresado coincide con la palabra murcielago
switch (palabra[c]) {
{
//Se le ha asignado a cada letra de la palabra murcielago un numero de codificacion utilizando los caracteres ASCII del 48 al 57, equivalente a 0-9

case 'm':
palabra[c]=48;
break;}
{
case 'u':
palabra[c]=49;
break;}
{
case 'r':
palabra[c]=50;
break;}
{
case 'c':
palabra[c]=51;
break;}
{
case 'i':
palabra[c]=52;
break;}
{
case 'e':
palabra[c]=53;
break;}
{
case 'l':
palabra[c]=54;
break;}
{
case 'a':
palabra[c]=55;
break;}
{
case 'g':
palabra[c]=56;
break;}
{
case 'o':
palabra[c]=57;

break;}
default:
palabra[c]=palabra[c];
}
}
cout<<"La palabra encriptada es: "<<palabra;

}