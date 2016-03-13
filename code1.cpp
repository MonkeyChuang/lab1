#include <iostream>
using namespace std;

int main()
{
	int n;
	cout<<"input=";
	cin>>n;
	while(n!=1)
	{
		cout<<n<<" ";
		if(n%2==1)
			n=3*n+1;
		else
			n/=2;
	}
	cout<<"1"<<endl;
	return 0;
}
