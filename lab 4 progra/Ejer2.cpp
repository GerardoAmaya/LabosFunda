//Promedio de estatura

#include <iostream>
using namespace std;

int estatura()
{
 float arr[25], contar, media;
 int i, contar2, contar3;
 for (i=0; i<25; i++) {
 cout<<"Digitar estatura del estudiante "<<i+1<<" en metros"<<endl;
 cin>>arr[i];
 contar+=arr[i];}

 //operacion para el promedio
 media=contar/25; 
//contador encargado de los ninos abajo de la media previamente calculada
 contar2=0;  
 for (i=0; i<25; i++)
 if (arr[i]<media){
 {contar2++;}}
//contador encargado de los ninos arriba de la media
 contar3=0; 
 for (i=0; i<25; i++)
 if (arr[i]>media){
 contar3++;}
//Se imprime los resultados
 cout <<"la media es: "<< media <<endl;
 cout<<"total de estudiantes abajo de la media: "<< contar2 <<endl;
 cout<<"total de estudiantes arriba de la media: "<< contar3 <<endl;
}
int main ()
{
estatura();
}