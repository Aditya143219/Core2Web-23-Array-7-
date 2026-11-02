#include <stdio.h>

void main(){

	int size,prev,count = 0,x = 0;

	printf("Enter size of array : ");
	scanf("%d",&size);

	int arr[size];

	printf("Enter elements : \n");

	for(int i = 0;i < size;i++){

		scanf("%d",&arr[i]);

	}

	int maj;

	for(int i = 0;i < size;i++){

		prev = count;
		count = 0;

		for(int j = 0;j < size;j++){

			if(arr[i] == arr[j] && i != j){

				count++;

			}

		}

		if(count > 0 && count > prev){

			maj = arr[i];
			x++;

		}

	}

	if(x > 0){

		printf("Majority element : %d\n",maj);
	
	}else{

		printf("No majority elements\n");

	}

}
