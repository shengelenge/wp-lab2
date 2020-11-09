#include <stdio.h>

int main()
{
    unsigned int a, b;
    int iloraz;

    printf("Liczba naturalna a: ");
    scanf("%d", &a);
    printf("Liczba naturalna b: ");
    scanf("%d", &b);




    if (b == 0)
        printf("Nie mozna dzielic przez 0.");
    else {
        iloraz = a / b;
        printf("Iloraz liczb a i b: %d", iloraz);
    }

    return 0;
}