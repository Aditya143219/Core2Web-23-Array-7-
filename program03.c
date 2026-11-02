#include <stdio.h>

void main(){

	int size,count = 0;

	printf("Enter size of array : ");
	scanf("%d",&size);
	
	int arr[size];

	printf("Enter Elements : \n");

	for(int i = 0;i < size;i++){

		scanf("%d",&arr[i]);

	}

	for(int i = 0;i < size;i++){

		int x;

		for(int j = 0;j < size;j++){

			if((arr[i] == arr[j]) && i != j){

				count++;
				x = arr[i];

			}

		}

		if(count > 0){

			printf("The first repeating element is %d\n",x);
			break;

		}

	}

	if(count == 0){

		printf("No repeating element is present in an array\n");

	}

}
