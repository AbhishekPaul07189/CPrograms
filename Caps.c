#include<stdio.h>
#include<string.h>
#include<ctype.h>

void main()
{
    char String[50];
    printf("Enter A Word : ");
    scanf("%s",String);
    int Lenght = strlen(String),SC=0,CC=0,NUM=0;
    for(int Looper=0;Looper<Lenght;Looper++)
    {
        if(isupper(String[Looper]) && isalpha(String[Looper]))
        {
            CC += 1;
        }
        if(islower(String[Looper]) && isalpha(String[Looper]))
        {
            SC += 1;
        }
        if(isdigit(String[Looper]))
        {
            NUM += 1;
        }
    }
    printf("\nCapital = %d\nSmall = %d\nNumbers = %d",CC,SC,NUM);
}