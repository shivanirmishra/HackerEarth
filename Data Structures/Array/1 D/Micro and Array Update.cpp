//https://www.hackerearth.com/practice/data-structures/arrays/1-d/practice-problems/algorithm/micro-and-array-update/
#include<iostream>

using namespace std;

int main()
    {
        int t,k,i,j;
        long n,a[1000000],small=9999999;
        cin>>t;
        while(t--)
            {
                cin>>n>>k;
                small=9999999;
                for(i=0;i<n;i++)
                {
                    cin>>a[i];
                    if(a[i]<small)
                        small=a[i];
                }
                j=k-small;
                if(j>0)
                    cout<<j<<endl;
                else
                    cout<<"0"<<endl;
            }
        
        return 0;
    }