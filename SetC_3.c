#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<ctype.h>
#define SIZE 5


void sentancegenerator(char *art[],char *noun[],char *verb[],char *prep[]){
int i;
char* first;
char ch;
for(i=0;i<20;i++){
first=art[rand()%SIZE];
ch=*first;
printf("%c",toupper(ch));
printf("%s",(first+1));
printf("%s %s %s %s %s\n",noun[rand()%SIZE],verb[rand()%SIZE],prep[rand()%SIZE],art[rand()%SIZE],noun[rand()%SIZE]);
}
}
int main(){
char *art[SIZE]={"the","a","one","some","any"};
char*noun[SIZE]={"drove","girl","dog","town","car"};
char * verb[SIZE]={"drove","jumped","ran","walked","skipped"};
char *prep[SIZE]={"to","from","over","under","on"};
srand(time(0));
sentancegenerator(art,noun,verb,prep);
system("pause");
return 0;
}
