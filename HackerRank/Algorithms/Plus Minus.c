#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int n;
    float p = 0, q = 0, z = 0; 
    float post, neg, zero;
    scanf("%d",&n);
    int arr[n];
    for(int arr_i = 0; arr_i < n; arr_i++){
       scanf("%d",&arr[arr_i]);
        if(arr[arr_i] == 0){
            z = z + 1;
        }
        else if(arr[arr_i] < 0){
            q = q + 1;
        }
        else {
            p = p + 1;
        }
    }
    post = (p/n);
    neg = (q/n);
    zero = (z/n);
    printf("%f\n%f\n%f", post, neg, zero);
    return 0;
}