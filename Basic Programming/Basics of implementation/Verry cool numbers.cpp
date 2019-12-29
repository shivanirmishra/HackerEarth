#include<iostream>
using namespace std;

int main()
    {
        int t,r,k,f1,f2,f3,count,vc,temp,i;
        cin>>t;
        while(t--)
            {
                cin>>r>>k;
                vc=0;
                for(i=1;i<=r;i++)
                    {
                        temp=i;
                        f1=f2=f3=count=0;
                        while(temp!=0)
                        {
                            f3=temp%2;
                            if(f1==1&&f2==0&&f3==1)
                                count++;
                            temp=temp/2;
                            f1=f2;
                            f2=f3;
                        }
                        if(count>=k)
                            vc++;
                    }
                    cout<<vc<<'\n';
            }
        return 0;
    }
//https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/very-cool-numbers/