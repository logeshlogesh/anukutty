
#include <stdio.h>

int main()
{
    char c;
    printf("enter a charater");
    scanf("%c",&c);
    if((c>='a'&&c<='z')||(c>='A'&&c<='Z'))
    printf("c is a alphabet");
    else
    printf("c is a not alphabet");
    
}
