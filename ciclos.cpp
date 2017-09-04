#include <iostream>
using namespace std;

int main()

{
    int numero1, numero2, numero3, factorial=1, calificacion, contador=0, suma=0;
    float promedio=0;

    do{
    cout<<"1.-Saber si un numero es primo o no\n";
    cout<<"2.-Mostrar el factorial de un numero\n";
    cout<<"3.-Leer calificaciones y promediar\n";
    cout<<"0.-Salir\n";
    cin>>numero1;

    switch(numero1)
    {
        case 1:

            cout<<"Ingrese el numero";
            cin>>numero2;
            for(int i=2; i<numero2; i++)
                {
                    if(numero2%2==0)
                    cout<<"No es primo\n";
                }

        break;

        case 2:

            cout<<"ingrese el numero para saber su fatorial";
            cin>>numero3;
            for(int i=1; i<=numero3; i++)
                {
                    factorial=factorial*i;
                }
                cout<<numero3<<"!"<<"="<<factorial;
        case 3:

            cout<<"Ingrese las calificaciones\n";
            cin>>calificacion;
            suma=suma+calificacion;
            contador=1;
            while(calificacion>0)
            {
                cin>>calificacion;
                suma=suma+calificacion;

                contador++;
            }
            promedio=(float)(suma+1.0)/(contador-1.0);
            cout<<"El promedio es: "<<promedio<<"\n";

        break;
    }
    }while(numero1!=0);

return 0;
}
