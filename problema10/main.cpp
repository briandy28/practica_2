#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <string.h>

using namespace std;

int main()
{
    char romanos[100];
    int valor[100];
    int longitud, numero = 0;
    cout<<"Introduzca el numero romano que quiera convertir a arabigos: ";
    cin>>romanos;
    longitud = strlen(romanos);
    for(int i=0;i<longitud;i++)
    {
        romanos[i] = toupper(romanos[i]);
        if (romanos[i]=="I")
        {
            valor[i]=1;
        }
        if (romanos[i]=="V")
        {
            valor[i]=5;
        }
        if (romanos[i]=="X")
        {
            valor[i]=10;
        }
        if (romanos[i]=="L")
        {
            valor[i]=50;
        }
        if (romanos[i]=="C")
        {
            valor[i]=100;
        }
        if (romanos[i]=="D")
        {
            valor[i]=500;
        }
        if (romanos[i]=="M")
        {
            valor[i]=1000;
        }
    }
    for(int i=0;i<longitud;i++)
    {
        if(i=longitud-1)
        {
            numero+=valor[i];
        }
        else
        {
            if(valor[i]>=valor[i+1])
            {
                numero-=valor[i]
            }
        }
    }
    cout<<(char)numero;

}
