#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAXSTACK 5

typedef struct{
 int arr[MAXSTACK];
 int top;
}stack;

//確認堆疊是否為空
int is_empty(stack* s){
 if(s->top == -1) return 1;
 else return 0;
}

int top(stack *s)
{
 if (s->top == -1)
 {
  printf("-1\n");
 }
 else
 {
  printf("%d\n",s->arr[s->top]);
     return (s->arr[s->top]);
 }
}

//確認堆疊是否為滿
int is_full(stack* s){
 if(s->top == MAXSTACK-1) return 1;
 else return 0;
}

//依序印出堆疊內容
void print(stack* s){
    int i;
    for (i=0; i<=s->top; i++)
    {
        printf("%d",s->arr[i]);
     if (i== s->top)
     {
      printf("\n");
     }
     else printf(" ");
    }
}

//從top新增
void push(stack* s, int add){
 if(is_full(s)) printf("Stack is full!\n");
 else{
  s->arr[++s->top] = add;
 }
}

//從top刪除
int pop(stack* s)
{
 if(is_empty(s)) printf("Stack is empty!\n");
 else return s->arr[s->top--];
}

int main(){
 stack s;
 s.top = -1;
 char input[20];
 int i;
 while(scanf("%s",input) != EOF){
  if(strcmp(input,"push") == 0){
   scanf("%d",&i);
   push(&s, i);
  }else if(strcmp(input,"pop") == 0){
   pop(&s);
  }else if(strcmp(input, "is_empty") == 0){
   if(is_empty(&s)) printf("True\n");
   else printf("False\n");
  }else if(strcmp(input,"print") == 0){
   print(&s);
  }else if(strcmp(input,"top")==0){
   top(&s);
  }
 }
 return 0;
}