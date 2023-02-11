#include<stdio.h>

int main(){
    int num;
    int fact = 1;
    printf("Enter a Positive Intger: ");
    scanf("%d",&num);
    if(num >= 1){
        for(int i = num;i>=1;i--){
        fact *= i; 
        }
        printf("Factorial of %d is %d",num, fact);
    }
    else if(num == 0){
        printf("Factorial of 0 is 1");
    }
    else{
        printf("Invalid Input! Please try again.");
    }
    return 0;
}
