#include<stdio.h>
#include<string.h>
#include<stdlib.h>
 int binarySearch(int arr[], int sindex, int eindex, int value);

void main(){
	int array[]={1,2,4,6,8,12,14,15,16,18,20,25,26,28,30};
	int n = sizeof(array)/sizeof(array[0]);
	//printf("%d\n",n );
	int sindex = 0;
	int eindex = n-1;
	int value = 20;

	int result = binarySearch(array, sindex, eindex, value);
	if(result == -1){
		printf(" Element not found \n");
	}
	else{
		printf("item found at index %d \n", result);

	}
	

 }
 int binarySearch(int arr[], int sindex, int eindex, int value){

 	int mid =(eindex-sindex)/2;
	//printf("%d\n",mid );
	if(eindex>sindex)
	{	
		if(value==arr[mid]){
			return mid;
		}
		else if(value<arr[mid]){
			return binarySearch( arr, sindex, mid-1, value);
		}
		else{
			return binarySearch(arr, mid+1, eindex, value);
		}
	}
	return -1;
 }