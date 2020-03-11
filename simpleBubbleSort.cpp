//SIMPLE C++ CODE TO IMPLEMENT BUBBLE SORT

#include<iostream>
 
using namespace std;
 
int main()
{
	int array[50],arraySize,i,j,temp;
	
	cout<<"Enter the size of array: ";
	cin>>arraySize;
	
	cout<<"Enter the array elements: "; 
	
	for(i=0; i<arraySize; ++i)
		cin>>array[i];
		
	for(i=1; i<arraySize; ++i)
	{
		for(j=0; j<(arraySize-i); ++j)
			if(array[j] > array[j+1])
			{
			
				temp = array[j];         //swapping the elements
				array[j] = array[j+1];
				array[j+1] = temp;
			}
	}
	
	
	cout<<"THE ARRAY AFTER BUBBLE SORT IS:";
	
	for(i=0; i<arraySize; ++i)
		cout<<" "<<array[i];
		
	return 0;
}
