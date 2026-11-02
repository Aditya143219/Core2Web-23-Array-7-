#include <stdio.h>

void main(){

	int size,min,max;

	printf("Enter size : ");
	scanf("%d",&size);

	int arr[size];

	printf("Enter elements :\n");

	for(int i = 0;i < size;i++){

		scanf("%d",&arr[i]);

	}

	min = arr[1];

	for(int i = 0;i < size;i++){

		if(min > arr[i]){

			min = arr[i];

		}

	}

	printf("Minimum Elements : %d\n",min);

	max = arr[1];

	for(int i = 0;i < size;i++){

		if(max < arr[i]){

			max = arr[i];

		}

	}

	printf("Maximum Elements : %d\n",max);

}
