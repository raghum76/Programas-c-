#include <iostream>
#include <math.h>

using namespace std;

int main()
    {
        int factorial=1, numerador=0;
        float x, resultado=1, div;


        cout<<"Ingrese el valor de x=  ";
        cin>>x;
        cout<<"e^x=  ";
        for(int i=1; i<=5; i++)
        {

            factorial*=i;
            div=pow(x,i)/factorial;
            resultado+=div;
            cout<<x<<"^"<<i<<"/"<<factorial<<"!"<<"  +  ";

        }
        cout<<"="<<resultado;
    return 0;
    }
