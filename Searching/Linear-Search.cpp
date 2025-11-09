#include<iostream>
using namespace std;
void linearsearch(int value,int * arr)
{
	for(int i=0;i<5;i++)
	{
		if(arr[i] == value)
		{
			//cout<<"Value find at index:"<<i;	
		} 
		else
		{
			cout<<'Value Not Found'<<endl;
		}
	}	
}
int main()
{
	int arr[5] = {10,25,60,30,50};
	linearsearch(15,arr);
	return 0;
}
