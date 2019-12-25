//https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/sum-it-if-you-can-4867f851/

#include<iostream>
#include<string.h>

using namespace std;

int main()
    {
        int i,l;
        char a[20];
        cin>>a;
        l = strlen(a);
        if(l!=10)
            {
                cout<<"Illegal ISBN";
                exit(0);
            }
        l=0;
        //cout<<a<<endl;
        for(i=1;i<=10;i++)
            {
                //cout<<l<<endl;
                l=l+(i*(int(a[i-1])-48));
            }
        //cout<<l;
        if(l%11==0)
            cout<<"Legal ISBN";
        else
            cout<<"Illegal ISBN";
        return 0;
    }