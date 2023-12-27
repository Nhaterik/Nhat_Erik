





///*-------------------------------------------------------------------------------------------------------------------------------*/
//#include <stdio.h>
//
//#define max 100
//typedef struct{
//	short id;
//	char name[max];
//	char author[max];
//}book;
//
//int main()
//{
//    //   c1 khai bao khoi tao book b={10,"C language","Nhat Erik"}; // tuong tu nhu mang duoc cap phat bo nho lien ke nhau
////  c2:khai bao gan  
////book b;
////    b.id=101;
////  strcpy(b.name,"C language");
////  strcpy(b.author,"NHat erikkk");
////   
////  
////    printf("book {id: |%d|, name: |%s|, author: |%s| }",b.id,b.name,b.author);
////    //c3
////    book *pb=&b; //con tro pb tro toi b co kieu du lieu la book
////    
////    pb->id=762005;
////    strcpy(pb->name,"Python language");
////    printf("book {id: |%d|, name: |%s|, author: |%s| }",pb->id,pb->name,pb->author);
////book b;
////scanf("%d",&b.id);
////gets(b.name);
////gets(b.author);
//// printf("book {id: |%d|, name: |%s|, author: |%s| }",b.id,b.name,b.author); -->troi lenh do gap null
//book b;
////scanf("%d\n",&b.id); // c1 nhap \n
//scanf("%d",&b.id);
//fflush(stdin); //c2 giai phong bo dem nhap (khong theo chuan--fflush---bo dem xuat
//gets(b.name);  
//
//gets(b.author);
// printf("book {id: |%d|, name: |%s|, author: |%s| }",b.id,b.name,b.author);
//    return 0;
//}
///*-------------------------------------------------------------------------------------------------------------------------------*/
//#include <stdio.h>
//#define max 100
//typedef struct{
//	short id;
//	char name[max];
//	char author[max];
//}book;
//void input(book*b)
//{
//	scanf("%d\n",&b->id);
//	gets(b->name);
//	gets(b->author);
//
//	
//}
//void output(book b) {
//	printf("book {id: |%d|, name: |%s|, author: |%s| }",b.id,b.name,b.author);
//}
//int main()
//{
//	book b;
// input(&b); 
// output(b);
//    return 0;
//}
///*-------------------------------------------------------------------------------------------------------------------------------*/
//#include <stdio.h>
//#include <string.h>
//#define max 100
//typedef struct{
//	 char name[max];
//	 short age;
//}author;
//typedef struct{
//	short id;
//	char name[max];
//	author book_author;
//}book;
//void input(book*b)
//{
//	scanf("%d\n",&b->id);
//	gets(b->name);
//	gets(b->book_author.name);
//	scanf("%d",&b->book_author.age);
//}
//void output(book b) {
//	printf("book {id: |%d|, name: |%s|, author: |%s| }",b.id,b.name);
//	printf("book { name: |%s|,age: |%d| }",b.book_author.name,b.book_author.age);
//	
//}
//int main()
//{
//	book b;
//	 input(&b); 
// output(b);
//
//    return 0;
//}
///*-------------------------------------------------------------------------------------------------------------------------------*/
#include <stdio.h>
#include <stdlib.h>

#define max 100

typedef struct {
    char name[max];
    short age;
} author;

typedef struct {
    short id;
    char name[max];
    short NumAuthor;
    author* pAuthor;
} book;

void input(book* b) {
    scanf("%hd", &b->id); // Use %hd for short
    getchar(); // Consume newline left in the buffer
    fgets(b->name, sizeof(b->name), stdin);

    scanf("%hd", &b->NumAuthor);
  getchar();
    b->pAuthor = (author*)malloc(b->NumAuthor * sizeof(author));
    for (int i = 0; i < b->NumAuthor; i++) {
        fgets((b->pAuthor + i)->name, sizeof((b->pAuthor + i)->name), stdin);
        scanf("%hd", &(b->pAuthor + i)->age);
		 getchar();
    }
}

void output(book b) {
    printf("book {id: |%hd|, name: |%s| }\n", b.id, b.name);
    for (int i = 0; i < b.NumAuthor; i++)
        printf("{author %d name: |%s|, age: |%hd| }\n", i + 1, (b.pAuthor + i)->name, (b.pAuthor + i)->age);
}

int main() {
    book b;
    input(&b);
    output(b);
    free(b.pAuthor);
    return 0;
}
