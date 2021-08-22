#include <stdio.h>
int main(){
    int n,rem=0,count=0;
    scanf("%d",&n);
    while(n!=0){
        rem = rem + n%10;
        count++;
        n/=10;
    }

    printf("%d",rem/count);
    return 0;

}