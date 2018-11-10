#include <conio.h>
#include <iostream>
using namespace std;

// masukan nilai n = 7/10


void segitigaAsli (){
	int n;
	cout<<"masukan n : "; cin>>n;
	for (int i = 1; i <=n; ++i)
	{cout<<endl;
		for (int j = 1; j <= i; ++j)
		{
			if (n==7)
			{cout<<j;
			  cout<<",";}
			else{cout<<"nilai harus 7";}
		}
	}
}


int main()
{	
	segitigaAsli();
	getch();


	return 0;
}