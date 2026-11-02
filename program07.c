#include <stdio.h>

void main(){

	int size,num;

	printf("Enter size : ");
	scanf("%d",&size);

	int arr[size],visit [size];

	printf("Enter elements :\n");

	for(int i = 0;i < size;i++){

		scanf("%d",&arr[i]);
		visit[i] = 0;

	}

	printf("Enter number : ");
	scanf("%d",&num);

	printf("Pairs with sum %d\n",num);

	for(int i = 0;i < size;i++){

		for(int j = 0;j < size;j++){

			if(visit[i] == 1 && visit[j] == 1){

				continue;

			}

			if(arr[i] + arr[j] == num){

				visit[i] = 1;
				visit[j] = 1;

				printf("%d %d\n",arr[i],arr[j]);

			}

		}

	}

}
