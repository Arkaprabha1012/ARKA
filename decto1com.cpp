#include <iostream>
using namespace std;
int main()
{
	int index=0,last,i=0,decimal,decimalarray[100],decimalarray1[100];
	cout <<"Enter the decimal number:";
	cin >>decimal;
	while(decimal>0)
	{
		decimalarray[index]=decimal%2;
		index++;
		decimal=decimal/2;
	}
	last=index;
	cout<<"And the binary is:"<<endl;
	for(index=last;index>-1;index--)
	{
		cout<<decimalarray[index]<<"\t";
	}
	cout<<endl;
	cout<<"And the 1's complement:"<<endl;
	for(index=last;index>-1;index--)
	{
		if(decimalarray[index]==1)
		{
			decimalarray[index]=0;
		}
		else
		{
			decimalarray[index]=1;
		}
	}
	for(index=last;index>-1;index--)
	{
		cout<<decimalarray[index]<<"\t";
	}
}
