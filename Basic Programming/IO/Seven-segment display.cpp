#include<iostream>
#include<string.h>
using namespace std;

int find(long n)
    {
        switch(n)
            {
                case 0: return 6;
                case 1: return 2;
                case 2: return 5;
                case 3: return 5;
                case 4: return 4;
                case 5: return 5;
                case 6: return 6;
                case 7: return 3;
                case 8: return 7;
                case 9: return 6;
            }
    }

int main()
    {
        int t,m,len,i;
        cin>>t;
        char n[100];
        while(t--)  
            {
                m=0;
                cin>>n;
                len=strlen(n);
                
                for(i=0;i<len;i++)
                    m+=find(int(n[i])-48);
                //cout<<m;
                if(m%2!=0)
                    {
                        cout<<"7";
                        m-=3;
                    }
                
                while(m>0)
                    {
                        cout<<"1";
                        m-=2;
                    }
                cout<<endl; 
            }
        
        return 0;
    }
//https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/seven-segment-display-nov-easy-e7f87ce0/