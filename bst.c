#include<stdio.h>
#include<stdlib.h>
struct node{ 
 	struct node *left;
	int data;
	struct node *right;
};
struct node *root=NULL,*new =NULL,*ptr,*top;
int x,dat;
void getNode(int a){
	new = (struct node*)malloc(sizeof(struct node));
	if(new== NULL){
		printf("insuficient memory");
	}else{
	new->data =a;
	new->left=NULL;
	new->right=NULL;
	}
}
void insert(){
	printf("\nEnter the element:");
		scanf("%d",&x);
		getNode(x);
	if(root == NULL){
		root = new;	

	}else{
		ptr = root;
		while(ptr!= NULL){
			if(x== ptr->data){
				printf("Item present in tree\n");
				break;
			}else if(x>ptr->data){
				top= ptr;
				ptr =ptr->right;
			}else{
				top = ptr;
				ptr=ptr->left;
			}
		}

	if(ptr == NULL){
		if(x>top->data){
			top->right = new;	
		}else{
			top->left=new;
			}
	}
	}
}


void inOrder(struct node *ptr){

if(root==NULL)
		printf("\n Tree is empty!!");	
	else{
		if(ptr!=NULL){	
			inOrder(ptr->left);
			printf("%d ",ptr->data);
			inOrder(ptr->right);			
		}
	}
}


void preOrder(struct node *ptr){

if(root==NULL)
		printf("\n Tree is empty!!");	
	else{
		if(ptr!=NULL){	
			printf("%d ",ptr->data);
			preOrder(ptr->left);
			preOrder(ptr->right);	
		}		
	}
}

void postOrder(struct node *ptr){
	if(root==NULL)
		printf("\n Tree is empty!!");	
	else{
		if(ptr!=NULL){	
			postOrder(ptr->left);
			postOrder(ptr->right);
			printf("%d ",ptr->data);	
		}		
	}
}


int search(struct node *ptr,int val){
if(root == NULL){
printf("Tree is empty...!");
}else{
while(ptr!= NULL){
	if(val > ptr->data){
        ptr = ptr -> right;
    
    }else if(val < ptr->data){
        ptr = ptr->left;
    }
    else{
        return 1;
    }
    
}
return 0;
}
}

int delete(struct node *ptr,int val){
struct node *parent,*p;
if(root == NULL){
printf("Tree is empty...!");
}else{
while(ptr!= NULL){
	if(val > ptr->data){
        parent = ptr;
        ptr = ptr -> right;
    
    }else if(val < ptr->data){
         parent = ptr;
        ptr = ptr->left;
    }
    else{  
				break;
    }
    
}

if(ptr==NULL){
			printf("%d is not present in the tree",val);
		}
		else{
if(ptr->left == NULL && ptr->right == NULL){
				if(parent==NULL){
						root=NULL;
						}
		  else if(parent->left == ptr){
		      parent->left = NULL;
		      free(ptr);
		  }else{
		      parent->right= NULL;
		      free(ptr);
		  }
	}else if(ptr->left != NULL && ptr->right != NULL){
	
     
p= ptr->right;
while(p->left!=NULL){
p=p->left;
}
dat=p->data;
delete(root,p->data);
ptr->data=dat;



		}
		else{

			if(parent-> left == ptr){
				if(ptr->left == NULL){
						parent->left = ptr->right;
						free(ptr);
				}else{
					parent->left = ptr->left;

					free(ptr);
	       }
			}else{
					if(ptr->left == NULL){
						parent->right = ptr->right;
						free(ptr);
					}else{
						parent-> right = ptr->left;
						free(ptr);
					}
				}
			}


}
}




}


void main()
{
	int opt,m,v,flag;
	do
	{
	printf("\nEnter the options\n 1.INSERT\n 2.Inorder\n 3.Preorder\n 4.Postorder\n 5.Search \n 6.Delete\n Exit->0:\n");
	scanf("%d",&opt);
		switch(opt)
		{
		case 1:insert();
			break;
						
		case 2:printf("\nInorder:");
					inOrder(root);
			break;
				case 3:printf("\npreorder:");
								preOrder(root);
               break;
				case 4:	printf("\npostorder:");
								postOrder(root);
								break;
				case 5:
							printf("\nEnter the value to search:");
							scanf("%d",&v);
							flag = search(root,v);
							if(flag == 0){
								printf("Element not found!");
								}else{
                                    printf("Element found in the tree.");
                                }
			break;
            case 6: printf("\nEnter the value to delete:");
							scanf("%d",&v);				
							delete(root,v);
                    break;
		}
	
	}while(opt != 0);
}

/* huh 
void srch(struct node *ptr,int val){

if(ptr!= NULL){
	srch(ptr->left,val);
	if(val == ptr->data){
			printf("eLEMENT FOUND");
			flag =1;
	}
	srch(ptr->right,val);
}
}

*/
	/*case 3:flag=0;
							printf("\nEnter the value to search:");
							scanf("%d",&v);
							srch(root,v);
							if(flag== 0){
								printf("Element not found!");
								}
			break;*/





