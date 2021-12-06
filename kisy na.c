#include<stdio.h>
#include<string.h>
int main()
{
  char key1[]="Yes";
  char key2[]="No";
  char key3[]="no";
  char key4[]="yes";
  char buffer[70];
 printf("Do you love me?");
 printf("\n\nYour answer - ");
 scanf("%[^\n]%*c",buffer);
 if(strcmp(key1,buffer) == 0 || strcmp(key4,buffer) == 0)
    printf("\nI love you too");
 else if(strcmp(key2,buffer) == 0 || strcmp(key3,buffer) == 0)
    printf("\nStill I love you");
 return 0;
}
