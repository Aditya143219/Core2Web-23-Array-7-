#include <stdio.h>

void main(){

	int size,min1,min2;

	printf("Enter size of array : ");
	scanf("%d",&size);

	int arr[size];

	printf("Enter elements :\n");

	for(int i = 0;i < size;i++){

		scanf("%d",&arr[i]);

	}

	min1 = arr[1];

	for(int i = 0;i < size;i++){

		if(min1 > arr[i]){

			min1 = arr[i];

		}

	}

	min2 = arr[1];

	for(int i = 0;i < size;i++){

		if(((min2 > arr[i]) && arr[i] != min1) || min1 == min2){

			min2 = arr[i];

		}

	}

	printf("The second minimum element in an array is %d\n",min2);

}
