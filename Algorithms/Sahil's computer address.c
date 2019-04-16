//https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/sahils-computer-address-20/?utm_campaign=weekly_hackathon_reco&utm_medium=email&utm_source=recommendation&utm_content=hackathon
#include<stdio.h>
#include<string.h>

char ip[64];
int n;

int main()
    {
        int i,len=0,sum=0,count=0,flag=0,value;
        char x;
        
        while(x=getchar())
            {
                len++;
                if(len>16)
                    {
                        //printf("too long");
                        flag=1;
                        goto last;
                    }
                    
                if(x == '\n'|| x == '\0')
                    goto last;
                if(x=='.')
                    {
                        sum=0;
                    }
                else
                    {
                        value = x - 48;
                        if((value > 9) || (value < 0))
                            {
                                goto last;
                            }
                        if(sum==0)
                            count++;
                        sum *= 10;
                        sum += ( x - 48 );
                        //printf("\n %c",x);
                        if(sum > 255)
                            {
                                flag=1;
                                //printf("sum %d",sum);
                                goto last;
                            }
                            
                    }
            }
        
        if(count!=4)
            {
                //printf("count");
                flag=1;
            }
            
        
        last:
        if((flag==0)&&(len>6))
            printf("YES");
        else
            printf("NO");
        
    }