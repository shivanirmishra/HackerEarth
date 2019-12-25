//https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/duration/


#include<iostream>

using namespace std;

int main()
    {
        int t,sh,sm,eh,em,th,tm;
        cin>>t;
        
        while(t--)  
            {
                cin>>sh>>sm>>eh>>em;
                if(sh>eh)
                    eh=eh+12;
                if(sm>em)
                    {
                        eh--;
                        em+=60;
                    }
                th=eh-sh;
                tm=em-sm;
                cout<<th<<" "<<tm;
                cout<<endl;
            }
        return 0;
    }