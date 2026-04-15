#include <stdio.h>

void main()
{
    unsigned char lista[256];
    int i;

    for (i = 0; i < 256; i++)
    {
        lista[i] = i;
    }

    for (i = 0; i < 256; i++)
    {
        printf("%c\n", lista[i]);
    }

    printf("Made by Davi Sales");
}
