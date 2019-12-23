//https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/mojtaba-prepares-contest-29b2a044/

#include<iostream>

using namespace std;

int main()
    {
        int t,p,q,n,a,b,count1=0,count2=0;
        cin>>t;
        while(t--)
            {
                cin>>p>>q;
                cin>>n;
                count1=0;count2=0;
                while(n--)
                    {
                        cin>>a>>b;
                        count1+=a;
                        count2+=b;
                    }
                if(p<q)
                    {
                        if(count1>count2)
                            {
                                count1=count1*p;
                                count2=count2*q;
                            }
                        else
                            {
                                count1=count1*q;
                                count2=count2*p;
                            }
                    }
                else
                    {
                        if(count1<count2)
                            {
                                count1=count1*p;
                                count2=count2*q;
                            }
                        else
                            {
                                count1=count1*q;
                                count2=count2*p;
                            }
                    }
                count1+=count2;
                cout<<count1<<endl;
            }
        
        return 0;
    }