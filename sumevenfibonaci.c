#include <stdio.h>

int main (void){
    long boot1=1L;
    long boot2=2L;
    long store=0L;
    for (boot1 = boot1; boot1<=4000000; boot1 = boot1){
        long temp = boot1 + boot2;
        boot1 = boot2;
        boot2 = temp;
        if (boot1%2 == 0){
            store += boot1;
        }
        printf("%ld  %ld\n", boot1, boot2);
    }
    printf("===========================\n");
    printf("thine answer is %ld\n", store);
    printf("===========================");
}