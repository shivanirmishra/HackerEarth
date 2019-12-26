#include<bits/stdc++.h>
using namespace std;

string solve (vector<int> A) {
   // Write your code here
   int N = A.size();
   char *y = "OUI",*n = "NON";
    int m = N/2,i,j;
    long sumodd=0,sumeven=0;
    for(i=0;i<m;i++)
        {
            if(i%2==0)
                {
                    while(A[i]/10!=0)
                        A[i]/=10;
                    sumeven+=A[i];
                }
            else
                {
                    while(A[i]/10!=0)
                        A[i]/=10;
                    sumodd+=A[i];
                }
            
        }
    for(i=m;i<N;i++)
        {
            if(i%2==0)
                sumeven+=A[i]%10;
            else
                sumodd+=A[i]%10;
        }
    //cout<<sum;
    if(sumodd==sumeven)
        return y;
    else
        return n;
}

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);
    int N;
    cin >> N;
    vector<int> A(N);
    for(int i_A=0; i_A<N; i_A++)
    {
    	cin >> A[i_A];
    }

    string out_;
    out_ = solve(A);
    cout << out_;
}
//https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/divisibe-or-2d8e196a/