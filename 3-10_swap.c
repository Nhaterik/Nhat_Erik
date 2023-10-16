//ex2 nhap a,b viet ct bien doi gia tri a,b 
#include<stdio.h>
int main(){

int a=0,b=0;
scanf("%d %d",&a,&b);
//c1 truyen gia tri
//int temp=a;
// a=b;
// b=temp;
 

 printf("before swap:%d[%d] %d[%d]\n",a,&a,b,&b);
 swap(a,b);
 printf("after swap:%d[%d] %d[%d]\n",a,&a,b,&b);
 return 0;
}
 
 
// (buoc 2 )void swapA(int *a, int *b)
// {
// 	int temp=*a;
// 	*a=*b;
// 	*b=temp;
// 	printf("in swap:%d[%d] %d[%d]\n",&a,a,&b,b);
// }
//printf("before swap:%d[%d] %d[%d]\n",a,&a,b,&b);
// swap(&a,&b);
// printf("after swap:%d[%d] %d[%d]\n",a,&a,b,&b);

// (buoc 3 truyen tham chieu )void swapR( int &a,int &b)
// { 
// 	int temp=a;
// 	a=b;
// 	b=temp;
// 	printf("in swap:%d[%d] %d[%d]\n",*a,a,*b,b);
//
// }

// 3. truyen tham chieu (c++)
// --la truyen dia chi + mot cach an toan
 
 
 
 
