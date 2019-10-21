#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include <math.h>

#define MAX 40
#define Len 20

struct LongInt {
 int MyInt[MAX];
 bool IsPositive;

 LongInt();
 void Init(); //利用亂數產生一個長度小於 19 的值
 void Init(int num); //指定一個長度小於 19 的值
 void operator = (int); //運算子多載
 void Zero(); //將本身的陣列初始為 0
 void Show(); //顯示陣列
 int Compare(LongInt b); /*比較本身跟長整數 b 之間何者較大，若大於 b 則回
 傳 1，反之，則回傳-1*/

 bool operator>(LongInt b);
 bool operator<(LongInt b);
 bool operator==(LongInt b);

 LongInt Add(LongInt);
 LongInt operator + (LongInt); //運算子多載
 LongInt Sub(LongInt);
 LongInt operator - (LongInt); //運算子多載
 LongInt Multi(LongInt);
 LongInt operator * (LongInt);
 LongInt Div(LongInt);
 LongInt operator / (LongInt);
};

int main() {
 srand(time(NULL));
 LongInt a, b, c;
 a.Init(1001121);
 b.Init(5);
 c=a*b;
 a.Show();
 b.Show();
 c.Show();
 
 return 0;
}

LongInt::LongInt() {
 int i;
 IsPositive=true;
 for(i=0; i<MAX; i++) {
  MyInt[i]=0;
 }
}

void LongInt::Init() {
 int i;
 for(i=0; i<Len-1; i++) {
  MyInt[i]=rand()%10;
 }
}

void LongInt::Init(int num) {
 int i=0;
 while(num!=0) {
  MyInt[i]=num%10;
  num=num/10;
  i++;
 }
}

void LongInt::operator = (int num) {
 int i=0;
 while(num!=0) {
  MyInt[i]=num%10;
  num=num/10;
  i++;
 }
}

void LongInt::Zero() {
 int i;
 for(i=0; i<MAX; i++) {
  MyInt[i]=0;
 }
}

void LongInt::Show() {
 int i;
 if(IsPositive==false)
  printf("-");
 else
  printf(" ");

 for(i=MAX-1; i>=0; i--) {
  printf("%d",MyInt[i]);
 }
 printf("\n");
}

int LongInt::Compare(LongInt b) {
 int i;
 for(i=MAX-1; i>=0; i--) {
  if(MyInt[i]<b.MyInt[i])
   return -1;
  else if(MyInt[i]>b.MyInt[i])
   return 1;
 }
 return 0;
}

bool LongInt::operator>(LongInt b) {
 int i;
 for(i=MAX-1; i>=0; i--) {
  if(MyInt[i]<b.MyInt[i])
   return false;
  else if(MyInt[i]>b.MyInt[i])
   return true;
 }
 return false;
}

bool LongInt::operator<(LongInt b) {
 int i;
 for(i=MAX-1; i>=0; i--) {
  if(MyInt[i]<b.MyInt[i])
   return true;
  else if(MyInt[i]>b.MyInt[i])
   return false;
 }
 return false;
}

bool LongInt::operator==(LongInt b) {
 int i;
 for(i=MAX-1; i>=0; i--) {
  if(MyInt[i]<b.MyInt[i])
   return false;
  else if(MyInt[i]>b.MyInt[i])
   return false;
 }
 return true;
}

LongInt LongInt::Add(LongInt b) {
 LongInt sum;
 int i;
 for(i=0; i<MAX; i++) {
  sum.MyInt[i]=MyInt[i]+b.MyInt[i];
 }
 for(i=0; i<MAX; i++) {
  if(sum.MyInt[i]>=10) {
   sum.MyInt[i+1]+=sum.MyInt[i]/10;
   sum.MyInt[i]=sum.MyInt[i]%10;
  }
 }
 return sum;
}

LongInt LongInt::operator + (LongInt b) {
 LongInt sum;
 int i;
 for(i=0; i<MAX; i++) {
  sum.MyInt[i]=MyInt[i]+b.MyInt[i];
 }
 for(i=0; i<MAX; i++) {
  if(sum.MyInt[i]>=10) {
   sum.MyInt[i]=sum.MyInt[i]-10;
   sum.MyInt[i+1]++;
  }
 }
 return sum;
}

LongInt LongInt::Sub(LongInt b) {
 LongInt result;
 if(Compare(b)==1 || Compare(b)==0) {
  result.IsPositive=true;
  for(int i=0; i<MAX; i++)
   result.MyInt[i]=MyInt[i]-b.MyInt[i];
 } else {
  result.IsPositive=false;
  for(int i=0; i<MAX; i++)
   result.MyInt[i]=b.MyInt[i]-MyInt[i];
 }
 for(int i=0; i<MAX; i++) {
  if(result.MyInt[i]<0) {
   result.MyInt[i]+=10;
   result.MyInt[i+1]--;
  }
 }
 return result;
}

LongInt LongInt::operator-(LongInt b) {
 LongInt result;
 if(Compare(b)==1 || Compare(b)==0) {
  result.IsPositive=true;
  for(int i=0; i<MAX; i++)
   result.MyInt[i]=MyInt[i]-b.MyInt[i];
 } else {
  result.IsPositive=false;
  for(int i=0; i<MAX; i++)
   result.MyInt[i]=b.MyInt[i]-MyInt[i];
 }
 for(int i=0; i<MAX; i++) {
  if(result.MyInt[i]<0) {
   result.MyInt[i]+=10;
   result.MyInt[i+1]--;
  }
 }
 return result;
}

LongInt LongInt:: Multi(LongInt b) {
 LongInt sum,count;
 int i,j;
 for(j=0; j<Len; j++) {
  for(i=0; i<Len; i++) {
   count.MyInt[i+j]=MyInt[j]*b.MyInt[i];
  }
  for(i=0; i<MAX; i++) {
   if(count.MyInt[i]>=10) {
    count.MyInt[i+1]+=count.MyInt[i]/10;
    count.MyInt[i]=count.MyInt[i]%10;
   }
  }
  sum = sum+count;
  count.Zero();
 }
 return sum;
}

LongInt LongInt::operator * (LongInt b) {
 LongInt sum,count;
 int i,j;
 for(j=0; j<Len; j++) {
  for(i=0; i<Len; i++) {
   count.MyInt[i+j]=MyInt[j]*b.MyInt[i];
  }
  for(i=0; i<MAX; i++) {
   if(count.MyInt[i]>=10) {
    count.MyInt[i+1]+=count.MyInt[i]/10;
    count.MyInt[i]=count.MyInt[i]%10;
   }
  }
  sum = sum+count;
  count.Zero();
 }
 return sum;
}

LongInt LongInt::Div(LongInt b) {
 int i;
 LongInt sum,count;
 sum.Zero();
 for (i=0; i<MAX; i++) {
  count.MyInt[i]=MyInt[i];
 }
 for(sum.MyInt[0];count.Compare(b)==1;sum.MyInt[0]++) {
  count = count - b;
 }
 return sum;
}

LongInt LongInt::operator / (LongInt b) {
 int i;
 LongInt sum,count;
 sum.Zero();
 for (i=0; i<MAX; i++) {
  count.MyInt[i]=MyInt[i];
 }
 for(sum.MyInt[0];count.Compare(b)==1;sum.MyInt[0]++) {
  count = count - b;
 }
 return sum;
}