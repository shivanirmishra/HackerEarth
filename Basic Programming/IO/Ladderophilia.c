// Write your code here
#include<stdio.h>

char a[]="*   *\n*   *\n";
char b[]="*****\n";

int main(){
	int n;
	scanf("%d",&n);
	printf("%s",a);
	while(n--){
		printf("%s",b);
		printf("%s",a);
	}
	return 0;
}


//https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/ladderophilia/