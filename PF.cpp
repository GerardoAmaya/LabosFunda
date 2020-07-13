// Elaborar un programa que procese informacion sobre productos comprados por un
//cliente en una tienda, a modo de procesamiento de una factura de compra. La
//información se manejará en un arreglo, en el cual cada casilla contendrá los datos
//de: nombre del artículo, cantidad de unidades compradas, precio unitario y costo
//total por artículo.

#include <iostream>
#include <string>
#include <string.h>

// Constante
const int longCad = 20;

using namespace std;

struct costoPorArticulo
{
    char nombreArticulo[longCad + 1];
    int cantidad;
    float precio;
    float costoPorArticulo;
}
;
//funciones que utilizare
void LecturaDeDatos (costoPorArticulo arreglo[],int Cantidad);
void CalculoPorArticulo (costoPorArticulo arreglo[],int Cantidad);
void MostrarDatosDelArreglo (costoPorArticulo arreglo[],int Cantidad);
float Total(costoPorArticulo arreglo[],int Cantidad);

int main(){

// esta variable de tipo entero guardara la cantidad de art que digitara el usuario
    int CantidadArt;
    cout<<endl<<endl;
    cout<<"Proyecto final, Facturacion \n";
    cout<<"Cuantos articulos llevara: ";
    cin>>CantidadArt;
    cin.ignore(100,'\n');
    
 // me ira guardando la informacion
    costoPorArticulo arreglo[CantidadArt];
    
// Funcion para la lectura y guardado
    LecturaDeDatos(arreglo,CantidadArt);

 // Funcion calculo por art.
    CalculoPorArticulo(arreglo,CantidadArt);
    cout<<"Compra hecha \n";
   
// Funcion Mostrar datos
    MostrarDatosDelArreglo(arreglo,CantidadArt);
    cout<<endl<<endl;
  
 // muestro mi funcion total a cobrar
    cout<<"Total a pagar: $ "<< (Total(arreglo,CantidadArt));
    cout<<" \n Gracias, vuelva pronto ";
    return 0;
}

// guardo los datos en el arreglo 
void LecturaDeDatos (costoPorArticulo arreglo[],int Cantidad){
for(int i=0; i<Cantidad; i++)
{
    cout<<endl;
    cout<<"digite el nombre del articulo "<< i+1 << ": "; 
// Guardo el nombre del articulo
    cin.getline(arreglo[i].nombreArticulo,21,'\n');
    cout<<"Costo: $"; 

// Guardado del precio del art.
        cin>>arreglo[i].precio;
        cout<<"cantidad de art : ";
// Guardado de cantidad del art.
        cin>>arreglo[i].cantidad;
        cin.ignore(100,'\n');
    }
}
// Se realiza el CalculoPorArticulo los valores que tendrian son los que arriba guarde,
void CalculoPorArticulo (costoPorArticulo arreglo[],int Cantidad){
    for(int i=0;i<Cantidad;i++){
    
// Operacion para el costo del art.
arreglo[i].costoPorArticulo = arreglo[i].cantidad*arreglo[i].precio;
}
}
// funcion MostrarDatos los cuales ya se han guardado
//Funcion encargada de mostrar lso datos ya guardado, ademas, aniade el corto por articulo
void MostrarDatosDelArreglo ( costoPorArticulo arreglo[],int Cantidad ){
    for(int i = 0; i < Cantidad; i++){
cout<<endl;
cout<<"nombre de art. "<<i+1<<":"<<arreglo[i].nombreArticulo<<endl; 
cout<<"Precio: $"<<arreglo[i].precio<<endl;
cout<<"Cantidad de Unidades "<<arreglo[i].cantidad<<endl;
// llamo los costos por art.
    cout<<"Costo por articulo: $"<<arreglo[i].costoPorArticulo<<endl;
    }
        
}
// funcion Total sumando precio de los art.
float Total(costoPorArticulo arreglo[],int Cantidad){
    float total;

 if(Cantidad==1)
 {for(int i=0;i<Cantidad;i++){
 total=arreglo[i].costoPorArticulo;}
    
    
// el else entra si es + de 1 art. 
//sumare precio de cada unidad de art.
    }else{
    for(int i=0;i<Cantidad;i++){
        total=arreglo[i].costoPorArticulo+total;}    
    
// Return el total de la compra 
}return total;}