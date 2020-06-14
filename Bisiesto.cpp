// anio bisiesto o no

#include<iostream>
using namespace std;

int main(){

    cout<< "digite el anio";
    int anio;
    cin>>anio;

    if(anio%4 != 0) 
    cout<<"el anio es bisiesto";
    else if (anio%100 !=0) 
    cout<<"el anio es bisiesto";
    else if (anio%400 !=0) 
        cout<<"el anio no es bisiesto";
    else
    
        cout<<"el anio es bisiesto";
    
    
}