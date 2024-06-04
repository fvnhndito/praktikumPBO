#include <stdio.h>

int main(){

    //kamus 
    int h;
    //algoritma 
    printf("masukan nomer bulan yang sesuai =");
    scanf("%d",&h);
    if(h==1){
        printf("januari");
    }else if (h==2){
        printf("februari");
    }else if (h==3){
        printf("maret");
    }else if (h==4){
        printf("april");
    }else if (h==5){
        printf("mei");
    }else if (h==6){
        printf("juni");
    }else if (h==7){
        printf("juli");
    }else if (h==8){
        printf("agustus");
    }else if (h==9){
        printf("september");
    }else if (h==10){
        printf("oktober");
    }else if (h==11){
        printf("november");
    }else if (h==12){
        printf("desember");
    }else{
        printf("nomor bulan yang dimasukkan tidak sesuai");

    }
return 0;
}