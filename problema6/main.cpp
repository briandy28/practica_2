#include <iostream>

using namespace std;
/*Escriba un programa que reciba una cadena de caracteres y cambie las letras
 * minúsculas por mayúsculas, los demás caracteres no deben ser alterados.*/
int main()
{
    char frase[50];


       cout<<"Escribe una  frase: ";
       cin>>frase;

       for(int i = 0; frase[i]; i++)
       {
          frase[i] = toupper(frase[i]);
       }

       cout<<frase<<endl;
}
