#include <stdio.h>
#include <stdlib.h>

void binarysearch(int A[],int F,int R,int Key){
	int mid=(F+R)/2;
	while(F<=R){
		if(A[mid]==Key){
		
		printf("element found at %d",mid+1);
		break;}
		else if(A[mid]<Key){
		binarysearch(A,mid+1,R,Key);}
		else{
		
		binarysearch(A, F, mid-1, Key);}
		
		break;
		
	}
}
