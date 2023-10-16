#include<stdio.h>
#include<math.h>
int primenumber(int n) {
	int i=1,dem=0;
	for (;i<=sqrt(n);i++) {
		if (n%i==0) {
			dem+=1;
			if (i!=n/i) 
			dem+=1;
		}
	}
   if (dem==2) return 1;
   else return 0;
   
}
int main() {
 int n,dem=1;
 scanf("%d",&n);
 long long number=3,i=3;
 printf("2\n");
 while (dem!=n){
 	 number+=2;
 	for (;i<=number;i+=2) {
 			if (primenumber(i)==1) {
 	printf("%lld\n",i);
	 dem+=1;
	
}
 
	 }
 
	  if (dem==n) break;
	 
	
 	
 	
 }

 return 0;
}
