#include<stdio.h>
#include<ctype.h>
#include<string.h>

void main(){
    char Word[1000];
    int Lenght,Counter,Looper,Adder,Summer,Miner=0;
    printf("Enter A Word : ");
    scanf("%s",Word);
    Lenght = strlen(Word);
    Adder = Lenght;
    for(Looper=0;Looper<Lenght;Looper++)
    {
        Miner=Looper;
        for(Summer=0;Summer<Adder;Summer++)
        {
            for(Counter=Summer;Counter<=Miner;Counter++)
            {
                printf("%c",Word[Counter]);
            }
            Miner+=1;
            printf("\n");
        }
        Adder -= 1;
    }
}