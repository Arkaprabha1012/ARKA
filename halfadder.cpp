#include <iostream>
using namespace std;
int main()
{
	int input1,input2,input1com,input2com,sum1,carry1;
	cout<<"Enter first input:";
	cin>>input1;
	cout<<"Enter second input:";
	cin>>input2;
	if(input1==1)
		input1com=0;
	else
		input1com=1;
	if(input2==1)
		input2com=0;
	else
		input2com=1;
	sum1=input1com*input2+input2com*input1;
	carry1=input1*input2;
	if(sum1>=1)
		sum1=1;
	cout<<"SUM="<<sum1<<"\n";
	cout<<"CARRY="<<carry1;
	
}
