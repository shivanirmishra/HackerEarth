//https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/golf/modulo-strength-4/?utm_campaign=weekly_hackathon_reco&utm_medium=email&utm_source=recommendation&utm_content=hackathon#c180946
#include<stdio.h>

long int m[100000],n,k;
long int temp,b[100000],t=0;

main()
{
    int n,s,i;
    scanf("%d%d",&n,&s);
    
    for(i=0;i<n;i++)
    {
        scanf("%ld",&temp);
        b[temp%s]++;
    }
        for(i=0;i<s;i++)
            if(b[i]!=0)
                t += b[i]*(b[i]-1);
        printf("%ld",t);
    
}

/*
int main()
    {
        long int i,temp,sum=0;
        scanf("%ld%ld",&n,&k);
        
        for(i=0;i<n;i++)
            {
                m[i]=-1;
            }
        for(i=0;i<n;i++)
            {
                scanf("%ld",&temp);
                m[temp%k]++;
            }
        
        for(i=0;i<n;i++)
            {
                if(m[i]>0)
                    sum+=(m[i]+1)*m[i];
            }
        
        printf("%ld",sum);
        return 0;
    }
*/
