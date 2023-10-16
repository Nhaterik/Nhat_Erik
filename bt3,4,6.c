#include<stdio.h>
int main() {
	int k=1,n;
	scanf("%d",&n);
	int a[n][n];
	while (k<=n/2) {
		for (i=k;i<=n;i++)   a[1][k]++;
		for (i=k+1;i<=n;i++) a[i][n]++;
		for (i=n-1;i<=k;i++) a[n][i]++;
		for (i=n-1;i<k;i++)  a[i][k]++;
		k++;
		
			
		
	}
	if (n%2==1) a[n/2][n/2]=t
}