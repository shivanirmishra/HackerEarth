//https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/char-sum-2d3a6ab5/

#include<iostream>
#include<string.h>

using namespace std;

int main()
    {
        char a[100];
        cin>>a;
        int l = strlen(a),t=0;
        
        for(int i=0;i<l;i++)
            {
                t+=int(a[i]-96);
            }
        cout<<t;
        return  0;
    }