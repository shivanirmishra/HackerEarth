#include<iostream>

using namespace std;

int main()
    {
        long n,x=0,y=0,z=0,i,t;
        cin>>n;
        for(i=1;i<=n;i++)
            {
                cin>>t;
                if(i%3==1)
                    x+=t;
                else if(i%3 == 2)
                    y+=t;
                else
                    z+=t;
            }
        cout<<x<<" "<<y<<" "<<z;
        return 0;
    }
//https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/the-great-kian/