#include<stdio.h>
int grade(){
    int marks;
    printf("Enter marks : ");
    //input keyboard
    scanf("%d",&marks);
    if(marks>=80 & marks<=100){
        printf("A");
    }
    else if(marks>=70 & marks<=79){
        printf("B");
    }
    else if(marks>=60 & marks<=69){
        printf("C");
    }
    else if(marks>=50 & marks<=59){
        printf("D");
    }
    else if (marks>=0 & marks <50){
        printf("F");
    }
    else if (marks<=-1 & marks>=101){
        printf("E");
    }
}
