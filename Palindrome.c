#include<stdio.h>
#include<string.h>
#include<ctype.h>

void main()
{
    char String[50];
    printf("Enter A Word : ");
    scanf("%s",String);
    int Lenght=0,Counter=0,Checker=5,Summer;
    for(Summer=0;Summer<50;Summer++)
    {
        if(String[Summer] == NULL)
        {
            break;
        }
        else
        {
            Lenght += 1;
        }
    }
    for(int Looper=Lenght-1;Looper>=0;Looper--)
    {
        if(String[Counter] != String[Looper])
        {
            Checker=10;
        }
        Counter++;
    }
    if(Checker==5)
    {
        printf("\nPalindrome");
    }
    else{
        printf("\nNot A Palindrome");
    }
}