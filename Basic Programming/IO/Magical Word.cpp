//https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/magical-word/


#include <iostream>
using namespace std;

int checkprime(int n)
    {
        int flag=0;
        for(int i=2;i<n;i++)
            {
                if(n%i==0)
                    flag=1;
            }
        if(flag==0)
            return 1;
        else
            return 0;
    }

int main()
{
    int N,i,j,len,m,n,ascii,flag,f1=1,f2=1;
    char c;
    cin>>N;
    for(i=0;i<N;i++)
        {
            cin>>len;
            for(j=0;j<len;j++)
                {
                    flag=f1=f2=1;
                    cin>>c;
                    ascii=(int)c;
                    if(ascii<65)
                        ascii = 65;
                    if(ascii>=91&&ascii<=93)
                        ascii = 90;
                    if(ascii>=94&&ascii<=96)
                        ascii = 97;
                    if(ascii>122)
                        ascii = 122;
                    m=n=ascii;
                    
                    if(checkprime(m))
                        {
                            cout<<(char)m;
                            continue;
                        }
                    
                    while(1)
                        {
                            m=m-1;
                            n=n+1;
                            if(!((m>=65&&m<=90)||(m>=97&&m<=122)))
                                f1=0;
                            if(checkprime(m)&&f1==1)
                                {
                                    cout<<(char)m;
                                    break;
                                }
                            if(!((n>=65&&n<=90)||(n>=97&&n<=122)))
                                f2=0;
                            if(checkprime(n)&&f2==1)
                                {
                                    cout<<(char)n;
                                    break;
                                }
                        }
                }
                cout<<endl;
        }
    
    return 0;
}
