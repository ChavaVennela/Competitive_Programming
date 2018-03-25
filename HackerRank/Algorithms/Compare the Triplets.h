#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int a0, a1, a2, p1 = 0;
    scanf("%d %d %d",&a0,&a1,&a2);
    int b0, b1, b2, p2 = 0;
    scanf("%d %d %d",&b0,&b1,&b2);
    if (a0 != b0){
        if (a0 > b0){
            p1 = p1 + 1;
        }
        else {
            p2 = p2 + 1;
        }
    }
    if (a1 != b1){
        if (a1 > b1){
           p1 = p1 + 1;
        }
        else {
           p2 = p2 + 1;
        }
    }
    if (a2 != b2){
        if (a2 > b2){
          p1 = p1 + 1;
       }
       else {
          p2 = p2 + 1;
       }
    }    
    printf("%d %d", p1, p2);
    return 0;
}
