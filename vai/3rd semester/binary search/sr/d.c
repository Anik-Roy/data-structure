#include<stdio.h>
int main()
{
    char c[100],ch;
    int i,count=0;
    printf("Enter the string: ");
    gets(c);
    printf("Find the frequncy: ");
    scanf("%c",&ch);
    for(i=0;c[i]!='\0';i++){
            if(ch==c[i])
            ++count;

    }
    printf("freauncy of %c=%d",ch,count);

    return 0;
}
