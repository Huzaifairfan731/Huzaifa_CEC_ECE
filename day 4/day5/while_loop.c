include<stdio.h>
int main(){
    int inputnumber=0;
    printf("enter a number: \n");
    scanf("%d",&inputnumber);
    int i=0;
    while(i<=inputnumber){
        printf("%d\n",i);
        i++;
    }
    return 0;
    }
