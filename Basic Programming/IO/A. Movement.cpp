#include<iostream>
using namespace std;

int main()
    {
        int n;
        cin>>n;
        int r = n%5,ans=n/5;
        if(r==0)
            cout<<ans;
        else
            cout<<ans + 1;
        
        
        return 0;
    }
//https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/a-movement-1/