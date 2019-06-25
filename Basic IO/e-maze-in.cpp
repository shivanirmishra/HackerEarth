//https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/e-maze-in-1aa4e2ac/
#include<iostream>
using namespace std;

int main()
    {
        int x=0,y=0,i;
        char s[200];
        
        cin>>s;
        for(i=0;s[i]!=NULL;i++)
            {
                if(s[i]=='L')
                    x--;
                if(s[i]=='R')
                    x++;
                if(s[i]=='U')
                    y++;
                if(s[i]=='D')
                    y--;
            }
        cout<<x<<" "<<y;
        return 0;
    }