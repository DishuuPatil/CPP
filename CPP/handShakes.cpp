#include<iostream>
using namespace std;
 
int main()
{
	int n,handshakes;
	cout<<"Enter the number of persons"<<endl;
	cin>>n;
	handshakes = (n*(n-1))/2;
	cout<<"Number of Handshakes:"<<handshakes<<endl;
	return 0;	
} 
