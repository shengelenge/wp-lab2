#include <stdio.h>

int main()
{
    int x, y;

    printf("Podaj wspolrzedne punktu P(x,y):\n");
    printf("x = ");
    scanf("%d", &x);
    printf("y = ");
    scanf("%d", &y);

    if ((x >= -10 && x <= 10) && (y >= -10 && y <= 10))
        printf("Punkt P(x,y) znajduje się w kwadracie.");
    else
        printf("Punkt P(x,y) jest poza kwadratem.");

    return 0;
}