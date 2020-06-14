//Calculo de salarios

#include <iostream>
using namespace std;

int main()
{
    float  hora , horaex;
    float valorhora = 1.75;
    float valorhoraex = 2.50;
    float segurosoc = 0.04;
    float afp = 0.0625;
    float renta = 0.10;
    
if (horaex>0)
{
    cout<<"Ingrese las horas trabajadas"<<endl;
    cin>>hora;
    cout<<"Ingrese las horas extras trabajadas"<<endl;
    cin>>horaex;
    float salario = (hora * valorhora);
    if(horaex>0){
    
    printf("\n su salario total es de %.2f $",(hora * valorhora)+(horaex*valorhoraex));
    float valort=(hora * valorhora)+(horaex*valorhoraex);
    printf("\n su salario real es de %.2f $",valort-((valort*segurosoc)+(valort*afp)));
    }

    else
    {
        
        printf("\n su salario total es de:%.2f $",salario);
        float valortt=(hora * valorhora);
        printf("\n su salario real con descuentos de afp es de: %.2f $",valortt-((valortt*segurosoc)+(valortt*afp)));
    }
    //Si es mayor a 500$, hara descuento de renta
    if (salario>500)
    {
       
      
        float valorttt=(hora * valorhora)+(horaex*valorhoraex);
        printf("\n su salario real con el descuento de renta es: %.2f $",valorttt-((valorttt*segurosoc)+(valorttt*afp)+(valorttt*renta)));
    }
    
}

else
    {
        
        printf("Ingrese los datos correctos");
    }
    return 0;
}

