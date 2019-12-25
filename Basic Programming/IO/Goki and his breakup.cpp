//https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/tds-and-his-breakup/


#include<iostream>

using namespace std;

int main()
    {
        int t,m,a;
        cin>>t>>m;
        while(t--) 
            {
                cin>>a;
                if(a<m)
                    cout<<"NO";
                else
                    cout<<"YES";
                cout<<endl;
            }
        
        return 0;
    }