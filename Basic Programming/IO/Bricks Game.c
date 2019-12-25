//https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/bricks-game-5140869d/?utm_source=header&utm_medium=search&utm_campaign=he-search#c181285

#include<stdio.h>

int main()
    {
        int n,i=1,flag=0;
        scanf("%d",&n);
        while(n>0)
            {
                n-=i;flag=1;
                if(n>0)
                    {
                        n=n-(i*2);
                        flag=0;
                    }
                i++;
            }
        if(flag==1)
            printf("Patlu");
        else
            printf("Motu");
        return 0;
    }