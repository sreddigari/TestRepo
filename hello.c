#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int add_numbers(int a, int b) {
    return a+b;
}

int main() {
    int num1=5, num2=6;
    int sum;

    sum = add_numbers(num1,num2);
    printf("The sum is %d",sum);

    return 0;
}
