//https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/one-string-no-trouble-37037871/
#include<stdio.h>
#include<string.h>

int main()
    {
        long int len,i,t1=1,t2=1;
        char a[1000000];
        scanf("%s",a);
        len=strlen(a);
        for(i=0;i<len-1;i++)
            {
                if(a[i]!=a[i+1])
                    {
                        t2++;
                        //printf("if");
                    }
                else
                    {
                        if(t2>t1)
                            t1=t2;
                        t2=1;
                        //printf("else");
                    }
            }
        if(t2>t1)
            t1=t2;
        printf("%ld",t1);
        
        return 0;
    }