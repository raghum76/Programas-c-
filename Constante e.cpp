#include <iostream>
#include <math.h>
using namespace std;

int main()
{

	int opcion;
    int factorial=1, factorial1=1, n;
    float e, div, suma=1, x, resultado=1, div1, numerador=1;
    do{
    cout<<"\n----------------MENU------------------\n";
	cout<<"1.-Calcular la aproximacion de la constante de Euler\n";
	cout<<"2.-Calcular la aproximacion de la constante de Euler elevado a x\n";
	cout<<"0.-Salir\n";
	cout<<"Ingrese una opcion:  ";
	cin>>opcion;

		switch (opcion)
			{
				case 1:
        			cout<<"Ingrese hasta que numero de la serie desa llegar";
        			cin>>n;
        			cout<<"e=  ";
        			for(int i=1; i<=n; i++)
        				{

            				factorial*=i;
            				div=numerador/factorial;
            				suma+=div;
            				cout<<"1"<<"/"<<i<<"!"<<" +  ";
			}
        				cout<<"="<<suma<<"\n";

        				break;
        		case 2:

                    cout<<"Ingrese hasta que numero de la serie desea llegar: ";
                    cin>>n;
        			cout<<"Ingrese el valor de x=  ";
        			cin>>x;
        			cout<<"e^x=  ";
        			for(int i=1; i<=n; i++)
        				{

            				factorial1*=i;
            				div1=pow(x,i)/factorial1;
            				resultado+=div1;
            				cout<<x<<"^"<<i<<"/"<<i<<"!"<<"  +  ";

       					}
        				cout<<"="<<resultado<<"\n";

    			break;
    		}
    }while(opcion!=0);
return 0;
}
