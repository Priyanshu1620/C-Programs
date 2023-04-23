//Towe of Hanoi Program for 3 Poles
#include<stdio.h>

void hanoi(int n, int a,int b,int c){
    if(n>0){
        hanoi(n-1,a,c,b);
        printf("%d->%d\n",a,c);
        hanoi(n-1,b,a,c);
    }
}

int main(){
    int n = 3;
    int a,b,c;
    printf("Enter 3 Pole Numbers: ");
    scanf("%d %d %d",&a,&b,&c);
    hanoi(n,a,b,c);
    return 0;
}
