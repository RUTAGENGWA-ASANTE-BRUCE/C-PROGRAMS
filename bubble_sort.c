#include <stdio.h>

int main(){
	int i,j,temp;
    int arr[] = {2,6,4,1,8};
	int size=sizeof(arr)/sizeof(arr[0]);
	for(i=0;i<size-1;i++){
		for(j=0;j<size-i-1;j++){
		
			if(arr[j]>arr[j+1]){
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
	for(i=0;i<size;i++){
		printf("%d ",arr[i]);
	}
}