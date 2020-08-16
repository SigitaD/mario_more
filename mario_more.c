#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int n;

    //apibreziamas piramides aukstis, kuris turi atitikti salygas
    do
    {
        n = get_int("What's the height of the pyramid?\n");
    }
    while (n > 8 || n < 1);

    //pavaizduoja piramide
    for (int i = 0; i < n; i++)
    {
        //nupiesia taskus
        for (int j = n - 1; j > i; j--)
        {
            printf(" ");
        }

        // nupiesia groteles
        for (int k = 0; k <= i; k++)
        {
            printf("#");
        }
        //nupiesia tarpus piramides viduje
        printf("  ");

        // nupiesia groteles
        for (int k = 0; k <= i; k++)
        {
            printf("#");
        }

        printf("\n");
    }
}