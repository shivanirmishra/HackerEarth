https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/is-zoo-f6f309e7/

#include<iostream>
#include<string.h>
using namespace std;

int main()
    {
        int count=0,z=0,o=0;
        char a[100];
        cin>>a;
        int l = strlen(a);
        if(l>20)
            {
                cout<<"No";
                exit(0);
            }
        while(count<l)
            {
                if(a[count]=='z')
                    z++;
                if(a[count]=='o')
                    o++;
                count++;
            }
        z*=2;
        if(z==o)
            cout<<"Yes";
        else
            cout<<"No";
        
        return 0;
    }