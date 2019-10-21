#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 1000
struct MyString {
 char s[MAX];
 MyString() {}
 MyString(char*);
 const char *Filename;
 
 void download(void);
 void Show(void);
 int Length(void);
 int IndexOf(char *);
 MyString SubString(const char *, int, int);
 void Assign(const char *);
 int InsertOf(char *, int);
 MyString operator+(const char*);
 MyString operator+(MyString);
 MyString operator+(int);
 char* c_str() {
  return s;
 };

 void operator=(const char*);
};

int main() {
 MyString a;
 int len;
 
 a.Filename = "input.txt";
 a.download();
 len = a.Length();

 a.SubString(a.s,0,len);

 return 0;
}

void MyString::download() {
 FILE *fptr=fopen(Filename,"r");
 
 fgets(s,MAX,fptr);
 
 fclose(fptr);
} 

MyString::MyString(char *temp) {
 int i=0;
 while(temp[i]!='\0') {
  s[i]=temp[i];
  i++;
 }
 s[i]='\0';
}

void MyString::Show() {
 printf("%s",s);
}

int MyString::Length() {
 int i=0;
 while(s[i]!='\0')
  i++;
 return i;
}

int MyString::IndexOf(char *temp) {
 int i=0;
 int j=0;

}

MyString MyString::SubString(const char *str, int n, int length) {
 char *p;
 const char *d = "!.?";
 FILE *fptr;

 fptr = fopen ("output.txt","w");
 p = strtok(s,d);
 while(p) {
  fprintf(fptr,"%s\n",p);
  p = strtok(NULL,d);
 }
 fclose (fptr);
}

void MyString::Assign(const char *temp) {
 int i=0;
 while(temp[i]!='\0') {
  s[i]=temp[i];
  i++;
 }
 s[i]='\0';
}

void MyString::operator=(const char* temp) {
 int i=0;
 while(temp[i]!='\0') {
  s[i]=temp[i];
  i++;
 }
 s[i]='\0';
}


MyString MyString::operator+(const char* temp) {
 int i=0;
 int len;
 MyString C;
 C=s;
 len=Length();

 while(temp[i]!='\0') {
  C.s[len+i]=temp[i];
  i++;
 }
 C.s[len+i]='\0';
 return C;
}

MyString MyString::operator+(MyString temp) {
 int i=0;
 int len;
 MyString C;
 C=s;
 len=Length();

 while(temp.s[i]!='\0') {
  C.s[len+i]=temp.s[i];
  i++;
 }
 C.s[len+i]='\0';
 return C;
}

MyString MyString::operator+(int num) {
 MyString C;
 int i=0,j=0;
 int temp=0;
 C=s;
 i=Length();

 while(num!=0) {
  temp=temp*10+num%10;
  num=num/10;
 }
 printf("%d\n",temp);
 while(temp!=0) {
  C.s[i+j]=temp%10+'0';
  temp=temp/10;
  j++;
 }
 C.s[i+j]='\0';
 return C;
}

int MyString::InsertOf(char *, int) {


}