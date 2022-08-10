#include<stdio.h>
#include<string.h>

int main()
{
    int Number,NumLength,Looper=10,Summer=0;
    int NTR,Replacement;
    printf("Enter A Number : ");
    scanf("%d",&Number);
    printf("\nEnter A Number To Replace : ");
    scanf("%d",&NTR);
    printf("\nEnter A Number For Replacement : ");
    scanf("%d",&Replacement);
    for(NumLength=1;NumLength<Number;NumLength++)
    {
        if(Number/Looper <= 0)
        {
            break;
        }
        else
        {
            Looper *= 10; 
        }
    }
    char StringNumber[NumLength],Result[NumLength],StringReplacement[1],StringNTR[1];
    sprintf(StringNumber,"%d",Number);
    sprintf(StringNTR,"%d",NTR);
    sprintf(StringReplacement,"%d",Replacement);
    for(Summer=0;Summer<NumLength;Summer++)
    {
        if(StringNumber[Summer] == StringNTR[0])
        {
            Result[Summer] = StringReplacement[0];
        }
        else
        {
            Result[Summer] = StringNumber[Summer];
        }
    }
    printf("%s",Result);

}
