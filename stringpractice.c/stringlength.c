#include<stdio.h>
int main(){
    int i;
    char a[40];
    printf("Enter the a string: ");
    scanf("%[^\n]",a);
    i = 0;
    for (i=0;a[i] != '\0'; i++);
   /* while (a[i] != '\0'){
        i++;
    }*/
    printf("Length of string is: %d",i);
    return 0;
}