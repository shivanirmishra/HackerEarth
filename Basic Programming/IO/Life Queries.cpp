//https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/lift-queries/
#include<iostream>
#include<cstdlib>
using namespace std;

int main()
    {
        int a=0,b=7,t,n;
        cin>>t;
        while(t--)
            {
                cin>>n;
                if(abs(a-n)<=abs(b-n))
                    {
                        a=n;
                        cout<<'A'<<endl;
                    }
                else
                    {
                        b=n;
                        cout<<'B'<<endl;
                    }
            }
        
        return 0;
    }