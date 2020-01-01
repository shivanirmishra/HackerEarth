#include<iostream>
#include<cstdlib>
using namespace std;

int main()
    {
        long n,x,y,p,i,j,xdif,ydif;
        cin>>n>>x>>y>>p;
        for(i=0;i<n;i++)
            {
                for(j=0;j<n;j++)
                    {
                        xdif = abs(x-i);
                        ydif = abs(y-j);
                        if(xdif > ydif)
                            {
                                if((p - xdif)>0)
                                    cout<<(p - xdif)<<" ";
                                else
                                    cout<<'0'<<" ";
                            }
                        else
                            {
                                if((p - ydif)>0)
                                    cout<<(p - ydif)<<" ";
                                else
                                    cout<<'0'<<" ";
                            }
                        
                    }
                cout<<'\n';
            }
        return 0;
    }
//https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/hawkeye-and-floodfill/