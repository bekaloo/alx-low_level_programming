#include<stdio.h>

char *_strcat(char *dest, char *src)
{
int i = 0, j = 0, dcntr, scntr = 0, cntr;
while (src[i]) {
i++;
}
while(dest[j])
{
j++;
}
char cnctd[i + j];
for(cntr = 0;cntr < i + j; cntr++)
{
if(cntr<j)
{
cnctd[cntr] = dest[cntr];
}
else 
{
cnctd[cntr]=src[scntr];
scntr++;
}
}
printf("%d\n",i+j);
dest = cnctd;
return (dest);
}



int main(){
    
    char* a = _strcat("coder"," network");
    
    printf("%s",a);
    
    return 0;
}

