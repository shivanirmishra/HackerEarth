//https://www.hackerearth.com/practice/data-structures/arrays/1-d/practice-problems/algorithm/memorise-me/
#include<iostream>
#include<cstdlib>
using namespace std;
long a[2][100000];

int main()
    {
        long n,i,q;
        int temp;
        cin>>n;
        
        for(i=0;i<n;i++)
            {
                cin>>temp;
                if(temp>=0)
                    a[0][temp]++;
                else
                    a[1][abs(temp)]++;
            }
        cin>>q;
        
        for(i=0;i<q;i++)
            {
                cin>>temp;
                if(temp>=0 && a[0][temp]!=0)
                    cout<<a[0][temp]<<endl;
                else if(temp<0 && a[1][temp]!=0)
                    cout<<a[1][temp]<<endl;
                else
                    cout<<"NOT PRESENT"<<endl;
            }
        
        return 0;
    }