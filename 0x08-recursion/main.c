#include <stdio.h>


int _strlen_recursion(char *s)
{
int i = 0;
if (*s != '\0')
{
_strlen_recursion(s);
s++;
i++;
}
return (i);
}


int main(void){

     int n;

    n = _strlen_recursion("Corbin Coleman");
    printf("%d\n", n);
    return (0);
}