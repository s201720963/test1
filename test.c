#include <stdio.h>            // 내림차순 정렬

void swap(double *pa, double *pb);
void sort(double *pmax, double *pmid, double *pmin);

int main(void){
    double max, mid, min;

    printf("input: ");
    scanf("%lf%lf%lf",&max, &mid, &min);

    sort(&max, &mid, &min);

    printf("result: %.1lf, %.1lf, %.1lf \n",min, mid, max);
}
void swap(double *pa, double *pb){
    double temp;

    temp = *pa;
    *pa = *pb;
    *pb = temp;
}
void sort(double *pmax, double *pmid, double *pmin){
    if(*pmax < *pmid){
        swap(pmax, pmid);
    }
    if(*pmax < *pmin){
        swap(pmax, pmin);
    }
    if(*pmid < *pmin){
        swap(pmid, pmin);
    }
}
