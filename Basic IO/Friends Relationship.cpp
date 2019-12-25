//https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/friends-relationship-1/

#include<iostream>

using namespace std;

int main()
    {
        int n,a,i,j;
        cin>>n;
        while(n--)
            {
                cin>>a;
                for(i=1;i<=a;i++)
                    {
                        for(j=1;j<=i;j++)
                            {
                                cout<<'*';
                            }
                        for(j=a-i;j>0;j--)
                            {
                                cout<<'#';
                            }
                        for(j=a-i;j>0;j--)
                            {
                                cout<<'#';
                            }
                        for(j=1;j<=i;j++)
                            {
                                cout<<'*';
                            }
                        cout<<endl;
                    }
                
            }
        return 0;
    }