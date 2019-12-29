#include<iostream>
#include<string.h>
using namespace std;

int main()
    {
        ios::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        int t,n,q,i,x,y,j,flag=0,temp;
        char a[100000];
        cin>>t;
        while(t--)
            {
                cin>>n>>q;
                cin>>a;
                int data[n+1][26];
                for(i=0;i<26;i++)
                    data[0][i]=0;
                for(i=0;i<n;i++)
                    {
                        temp=int(a[i])-97;
                        for(j=0;j<26;j++)
                            {
                                data[i+1][j]=data[i][j];
                            }
                        data[i+1][temp]++;
                    }
                while(q--)
                {
                    flag=0;
                    cin>>x>>y;
                    temp=0;
                    for(i=0;i<26;i++)
                        {
                            temp=data[y][i]-data[x-1][i];
                            //cout<<temp<<" ";
                            if(temp%2!=0)
                                flag++;
                        }
                    if(flag==0||flag==1)
                        cout<<"YES\n";
                    else
                        cout<<"NO\n";
                }
                
            }
        return 0;
    }
//https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/ispalin/