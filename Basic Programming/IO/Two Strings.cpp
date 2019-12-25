//https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/two-strings-4/
#include<iostream>

using namespace std;

int main()
    {
        char a[100000],b[100000];
        long t,i,n,flag=0;
        long x[26],y[26];
        cin>>t;
        while(t--)
            {
                cin>>a>>b;
                for(i=0;i<26;i++)
                    {
                        x[i]=0;y[i]=0;
                    }
                for(i=0;(a[i]!=NULL)&&(a[i]!=NULL);i++)
                    {
                        x[int(a[i])-97]++;
                        y[int(b[i])-97]++;
                    }
                flag=0;
                for(i=0;i<26;i++)
                    {
                        if(x[i]!=y[i])
                            flag=1;
                    }
                if(flag==0)
                    cout<<"YES"<<endl;
                else
                    cout<<"NO"<<endl;
            }
        
        return 0;
    }