#include<iostream>
using namespace std;
int main()
{
	int num1,num2,result=0;
	cout<<"enter two number"<<endl;
	cin>>num1>>num2;
   for(int i=0;i<num1;i++)
   {
   	result+=num2;
   }
	cout<<"the result ="<<result<<endl;
}
