#include <stdio.h>

int main(){
    int amount,twot,fivehun,hun=0,fifty=0,ten=0,five=0,two=0,one=0;
    printf("Enter the amount: ");
    scanf("%d",&amount);
    twot = (int)(amount/2000);
    amount %= 2000;
    fivehun = (int)(amount/500);
    amount %= 500;
    hun = (int)(amount/100);
    amount %= 100;
    fifty = (int)(amount/50);
    amount %= 50;
    ten = (int)(amount/10);
    amount %= 10;
    five = (int)(amount/5);
    amount %= 5;
    two = (int)(amount/2);
    amount %= 2;
    one = (int)(amount/1);
    amount %= 1;
    printf("\n\nWe need:");
    if (twot > 0)
    {
        printf("\n\t2000 rupee note x %d",twot);
    }

    if (fivehun > 0)
    {
        printf("\n\t500 rupee note x %d",fivehun);
    }

    if (hun > 0)
    {
        printf("\n\t100 rupee note x %d",hun);
    }

    if (fifty > 0)
    {
        printf("\n\t50 rupee note x %d",fifty);
    }

    if (ten > 0)
    {
        printf("\n\t10 rupee note x %d",ten);
    }

    if (five > 0)
    {
        printf("\n\t5 rupee coin x %d",five);
    }

    if (two > 0)
    {
        printf("\n\t2 rupee coin x %d",two);
    }

    if (one > 0)
    {
        printf("\n\t1 rupee note x %d",one);
    }
    printf("\n");
    return 0;
}