#include <stdio.h>

void test(int *pa, int size);

int main()
{
    int ary[5] = {10, 20, 30, 40, 50};
    int ary2[7] = {10, 20, 30, 40, 50, 60, 70};

    test(ary,5);
    printf("\n");
    test(ary2,7);

    return 0;
}

void test(int *pa, int size)
{
    int i;

    for(i=0; i<size; i++)
    {
        printf("%d ", pa[i]);
    }
}
