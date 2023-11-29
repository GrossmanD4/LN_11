#ifndef ACTIVIDADES_11_04_H
#define ACTIVIDADES_11_04_H
#endif
#include <iostream>
#include <string>
using namespace std;
void ingreso (string c[10][4]);
void presenta (string c[10][4]);
void procesa (string c[10][4]);
void ingreso(string c[10][4])
{
    int i,mes,dia;
    i=-1;
    do
    {
        i=i+1;
        cout<<"Persona  "<<i<<"\n";
        do
        {
            cout<<"Ingrese Numero de Mes de Nacimiento : ";
            cin>>c[i][0];
            mes=stoi(c[i][0]);
        }while (mes>12 or mes<0);

        do
        {
            cout<<"Ingrese Dia de Nacimiento : ";
            cin>>c[i][1];
            dia=stoi(c[i][1]);
        }while (dia>31 or dia<0);

        if (c[i][0]!="0" and c[i][1]!="0")
        {
            cout<<"Ingrese nombre de la persona : ";
            cin>>c[i][2];
            c[i][3]=' ';
        }
    } while (c[i][0]!="0" and c[i][1]!="0");
}

void procesa(string c[10][4])
{
    int i;
    i=-1;
    do
    {
        i=i+1;
        if (c[i][0]=="1" or c[i][0]=="01")
        {
            if (c[i][1]>="21")
            {c[i][3]="Acuario";}
            else
            {c[i][3]="Capricornio";}
        }
        if (c[i][0]=="2" or c[i][0]=="02")
        {
            if (c[i][1]>="20")
            {c[i][3]="Piscis";}
            else
            {c[i][3]="Acuario";}
        }
        if (c[i][0]=="3" or c[i][0]=="03")
        {
            if (c[i][1]>="21")
            {c[i][3]="Aries";}
            else
            {c[i][3]="Piscis";}
        }
        if (c[i][0]=="4" or c[i][0]=="04")
        {
            if (c[i][1]>="21")
            {c[i][3]="Tauro";}
            else
            {c[i][3]="Aries";}
        }
        if (c[i][0]=="5" or c[i][0]=="05")
        {
            if (c[i][1]>="22")
            {c[i][3]="Geminis";}
            else
            {c[i][3]="Tauro";}
        }
        if (c[i][0]=="6" or c[i][0]=="06")
        {
            if (c[i][1]>="22")
            {c[i][3]="Cancer";}
            else
            {c[i][3]="Geminis";}
        }
        if (c[i][0]=="7" or c[i][0]=="07")
        {
            if (c[i][1]>="24")
            {c[i][3]="Leo";}
            else
            {c[i][3]="Cancer";}
        }
        if (c[i][0]=="8" or c[i][0]=="08")
        {
            if (c[i][1]>="24")
            {c[i][3]="Virgo";}
            else
            {c[i][3]="Leo";}
        }
        if (c[i][0]=="9" or c[i][0]=="09")
        {
            if (c[i][1]>="24")
            {c[i][3]="Libra";}
            else
            {c[i][3]="Virgo";}
        }
        if (c[i][0]=="10")
        {
            if (c[i][1]>="24")
            {c[i][3]="Escorpio";}
            else
            {c[i][3]="Libra";}
        }
        if (c[i][0]=="11")
        {
            if (c[i][1]>="23")
            {c[i][3]="Sagitario";}
            else
            {c[i][3]="Escorpio";}
        }
        if (c[i][0]=="12")
        {
            if (c[i][1]>="22")
            {c[i][3]="Capricornio";}
            else
            {c[i][3]="Safitario";}
        }
    } while (c[i][0]!="0" and c[i][1]!="0");
}
void presenta(string c[10][4])
{
    int i;
    i=-1;
    system("cls");
    cout<<" Mes     Dia    Persona      Signo"<<"\n";
    cout<<"-------------------------------------"<<"\n";
    do
    {
        i=i+1;
        if (c[i][0]!="0" and c[i][1]!="0")
        {
            cout<<" "<<c[i][0];
            cout<<"     "<<c[i][1];
            cout<<"     "<<c[i][2];
            cout<<"     "<<c[i][3]<<"\n";
        }
    } while (c[i][0]!="0" and c[i][1]!="0");
}

int Ln_04(){
    string c[10][4];
    ingreso (c);
    procesa (c);
    presenta (c);
    system("pause");
    return 0;
}
