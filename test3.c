#include<stdio.h>
#define _CRT_SECURE_NO_WARNINGS

void print_graph(int *ps, int size);

int main(void){                             //별 출력

    int score[100];
    int size = 0;

    printf("input: ");
    while((scanf("%d", &score[size])) != -1){
        size++;
        printf("input: ");
    }
    print_graph(score, size);

    return 0;
}
void print_graph(int *ps, int size){
    int i,j,share;

    for(i=0; i<size; i++){
        printf("(%3d) ", ps[i]);
        share = ps[i] / 5;
        for(j=0; j<share; j++)
            printf("*");
            printf("\n");
    }
}

