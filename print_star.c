#include<stdio.h>
void main(){

    char print='=';
    int row,col;
    int no;

    printf("Enter The Number:\n");
    scanf("%d",&no);
    printf("____________________\n\n");

    for(row=1;row<=no;row++){

        for(col=1;col<=row;col++){
            printf("%c",print);
        }
        printf("\n");
    }
    printf("____________________\n");

    return 0;
}
