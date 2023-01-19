#include<stdio.h>
#include<string.h>
void unionn(char*,char*,char*);
void interSec(char*,char*,char*);
void Diff(char*,char*,char*);
void main(){
char s1[20],s2[20],s3[20];
int op;
		printf("\nEnter the 1st bitstring:");
		scanf("%s",s1);
		printf("\nEnter the 2nd bitstring:");
		scanf("%s",s2);
	do{
		printf("\nEnter option\n1.union\n2.intersection\n3.difference:");
		scanf("%d",&op);
		switch(op){
			case 1: unionn(s1,s2,s3);
					printf("Union:%s",s3);
			break;
			case 2: interSec(s1,s2,s3);
					printf("intersection:%s",s3);
			break;
			case 3:Diff(s1,s2,s3);
					printf("difference:%s",s3);
			break;
		}
		}while(op !=0);		
	
}

void unionn(char*s1,char*s2,char*s3){
	int i,l;
	l=strlen(s1);
	for(i=0;i<l;i++){
		if(s1[i]=='0' && s2[i]=='0'){
			s3[i]='0';
		}else{
			s3[i]='1';
		}
	}
	s3[i]='\0';
}

void interSec(char*s1,char*s2,char*s3){
	int i,l;
	l=strlen(s1);
	for(i=0;i<l;i++){
		if(s1[i]=='1' && s2[i]=='1'){
			s3[i]='1';
		}else{
			s3[i]='0';
		}
	}
	s3[i]='\0';
}


void Diff(char*s1,char*s2,char*s3){
	int i,l;
	l=strlen(s1);
	for(i=0;i<l;i++){
		if(s1[i]=='1' && s2[i]=='0'){
			s3[i]='1';
		}else{
			s3[i]='0';
		}
	}
	s3[i]='\0';
}


