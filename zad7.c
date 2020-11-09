#include <stdio.h>

int main()
{
    double c, f;

    printf("Podaj temperature w stopniach Farenheit'a: ");
    scanf("%lf", &f);

    c = (f - 32)/1.8;

    printf("%.2lf stopni Farenheit'a to %.2lf stopni Celcjusza.", f, c);

    return 0;
}