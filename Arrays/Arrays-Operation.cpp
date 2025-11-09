#include<iostream>
using namespace std;

void display(int arr[],int size)
{
	for(int i=0;i<=size-1;i++)
	{
		cout<<arr[i]<<endl;
	}
}
int insertfirst(int arr[],int value)
{
	for(int i=4-1;i>=0;i--)
	{
		arr[i+1] = arr[i];
	}
	arr[0] = value;
}
int insertspecific(int arr[],int value,int pos,int size)
{
	for(int i=size-1;i>=pos;i--)
	{
		arr[i+1] = arr[i];
	}
	arr[pos] = value;
}
int insertLast(int arr[],int value,int pos,int size)
{
	if(arr[size-1] == 0)
	{
		arr[size-1] == value;
	}
	else
	{
		cout<<'Array Full';
	}
	/*for(int i=size-1;i>=pos;i--)
	{
		arr[i+1] = arr[i];
	}
	arr[pos] = value;*/
}

int main()
{
	int arr[5] = {10,20,30,40,0};
	int size=4;
	//cout<<arr[2];
	//display(arr,5);
	//insertfirst(arr,20);
	//deleteFirst
	for(int i =size-1;i>=0;i--)
	{
		arr[i-1] = arr[i];
	}
	arr[0] = 0;
	//deleteSpecific
	for(int i =pos;i<size;i++)
	{
		arr[i-1] = arr[i];
	}
	arr[0] = 0;
		display(arr,5);
	return 0;
}
