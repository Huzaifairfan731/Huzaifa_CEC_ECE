#include<stdio.h>
int main(){
    int arr[10]={10,20,30,40,50,60,70};
    int data =60;
    for(int i=0;i<5;i++){
        if(arr[i]==data){
            printf("The position is :%d",i);
            break;
        }
    }
}