#include<iostream>

using namespace std;

int main()
    {
        int t,i,flag=0;
        long n;
        cin>>t;
        while(t--)
            {
                flag=0;
                cin>>n;
                for(i=0;i<10000;i++)
                    {
                        if(n%2==0)
                            n/=2;
                        else
                            n=3*n+1;
                        if(n==1)
                            {
                                flag=1;
                                break;
                            }
                    }
                if(flag==1)
                    cout<<"YES\n";
                else
                    cout<<"NO\n";
            }
        
        return 0;
    }
//https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/conject-it/