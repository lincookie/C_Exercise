#include<stdio.h>
typedef struct{
	int up;
	int down;
}func;

int gcd(int x,int y){
	if(x%y==0)return y;
	else gcd(y,x%y);
}
int main(){
	func x,y,ans;
  	int num;
	scanf("%d %d",&x.up,&x.down);
	scanf("%d %d",&y.up,&y.down);
	ans.up = x.up*y.down + y.up*x.down;
	ans.down = x.down * y.down;
	num = gcd(ans.up,ans.down);
	ans.up /= num;
	ans.down /= num;
	printf("%d/%d\n",ans.up,ans.down);
	return 0;
}