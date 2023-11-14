#include <stdio.h>

void bubble_sort(int arr[],int length){
	int temp,i,j;
	for(i=0;i<length;i++){
		for(j=0;j<length-i-1;j++){
			if(arr[j]>=arr[j+1]){
				temp =arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
}

int main(){
	int arr[]={1,3,8,6,3,12};
	int length = sizeof(arr)/sizeof(arr[0]);
	bubble_sort(arr,length);
	for(int i = 0;i<length;i++){
		printf("%d\n",arr[i]);
	}
	return 0;
}
