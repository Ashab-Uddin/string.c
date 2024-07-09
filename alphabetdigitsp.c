#include<stdio.h>
int main(){
    int i;
    int alphabets =0, digits = 0, specialchars = 0;
    char a[20];
    printf("Enter a string: ");
    fgets(a,sizeof(a),stdin);

    for (i=0;a[i] != '\0'; i++){
        if((a[i] >= 'A' && a[i]<='Z' ) || (a[i]>= 'a' && a[i] <= 'z')){ alphabets++; }
            else if(a[i]>= '0' && a[i]<= '9'){digits++; }
            else if (a[i] != '\n'){ specialchars++; }
        }
    printf("Alphabets:%d\nDigits:%d\nSpecialchars:%d\n",alphabets,digits,specialchars);

    return 0;
    }