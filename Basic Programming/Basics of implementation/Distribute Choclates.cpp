#include<iostream>

using namespace std;

int main()
    {
        long t,c,n,i,left,temp;
        
        cin>>t;
        while(t--)
            {
                cin>>c>>n;
                temp = c;
                c -= (n*(n+1)/2);
                if(c>=0)
                    cout<<c%n<<'\n';
                else
                    cout<<temp<<'\n';
            }
        return 0;
    }
    //https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/distribute-chocolates-70c2c2ab/