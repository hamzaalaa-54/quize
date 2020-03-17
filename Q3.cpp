#include<iostream>
using namespace std;
int main()
{
	int number_of_index=0,max=0,sum=0;
 cout<< "enter the number of number"<<endl;
 cin>>number_of_index;
 int arr[number_of_index];
 for(int i=0;i<number_of_index;i++)
 {
 	cin>>arr[i];
    if(arr[i]>max)
	max=arr[i];
    sum+=arr[i];
 }
   cout<<"the  max number :"<<max<<endl<<"the average :"<<sum/number_of_index;
}

