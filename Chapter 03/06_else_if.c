#include <stdio.h>
// else-if statement

int main()
{
    int age = 45;

    if (age > 60)
    {
        printf("You can drive and you are a senior citizen.\n");
    }
    else if (age > 40)
    {
        printf("You can drive and you are elder.\n");
    }
    else if (age > 18)
    {
        printf("You can drive.\n");
    }
    else
    {
        printf("You cannot drive.\n");
    }
    return 0;
}