#include <stdio.h>

int main() {
    int n,sum=0;
    printf("input the number \n");
    scanf("%d",&n);
    printf("the first natural number are\n");
    for(int i=0;i<=n;i++){
        printf("%d",i);
        sum+= i;
    }
    printf("\n the sum of natural numbers upto %d terms: %d\n",n,sum);

    return 0;
}