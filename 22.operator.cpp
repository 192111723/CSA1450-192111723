#include<stdio.h>
#include<string.h>
int main()
{
char a[50],b[10];
printf("Enter your input: ");
scanf("%[^\n]",&a);
if(a[0]=='+')
{
printf("Given input is valid operator\n");
printf("add operator");
}
else if(a[0]=='-')
{
printf("Given input is valid operator\n");
printf("sub operator");
}
else if(a[0]=='*')
{
printf("Given input is valid operator\n");
printf("mul operator");
}
else if(a[0]=='/')
{
printf("Given input is valid operator\n");
printf("div operator");
}
else if(a[0]=='>' && a[1]=='>')
{
printf("Given input is valid operator\n");
printf("right shift operator");
}
else if(a[0]=='<' && a[1]=='<')
{
printf("Given input is valid operator\n");
printf("left shift operator");
}
else if(a[0]=='+' && a[1]=='+')
{
printf("Given input is valid operator\n");
printf("increament operator");
}
else if(a[0]=='-' && a[1]=='-')
{
printf("Given input is valid operator\n");
printf("decrement operator");
}
else if(a[0]=='^')
{
printf("Given input is valid operator\n");
printf("bitwise XOR operator");

}
else if(a[0]=='&' && a[1]=='&')
{
printf("Given input is valid operator\n");
printf("logical AND operator");
}
else if(a[0]=='|' && a[1]=='|')
{
printf("Given input is valid operator\n");
printf("Logical OR operator");
}
else if(a[0]=='&')
{
printf("Given input is valid operator\n");
printf("bitwise AND operator");
}
else if(a[0]=='|')
{
printf("Given input is valid operator\n");
printf("bitwise OR operator");
}
else if(a[0]=='!')
{
printf("Given input is valid operator\n");
printf("bitwise NOT operator");
}
else if(a[0]=='%')
{
printf("Given input is valid operator\n");
printf("Modulas operator");
}
else
{
printf("Given input is not an operator");
}


}
