#include<iostream>
using namespace std;
int main()
{
  int digit=0,number=0,max=0,count=0;
  double sum=0;
  cout<<"inter number"<<endl;
  cin>>number;
  while(number>=1)
  {
  	digit=number%10;
  	sum+=digit;
    count++;
     	if(digit>max)
  	   {
  	 	max=digit;
	   }
   number/=10 ; 
   
  }
  cout<<"the max number :"<<max<<endl<<"the  average :"<<sum/count<<endl;
}

