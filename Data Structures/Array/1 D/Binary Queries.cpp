#include<iostream>

using namespace std;

int main()
    {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        int n,q,x,l,r,y,i;
        cin>>n>>q;
        int a[n];
        for(i=0;i<n;i++)
            cin>>a[i];
        while(q--)
            {
                cin>>x;
                if(x==0)
                    {
                        cin>>l>>r;
                        if(a[r-1]==0)
                            cout<<"EVEN\n";
                        else
                            cout<<"ODD\n";
                    }
                else
                    {
                        cin>>y;
                        if(a[y-1]==1)
                            a[y-1]=0;
                        else
                            a[y-1]=1;
                    }
            }
        
        
        return 0;
    }
//https://www.hackerearth.com/practice/data-structures/arrays/1-d/practice-problems/algorithm/range-query-2/