//https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/aman-mrsharma/
#include<iostream>

using namespace std;

int main()
    {
        int d;
        float r,x,t=0;
        float l,pi=3.1425,c;
        cin>>d;
        while(d--)
            {
                cin>>r>>x;
                l=x*100;
                c=2.0*pi*r;
                if(l>=c)
                    t++;
            }
        cout<<t;
        return 0;
    }