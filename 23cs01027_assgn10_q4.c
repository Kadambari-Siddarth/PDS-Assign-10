#include <stdio.h>
#include <string.h>
union arrays
{
    int a[10];
    char b[10];
    float c[10];
} x;
int main()
{
    for (int i = 0; i < 10; i++)
        x.a[i] = i;
    printf("Integers- \n");
    for (int i = 0; i < 10; i++)
        printf("%d ", x.a[i]);
    printf("\n");
    for (int i = 0; i < 10; i++)
        x.c[i] = i/10.0;
    printf("Float- \n");
    for (int i = 0; i < 10; i++)
        printf("%f ", x.c[i]);
    printf("\n");
    strcpy(x.b,"123456\0");
    printf("characters- \n");
    printf("%s",x.b);
    return 0;
}