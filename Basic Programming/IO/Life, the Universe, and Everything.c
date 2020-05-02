// Write your code here
#include <stdio.h>
int main()
{ 
	int n,i;
	for(i=1;i<100000;i++)
	{
		scanf("%d",&n);
		if(n!=42)
		{
			printf("%d\n",n);
		}
		else break;
	}
return 0;
}


//https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/life-the-universe-and-everything/