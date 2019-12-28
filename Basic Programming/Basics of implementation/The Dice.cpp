#include<iostream>
#include<string.h>

using namespace std;

int main()
    {
        int i,count=0,l,flag=0;
        char a[100000];
        cin>>a;
        l=strlen(a);
        for(i=0;i<l;i++)
            {
                if((int(a[i])-48)==6)
                    {
                        flag=1;
                        continue;
                    }
                else
                    {
                        flag=0;
                        //cout<<(int(a[i])-48)<<"\t";
                        count++;
                    }
            }
        if(flag==1)
            cout<<"-1";
        else
            cout<<count;
        
        return 0;
    }
//https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/the-dice-d4dc5b11/