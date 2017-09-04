#include <iostream>
using namespace std;

int main()
    {

        int factorial=1;
        float e, div, suma=1, numerador=1;
        cout<<"e=  ";
        for(int i=1; i<=5; i++)
        {

            factorial*=i;
            div=numerador/factorial;
            suma+=div;
            cout<<"1"<<"/"<<factorial<<"!"<<" +  ";

        }
        cout<<"="<<suma;
    return 0;
    }
