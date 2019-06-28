//https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/cartag-948c2b02/
#include<iostream>

using namespace std;

int main()
    {
        int flag=0,l,m,n,o;
        char a[9];
        cin>>a;
        if(a[2]=='A' || a[2]=='E' || a[2]=='I' || a[2]=='O' || a[2]=='U' || a[2]=='Y')
            flag=1;
        
        l=int(a[0])+int(a[1]);
        m=int(a[3])+int(a[4]);
        n=int(a[4])+int(a[5]);
        o=int(a[7])+int(a[8]);
        
        if(l%2!=0 || m%2!=0 || n%2!=0 || o%2!=0)
            flag=1;
            
        if(flag==0)
            cout<<"valid";
        else
            cout<<"invalid";
        return 0;
    }