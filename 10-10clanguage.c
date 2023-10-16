//int m=sizeof(a)/sizeof(a[0]);
//
//int n=sizeof( )/ sizeof( );
 //for (i=1;i<=m;i++)
 
#include<stdio.h>
#define max 25
int i,j,m,n,a[max][max];
void input() {
	for (i=0;i<m;i++)
	 for (j=0;j<n;j++)
	  scanf("%d",&a[i][j]);
}
//void output(int a[][max],int m,int n) {
//	for (i=0;i<m;i++) {
//		 for (j=0;j<n;j++)
//		 printf("%d ",a[i][j]);
//		 printf("\n");
//		  
//	}
//	void rotate180(int a[][max],int m,int n) {
//	for (i=0;i<m;i++) {
//		 for (j=0;j<n;j++)
//		 printf("%d ",a[m-i-1][n-j-1]);
//		 printf("\n");
//		  
//	}
//	void rotate270(int a[][max],int m,int n) {
//	for (i=0;i<n;i++) {
//		 for (j=0;j<m;j++)
//		 printf("%d ",a[j][n-i-1]);
//		 printf("\n");
//		  
//	}
//		void rotate90(int a[][max],int m,int n) {
//	for (i=0;i<n;i++) {
//		 for (j=0;j<m;j++)
//		 printf("%d ",a[m-j-1][i]);
//		 printf("\n");
//		  
//}
void rotate1() {
	for (i=0;i<m;i++) {
		 for (j=0;j<n;j++)
		 printf("%d ",a[i][n-j-1]);
		 printf("\n");
		  
	}
}
int main() {
	scanf("%d%d",&m,&n);
//	int m=0,n=0,a[max][max]={};
//	scanf("%d",&m,&n);
//	for (i=0;i<m;i++)
//	 for (j=0;j<n;j++)
//	  scanf("%d",&a[i][j]);
//	for (i=0;i<m;i++) {
//		 for (j=0;j<n;j++)
//		 printf("%d",a[i][j]);
//		 printf("\n");
//		  
//	}
	
	input();
	rotate1();
}
