#include<stdio.h>
#include<math.h>
int main(){
    //49    --->  7*7 ---> 49
    int inputNumber=0,sqrt1=0;
    printf("enter a number: \n");
    scanf("%d",&inputNumber);
    sqrt1 = sqrt(inputNumber);
    printf("square root of %d is : %d \n",inputNumber,sqrt1);
    return 0;
}






#include<stdio.h>
int main(){
    //for loop(inside)
    printf("inside\n");
    for(int i=0;i<=5;i++){
        printf("%d \n",i);
    }

    printf("outside: \n");
    int j=0;
    for(j=0;j<=5;j++){
        printf("%d \n",j);
    }
}