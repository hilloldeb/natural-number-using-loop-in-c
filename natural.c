#include<stdio.h>

int main(){
    int i, n;

    printf("Enter the number:\n");
    scanf("%d", &n);

    printf("The natural number from 1 to %d is:\n", n);

    for(int i = 1; i <=n; i++){
        printf("%d\n",i);
    }
    return 0;
}
