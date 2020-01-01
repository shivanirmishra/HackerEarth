#include<iostream>

using namespace std;

int main()
    {
        int n,i,min=101,max=0,t,count=0;
        cin>>n;
        int a[101]={0};
        for(i=0;i<n;i++)
            {
                cin>>t;
                if(min>t)
                    min = t;
                if(max<t)
                    max = t;
                a[t]++;
            }
        for(i=min;i<=max;i++)
            {
                if(a[i]>0)
                    count++;
            }
        if(count==(max-min + 1))
            cout<<"YES";
        else
            cout<<"NO";
        
        return 0;
    }
//https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/min-max-3/