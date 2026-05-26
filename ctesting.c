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

    int alpha [2][4];
        alpha[0][0]=9;
        alpha[0][1]=4;
        alpha[0][2]=5;
        alpha[0][3]=7;

        alpha[1][0]=20;
        alpha[1][1]=10;
        alpha[1][2]=12;
        alpha[1][3]=16;
    unsigned int a = beta[1] + beta[2] + beta[3] + beta[0];

    float gamma = 90;
    for (i=0; i<4; i++){
        printf("%i \n", i);
    }
    printf("thine total grade iiz %i\n",a);
    printf("%f and an %i\n",gamma, alpha[0][0]);
    printf("============================");
    return 0;
}
