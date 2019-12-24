//https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/split-house-547be0e9/

#include<iostream>

using namespace std;

int main()
    {
        int n,flag=0;
        char a[20];
        
        cin>>n;
        cin>>a;
        for(int i = 0 ; i<n; i++)
            {
                if(a[i]=='.')
                    a[i]='B';
                if(i>0&&i<(n-1)&&a[i]=='H')
                    {
                        if(a[i-1]=='H'||a[i+1]=='H')
                            {
                                flag=1;
                                break;
                            }
                    }
                if(i==0&&a[i]==a[i+1])
                    {
                        flag=1;
                        break;
                    }
            }
        if(flag==1)
            cout<<"NO";
        else
        {
            cout<<"YES\n";
            cout<<a;
            
        }
        return 0;
    }