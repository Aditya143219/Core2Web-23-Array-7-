#include <stdio.h>

void main(){

	int size,max;

	printf("Enter size : ");
	scanf("%d",&size);

	int arr[size],sort[size],visit[size];

	printf("Enter elements : \n");

	for(int i = 0;i < size;i++){

		scanf("%d",&arr[i]);
		visit[i] = 0;

	}

	for(int j = 0;j < size;j++){

		for(int l = 0;l < size;l++){

			if(visit[l] == 0){

				max = arr[l];
				break;

			}

		}

		for(int i = 0;i < size;i++){

			if(max < arr[i] && visit[i] != 1){

				max = arr[i];

			}

		}

		for(int k = 0;k < size;k++){

			if(max == arr[k]){

				visit[k] = 1;

			}

		}

		sort[j] = max;

	}

	printf("--------------------------\n");

	for(int i = 0;i < size;i++){

		printf("%d\n",sort[i]);

	}

}
