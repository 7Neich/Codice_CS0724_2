#include <stdio.h>

  int main ()
  
  {  int fattore1,fattore2 ;
  float media;
  printf("inserire primo fattore:");
  scanf("%d",&fattore1);

  printf("inserire secondo fattore:");
  scanf("%d",&fattore2);

  media = (fattore1 + fattore2) /2.0 ;

  printf("media %d e %d è %.2f\n",fattore1,fattore2,media);

return 0;

  }