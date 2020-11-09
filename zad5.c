#include <stdio.h>

int main()
{
    char ch;

    printf("Prosze o wpisanie jednego znaku z klawiatury: ");
    scanf("%c", &ch);

    if ((ch > 64 && ch < 91) || (ch > 96 && ch < 123) )
        printf("Jest to litera alfabetu lacinskiego.");
    else
        printf("Nie jest to litera alfabetu lacinskiego.");

    return 0;
}

