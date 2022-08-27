#include<stdio.h>
#include<ctype.h>
#include<string.h>

void main(){
    char Word[20],Words[20];
    int Lenght,Counter,Looper,Checker,Summer=1;
    printf("Enter A Word : ");
    scanf("%s",Word);
    printf("\nEnter Anyother Word : ");
    scanf("%s",Words);
    Lenght = strlen(Word);
    if(Lenght == strlen(Words))
    {
        for(Looper=0;Looper<Lenght;Looper++)
        {
            Checker =5;
            for(Counter=0;Counter<Lenght;Counter++)
            {
                if(tolower(Words[Looper])==tolower(Word[Counter]))
                {
                    Checker=10;
                }
            }
            if(Checker==10)
            {
                Summer  += 1;
            }
        }
        if(Summer!=Lenght)
        {
            printf("\nAnagrams");
        }
        else
        {
            printf("\nNot An Anagrams");
        }
    }
    else
    {
        printf("\nNot An Anagrams");
    }

}