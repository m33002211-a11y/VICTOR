#include <stdio.h>

float addNumbers(float a, float b, float c, float d)
{
    return a + b + c + d;
}

int main()
{
    float n1, n2, n3, n4, sum;

    printf("Enter 4 float numbers: ");
    scanf("%f %f %f %f", &n1, &n2, &n3, &n4);

    sum = addNumbers(n1, n2, n3, n4);

    printf("Sum = %.2f\n", sum);

    return 0;
}