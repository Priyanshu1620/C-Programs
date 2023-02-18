#include<stdio.h>

int fact(int n){
    if(n==0){
        return 1;
    }
    else if(n==1){
        return 1;
    }
    else{
        return n*fact(n-1);
    }
}

int main(){
    int n;
    printf("Enter a Number: \n");
    scanf("%d",&n);
    printf("Factorial of %d is %d",n, fact(n));
    return 0;
}
