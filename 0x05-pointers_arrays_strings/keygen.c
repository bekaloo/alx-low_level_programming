#include<stdio.h>
#include <string.h>
#include<time.h>
#include<stdlib.h>
#include<math.h>
int main(){
char pwrd[32];
int i;
srand(time(NULL));
while (1) {
int lim=2772, adup=0;
for(i=0; adup<lim-100;i++)
{
    pwrd[i]='a'+ abs(rand()%10);
    //printf("in for%s\n",pwrd);
    adup+=pwrd[i];
}
if(adup==lim){
    printf("%s\n",pwrd);
}else{
    pwrd[i]-=adup-lim;
    printf("%s\n",pwrd);
}
}
return 0;
}