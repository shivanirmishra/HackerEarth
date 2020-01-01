#include<iostream>
using namespace std;

int c1,c2,c3,c4,i,j,k;

int func1()
    {
        int z;
        if (i == 0 && j == 0)
            z = c1;
        else if (i == 0 && j == 1)
            z = c2;
        else if (i == 1 && j == 0)
            z = c3;
        else
            z = c4;
            
        if (z == 0 && k == 0)
            return c1;
        else if (z == 0 && k == 1)
            return c2;
        else if (z == 1 && k == 0)
            return c3;
        else
            return c4;
    }
int func2()
    {
        int z;
        if (j == 0 && k == 0)
            z = c1;
        else if (j == 0 && k == 1)
            z = c2;
        else if (j == 1 && k == 0)
            z = c3;
        else
            z = c4;
            
        if (i == 0 && z == 0)
            return c1;
        else if (i == 0 && z == 1)
            return c2;
        else if (i == 1 && z == 0)
            return c3;
        else
            return c4;
    }

int main()
    {
        int t,flag=0;
        cin>>t;
        while(t--)
            {
                flag=0;
                cin>>c1>>c2>>c3>>c4;
                for(i=0;i<2;i++)
                    for(j=0;j<2;j++)
                        for(k=0;k<2;k++)
                            {
                                if(func1()!=func2())
                                    flag = 1;
                            }
                if(flag == 0)
                    cout<<"Yes\n";
                else
                    cout<<"No\n";
            }
        
        return 0;
    }
//https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/binary-associativity-fc8ca73f/