//// ex1 nhap a,b tich tong a va b 
#include<stdio.h>
int sum (int a,int b)
{ 
return a+b;
}
 

int main() {
	int a=0, b=0;
		scanf("%d %d",&a,&b);
		printf("%d",sum(a,b));
		
return 0;
}
// using void 

//void sum2(int a, int b)
//{
// printf("%d",a+b);
//}
//int main() {
//	int a=0, b=0;
//		scanf("%d %d",&a,&b);
//	  sum2(a,b);
//	  return 0;
//}
 

