#include <iostream>
using namespace std;
int main()
{
	int dectohex[100],index=0,decimal,hex,pass;
	cout<<"Enter the decimal number:"<<endl;
	cin>>decimal;
	cout<<"The hexadecimal number is:"<<endl;
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
