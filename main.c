#include <stdio.h>
#include<math.h>
#include<string.h>

int main(void) {
  int i;
  int arr[10]={5,3,2,1,4,6,8,9,0,7};
  arr[0]=5;
  arr[1]=3;
  arr[2]=2;
  arr[3]=1;
  arr[4]=4;
  arr[5]=6;
  arr[6]=8;
  arr[7]=9;
  arr[8]=0;
  arr[9]=7;
  printf("Digite um valor entre 0 e 9: ");
  scanf("%d",&i);
  if(i==5)
  printf("Posição 0");
  else if(i==3)
  printf("Posição 1");
  else if(i==2)
  printf("Posição 2");
  else if(i==1)
  printf("Posição 3");
  else if(i==4)
  printf("Posição 4");
  else if(i==6)
  printf("Posição 5");
  else if(i==8)
  printf("Posição 6");
  else if(i==9)
  printf("Posição 7");
  else if(i==0)
  printf("Posição 8");
  else if(i==7)
  printf("Posição 9");
  
  return 0;
}