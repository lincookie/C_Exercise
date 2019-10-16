#include <stdio.h>

struct fraction {  
    int numerator;    //分子
    int denominator;  //分母  
};
int gcd(int x,int y){
	if(x%y==0)return y;
	else gcd(y,x%y);
}
struct fraction add(struct fraction a, struct fraction b){
	struct fraction ans;
  	int num, n[5];
	ans.numerator = a.numerator*b.denominator + b.numerator*a.denominator;
	ans.denominator = a.denominator * b.denominator;
	num = gcd(ans.numerator,ans.denominator);
	ans.numerator /= num;
	ans.denominator /= num;
	return ans;
}