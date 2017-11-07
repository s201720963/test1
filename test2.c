#include <stdio.h>
#include <string.h>

int char_count(char *word[], int size);  // 입력받은단어의크기계산

int main(void){
    int i=0;
    char ch[10][20];
    char *word[10];

    while((scanf("%s", ch[i])) != -1)
    {
        printf("input: ");
        word[i]=ch[i];
        i++;
    }
    char_count(word,i);
    
    return 0;
}
int char_count(char *word[], int size){
    int j=0;
    char *longest=word[j];
    char *shortest=word[j];

    for(j=0; j<size; j++){
        if(strlen(longest)<strlen(word[j]))
            longest=word[j];
        else if(strlen(shortest)>=strlen(word[j]))
            shortest=word[j];
    }
    printf("%d \n",size);
    printf("%s \n",longest);
    printf("%s \n",shortest);

    return 0;
}

