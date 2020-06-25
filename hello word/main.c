#include <stdio.h>
#include <stdlib.h>

#include <time.h>

main(){

  printf("\n SYNC \n");// SAIDA

  int val = 42;


  printf("Int : %d ",val);

  // Entrada
  int  numero;
  printf("\n Digite um numero! ");
  scanf("%d",&numero);
  printf("\n Digitado : %d \n",numero);

  double decimal;
  printf("\n Digite um numero decimal! ");
  scanf("%f",&decimal);
  printf("\n Digitado : %f \n",decimal);
  // Alterar o numero de casas decimais exibidas :
  printf("\n Digitado: %.2f \n",decimal);

 //Convertendo 

  double val2 = decimal * (double) val;
  int val3 = (int) val2;

 // Valores aleatorios

 int aleatorio = rand();//Atenção numero pseudo Aleatorio
 int segundos = time(0);// Unix time
 
 srand(segundos);// definindo uma semente par a aleatoriedade dos valores

 int aleatorio2 = rand();// Gerando um numero pseudo Aleatorio basseado na semenete do srand
 
 int aleatorioBonito = aleatorio2 % 100;

 printf(" Aleatorio : %d ",aleatorioBonito);
}
