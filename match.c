#include <stdio.h>
#include <stdlib.h>
#include <math.h>

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
    //median
    float sqX(int arr[],int size,int mean){
        int sum = 0;
       for (int i = 0; i < size; i++) {
          /* code here */ 
        //  int q =  arr[i] + arr[i];
         sum = sum + (arr[i] * arr[i]);
       }

       float variance = sum - (mean * mean);
       return sqt(variance);
    }
    float coefficientValue(float standard_deviation,float mean){
        float Co = standard_deviation / mean;
        return Co;
    }
///////////////////////////////////////////////
    void sort(int array_name[],int size){ //median(arr_name,size);
       // puts("Started");
       int a=0;
        
        int i,j;
        for (i = 0; i < size -1; i++) {
           /* code here */ 
           for (j = i+1; j < size; j++) {
              /* code here */ 
              if (array_name[i] > array_name[j]) {
                 /* code here */ 
                 int temp = array_name[i];
                 array_name[i] = array_name[j];
                 array_name[j] = temp;
                // array_name[j+1]
               
              }
           }

        }

           for(a; a<size;++a){
            printf("the sorted array is %d\n", array_name[a]);
        }
    
    }
   /////////////////////////////////////////////////////     ////////////////
//standard deviation and mean........

    void main(){
        int array[] = {1,6,9,0,3,4,5,2};
        int array_size = 6;
        // for (int i = 0; i < array_size; i++) {
        //    /* code here */ 
        //       printf(" %.1f\n",sort(array,array_size));
        // }
       int mean = 10;
   // sort(array,array_size);
   float var =  sqX(array,array_size,mean);
//    float sd = sqrt(var);
    printf("the square root is %f\n",sq(4));
    printf("the variance is : %f\n",var;

    }
