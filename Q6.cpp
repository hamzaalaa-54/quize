#include<iostream>
using namespace std;
int main()
{
	int start,end,temp;
    cout<<"enter two numbers"<<endl;
    cin>>start>>end;
    
    if(end<start)
    {
    	temp=end;
        end=start;
        start=temp;
	}
	for(int i=start;i<=end;i++)
	{
		if(i%7==0 && i%2==0)
		{
			cout<<i<<"   ";
		}
	}
}
