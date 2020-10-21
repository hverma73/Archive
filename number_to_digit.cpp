#include <iostream> 
using namespace std; 
 

int main() 
{
	int num,counter,limit,division; 
	 
	cout<<"Please enter how big the set will be"<<"\n"; 
	cin>>limit;
	cout<<"Enter the integers please"<<"\n"; 
	cin>>num;

	counter=0;

	while(counter<limit) 
	{
		division=num/10;
		cout<<num%10<<" ";
		num=division;
		counter++;
	}
	return 0; 
}
