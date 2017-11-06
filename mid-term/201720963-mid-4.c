#include <stdio.h>

void swap(double *pa, double *pb);
void line_up(double *maxp, double *minp);
float float_mod(float x, float y);

int main(void)
{
    int i=0;
    int sum=0;
    int ave=0;
    double max = 0, min = 100000;
    int mod=0;
    int a,b,c;
    int arr[100];
    
    while((scanf("%d", &arr[i] != -1)) // for 이용
        i++;

    for(a = 0; a<i; a++)
        for(b = 0; b<i; b++)
            if(arr[a] < arr[b])
             swap(&arr[a],&arr[b]);
            else
                continue;
    line_up(&maxp, &minp);
        
    for(c=0; c<i; c++)
        sum = sum+arr[c];
        printf("%d \n", sum);
        ave = sum / (i);
        printf("%d \n", ave);
        mod = float float_mod(float x, float y);
        printf("%lf \n", mod);

}
void swap(double *pa, double *pb)
{
    double temp;

    temp = *pa;
    *pa = *pb;
    *pb = temp;
}
void line_up(double *maxp, double *minp) 
{
    double maxtmp=arr[0];
    double mintmp=arr[0];
    for(int i = 0;
    printf("%d", *maxp);
    printf("%d", *minp);
    
    
}
float float_mod(float x, float y)
{
    while(x>y) x-y;
    return x;
}

    


