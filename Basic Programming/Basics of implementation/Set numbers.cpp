#include<iostream>

using namespace std;

int main()
    {
        long t,n,temp=1;
        cin>>t;
        while(t--)
            {
                cin>>n;
                temp = 1;
                while(temp<=n)
                    {
                        temp *= 2;
                    }
                if((temp - 1) != n)
                    temp /= 2;
                cout<<temp - 1<<endl;
            }
        
        return 0;
    }
//https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/set-numbers-bea74f5a/