#include<iostream>
using namespace std;

int main()
    {
        int n,i,j,k;
        cin>>n;
        long a[n],sum[n+1],m=0;
        sum[0]=0;
        for(i=0;i<n;i++)
            {
                cin>>a[i];
                m+=a[i];
                sum[i+1]=m;
                //cout<<sum[i+1]<<endl;
            }
        long ans=-100000000,temp;
        for(i=0;i<n;i++)
            {
                temp=0;
                j=i;k=1;
                while((j+k)<=n)
                    {
                        temp+=(sum[j+k]-sum[j]);
                        //cout<<temp<<endl;
                        j+=k;
                        k++;
                    }
                //cout<<temp<<endl;
                if(ans<temp)
                    ans = temp;
            }
        cout<<ans;
        
        return 0;
    }
//https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/best-index-1-45a2f8ff/