#include <stdio.h>

int check_prime(int num);
void print_prime(int num);

int main()
{
    int input = 0;
    printf("input: ");
    scanf("&d", &input);
    print_prime(num);
    check_prime(num);

    return 0;
}
int check_num(int num)
{
    int i = 0;
    int last = num/2;

    if(num <= 1)
    {
        return 0;
    }
    for(i = 2; i<= last; i++)
    {
        if((num%i) == 0)
        {
            return 0;
        }
    }
    return 1;
}
void print_prime(int num)
{
    int num;
    int i = 0;

    printf("input: ");
    while(1)
    {
        scanf("%d", &num);
        if(check_prime(i))
        {
            printf("%3d", i);
        }
        if(num != -1)
            continue;
    }
    printf("\n");
}


