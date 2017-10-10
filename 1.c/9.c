#include <stdio.h>

int main()
{
    char small;
    char cap[5];
    char *pa = cap;

    scanf("%s", cap);

    for(int i=0; i<cap[5]; i++)
    {

        if((cap >= 'a') && (cap >= 'z'))
        {
            small = cap - ('a' - 'A');
        }
        printf("big: %s \n",small);

