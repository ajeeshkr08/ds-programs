#include<stdio.h>
void main(){
	int a[10],b[5],c[20],n1,n2;
		// First Array a
	printf("Enter limit of 1st array:");
	scanf("%d",&n1);
	printf("\nEnter the array elements:");
	for(int i=0;i<n1;i++){
		scanf("%d",&a[i]);
		}
  //Second Array b
	printf("Enter limit of 2nd array:");
	scanf("%d",&n2);
	printf("\nEnter the array elements:");
  
	for(int i=0;i<n2;i++){
		scanf("%d",&b[i]);
		}
   // print 1st array
  printf("\nThe 1st array:\n");
	for(int i=0;i<n1;i++){
		printf("%d",a[i]);
 		}
    // print 2nd array
  printf("\nThe 2nd array:\n");
	for(int i=0;i<n2;i++){
		printf("%d",b[i]);
 		}
 int i=0,j=0,k=0;
while(i<n1 && j<n2){
	if(a[i]<b[j]){
		c[k]= a[i];
		 i= i+1;
			k=k+1;
		}
	if(b[j]<a[i]){
  	c[k]=b[j];      
		j=j+1;
		k=k+1;
    }
  if(a[i]==b[j]){
      c[k]=a[i];
       j=j+1;
			k=k+1;
			i=i+1;
				}
	}
while(i<n1){
c[k]=a[i];
k=k+1;
i=i+1;
}
while(j<n2){
c[k]=b[j];
k=k+1;
j=j+1;
}
 printf("\nThe merged array:\n");
	for( i=0;i<k;i++){
		printf("%d\t",c[i]);
 		}
	}
