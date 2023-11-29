#ifndef ACTIVIDADES_11_03_H
#define ACTIVIDADES_11_03_H
#endif
#include <iostream>
#include <string>
using namespace std;
void Ln_03(){
    int n,i,j,mayor,menor,fila,suma;
    int mat[100][100];

    cout<<"Orden la matriz "; cin>>n;

    for (int i=0; i<=n-1; i++)
    {
        for (int j=0; j<=n-1; j++)
        {
            cout<<"Elemento ["<<i<<","<<j<<"] = ";
            cin>>mat[i][j];
        }
    }

    cout<<"Ingrese la fila que desea sumar ";
    cin>>fila;
    suma=0;

    for (int i=0; i<=n; i++)
    {
        suma=suma+mat[fila][i];
    }

    mayor=mat[0][0];
    menor=mat[0][0];
    for (int i=0; i<=n-1; i++)
    {
        for (int j=0; j<=n-1; j++)
        {
            if (mat[i][j]>mayor)
            {
                mayor=mat[i][j];
            }
            else
            {
                if (mat[i][j]<menor)
                {
                    menor=mat[i][j];
                }
            }
        }
    }

    cout<<"El mayor elemento de la matriz es : "<<mayor<<"\n";
    cout<<"El menor elemento de la matriz es : "<<menor<<"\n";
    cout<<"La suma de fila "<<fila<<" es :"<<suma<<"\n";
    cout<<"Los elementos de la diagonal principal son  :";
    for (int i=0; i<=n-1; i++)
    {
        cout<<"\n";
        cout<<mat[i][i];
    }
}