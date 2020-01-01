#include<iostream>

using namespace std;

int main()
    {
        long n,q,i,sum;
        cin>>n>>q;
        int a[n],l,r,x,y,z;
        for(i=0;i<n;i++)
            cin>>a[i];
        while(q--)
            {
                cin>>z;
                if(z==1)
                    {
                        cin>>x>>y;
                        a[x]=y;
                    }
                else
                    {
                        sum=0;
                        cin>>l>>r;
                        for(i=l;i<=r;i++)
                            {
                                sum+=a[i];  
                            }
                        cout<<sum<<'\n';
                    }
            }
        return 0;
    }
//https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/array-insert/