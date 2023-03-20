#include <stdio.h>
void biggest_of_three(int a, int b, int c){
    int biggest = a;
    if (b > biggest)
        biggest = b;
    if (c > biggest)
        biggest = c;
    printf("The biggest number is: %d\n", biggest);
}

int main(){
    int a, b, c;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    biggest_of_three(a, b, c);
    return 0;
}

