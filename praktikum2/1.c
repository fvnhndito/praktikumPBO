#include <stdio.h>

int main(){

    //kamus 
    float i;

    //algoritma 
    printf("masukan bilangan bulat sembarang = ");
    scanf("%d",&i);

    if (i>0){
        printf("bilangan  merupakan bilangan bulat positif");
    }else if (i=0){
        printf("bilangan  merupakan nol ");
    }else {
        printf("bilangan  merupakan bilangan bulat negatif");
    }

    
return 0;



}