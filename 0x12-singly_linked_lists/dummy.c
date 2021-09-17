#include <stdio.h>
#include <unistd.h>
int fork();
int main(void){
  if(fork()==0){  
  if (1 || 0){
        printf("one or zero is one: %d\n", getpid());
      char *args[] = {"hello ","exec"," call",NULL};
        execv("./du", args);
      printf("after exec\n");
      return (1);
  }
  }else{
    printf("First process %d\n", getpid());
  }
return 0;
}
