#include<stdio.h>
#include<malloc.h>
#include<string.h>
struct node
{
char *s;
int p;
};
void func(struct node** m);
int main(void)
{
  char s1[]="asdf";
  char s2[]="qwer";
  struct node *m[2],*check=NULL;
  int i;
  int x=check->p; 
  m[0]=(struct node*) malloc (sizeof(struct node));
  m[0]->s =(char*)malloc(5);
  strcpy(m[0]->s, s1);
  
  m[1]=(struct node*)malloc(sizeof(struct node));
  m[1]->s =(char*)malloc(5);
  strcpy(m[1]->s, s2);
 //printf(" hjhas= %s", s);
func(&m);
return 0;
}

void func(struct node** m)
{
int i;
for (  i=0;i<2;++i;j=0;j<3;j++)
 {
     printf(" hye ");
     free(m[i]->s);
     m[i]->s= NULL;
     
 }
// here are my changes 


}
