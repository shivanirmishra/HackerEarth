//https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/ladderophilia/

#include<iostream>

using namespace std;

char a[]="*   *\n*   *\n";
char b[]="*****\n";

int main()
    {
        int n;
        cin>>n;
        cout<<a;
        while(n--)
            {
                cout<<b;
                cout<<a;
            }
        return 0;
    }