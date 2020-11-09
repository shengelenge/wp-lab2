#include <stdio.h>

int main()
{
    int a;

    printf("Podaj liczbe calkowita: ");
    scanf("%d", &a);

    switch (a)
    {
        case 0:
            printf("To jest cyfra zero.");
            break;
        case 1:
            printf("To jest cyfra jeden.");
            break;
        case 2:
            printf("To jest cyfra dwa.");
            break;
        case 3:
            printf("To jest cyfra trzy.");
            break;
        case 4:
            printf("To jest cyfra cztery.");
            break;
        case 5:
            printf("To jest cyfra piec.");
            break;
        case 6:
            printf("To jest cyfra szesc.");
            break;
        case 7:
            printf("To jest cyfra siedem.");
            break;
        case 8:
            printf("To jest cyfra osiem.");
            break;
        case 9:
            printf("To jest cyfra dziewiec.");
            break;
        default:
            printf("To nie jest cyfra.");
            break;
    }

    return 0;
}