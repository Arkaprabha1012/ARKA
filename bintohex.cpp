#include <iostream>
#include<cmath>
using namespace std;
int main()
{
	int pass,i=0,decimal=0,length,index,binary[100],binaryrev[100];
	cout <<"Enter the length of the binary number:";
	cin>>length;
	for(index=0;index<length;index++)
	{
		cout<<"Enter the value:";
		cin>>binary[index];
	}
	for(index=length-1;index>-1;index--)
	{
		binaryrev[i]=binary[index];
		i++;
	}
	for(i=0;i<length;i++)
	{
		if(binaryrev[i]==1)
		{
			decimal=decimal+pow(2,i);
		}
	}
	cout<<"the decimal is:"<<decimal;
	cout<<"\nthe hexadecimal is:\n";
	while(decimal>0)
	{
		pass=decimal%16;
		if(pass==10)
		{
			cout<<"A";
		}
		else if(pass==11)
		{
			cout<<"B";
		}
		else if(pass==12)
		{
			cout<<"C";
		}
		else if(pass==13)
		{
			cout<<"D";
		}
		else if(pass==14)
		{
			cout<<"E";
		}
		else if(pass==15)
		{
			cout<<"F";
		}
		else
		{
			cout<<pass;
		}
		decimal=decimal/16;
	}
}
