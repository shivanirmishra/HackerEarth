#include<iostream>

using namespace std;

int main()
    {
        long n;
        int i,a[26]={0},flag=1,count=0;
        cin>>n;
        char str[n];
        cin>>str;
        for(i=0;i<n;i++)
            {
                a[int(str[i])-97]++;
            }
        while(flag)
            {
                if(a[7]>=2&&a[0]>=2&&a[2]>=1&&a[10]>=1&&a[4]>=2&&a[17]>=2&&a[19]>=1)
                    {
                        a[7]-=2;a[0]-=2;a[2]-=1;a[10]-=1;a[4]-=2;a[17]-=2;a[19]-=1;
                        count++;
                    }
                else
                    flag=0;
                
            }
        cout<<count;
        return 0;
    }
//https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/print-hackerearth/