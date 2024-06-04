#include <stdio.h>

int main(){

    //kamus 
    int h;
    
    //algoritma 
    printf("masukan nomer hari =");
    scanf("%d",&h);
    if(h==1){
        printf("minggu");
    }else if(h==2){
        printf("senin");
    }else if (h==3){
        printf("selasa");
    }else if(h==4){
        printf("rabu");
    }else if (h==5){
        printf("kamis");
    }else if (h==5){
        printf("kamis");
    }else if (h==6){
        printf("jumat");
    }else if (h==7){
        printf("sabtu");
    }else{
        printf("nomer hari yang di masukan tidak sesuai");
    }

return 0;
}