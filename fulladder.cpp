#include <iostream>
using namespace std;
int main()
{
	int input1,input2,input3,input1com,input2com,input3com,xor1,xorcom,sum1,carry1;
	cout<<"Enter first input:";
	cin>>input1;
	cout<<"Enter second input:";
	cin>>input2;
	cout<<"Enter third input:";
	cin>>input3;
	if(input1==1)
		input1com=0;
	else
		input1com=1;
	if(input2==1)
		input2com=0;
	else
		input2com=1;
	if(input3==1)
		input3com=0;
	else
		input3com=1;
	xor1=input1com*input2+input2com*input1;
	if(xor1>=1)
	{
		xor1=1;
		xorcom=0;
	}
	else
	{
		xorcom=1;
	}
	sum1=xorcom*input3+input3com*xor1;
	carry1=input1*input2+input3*xor1;
	if(carry1>=1)
		carry1=1;
	if(sum1>=1)
		sum1=1;
	cout<<"SUM="<<sum1;
	cout<<"CARRY="<<carry1;
}
