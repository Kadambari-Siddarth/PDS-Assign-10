#include<stdio.h>

union Data
{
    char c;
    float f;
    int i;
};
int main()
{
    union Data d1;
    d1.c='a';
    printf("%c is the value in char c\n",d1.c);
    d1.f=1.01;
    printf("%f is the value in float f\n",d1.f);
    d1.i=5;
    printf("%d is the value in int i\n",d1.i);
    return 0;
}