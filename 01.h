#ifndef ACTIVIDADES_11_01_H
#define ACTIVIDADES_11_01_H
#endif
#include <iostream>
#include <string>
using namespace std;

int Ln_01()
{

    int n,i,deficiente,regular,bueno,excelente;
    int nota[100];

    deficiente=0;
    regular=0;
    bueno=0;
    excelente=0;
    cout<<"numero de notas ";
    cin>>n;
    for (int i=0; i<=n-1; i++)
    {
        do
        {
            cout<<"Nota "<<i<<" : ";
            cin>>nota[i];
        } while (nota[i]<0 or nota[i]>20);

        if (nota[i]<6)
        { deficiente=deficiente+1; }
        else
        {
            if (nota[i]<11)
            {  regular=regular+1; }
            else
            {
                if (nota[i]<16)
                { bueno=bueno+1; }
                else
                { excelente=excelente+1;}
            }
        }

    }

    cout<<"Numero de Notas Deficientes "<<deficiente<<" \n";
    cout<<"Numero de Notas Regulares   "<<regular<<" \n";
    cout<<"Numero de Notas Buenas      "<<bueno<<" \n";
    cout<<"Numero de Notas Excelentes  "<<excelente<<" \n";
}
