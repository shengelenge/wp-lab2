#include <stdio.h>

int main()
{
    int rok;

    printf("Podaj rok: ");
    scanf("%d", &rok);

    if ((rok % 4 == 0 && rok % 100 != 0) || rok % 400 == 0)
        printf("%d rok jest przestepny.", rok);
    else
        printf("%d rok jest nieprzestepny.", rok);

    return 0;
}