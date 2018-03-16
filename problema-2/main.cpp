/*Elabore un programa que genere un arreglo de 200 letras mayúsculas aleatorias, imprima este arreglo
y luego imprima cuantas veces se repite cada letra en el arreglo.
Ejemplo: supóngase que se genera el arreglo de 10 elementos: ABARSECAAB. El programa debe imprimir: ABARSECAAB
A: 4
B: 2
C: 1
Y así sucesivamente.*/
#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <string.h>
using namespace std;

int main()
{
    int num, k;
    char letras[200] = {},abecedario[26] = {0};
    srand(time(NULL));
    for(int i= 0; i< 200; i++)
    {
        num = 65 + rand() % (91 - 65);
        letras[i]=num;
    }
    cout<<letras<<endl;


    scanf("%s",letras);
    for (k=0 ;k<200; k++)
    {
         abecedario[(int)letras[k]]++;
    }
    for(int j=0;j<26;j++)
    {
        if (abecedario[j]>0)
        {
           cout<<(char)j<<(int)abecedario[j];
        }
    }
    cin.get();

}
