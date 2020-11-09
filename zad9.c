#include <stdio.h>

int main()
{
    char ch;

    printf("Wpisz jeden znak: ");
    scanf("%c", &ch);

    if (ch > 96 && ch < 123)
        printf("Wczytany znak jest mala litera.");
    if (ch > 64 && ch < 91)
        printf("Wczytany znak jest wielka litera.");
    if (ch > 47 && ch < 58)
        printf("Wczytany znak jest cyfra.");
    if ((ch > 31 && ch < 48) || (ch > 57 && ch < 65) || (ch > 90 && ch < 97) || ch > 122)
        printf("Wczytany znak nie jest ani litera ani cyfra.");

    return 0;


}