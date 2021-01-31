#include <stdio.h>
#include <stdlib.h>
float sqt(int number);
void main(){
    float sqr;
    printf("Enter a number:");
    scnaf("%d",num);

    printf("The square root of the number is %f.",sqr);
}

//// square root function
float sqt(int number){
    float ans; int mid;
    int start = 0,end = number;

    while(start<= end){
        mid = (start + end) / 2;

        if (mid * mid == number) {
           /* code here */ 
           ans = mid;
           break;
        }

        if (mid * mid < number) {
           /* code here */ 
           start = mid +1;
           ans = mid;
        }else{
            end = mid - 1;
        }
    }
        float incr = 0.1;
        for (int i = 0; i < 5; i++) {
           /* code here */ 
           while (ans * ans <= number) {
              /* code here */ 
              ans += incr;
           }

           ans = ans - incr;
           incr = incr /10;
           }
           return ans;
        
}