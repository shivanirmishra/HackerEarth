//https://www.hackerearth.com/practice/data-structures/arrays/1-d/practice-problems/algorithm/range-query-2/
#include<iostream>

using namespace std;

int main()
    {
        long n,q;
        cin>>n>>q;
        int a[n+1],i,p,l,r,x,sum=0,j;
        for(i=1;i<=n;i++)
            {
                cin>>a[i];
            }
        while(q--)
            {
                cin>>p;
                if(p==0)
                    {
                        sum=0;
                        cin>>l>>r;
                        j=1;
                        for(i=r;i>=l;i--)
                            {
                                //cout<<sum<<endl;
                                sum += j*a[i];
                                j*=2;
                            }
                        //cout<<sum;
                        if(sum%2==0)
                            cout<<"EVEN"<<endl;
                        else
                            cout<<"ODD"<<endl;
                    }
                else
                    {
                        cin>>x;
                        if(a[x]==1)
                            a[x]=0;
                        else
                            a[x]=1;
                    }
            }
        return 0;
    }