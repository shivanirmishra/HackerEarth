#include<iostream>

using namespace std;

int main()
    {
        int t;
        long a,b;
        cin>>t;
        while(t--)
            {
                cin>>a>>b;
                if(a>b)
                    cout<<a/b<<'\n';
                else
                    cout<<b/a<<'\n';
            }
        return 0;
    }
//https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/fitting-circles-c00a5be3/