#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS_

void start_print(int *ps, int size);

int main(void){
    int arr[100];
    int size = 0;

    printf("input: ");
    while((scanf("%d", &arr[size]) != -1)){
        printf("input: ");
        size++;
    }
    start_print(arr,size);

    return 0;
}
void start_print(int *ps, int size)
{
    int i,j,share;
    
    for(i=0; i<size; i++)
    {
        printf("%3d", ps[i]);
        share = ps[i]/5;
        for(j=0; j<share; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}
