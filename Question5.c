#include<stdio.h>
#include<conio.h>

int length(char*);

int main(){
char a[30];
int l;

printf("Enter a string\n");
gets(a);
l= length(a);
printf("The length is : %d",l);
return 0;
}
int length(char*p){
int c=0;
while(*p!='\0'){
c++;
p++;
}
return c;
}
