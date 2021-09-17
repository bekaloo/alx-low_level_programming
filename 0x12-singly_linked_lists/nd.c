#include <stdio.h>
int main(){
int *a;
int b = 6;
a = &b;
*a = *a + 1;
printf("a = %d\n b = \n", b);
//printf("this is another program with id = %d \n", getpid());
return 0;
}
