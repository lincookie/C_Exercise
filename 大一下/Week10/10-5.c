#include<stdio.h>
#include<stdlib.h>
#include<string.h> 
typedef struct data{
 int num;
 struct data *next;
}data; 
void append(data**head,data*newnode)
{
 data*tmp=*head;
 if(*head==NULL)
  *head=newnode;
 else{
 
  while(tmp->next!=NULL)
   tmp=tmp->next;
   tmp->next=newnode;
}
}
data* creat(int num){
 data* tmp=(data*)malloc(sizeof(data));
 tmp->num=num;
 tmp->next=NULL;
 return tmp;
 
}
void print(data*head)
{
 data*now=head;
 if(head=NULL){
  printf("No data\n");
 }
 else {
  while(now!=NULL){
   printf("%p %d %p\n",now,now->num,now->next);
   now=now->next;
  }
 }
}
data* check(data*head,int n){
 data*tmp=head;
 while(tmp!=NULL){
  if(tmp->num==n){

  return tmp; 
  }
  else tmp=tmp->next;
 }

 return NULL;
}
data*serch(data*head,data*want){
 data*tmp=head;
 while(tmp!=NULL){
 if(tmp->next==want)return tmp;
 else tmp=tmp->next;
 }
return NULL ;
} 
void Delete(data**head,int num)
{
 data *tmp=*head;
 data *want=check(*head,num);
 if(*head==NULL)printf("NO DATA\n");
 else if(want==NULL)printf("NO NUM\n");
 else if(*head==want){
  *head=want->next;
  free(want);
 } 
 else 
 {
  tmp=serch(*head,want);
  tmp->next=want->next;
  free(want);
 }
}



int main()
{
 int num;
 data *head=NULL;
 data *newnode,*tmp;
 char cmd[20];
 while(scanf("%s",cmd)!=EOF)
 {
  if(strcmp(cmd,"append")==0){
   scanf(" %d",&num);
   newnode=creat(num);
   append(&head,newnode);
  }
  else if(strcmp(cmd,"print")==0){
   print(head);
  }
  else if(strcmp(cmd,"check")==0){
    scanf(" %d",&num);
    tmp=check(head,num);
    if(tmp==NULL)printf("False\n");
    else printf("True\n");
  }
  else if(strcmp(cmd,"delete")==0){
   scanf(" %d",&num);
   Delete(&head,num);
  }
 }
 
}