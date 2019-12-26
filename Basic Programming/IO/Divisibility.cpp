/*
// Sample code to perform I/O:

#include <iostream>

using namespace std;

int main() {
	int num;
	cin >> num;										// Reading input from STDIN
	cout << "Input number is " << num << endl;		// Writing output to STDOUT
}

// Warning: Printing unwanted or ill-formatted data to output will cause the test cases to fail
*/

#include <iostream>

using namespace std;

int main() {

    int N = 0;
    cin>>N;
    
    long data[N];
    for(auto i=0; i<N; i++)
        {
            cin>>data[i];
            
        }
    
    
    if(data[N-1]%10==0)
        cout<<"Yes";
    else
        cout<<"No";
    
    return 0;
}
//https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/divisible-or-not-81b86ad7/