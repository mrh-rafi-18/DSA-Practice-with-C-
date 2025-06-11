#include<stdio.h>

void main(){
FILE *p;
int i=0,single=0,multi=0,com=0,newline=1;;
char ch[100];
p=fopen("comment.txt","r");

while((ch[i++]=getc(p))!=EOF);
i=0;
while(ch[i]!='\0'){
  if(ch[i]=='\n')newline++;

   if(ch[i]=='/'&&ch[i+1]=='/'){
        single++;
        com++;
        int c=0;
        for(int j=i+2;ch[j]!='\n';j++){
            if(ch[j]!='/'){
                c++;
            }
        }
        printf("No.%d comment has %d char\n",com,c);
        printf("No.%d comment at %d line\n",com,newline);
    }
    else if(ch[i]=='/'&&ch[i+1]=='*'){
            int c=0;
            int nl=newline;
        for(int j=i+2;ch[j]!='\0';j++){
            c++;
            if(ch[j]=='\n')nl++;
            if(ch[j]=='*'&&ch[j+1]=='/'){
                multi++;
                com++;
                printf("No.%d comment has %d char\n",com,c-1);
                printf("No.%d comment at %d line\n",com,newline);
                printf("No.%d comment ends at %d line\n",com,nl);
                break;
            }
        }
    }
    i++;
}
printf("%d multiline comments \n%d single comments",multi,single);
}
