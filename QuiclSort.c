#include<stdio.h>

void swap(int *a, int *b) {
  int t = *a;
  *a = *b;
  *b = t;
}

int partition(int array[],int l,int h){
	int pivot,i,j;
	pivot = array[l];
	i=l,j=h;
	while(i<j){
		do{
			i++;
		}while(array[i]<=pivot);
		
		do{
			j--;
		}while(array[j]>pivot);
		
		if(i<j){
			swap(&array[i],&array[j]);
		}
		
	}
	swap(&array[l],&array[j]);
	return j;
}

void QuickSort(int array[],int l,int h){
	if(l<h){
		int part = partition(array,l,h);
		QuickSort(array,l,part);
		QuickSort(array,part+1,h);
	}
}

int main(){
	int i;
	int array[10]={9,5,3,6,1,7,8,2,4,0};
	for(i=0;i<10;i++){
		printf("%d ",array[i]);
	}
	printf("\n");
	QuickSort(array,0,10);
	
	printf("After performing QuickSort the array is:");
	for(i=0;i<10;i++){
		printf("%d ",array[i]);
	}
	
	
}
