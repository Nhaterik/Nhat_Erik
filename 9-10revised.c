#include<stdio.h>
# define max 100

int v,p,i,n,a[max];
void input (int a[], int n) {
	for (i=0;i<n;i++) scanf("%d",&a[i]);
	
}
void insert() {
	
	for ( i=n-1;i >=p-1;i--)
	a[i+1]=a[i];
	a[p-1]=v;
	
}
int main() {
	scanf("%d",&n);
	input(a,n); 
 scanf("%d%d",&v,&p);

	insert();
for (i=0;i<n+1;i++) printf("%d ",a[i]);
return 0;
	
}




