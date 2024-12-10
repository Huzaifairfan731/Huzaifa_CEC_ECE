#include<stdio.h>
int main(){
    scanf("%d",&inputnumber);
    while(inputnumber%10)
        digit=inputnumber%10;
        countnumber++;
        revnumber = (revnumber*10)+digit;
        inputnumber=inputnumber/10;
    }
    print("the reverse of a number is : %d",revnumber);
    print("the no of digits: %d",countnumber);
    return 0;
}