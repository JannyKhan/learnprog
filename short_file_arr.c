#include <stdio.h>
#include <stdlib.h>

int main(){

    FILE *myFile;
    myFile = fopen("khan.txt", "r");

    int fnum[7];
    int num = 6;
    int i,j,temp,arr[10];

    if (myFile == NULL){
        printf("Error Reading File\n");
        exit (0);
    }
    for (i = 0; i < 6; i++){
        fscanf(myFile, "%d", &fnum[i] );
    }

    for (i = 0; i < 6; i++){
        printf("%d\t", fnum[i]);
    }


    for(i=0; i < 6; i++)
        {
            arr[i] = fnum[i];
        }

    //main action
    for(i = 0; i < num;i++){
        for(j = 0;j < (num - i - 1);j++){
            if(arr[j] > arr[j + 1]){
                temp =arr[j];
                arr[j]= arr[j + 1];
                arr[j + 1]=temp;
            }
        }
    }
    printf("\nSorted array : \n");
        for(i =0 ;i< num;i++){
    printf("%d\t",arr[i]);
    }


    myFile = (fopen("arr.txt", "w"));
    if(myFile == NULL)
    {
       printf("Error!");
       exit(1);
    }
       for(i = 0; i < num; ++i)
   {
        for(i =0 ;i< num;i++){
            fprintf(myFile,"%d\t",arr[i]);
    }
    }
    fclose(myFile);
    return 0;
}
