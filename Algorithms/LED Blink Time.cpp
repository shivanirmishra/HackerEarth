#https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/roy-and-leds-6/
#include<iostream>

using namespace std;


int main()
{
    long int t,rr,gg,bb,i;

        cin>>t>>rr>>gg>>bb;
        int r[1000000];
        int g[1000000];
        int b[1000000];
        for(i=0;i<1000000;i++)
        {
            r[i]=0;
            g[i]=0;
            b[i]=0;
        }

        long int r1=rr;
        while(r1<t)
        {
            for(i=r1;i<r1+rr;i++)
            {
                r[i]=1;
            }
            r1 = r1+2*rr;
        }

        long int g1=gg;
        while(g1<t)
        {
            for(i=g1;i<g1+gg;i++)
            {
                g[i]=1;
            }
            g1 = g1+2*gg;
        }

        long int b1=bb;
        while(b1<t)
        {
            for(i=b1;i<b1+bb;i++)
            {
                b[i]=1;
            }
            b1 = b1+2*bb;
        }
        long int RED=0,GREEN=0,BLUE=0,YELLOW=0,CYAN=0,MAGNETA=0,WHITE=0,BLACK=0;
        for(i=0;i<t;i++)
        {
            if(r[i]==1 && g[i]==0 && b[i]==0)
                RED++;
            if(r[i]==0 && g[i]==1 && b[i]==0)
                GREEN++;
            if(r[i]==0 && g[i]==0 && b[i]==1)
                BLUE++;
            if(r[i]==1 && g[i]==1 && b[i]==0)
                YELLOW++;
            if(r[i]==0 && g[i]==1 && b[i]==1)
                CYAN++;
            if(r[i]==1 && g[i]==0 && b[i]==1)
                MAGNETA++;
            if(r[i]==1 && g[i]==1 && b[i]==1)
                WHITE++;
            if(r[i]==0 && g[i]==0 && b[i]==0)
                BLACK++;
        }
        cout<<RED<<" "<<GREEN<<" "<<BLUE<<" "<<YELLOW<<" "<<CYAN<<" "<<MAGNETA<<" "<<WHITE<<" "<<BLACK;
}