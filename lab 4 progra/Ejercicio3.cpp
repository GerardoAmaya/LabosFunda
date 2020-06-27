//promedio estudiantes
  
#include <iostream>
using namespace std;
 
//Función 
float promedio(float nota1,float nota2, float nota3, float nota4, float nota5){
float Promedio;
//operacion para sacar promedio
Promedio = (nota1+nota2+nota3+nota4+nota5)/5;
return (Promedio);
}
int main(){
char opcion;
float nota1, nota2, nota3, nota4, nota5, i, n, notafinal;
cout<<"Ingrese cantidad de alumnos: ";
cin>>n;

for (i=1;i<=n;i++)
	{cout<<"Ingrese primera nota: ";
	cin>>nota1;
	cout<<"Ingrese segunda nota: ";
	cin>>nota2;
	cout<<"Ingrese tercera nota: ";
	cin>>nota3;
    cout<<"Ingrese la cuarta nota: ";
    cin>>nota4;
    cout<<"Ingrese quinta nota: ";
    cin>>nota5;
	notafinal = promedio(nota1,nota2,nota3,nota4,nota5);

    //If Mensaje,si el alumno ha aprobado la materia
    //Else mensaje, si no cumple la condicion del if
if (notafinal >= 6){
    cout<<"El alumno ha aprobado la materia.\n";
}else
	cout<<"El alumno ha reprobado la materia.\n";
	}
return 0;


}
