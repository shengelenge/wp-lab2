#include <stdio.h>

int main()
{
    double c, f;

    printf("Podaj temperature w stopniach Celcjusza: ");
    scanf("%lf", &c);

    f = (c * 1.8) + 32;

    printf("%.2lf stopni Celcjusz to %.2lf stopni Farenheit'a.", c, f);

    return 0;
}