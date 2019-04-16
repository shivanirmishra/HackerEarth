//https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/2-fast-2-furious/?utm_campaign=weekly_hackathon_reco&utm_medium=email&utm_source=recommendation&utm_content=hackathon
#include<iostream>
#include<stdlib.h>
using namespace std;


int main()
    {
        long int n,i,a,temp,dom,brian;
        a=temp=dom=brian=0;
        cin>>n;
        for(i=0;i<n;i++)
            {
                if(abs(temp-a)>dom)
                    dom=abs(temp-a);
                temp=a;
                cin>>a;
                
            }
        if(abs(temp-a)>dom)
            dom=abs(temp-a);
            
        temp=a=0;
        for(i=0;i<n;i++)
            {
                if(abs(temp-a)>brian)
                    brian=abs(temp-a);
                temp=a;
                cin>>a;
                
            }
        if(abs(temp-a)>brian)
            brian=abs(temp-a);
            
        if(brian>dom)
            {
            cout<<"Brian"<<endl;
            cout<<brian;
            }
        else if(brian<dom)
            {
            cout<<"Dom\n";
            cout<<dom;
            }
        else
            {
            cout<<"Tie\n";
            cout<<dom;
            }
            
        
        return 0;
    }