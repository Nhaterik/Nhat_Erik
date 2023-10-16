//ways to uppercase
/*-----------------------------------------------------------------------------------------------------------------------------------------------------*/
////minus to ascii
#include<stdio.h>
int main() {
	int i=0;
	char str[100]={};
	gets(str);

	while (str[i]!='\0') {
		if(str[i]>='a'&&str[i]<='z')
	    str[i]-=32;
	    printf("%c",str[i]);
	
	    i++;
    }
	
}

/*--------------------------------------------------------------------------------------------------------------------------------------------------------*/
//use toupper();
#include<stdio.h>
#include<ctype.h >
int main() {
   	int i=0;
   	char str[100]={};
   	scanf(" %[^\n]s", str);
   	while (str[i]!='\0') {
   	
	  printf("%c",toupper(str[i]));
	   i++;
	   }
	
}

/*------------------------------------------------------------------------------------------------------------------------------------------------------*/

#include<stdio.h>
int main() {
   	int i=0;
   	char str[100]={};
   	int n=0;  

 scanf("%d\n",&n);
 for (i=0;i<n;){
 scanf("%c",&str[i]); 
 char c=getchar();
 if (c!=' '&&c!='\n') {
	
	str[i]=c;
	i++;
}
}
/*---------------------------------------------------------------------------------------------------------------------------------------------------------*/
#include<stdio.h>
int main() {
   	int i=0;
   	char str[100]={};
  gets(str);
  puts(str);
}

/*----------------------------------------------------------------------------------------------------*/
#include<stdio.h>
int main() {
   	int i=0,l,n,o;
   	char str[100]={};

   while (str[i]!=0) {
	if (str[i]>='a'&&str[i]<='z'||str[i]>='A'&&str[i]>='Z')
	l++;
	else if (str[i]>='0'&&str[i]<='9')
	n++;
	else o++;
	i++
  }
}
printf("%d %d %d",l,n,o);
}
}
/*----------------------------------------------------------------------------------------------------*/
#include<stdio.h>
int main() {
   	int i=0;
   	char str[100]={};
 fgets(str,10,stdin);
 fputs(str,stdout);
}
/*----------------------------------------------------------------------------------------------------*/
//find the number of characters, numbers, odds.
C1....int main()
{
	char s[100]={}; int chu = 0, so = 0, kytu = 0, i;
		gets(s);
	for(i = 0; i < strlen(s); i++)
		if(s[i] >= 'A' && s[i] <= 'Z' || s[i] >= 'a' && s[i] <= 'z')
			chu++;
		else if(s[i] >= '0' && s[i] <= '9')
			so++;
		else
			kytu++;
	printf("%d %d %d", chu, so, kytu);
}
C2....#include<stdio.h>
int main() {
   	int i=0,l=0,n=0,o=0;
   	char str[100]={};
    fgets(str,99,stdin);
   while (str[i]!=0) {
	if (str[i]>='a'&&str[i]<='z'||str[i]>='A'&&str[i]<='Z')
	l++;
	else if (str[i]>='0'&&str[i]<='9')
	n++;
	else o++;
	i++;
  }
  printf("%d %d %d",l,n,o);
}


/*----------------------------------------------------------------------------------------------------*/
//depart the sentence
#include<stdio.h>
int main() {
   	int i=0;
   	char str[100]={};
    gets(str);
while (str[i]!='\0') {
	while (str[i]==' '&&str[i]!='\0') i++;
	while (str[i]!=' '&&str[i]!='\0') {
		printf("%c",str[i]);
		i++;
	}
	printf("\n");
}
}

