#include<stdio.h>
int main()
{
	int length=0;
	char str[]="helloworld";
	while(str[length]!='\0'){
		length++;
	}
	printf("length of string is %d\n",length);
}
