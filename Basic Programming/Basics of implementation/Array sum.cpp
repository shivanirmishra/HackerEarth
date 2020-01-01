#include<iostream>

using namespace std;

int main()
    {
        //ios_base::sync_with_stdio(false);
        //cin.tie(NULL);
        int n,i;
        cin>>n;
        long long t,sum=0;
        for(i=0;i<n;i++)
            {
                cin>>t;
                sum+=t;
            }
        cout<<sum;
        return 0;
    }
//https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/array-sum-2-725368ac/