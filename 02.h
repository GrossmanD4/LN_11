#ifndef ACTIVIDADES_11_02_H
#define ACTIVIDADES_11_02_H
#endif
#include <iostream>
#include <string>
using namespace std;

void bucle (char c[3][3]);
void entrada (char c[3][3]);
void tablero (char c[3][3]);
void juega (char[3][3]);
void compu (char[3][3]);
int ganador (char[3][3]);

int Ln_02()
{

    char c[3][3];
    bucle (c);
    system("pause");
    return 0;
}

void bucle (char c[3][3])
{

    int i,j;
    i=0;
    entrada (c);

    do
    {
        tablero(c);
        if (i%2==0)
        {
            juega(c);
        }
        else
        {
            compu(c);
        }
        j=ganador(c);
        i=i+1;
    } while (i<=9 and j==2);

    tablero(c);

    if (j==0)
    {
        cout<<"Ganaste";
    }
    else if (j==1)
    {
        cout<<"Has perdido";
    }
    else
    {
        cout<<"Has empatado";
    }
}

void entrada(char c[3][3])
{ int i,j;
    char num;
    num='1';
    for (i=0; i<=2; i++)
    {
        for (j=0; j<=2; j++)
        {
            c[i][j]=num++;
        }
    }
}


void juega (char c[3][3])
{
    int i,j,k,a;

    do {

        do {
            cout<<"Ingrese su ficha : ";
            cin>>a;
        }
        while (a<1 or a>9);

        switch (a)
        {
            case 1: {i=0; j=0; break;};
            case 2: {i=0; j=1; break;};
            case 3: {i=0; j=2; break;};
            case 4: {i=1; j=0; break;};
            case 5: {i=1; j=1; break;};
            case 6: {i=1; j=2; break;};
            case 7: {i=2; j=0; break;};
            case 8: {i=2; j=1; break;};
            case 9: {i=2; j=2; break;};
        }

        if (c[i][j]=='X' or c[i][j]=='0')
        {
            k=1;
            cout<<"Ese lugar ya esta ocupado \n";
        }
    }while (k==1);
    c[i][j]='X';
}

void compu(char c[3][3])
{
    srand(time(NULL));
    int a,i,j,k;
    do
    {
        i=rand()%3;
        j=rand()%3;
        k=0;
        if (c[i][j]=='X' or c[i][j]=='0')
        { k=1;}
    } while (k==1);
    c[i][j]='0';
}


void tablero (char c[3][3])
{
    int i,j;
    for (i=0; i<=2; i++)
    {
        for (j=0; j<=2; j++)
        {
            if (j<2)
            { cout<<c[i][j]<<" | ";}
            else
            { cout<<c[i][j];}
        }
        if (i>1)
        {cout<<"\n";}
        else
        {cout<<"\n"<<"----------"<<"\n";}
    }
    cout<<"\n";
}

int ganador (char c[3][3])
{

    if (c[0][0]=='X' or c[0][0]=='0')
    {
        if (c[0][0]==c[0][1] and c[0][0]==c[0][2])
        {
            if (c[0][0]=='X')
            {return 0;} //he ganado
            else
            {return 1;}
        }

        if (c[0][0]==c[1][0] and c[0][0]==c[2][0])
        {
            if (c[0][0]='X')
            {return 0;} //he ganado
            else
            {return 1;}
        }
    }

    if (c[1][1]=='X' or c[1][1]=='0')
    {
        if (c[1][1]==c[0][0] and c[1][1]==c[2][2])
        {
            if (c[1][1]=='X')
            {return 0;} //he ganado
            else
            {return 1;}
        }

        if (c[1][1]==c[1][0] and c[1][1]==c[1][2])
        {
            if (c[1][1]=='X')
            {return 0;} //he ganado
            else
            {return 1;}
        }

        if (c[1][1]==c[2][0] and c[1][1]==c[0][2])
        {
            if (c[1][1]=='X')
            {return 0;} //he ganado
            else
            {return 1;}
        }

        if (c[1][1]==c[0][1] and c[1][1]==c[2][1])
        {
            if (c[1][1]=='X')
            {return 0;} //he ganado
            else
            {return 1;}
        }
    }

    if (c[2][2]=='X' or c[2][2]=='0')
    {

        if (c[2][2]==c[2][0] and c[2][2]==c[2][1])
        {
            if (c[2][2]=='X')
            {return 0;} //he ganado
            else
            {return 1;}
        }

        if (c[2][2]==c[0][2] and c[2][2]==c[1][2])
        {
            if (c[2][2]=='X')
            {return 0;} //he ganado
            else
            {return 1;}
        }
    }
    return 2;
}

