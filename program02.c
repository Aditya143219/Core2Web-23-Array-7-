#include <stdio.h>

void main(){

	int size,max,prev;

	printf("Enter size : ");
	scanf("%d",&size);

	int arr[size];

	printf("Enter the numbers :\n");

	for(int i = 0;i < size;i++){

		scanf("%d",&arr[i]);

	}

	max = arr[1];

	for(int i = 0;i < size;i++){

		if(max < arr[i]){

			max = arr[i];

		}

	}

	prev = arr[1];

	for(int i = 0;i < size;i++){

		if((prev < arr[i] && arr[i] < max) || prev == max){

			prev = arr[i];

		}

	}

	printf("The second largest element in an array is %d\n",prev);

}
