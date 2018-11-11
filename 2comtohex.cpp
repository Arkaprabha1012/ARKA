#include <iostream>
#include<cmath>
using namespace std;
int main()
{
	int pass,flag=0,decimal,index,i=0,length,twocom[100],onecom[100];
	cout<<"Enter the size of the 2's complement:";
	cin>>length;
	for(index=0;index<length;index++)
	{
		cout<<"please enter:";
		cin>>twocom[index];
		if(twocom[index]!=0 && twocom[index]!=1)
		{
			cout<<"INVALID INPUT.";
			exit(0);
		}
	}
	i=length-1;
	cout<<"The 2's complement:";
	for(index=length-1;index>-1;index--)
	{
		if(twocom[index]==1 && flag==0)
		{
			flag=1;
		}
		else if(twocom[index]==1 && flag==1)
		{
			twocom[index]=0;
		}
		else if(twocom[index]==0 && flag==1)
		{
			twocom[index]=1;
		}
	}
	for(index=0;index<length;index++)
	{
		cout<<twocom[index];
	}
	decimal=0;
	i=0;
	for(index=length-1;index>-1;index--)
	{
		onecom[i]=twocom[index];
		i++;
	}
	for(i=0;i<length;i++)
	{
		if(onecom[i]==1)
		{
			decimal=decimal+pow(2,i);
		}
	}
	cout<<"\nThe hexadecimal value is:";
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
