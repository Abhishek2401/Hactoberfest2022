#include"iostream"
using namespace std;

int main()
{
	int r=0;
	char c[8];
	for(int i=0;i<8;i++)
		c[i]=-1;
	
	try
	{
		cout<<"enter roll: ";
		cin>>c;
		
		
		if(c[7]==-1)
			throw '8';
		
		r=stoi(c);
		
		/*int i;
		for(i=0;i<8;i++)
			r=r*10+c[i];*/
		
		if(r==0)
			throw 0;
		
		if(c[0]=='0')
			throw '1';
			
		if(c[5]=='0'&&c[6]=='0'&&c[7]=='0')
			throw '3';
	}
	
	catch(int n)
	{
		cout<<"Roll can't be zero"<<endl;
		return 0;
	}
	
	catch(char ch)
	{
		if(ch=='8')
			cout<<"Must be exactly 8 digits"<<endl;
		if(ch=='1')
			cout<<"Starting digit can't be zero"<<endl;
		if(ch=='3')
			cout<<"Last all 3 digits can't be zero"<<endl;
		return 0;
	}
	
	cout<<"Roll: "<<r<<endl;
}
