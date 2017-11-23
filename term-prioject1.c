#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct{

    double weight;
    double height;
}human;

#define storage 20
struct human ary[storage];

int  login();
void calorie();
void BMI();
void operate();
int window();
void user_info();
void print_user_info();
int main(void)
{
    login();
    window();
    operate();
    BMI();
    user_info();
    print_user_info();

    return 0;
}
int login(void)
{
    char *ID;
    char *PW;
        char *in_PW = "1234567";
        char *in_ID = "201720963";
    int i,j,class;
    ID = (char*)malloc(sizeof(char)*10);
    PW = (char*)malloc(sizeof(char)*10);
    
    while(1)
    {
        printf("input your ID: ");
        scanf("%s",ID);

        if(ID != "201720963")
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

        if(PW != "1234567")
        {
            printf("PW error \n");
        }
        else
        {
            printf("successfully login \n");
            return 0;
        }
    }
    free(ID);
    free(PW);
}
void operate()
{
    int token = 0;
    while((token = window()) != 0)
    {
        switch(token)
        {
            case 0: exit(1);
            case 1: BMI();
            case 2: calorie();
        }
    }
}
int window()
{   
    int token = 0;
    printf("************************************************************* \n");
    printf("Health improvement management \n");
    printf(" 1.BMI_measurement 2.calorie_measurement 3.        0.exit\n");
    printf("************************************************************* \n");
    scanf("%d", &token);
    return token;
}

void BMI()
{
    int i;
    double bmi = 0;
    double weight;
    double height;
    
    for(i=0; i<storage; i++)
    {
         printf("input your weight height: ");
         printf("ex) 84.3 175.2 \n");
            scanf("%lf %lf", &ary[i].weight, &ary[i].height);
        bmi = ary[i].weight / (ary[i].height * ary[i].height)*10000;
        printf("%-10.1f %-10.1f %-10.1f", ary[i].weight, ary[i].height, bmi);
        if(bmi>30)
            printf("obesity \n");
        else if(bmi >= 25)
            printf("overweight \n");
        else if(bmi >= 19)
            printf("normal \n");
        else
            printf("underweight \n");
        
    }
}
void calorie()
{
    int i;
    int gender = 0;
    int age = 0;
    int result = 0;

    printf("male calorie average:2500 \n");
    printf("female calorie average:2000 \n");
    printf("male input 1 female input 2 and input age \n");
    scanf("%d %d",&gender, &age);
    
    for(i = 0; i<storage; i++)
    {
         if(gender == 1)
        {
            result = 88 + (13*ary[i].weight + 4*ary[i].height) - (5 * age);
        }
        else if(gender == 2)
        {
            result = 44 + (9*ary[i].weight + 3*ary[i].height) - (4 *age);
        }
    }
    printf("your basic metabolic capacity: %d \n",result);
}
