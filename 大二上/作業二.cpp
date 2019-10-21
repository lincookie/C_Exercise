#include <stdio.h>
#include <stdlib.h>
#define MAX 100

struct polynomial {
 int coef;      //多項式的係數
 int expon;      //多項式的指數
};

struct MyPoly {
 polynomial terms[MAX] ;   //多項式陣列
 int size ;      //多項式大小
 const char *Filename;   //檔案名稱 
 MyPoly();      //建構子 初始化 size = 0
 MyPoly(const char*);   //建構子 讀入檔案

 void download();    //讀入檔案 
 void ShowPoly( ) ;    //印出多項式內容
 MyPoly Add(MyPoly) ;   //多項式相加
 void SingleMult(int) ;   //將多項式乘上一係數
 int Lead_Exp() ;    //回傳多項式中最大指數的係數
 void Attach(int, int) ;   //新增 1 個項式到多項式中
 void Remove(int);    //刪除多項式中的某一指數
 MyPoly Mult(MyPoly);    //多項式相乘
};

int main() {
 int option,num,Coef,Expon;
 char Poly;
 MyPoly C;
 MyPoly A("a.txt");
 MyPoly B("b.txt");
 printf("1. 讀入多項式\n");
 printf("2. 印出多項式內容\n");
 printf("3. 多項式相加\n");
 printf("4. 多項式乘上一數值\n");
 printf("5. 印出多項式中最大指數的係數\n");
 printf("6. 新增項式\n");
 printf("7. 刪除多項式中的項式\n");
 printf("8. 多項式相乘\n");
 printf ("option:\n");
 while (scanf("%d",&option)!=EOF) {
  switch (option) {
   case 1:
    printf("請選擇要處理的多項式(輸入A或B):\n");
    scanf(" %c",&Poly);
    if(Poly=='A'||Poly=='a') {
     A.download();
    } else if(Poly=='B'||Poly=='b') {
     B.download();
    }
    break;
   case 2:
    A.ShowPoly();
    B.ShowPoly();
    break;
   case 3:
    C=A.Add(B);
    C.ShowPoly();
    break;
   case 4:
    printf("請選擇要處理的多項式(輸入A或B):\n");
    scanf(" %c",&Poly);
    printf("請輸入一數字:\n");
    scanf(" %d",&num);
    if(Poly=='A'||Poly=='a') {
     A.SingleMult(num);
    } else if(Poly=='B'||Poly=='b') {
     B.SingleMult(num);
    }
    break;
   case 5:
    printf("請選擇要處理的多項式(輸入A或B):\n");
    scanf(" %c",&Poly);
    if(Poly=='A'||Poly=='a') {
     printf("%d",A.Lead_Exp());
    } else if(Poly=='B'||Poly=='b') {
     printf("%d",B.Lead_Exp());
    }
    break;
   case 6:
    printf("請選擇要處理的多項式(輸入A或B):\n");
    scanf(" %c",&Poly);
    printf("請輸入係數與指數:\n");
    scanf(" %d %d",&Coef,&Expon) ;
    if(Poly=='A'||Poly=='a') {
     A.Attach(Coef,Expon);
    } else if(Poly=='B'||Poly=='b') {
     B.Attach(Coef,Expon);
    }
    break;
   case 7:
    printf("請選擇要處理的多項式(輸入A或B):\n");
    scanf(" %c",&Poly);
    printf("請輸入要刪除的項:");
    scanf(" %d",&num);
    if(Poly=='A'||Poly=='a') {
     A.Remove(num);
    } else if(Poly=='B'||Poly=='b') {
     B.Remove(num);
    }
    break;
   case 8:
    C=A.Mult(B);
    C.ShowPoly();
    break;
   default:
    break;
  }
  printf ("\noption:\n");
 }
 return 0;
}

//建構子 初始化 size = 0
MyPoly::MyPoly() {
 size=0;
}

//建構子 讀入檔案
MyPoly::MyPoly(const char* filename) {
 Filename = filename;
 FILE *fptr=fopen(filename,"r");
 size=0;
 while(!feof(fptr)) {
  fscanf(fptr,"%d %d", &terms[size].coef,&terms[size].expon);
  size++;
 }
 fclose(fptr);
}

//讀入檔案
void MyPoly::download() {
 FILE *fptr=fopen(Filename,"r");
 size=0;
 while(!feof(fptr)) {
  fscanf(fptr,"%d %d", &terms[size].coef,&terms[size].expon);
  size++;
 }
 fclose(fptr);
} 


//印出多項式內容
void MyPoly::ShowPoly() {
 int i;
 for(i=0; i<size-1; i++) {
  printf("%dX^%d+",terms[i].coef, terms[i].expon);
 }
 printf("%dX^%d\n",terms[i].coef, terms[i].expon);
}

//多項式相加
MyPoly MyPoly::Add(MyPoly B) {
 MyPoly Temp;
 int sum;
 int indexA=0, indexB=0;
 while(indexA<size && indexB<B.size) {
  if(terms[indexA].expon>B.terms[indexB].expon) {
   Temp.Attach(terms[indexA].coef, terms[indexA].expon);
   indexA++;
  } else if(terms[indexA].expon<B.terms[indexB].expon) {

   Temp.Attach(B.terms[indexB].coef, B.terms[indexB].expon);
   indexB++;
  } else {
   sum=terms[indexA].coef+B.terms[indexB].coef;
   if(sum!=0) {
    Temp.Attach(sum, terms[indexA].expon);
   }
   indexA++;
   indexB++;
  }
 }
 for(; indexA<size; indexA++)
  Temp.Attach(terms[indexA].coef, terms[indexA].expon);
 for(; indexB<B.size; indexB++)
  Temp.Attach(B.terms[indexB].coef, B.terms[indexB].expon);
 return Temp;
}

//將多項式乘上一係數
void MyPoly::SingleMult(int num) {
 int i;
 for(i=0; i<size; i++) {
  terms[i].coef *= num;
 }
}

//回傳多項式中最大指數的係數
int MyPoly::Lead_Exp() {
 if(size==0)
  return 0;
 else
  return terms[0].expon;
}

//新增 1 個項式到多項式中
void MyPoly::Attach(int coef, int expon) {
 polynomial temp;
 int pos=0,i;
 temp.coef=coef;
 temp.expon=expon;
 if(size==0) {
  size++;
  terms[0]=temp;
 } else {
  while(terms[pos].expon>temp.expon&&pos<size) {
   pos++;
  }
  for(i=size; i>pos; i--) {
   terms[i]=terms[i-1];
  }
  terms[i]=temp;
  size++;
 }
}

//刪除多項式中的某一指數
void MyPoly::Remove(int num) {
 int pos=0,i;
 while(terms[pos].expon>num) {
  pos++;
 }
 for(i=pos; i<size-1; i++) {
  terms[i]=terms[i+1];
 }
 size--;
}

//多項式相乘
MyPoly MyPoly::Mult(MyPoly B) {
 MyPoly Temp,Final;
 int i,j;
 for(i=0; i<B.size; i++) {
  Temp.size=0;
  for(j=0; j<size; j++) {
   Temp.Attach(B.terms[i].coef*terms[j].coef,B.terms[i].expon+terms[j].expon);
  }
  Final=Final.Add(Temp);
 }
 return Final;
}