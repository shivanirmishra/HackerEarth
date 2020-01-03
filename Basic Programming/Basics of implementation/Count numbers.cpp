#include<iostream>
#include<string.h>
using namespace std;

int main()
    {
        int t,n,count,i,prev=0;
        cin>>t;
        char a[10000];
        while(t--)
            {
                cin>>n>>a;
                n = strlen(a);
                count=0;
                for(i=0;i<=n;i++)
                    {
                        if(a[i] >= 48 && a[i] <= 57)
                            {
                                // if(prev==0)
                                // {
                                //     prev=1;
                                //     count++;
                                // }
                                prev++;
                            }
                        else
                            {
                                //prev=0;
                                if(prev!=0)
                                    {
                                        prev=0;
                                        count++;
                                    }
                            }
                    }
                cout<<count<<'\n';
            }
        return 0;
    }
//https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/count-numbers-46/