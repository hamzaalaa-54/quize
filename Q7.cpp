#include<iostream>
using namespace std;
int main()
{
 int number,fact=1;
 cout<<"enter ur number"<<endl;
 cin>>number;
 for(int i=number;i>0;i--)
 {
 	if(i%2!=0)
 	{
 		fact=fact*i;
	 }
 }
 cout<<"the fact :"<<fact;
}

