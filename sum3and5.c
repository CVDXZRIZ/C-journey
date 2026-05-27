#include <stdio.h>

int main(void){
    int t = 0;
    int v = 0;
    int vt = 0;
    int final = 0;
    int i;
    //calculate the sum on 3
    for (i=3; i<1000; i+=3){
        t += i;
    }
    //calculate the sum of 5
    for (i=5; i<1000; i+=5){
        v += i;
    }
    //calculate the sum of 15
    for (i=15; i<1000; i+=15){
        vt += i;
    }
    final = t+v-vt;
    printf("============================\n");
    printf("thine searched answer is %i", final);
    printf("\n============================");
}