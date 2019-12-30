#include<iostream>
#include<string.h>
using namespace std;

int main()
    {
        int k,l,i;
        char a[20];
        cin>>a>>k;
        l = strlen(a);
        for(i=0;k>0;i++)
            {
                if(a[i]!='9')
                    {
                        a[i]='9';
                        k--;
                    }
            }
        for(i=0;i<l;i++)    
            cout<<a[i];
            
        return 0;
    }
//https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/digit-problem/