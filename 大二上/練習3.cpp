#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define MAX 40
#define Len 20

struct LongInt
{
	int MyInt[MAX];
	bool IsPositive;
	
	LongInt();
	void Init();   					//利用亂數產生一個長度小於 19 的值
	void Init(int num);  			//指定一個長度小於 19 的值
	void operator = (int); 			//運算子多載
	void Zero();  					//將本身的陣列初始為 0
	void Show(); 					//顯示陣列
	int Compare(LongInt b); 		//比較本身跟長整數 b 之間何者較大，若大於 b 則回傳 1，反之，則回傳-1

	LongInt Add(LongInt);
	LongInt operator + (LongInt); 	//運算子多載
	LongInt Sub(LongInt);
	LongInt operator - (LongInt); 	//運算子多載
};

int main(){	
	srand(time(NULL));	
	LongInt a, b, c;
	a.Init();
	b.Init(987654321);
	c=123456789;
	a.Show();
	b.Show();
	c.Show();
	printf("%d\n",b.Compare(c));
	
	if(b>c)
		printf("b>c\n");
	else if(b<c)
		printf("b<c\n");
	else if(b==c)
		printf("b==c\n");
	
	
	return 0;
}
//=========================================
LongInt::LongInt()
{
	int i;
	for(i=0;i<MAX;i++)
	{
		MyInt[i]=0;
	}
}

//=========================================
void LongInt::Init()
{
	int i;
	for(i=0;i<Len-1;i++)
	{
		MyInt[i]=rand()%10;
	}		
}
//=========================================
void LongInt::Init(int num)
{
	int i=0;
	while(num!=0)
	{
		MyInt[i]=num%10;
		num=num/10;
		i++; 
	}
}
//=========================================
void LongInt::operator = (int num)
{
	int i=0;
	while(num!=0)
	{
		MyInt[i]=num%10;
		num=num/10;
		i++; 
	}	
}
//=========================================
void LongInt::Show()
{
	int i;
	
	for(i=Len-1;i>=0;i--)
	{
		printf("%d",MyInt[i]);
	}
	printf("\n");
}
//=========================================
int LongInt::Compare(LongInt b)
{
	int i;
	for(i=MAX-1;i>=0;i--)
	{
		if(MyInt[i]<b.MyInt[i])
			return -1;
		else if(MyInt[i]>b.MyInt[i])
			return 1;
	}
	return 0;	
}

//=========================================
bool LongInt::operator>(LongInt b)
{
	int i;
	for(i=MAX-1;i>=0;i--)
	{
		if(MyInt[i]<b.MyInt[i])
			return false;
		else if(MyInt[i]>b.MyInt[i])
			return true;
	}
	return false;	
}
//=========================================
bool LongInt::operator<(LongInt b)
{
	int i;
	for(i=MAX-1;i>=0;i--)
	{
		if(MyInt[i]<b.MyInt[i])
			return true;
		else if(MyInt[i]>b.MyInt[i])
			return false;
	}
	return false;	
}

//=========================================
bool LongInt::operator==(LongInt b)
{
	int i;
	for(i=MAX-1; i>=0; i--)
	{
		if(MyInt[i]<b.MyInt[i])
			return false;
		else if(MyInt[i]>b.MyInt[i])
			return false;
	}
	return true;	
}
