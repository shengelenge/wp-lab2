#include <stdio.h>

int main()
{
    double a, b, x, y=0;

    printf("Podaj liczby a, b:\n");
    printf("a = ");
    scanf("%lf", &a);
    printf("b = ");
    scanf("%lf", &b);

    if (a == 0)
    {
        printf("Funkcja liniowa jest stała.");
    } else
    {
        x = (y-b)/a;
        printf("Miejsce zerowe f(x)= %.1lf x + %.1lf wynosi, x = %.1lf", a, b, x);
    }

    return 0;
}