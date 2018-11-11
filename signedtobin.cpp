#include <iostream>
using namespace std;
int main()
{
	int flag=0,index=0,last,i=0,decimal,decimalarray[100],decimalarray1[100];
	cout <<"Enter the decimal number:";
	cin >>decimal;
	if(decimal>0)
	{
		while(decimal>0)
		{
			decimalarray[index]=decimal%2;
			index++;
			decimal=decimal/2;
		}
		last=index;
		cout<<"And the binary is:"<<endl;
		for(index=last-1;index>-1;index--)
		{
			cout<<decimalarray[index]<<"\t";
		}
	}
	else
	{
		decimal=-decimal;
		while(decimal>0)
		{
			decimalarray[index]=decimal%2;
			index++;
			decimal=decimal/2;
		}
		last=index;
		for(index=last-1;index>-1;index--)
		{
			cout<<decimalarray[index]<<"\t";
		}
		cout<<endl;
		cout<<"And the 2's complement:"<<endl;
		for(index=0;index<last;index++)
		{
			if(decimalarray[index]==1 && flag==0)
			{
				flag=1;
			}
			else if(decimalarray[index]==1 && flag==1)
			{
				decimalarray[index]=0;
			}
			else if(decimalarray[index]==0 && flag==1)
			{
				decimalarray[index]=1;
			}
		}
		for(index=last-1;index>-1;index--)
		{
			cout<<decimalarray[index]<<"\t";
		}
	}
}
