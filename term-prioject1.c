#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
    double weight[20];
    double height[20];
}human;

human ary[20];

int window();
void operate();
void presskey();
void BMI();
void calorie();
void food_calender();

int main(void)
{
    int i,j,month,day;
    char *ID;
    char *PW;
        char * in_PW = "201720963";
    ID = (char*)malloc(sizeof(char) *10);
    PW = (char*)malloc(sizeof(char) *10);
   
    while(1)
    {

        printf("input your birth: ");
        scanf("%s", ID);

        month =(*(ID+4)-'0')*10 + (*(ID+5)-'0');
        day = (*(ID+6)-'0')*10 +(*(ID+7)-'0');

        if(month < 1 || month > 12)
        {
            printf("ID error \n");
            continue;
        }
        else if(day < 1 || day > 31)
        {
            printf("ID error \n");
            continue;
        }
        else
            break;
    }
    while(1)
    {
        printf("input your PW: ");
        scanf("%s", PW);

        for(i=0; i<9; i++)
        {
            if(*(PW+i) != *(in_PW+i))
            {
                j = 0;
                break;
            }
            j = 1;
        }
        if(j)
        {
            printf("successful login \n");
            break;
        }
        else
        {
            printf("PW error \n");
            continue;
        }
    }
    free(ID);
    free(PW);
    operate();

    return 0;
}
int window()
{
    int token = 0;
    printf("\n\n");
    printf("------------- Health inprovement management ------------ \n");
    printf("1. BMI_measurement 2.calorie_measurement 3.food_calender 0.exit \n"); // 1.BMI 측정 2. 칼로리 측정 3. 
    printf("select_your_number: ");
    scanf("%d", &token);
    return token;
}
void operate(int token)
{
    int c;
    while((c = window()) != 3)
    {
        switch(c)
        {
            case 0: exit(1);
                break;
            case 1: BMI();
                break;
            case 2: calorie();
                break;
            case 3: food_calender();
                break;
            default:printf("Invaild input \n"); 
                break;
        }
    }
}

void BMI()
{
    int i;
    double bmi = 0;
    int count = 0;

    for(i=0; i<3; i++)
    {
         printf("\n\n");
         printf("ex) 84.3 175.2 \n");
         printf("input your weight height: ");
            scanf("%lf %lf", &ary[i].weight[i], &ary[i].height[i]);
        bmi = ary[i].weight[i] / (ary[i].height[i] * ary[i].height[i])*10000;
        printf("%8.1f %8.1f %8.1f \n", ary[i].weight[i], ary[i].height[i], bmi);
        if(bmi>30)
            printf("obesity \n\n"); // 비만
        else if(bmi >= 25)
            printf("overweight \n\n"); // 과체중
        else if(bmi >= 19)
            printf("normal \n\n"); // 정상
        else
            printf("underweight \n\n"); // 저체중
        count++;
        printf("\n");
        printf("user_%d \n", count);
     }
     presskey();
}
void calorie()
{
    int i;
    int gender = 0;
    int age = 0;
    double result = 0;
    int count = 0;

    printf("male calorie average:2500 \n");
    printf("female calorie average:2000 \n");
    printf("male input 1 female input 2 and input age \n");
    scanf("%d %d",&gender, &age);
    
    for(i = 0; i<3; i++)
    {
         if(gender == 1)
        {
              result = 66.47 +(13.75 * ary[i].weight[i]) + (5 * ary[i].height[i]) - (6.76* age);
           // result = 88 + (13 * ary[i].weight[i] + 4 * ary[i].height[i]) - (5 * age);
        }
        else if(gender == 2)
        {
              result = 655.1 +(9.56 * ary[i].weight[i]) +(1.85 * ary[i].height[i]) - (4.68 * age);
           // result = 44 + (9 * ary[i].weight[i] + 3 * ary[i].height[i]) - (4 * age);
        }
        count++;
        printf("\n");
        printf("user_%d \n", count);
        printf("your basic metabolic capacity: %.1lf \n",result); //기초 대사량
        printf("\n");
    }
    presskey();
}
void food_calender()
{
}
void presskey()
{
    char c;
    fflush(stdin);
    printf("\n\n");
    scanf("%c", &c);
}
