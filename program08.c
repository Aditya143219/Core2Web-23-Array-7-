#include <stdio.h>

void main(){

	int size;

	printf("Enter the lenght of the array : ");
	scanf("%d",&size);

	int arr[size];

	printf("Enter elements : \n");

	for(int i = 0;i < size;i++){

		scanf("%d",&arr[i]);

	}

	for(int i = 0;i < size;i++){

		int num,temp = 0,j = 1;

		num = arr[i];

		while(num > 0){

			int x = num%10;

			if(x == 0){

				x = 5;

			}

			temp = temp + x*j;
			j *= 10;
			num = num / 10;

		}

		arr[i] = temp;

	}

	printf("--------------------------\n");

	for(int i = 0;i < size;i++){

		printf("%d\n",arr[i]);

	}

}
