#include <stdio.h>

//git push testing
// this comments should be ignored
int main(void){
    int i;
    printf("============================\n");
    unsigned char mreow = 67;
    printf("Hello, %d World!\n",mreow); 
    printf("%ld\n\n", __STDC_VERSION__);

    int beta[4];
        beta[0]=9;
        beta[1]=2;
        beta[2]=10;
        beta[3]=10;
    unsigned int a = beta[1] + beta[2] + beta[3] + beta[0];
    for (i=0; i<4; i++){
        printf("%i \n", i);
    }
    printf("thine total grade iiz %i\n",a);
    printf("============================");
    return 0;
}
