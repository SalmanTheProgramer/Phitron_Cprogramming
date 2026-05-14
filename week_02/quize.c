#include <stdio.h>

int main() {
    
    int x =4;

    // if(x<5){printf("hello");}

    // if(x<=10){
    //     printf("hi");
    // }else{printf("no");}
    
    if(x%2 != 0){
        printf("odd");
    }else{
        printf("even");
    }

    if(x>0){
        printf("pos");
    }else{
        printf("neg");
    }

    return 0;
}