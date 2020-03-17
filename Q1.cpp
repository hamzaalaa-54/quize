#include<iostream>
using namespace std;
int main()
{
 int arr[6];
 int countofP=0;
 int countofN=0;
 int division_by_4=0;
 int sum_of_odd=0;
 int countofO=0;
 cout<<"enter 6 number"<<endl;
 for(int i=0;i<6;i++)
 {	
	cin>>arr[i];
	
 	if(arr[i]>0)
 	{
 		countofP++;
 		
	 }
	 if(arr[i]<0)
 	{
 		countofN++;
 		
	 }
	 if(arr[i]%4==0)
	 {
	 	division_by_4++;
	 }
	 if(arr[i]%2!=0)
	 {
	 	countofO++;
	 	
	 	sum_of_odd+=arr[i];
	 }
 	
 }
 cout<<"the count of positive numbers :"<<	countofP<<endl<<"the count of negative numbers :"<<	countofN<<endl<<"the Average of odd numbers :"<<sum_of_odd/countofO<<endl<<"Count numbers accept division by 4 :"<<division_by_4<<endl;
 
}

