#include<stdio.h>
void main(){
	int i,a[100],n,key,f;
	printf("enter the size of array:\n");
	scanf("%d",&n);
	printf("enter %d element:",n);
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	printf("enter the element to search\n");
	scanf("%d",&key);
	for(i=0;i<n;i++){
		if(a[i]==key){
			f=i;
			break;
		}
		else
			f=-1;
	}
	if(f==i)
		printf("the element %d found in %d possition\n",a[i],i);
	else 
		printf("element is not found\n");
}
