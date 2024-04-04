#include<stdio.h>
struct st
{
    int a;
    int b;
    char c;
}structure1;
union un
{
    int a;
    int b;
    char c;
}union1;
int main()
{
    printf("Size of union: %lu\n",sizeof(union1));
    //union takes size of the largest data type in it
    printf("Size of structure: %lu",sizeof(structure1));
    //struct takes the sum of the size of the data types
    return 0;
}