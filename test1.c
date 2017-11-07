#include <stdio.h>               //로또번호 맞추기

void check_num(int *lotto, int *input);

int main(void){
    
    int lotto_num[6] = {1, 2, 3, 10, 20, 30};
    int input[6];

    printf("input: ");
    scanf("%d%d%d%d%d%d", &input[0], &input[1],&input[2], &input[3], &input[4], &input[5]);

    check_num(lotto_num, input);
    
    return 0;
}
void check_num(int *lotto, int *input){

    int count = 0, i, j;

    for(i=0; i<6; i++)
    {
        for(j=0; j<6; j++)
            if(lotto[j] == input[i])
            {
                count++;
            }
    }
    printf("%d \n", count);
}

