//balancing the brackets using stack
#include<iostream>
#include<stack>
using namespace std;

int main()
{
	int flag=0;
	stack<char>s;
	char x;
	string brackets;
	cin>>brackets;
	int l=brackets.length();
	for(int i=0;i<l;i++)
	{
		if(flag==0)
		{
			if(brackets[i]=='(' || brackets[i]=='{' || brackets[i]=='[')
			{
				s.push(brackets[i]);
				continue;
			}
			if(s.empty())
			{
				cout<<"wrong";
				flag=1;
			}
			switch(brackets[i])
			{
				case ')':
					{
						x=s.top();
						s.pop();
						if(x=='{' || x=='[')
						{
							cout<<"wrong";
							flag=1;
						}
						break;
					}
				case '}':
					{
						x=s.top();
						s.pop();
						if(x=='(' || x=='[')
						{
							cout<<"wrong";
							flag=1;
						}
						break;
					}
				case ']':
					{
						x=s.top();
						s.pop();
						if(x=='{' || x=='(')
						{
							cout<<"wrong";
							flag=1;
						}
						break;
					}
			}
		}
	}
	if(flag==0)
	{
		if(s.empty())
		cout<<"right";
		else
		cout<<"wrong";
	}
}
