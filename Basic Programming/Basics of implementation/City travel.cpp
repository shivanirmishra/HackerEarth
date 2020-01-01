#include<iostream>

using namespace std;
long p;
int main()
    {
        long s,x,n,i,j,day=0,temp1,temp0;
        cin>>s>>x>>n;
        long t[n][2];
        for(i=0;i<n;i++)
            cin>>t[i][0]>>t[i][1];
        for(i=0;i<n-1;i++)
            {
                for(j=0;j<n-i-1;j++)
                    {
                        if(t[j][0]>t[j+1][0])
                            {
                                temp0 = t[j][0];temp1 = t[j][1];
                                t[j][0] = t[j+1][0]; t[j][1] = t[j+1][1];
                                t[j+1][0] = temp0; t[j+1][1] = temp1;
                            }
                    }
            }
        //temp=s;
        while(s>0)
            {
                day++;
                if(day==t[p][0])
                    {
                        //cout<<"Inside exception\n";
                        s-=t[p][1];
                        p++;
                    }
                else
                    {
                        s-=x;
                    }
                //cout<<s<<" ";
            }
        cout<<day;
        return 0;
    }
//https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/city-travel-59bad87f/