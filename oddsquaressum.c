#include <stdio.h>
#include <math.h>
//this problem is only for registering into the euler project.
//completely redundant
int main (void){
long long b = 0LL;
long i;
for (i=1; i<=180000; i+=2){
    b += i*i;
}
printf("===========================");
printf("thine answer is %lld\n", b);
printf("===========================");
return 0;
}
