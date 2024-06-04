#include <stdio.h>

int main(){

    //kamus
    int x,y,z,T;

    //algoritma
    printf("Masukkan tahanan 1 =");
    scanf("%d", &x);
    printf("Masukkan tahanan 2 =");
    scanf("%d", &y);
    printf("Masukkan tahanan 3 =");
    scanf("%d", &z);
    
    if(x>0 && y>0 && z > 0){
       T=x+y+z;
        printf("%d",T);
    }else {
        printf("masukan tahan tidak boleh negatif");
}
return 0;
}