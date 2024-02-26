#include<stdio.h>
#include<string.h>
int main(){
	char a[100];
	int i;
	printf("enter the line:");
	scanf("%[^\n]",&a);
	i=strlen(a);
	if(a[0]=='/'&&a[1]=='/')
	{
		printf("single line comment");
	}
	else if(a[0]=='/'&& a[1]=='*'&& a[i-2]=='*'&& a[i-1]=='/'){
		printf("multi line comment:");
	}
	else{
		printf("it is not a comment");
	}
	}
	}
	}
}
