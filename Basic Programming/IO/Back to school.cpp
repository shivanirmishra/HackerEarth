#include<iostream>
using namespace std;

int main()
    {
        int a,b,c;
        cin>>a>>b>>c;
        if(a>=b)
            {
                if(a>=c)
                    cout<<a;
                else
                    cout<<c;
            }
        else
            {
                if(b>=c)
                    cout<<b;
                else
                    cout<<c;
            }
        return 0;
    }
//https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/back-to-school-1/