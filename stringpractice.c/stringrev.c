#include<stdio.h>
int main(){
    int i,j;
    char a[50];
    printf("Enter your string: ");
    scanf("%[^\n]",a);
    for (i=0;a[i] != '\0';i++);
    printf("Your Reverse string: ");
    for (j=i-1;j>=0;j--)
        printf("%c",a[j]);
    printf("\n")
    return 0;
}