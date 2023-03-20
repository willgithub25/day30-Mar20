#include <stdio.h>
#include <stdlib.h>

int sum_of_n_even(int n){
    if(n==0){
        return 0;
    }
    else{
        return 2*n + sum_of_n_even(n-1);
    }
}

int main(){
    int n;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    printf("The sum of first %d even numbers is %d",n,sum_of_n_even(n));
    return 0;
}

