//https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/doctors-secret/

#include<iostream>

using namespace std;

int main()
    {
        int l,p;
        cin>>l>>p;
        if(l<=23&&p>=500&&p<=1000)
            cout<<"Take Medicine";
        else
            cout<<"Don't take Medicine";
        
        return 0;
    }