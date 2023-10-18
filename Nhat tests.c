//cursor stores elements(variable,array,functino,cursor) of program as running
//--> provide mootjcachs truy cập khác mà nó trỏ tới.(alias)
//ứng dụng::
//+NO cần có các bản sao dữ liệu trong các hàm cục bộ
//+trả về nhiều hơn một giá trị
//+thao tác với mảng với chuooix các kiểu dư liệu tự định nghĩa
//+ cấp phát bộ nhớ động
//int *a=&b;
//int *a;
//-->kieu du lieu la kieu du lieu thành phần mà nó trở tới.
//ví trí *:
//	+xuất hiện ở khai báo --> biến là con trỏ
//	+nếu trong biểu thức 1 ngôi con trỏ --> truy cập thành phần mà con trỏ trỏ tới.
//nhập xuất mảng sử dụng con trỏ 
//cấp phát động sử dụng con trỏ (dunhgf thư viễn stdlib.h)
//malloc (memory allocation)
//calloc (continuous allocation)
//free

/*------------------------------------------------------------------------------------------------------------------------------------------------------------------------*/

//#include <stdio.h>
//
//int main(){
//int a=5;
//printf("a {val: %d, add:%d  ,size:%d}",a,&a,sizeof(a));	
//int *pa=&a;
//printf("a {val: %d, add:%d  ,size:%d}",pa,&pa,sizeof(pa));	//-->con trỏ pa chỏ tới a. nó cũng được cấp phát bộ nhowsw riêng 
////-->nếu thay đổi int thành char thì kích thước thay đổi 4->1 còn kích thước pa thì dữ nguyên là 8.(nếu thay đổi hệ điều hành thành 32byte nó sẽ thay đổi thành 8-->4byte 
//return 0;	
//}
/*------------------------------------------------------------------------------------------------------------------------------------------------------------------------*/



//*pa là biến mà nó trỏ.
//#include <stdio.h>
//
//int main(){
//int a=5;
//int *pa=&a;
//*pa=99;
//printf("%d %d",a,*pa);
//
//return 0;	
//}
/*------------------------------------------------------------------------------------------------------------------------------------------------------------------------*/


//int sum(int a,int b) {
//	return a+b;
//}
//int diff(int a,int b) {
//
//	return a-b;
//}
//
//#include <stdio.h>
//
//int main(){
//int a=3,b=10;
//int (*fnc)(int,int)=sum;
//printf("sum :%d",fnc(a,b));
//fnc=diff;
//printf("\ndiff: %d",fnc(a,b));
//return 0;	
//}
/*------------------------------------------------------------------------------------------------------------------------------------------------------------------------*/



//chua hieu 18/10/2024
//#include <stdio.h>
//#include<stdlib.h>
//#define max 100
//void input(int a[],int n) {
//	for (int i=0;i<n;i++)
//	scanf("%d",&a[i]);   //a+i nhay o nho,,,,or i+a or &i[a]
//}
//void  output(int a[],int n) {  
//	for (int i=0;i<n;i++)
//	printf("%d",a[i]); 
//}
//int main(){
//	int n=0, a[max]={}; //c2 thay *a
//	scanf("%d",&n);
//	a=(int*) malloc(n*sizeof(int));// cap phat bo nho hien thoi khong quan tam vung nho hien thoi cua vung nho do
////=(int*)  calloc(n,sizeof(int)); // cap phat lan luot theo so phan tu va kich thuoc, dat gia tri ban dau =0;
//	input(a,n); //uyen dia chi
//	output(a,n);
//	free(a);
//return 0;	
//}
/*------------------------------------------------------------------------------------------------------------------------------------------------------------------------*/




//int main(){
// char a[100]={};
// int i=1;
// gets(a);
//
// while (a[i]!='\0') {
//     if (a[i-1]==32) {
//         if (a[i]>=92&&a[i]<=122) a[i]=a[i]-32;
//    
//     }
//       i++;   
// }
// puts(a);
//return 0;	
//}
/*------------------------------------------------------------------------------------------------------------------------------------------------------------------------*/




#include <stdio.h>
#include<stdlib.h>
#include<ctype.h>
int main(){
char a[100]={},*temp;
gets(a);

strlwr(a);
// temp=strtok(a," ");
temp=strtok(a,",");

while (temp!='\0') {
 *temp=toupper(*temp);  
// temp[0]=toupper(temp[0]);
	printf("%s",temp);
//emp=strtok('\0'," ");
	*temp=strtok('\0',",");
}
return 0;	
}
/*------------------------------------------------------------------------------------------------------------------------------------------------------------------------*/



