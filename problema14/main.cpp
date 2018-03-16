#include <iostream>

using namespace std;
/*Elabore un programa que llene una matriz 5x5 con los números del 1 al 25 y la imprima, luego
imprima la matriz rotada 90, 180 y 270 grados.*/

int main()
{ int matriz[5][5];
  int i,j,num=1;

  cout<<"Matriz original"<<endl;
  for (i=0;i<5;i++)
  {
      for (j=0;j<5;j++)
      {
          matriz[i][j]=num;
          num+=1;
          printf("\t%d",matriz[i][j]);
          if(matriz[i][j] == 25)
          {
              break;
          }

      }
              cout<<endl;
   }

  cout<<"Matriz girada 90°"<<endl;
  int otra[5][5];
  for (i=0;i<5;i++)
  {   if(i==0){num=21;}
      if(i==1){num=22;}
      if(i==2){num=23;}
      if(i==3){num=24;}
      if(i==4){num=25;}
      for (j=0;j<5;j++)
      {
          otra[i][j]=num;
          num-=5;
          printf("\t%d",otra[i][j]);
          if(otra[i][j] ==5)
          {
              break;
          }

      }
              cout<<endl;
   }


}




