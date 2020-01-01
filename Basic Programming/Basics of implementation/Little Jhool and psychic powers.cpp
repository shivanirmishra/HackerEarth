#include<iostream>
#include<string.h>
using namespace std;

int main()
    {
        char a[100];
        cin>>a;
        int l,i,flag=0,count=0,c=0;
        l = strlen(a);
        for(i=0;i<l;i++)
            {
                if(a[i]=='0')
                    {
                        if(c==0)
                            count++;
                        else
                            {c=0;count=1;}
                    }
                else
                    {
                        if(c==1)
                            count++;
                        else
                            {c=1;count=1;}
                            
                    }
                if(count>=6)
                    {
                        flag=1;
                        break;
                    }
            }
        if(flag==0)
            cout<<"Good luck!";
        else
            cout<<"Sorry, sorry!";
        
        return 0;
    }
//https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/psychic-powers/