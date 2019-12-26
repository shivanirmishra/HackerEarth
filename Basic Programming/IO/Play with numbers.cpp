#include<iostream>
using namespace std;

int main()
    {
        long n,q,i,a,b,m=0,j,count;
        cin>>n>>q;
        long arr[n],sum[n+1];
        sum[0]=0;
        for(i=0;i<n;i++)
            {
                cin>>arr[i];
                m+=arr[i];
                sum[i+1]=m;
                //cout<<m<<endl;
            }
        for(i=0;i<q;i++)
            {
                m=0;count=0;
                cin>>a>>b;
                cout<<(sum[b]-sum[a-1])/(b-a+1)<<endl;
            }
        
        return 0;
    }
//https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/play-with-numbers-2/