#include <iostream>
using namespace std;

int main()
{
    int horas1, horas2, minutos1, minutos2, segundos1, segundos2, rehoras, reminutos, resegundos;

    cout<<"Ingrese la hora de entrada";
    cin>>horas1;
    cout<<"Ingrese los minutos de entrada";
    cin>>minutos1;
    cout<<"Ingrese los segundos de entrada";
    cin>>segundos1;
    cout<<"Ingrese la hora de salida";
    cin>>horas2;
    cout<<"Ingrese los minutos de salida";
    cin>>minutos2;
    cout<<"Ingrese los segundos de salida";
    cin>>segundos2;

    if(horas2>horas1)

        rehoras=horas2-horas1;
    else
        rehoras=horas1-horas2;


    if(minutos2>minutos1)

        reminutos=minutos2-minutos1;
    else
            reminutos=minutos1-minutos2;


    if(segundos2>segundos1)
        resegundos=segundos2-segundos1;
    else
        resegundos=segundos1-segundos2;


    cout<<"el tiempo transcurrido son"<<"\nhoras"<<"\t"<<rehoras<<"minutos"<<"\t"<<reminutos<<"segundos"<<"\t"<<resegundos;

return 0;
}
