#include <stdio.h>

int main(void){

    char input[256];
    int size = 0;
    char a;


    printf("input: ");
    scanf("%s", input);

    while(input[size] != '\0'){
        size++;
        a = 'a' - 'A';
    }

    for(int i=0; i<size; i++)
    {
        if(input[i] >= 'a' && input[i] <= 'z')
            printf("%c", input[i] - a);
        else if(input[i] >= 'A' && input[i] <= 'Z')
            printf("%c", input[i] + a);
        else
            printf("%c", input[i]);
    }

return 0;
}







