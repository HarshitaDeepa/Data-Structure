#include<iostream>
using namespace std;

int BinarySearch(int arr[],int l,int r,int x)
{
    if(l<=r)
    {
        int mid=(L+r)/2;
        if(arr[mid]==x) return mid;
        else if(arr[mid]<x) return BinarySearch(arr,l,mid-1,x);
        else if(arr[mid]>x) return BinarySearch(arr,mid+1,r,x);
    }
    return -1;
}
int main()
{
	int n,arr[10],temp;
	cout<<"enter n"<<endl;
	cin>>n;
	cout<<"enter array"<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<(n-1);j++)
		{
			if(arr[i]>arr[j])
			{
				temp=arr[j];
				arr[j]=arr[i];
				arr[i]=temp;
			}
		}
	}
    int a;
    cout<<"enter number to be searched"<<endl;
    cin>>a;
    int result=BinarySearch(arr,0,n-1,a);
    (result == -1)? printf("Element is not present in array"): printf("Element is present at index %d",result);
}
