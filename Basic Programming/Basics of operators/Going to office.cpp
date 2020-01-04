#include<iostream>

using namespace std;

int main()
    {
        long d,oc,of,od,cs,cb,cm,cd,online,classic;
        cin>>d>>oc>>of>>od>>cs>>cb>>cm>>cd;
        online = oc + od*(d-of);
        classic = cb+d*cd+ (d/cs)*cm;
        
        if(online<=classic)
            cout<<"Online Taxi";
        else
            cout<<"Classic Taxi";
        return 0;
    }
    //https://www.hackerearth.com/practice/basic-programming/operators/basics-of-operators/practice-problems/algorithm/going-to-office-e2ef3feb/