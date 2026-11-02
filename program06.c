#include <stdio.h>

void main(){

	int size,count;

	printf("Enter size : ");
	scanf("%d",&size);

	int arr[size],visit[size];

	printf("Enter element : \n");

	for(int i = 0;i < size;i++){

		scanf("%d",&arr[i]);
		visit[i] = 0;

	}

	for(int i = 0;i < size;i++){

		if(visit[i] == 1){

			continue;

		}

		count = 0;

		for(int j = i;j < size;j++){

			if(arr[i] == arr[j]){

				count++;
				visit[j] = 1;

			}

		}

		printf("Element %d : %d times\n",arr[i],count);

	}

}
