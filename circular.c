#include<stdio.h>
int a[10],f=-1,r=-1,size=3,item;
void insert(){

	if(r+1==size){
		printf("The queue is full..");
	}else{
	printf("Enter the element:");
	scanf("%d",&item);
		if(f==-1 && r==-1){
			f=0;
			r=0;
			a[r]=item;
		}else{
			r=(r+1)%size;
			a[r]=item;
		}	
	}
}
void display(){
int t;
printf("Queue..");
if(f== -1){
		printf("The queue is empty..");
}
else{
t = f;
while(t<=r){
printf("%d",a[t]);
t= (t+1)%size;
}
}
}

void delete(){
if(f== -1){
		printf("The queue is empty..");
}else{
		if(f==r){
			f=r=-1;
}else{
	f=(f+1)%size;
}

}

}

void main(){
int opt;

do{
  for(int i=0; i<4;i++){
printf("%d\t",a[i]);
}
		printf("\n/......queue...../\n");
		printf("\nEnter the Options\n1.insert\n2.delete\n3.display\nExit->0:");
		scanf("%d",&opt);
		switch(opt){
			case 1:	insert();
						
							break;

			case 2:
							delete();
							break;
			case 3:
							display();
							break;


		}
	}while(opt != 0);

}
