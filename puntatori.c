#include <stdio.h>

 void scriviVettore(int *ptr){
    for(int i=0; i < 10; i++)

        printf("\nInserisci n[%d]:  ");
        scanf("%d", ptr);
        ptr++;

 }

 void leggiVettore(int *ptr){
    for (int i=0; i< 10; i++){
        printf("\nelemento n[%d] = %d (zona memoria 0x%x)",i, *ptr, ptr);
          
    }

 }

 int main(){
    int n[10]= {0};
    int *n_ptr;
    
    n_ptr = &n[0];

    scriviVettore (n_ptr);
    leggiVettore (n:ptr);

     }
