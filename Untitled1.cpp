#include<iostream>
using namespace std;
int main()
{
	int number;
	bool flag =false;
	cout<<"enter the number";
	cin>>number;
	for(int i =2;i<number;i++)
	{
		if(number%i==0)
		{
			flag=true;
		}
		
	}
    if(flag==false)
    cout<<"prime number";
    else 
    cout<<"Number is not Prime.";
}
