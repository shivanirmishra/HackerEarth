//https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/cipher-1/?utm_source=header&utm_medium=search&utm_campaign=he-search

#include<iostream>
#include<string.h>

using namespace std;

int main()
    {
        char a[1000],c,i;
        int n,temp;
        cin>>a;
        cin>>n;
        for(i=0;i<strlen(a);i++)
            {
                if(isalnum(a[i]))
                {
                    temp=n;
                    if(isdigit(a[i]))
                    {
                        while(temp--)
                            {
                                if(a[i]=='9')
                                    a[i]='0';
                                else
                                    a[i]++;
                            }
                    }
                    else
                    {
                        if(islower(a[i]))
                            {
                                while(temp--)
                                    {
                                     if(a[i]=='z')
                                         a[i]='a';
                                     else
                                         a[i]++;
                                    }
                            }
                        else
                            {
                                while(temp--)
                                    {
                                     if(a[i]=='Z')
                                         a[i]='A';
                                     else
                                         a[i]++;
                                    }
                            }
                    }
                }
            }
        cout<<a;
        return 0;
    }