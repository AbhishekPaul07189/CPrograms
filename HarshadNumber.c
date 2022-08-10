#include<stdio.h>
#include <stdlib.h>

int main(){
    int Number,Summer=0,LoL;
    printf("Enter A Number : ");
    scanf("%d",&Number);
    LoL = Number;
    while (LoL>0)
    {
        Summer += LoL%10;
        LoL     /= 10;
    }
    if(Number%Summer == 0)
    {
        printf("\nHarshad Number");
    }
    else{
        printf("\nNot Harshad Number");
    }
}