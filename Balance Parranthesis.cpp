#include<iostream>
using namespace std;

char stack[100];
int top = -1;

void push(char a)
{
	top++;
	stack[top] = a;	
}
char pop()
{
	char c;
	if(top==-1)
	{
		//cout<<"list is empty";
	}
	else{
		
		c = stack[top];
		top--;
	}
	return c;
}


int main()
{
	int status = 0;
	char ch[20];
	char c;
	cin>>ch;
	for(int i=0;ch[i]!='\0';i++)
	{
		if(ch[i] == '(' || ch[i] == '{' || ch[i] == '[')
		{
			push(ch[i]);
		}
		else if(ch[i] == ')' || ch[i] == '}' || ch[i] == ']')
		{
			c = pop();
			if(c == '(' && ch[i] == ')')
			{
				status = 1;
			}
			else if(c == '{' && ch[i] == '}')
			{
				status = 1; 
			}
			else if(c == '[' && ch[i] == ']')
			{
				status = 1;
			}
			else
			{
				status = 0;
			}
		}	
	}
	
	if(status==1 && top == -1)
	{
		cout<<"\n\t Valid Exp";
		
	}
	else if(status == 0 || top != -1)
	{
		cout<<"\n\t Invalid Exp";
	}
	return 0;
}
