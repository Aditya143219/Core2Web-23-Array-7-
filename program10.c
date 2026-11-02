#include <stdio.h>

void main(){

	int size,min;

	printf("Enter size : ");
	scanf("%d",&size);

	int arr[size],visit[size],sort[size];;

	printf("Enter the element : \n");

	for(int i = 0;i < size;i++){

		scanf("%d",&arr[i]);
		visit[i] = 0;

	}

	for(int i = 0;i < size;i++){

		for(int l = 0;l < size;l++){

			if(visit[l] == 0){

				min = arr[l];
				break;

			}

		}

		for(int j = 0;j < size;j++){

			if((min > arr[j]) && visit[j] != 1){
			
				min = arr[j];

			}

		}

		for(int k = 0;k < size;k++){

			if(min == arr[k]){

				visit[k] = 1;
				break;

			}

		}

		sort[i] = min;

	}

	printf("---------------------------\n");

	for(int i = 0;i < size;i++){

		printf("%d\n",sort[i]);

	}

}
