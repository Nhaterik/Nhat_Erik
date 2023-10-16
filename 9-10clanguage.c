#include<stdio.h>
# define max 100
#include<stdbool.h>
int r,i,n, a[max];
//void input () {
//	for (i=0;i<n;i++) scanf("%d",&a[i]);
//	
//}
//void output () {
//	for (i=0;i<n;i++) printf("%d",a[i]);
//	
//}
void input (int a[], int n) {
	for (i=0;i<n;i++) scanf("%d",&a[i]);
	
}
void output (int a[], int n) {
	for (i=0;i<n;i++) printf("%d ",a[i]);
	
}

//void insert(int a[],int n,int v,int p) {
//	
//	for ( i=n-1;i >=p-1;i--)
//	a[i+1]=a[i];
//	a[p-1]=v;
//}
void bubblesort(int a[], int n) {
	for (r=0;r<n;r++) {
		bool swapped =false;
	for (i=0;i<n-1;i++) {
		if (a[i]>a[i+1]) {
			int temp=a[i];
			a[i]=a[i+1];
			a[i+1]=temp;
			swapped=true;
		}
	} 
	if (swapped==false) break;
	printf("round %d: ",r);
	output(a,n);
	printf("\n");
	}
	
}

int main() {
	scanf("%d",&n);

	
	 //input();     
	 input(a,n);
	 //output();  
	//// output(a,n); 
//	 int v=0,p=0;
//	 scanf("%d%d",&v,&p);
	 //insert(a,n,v,p);
	 bubblesort(a,n);
	 //output(a,n+1);
		return 0;
}

 //ex2 tim so lon nhat thu 2 va nho nhat thu 2
 
