#include <stdio.h>

int main()
{
    float num;
    float num1;
    char i;

    scanf("%f %f %c",&num, &num1, &i);

    switch(i)
    {
        case '+':
        printf("%f + %f = %f", num, num1, num+num1);
        break;

        case '-':
        printf("%f - %f = %f", num, num1, num-num1);
        break;

        case '*':
        printf("%f * %f = %f ", num, num1, num*num1);
        break;

        case '/':
        printf("%f / %f = %f ", num, num1, num/num1);
        break;
    }


    

    return 0;
}
