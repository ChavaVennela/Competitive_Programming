#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
   long long int a; 
    long long int b; 
    long long int c; 
    long long int d;
    long long int e, f, g, h, i, j, min, max;
    scanf("%lld %lld %lld %lld %lld",&a,&b,&c,&d,&e);
    f = a + b + c + d;
    g = a + b + c + e;
    h = a + b + d + e;
    i = a + c + d + e;
    j = b + c + d + e;
    min = f;
    if(min > g){
        min = g;
    }
    if(min > h){
        min = h;
    }
    if(min > i){
        min = i;
    }
    if(min > j){
        min = j;
    }
    max = f;
    if(max < g){
        max = g;
    }
    if(max < h){
        max = h;
    }
    if(max < i){
        max = i;
    }
    if(max < j){
        max = j;
    }
    printf("%lld %lld", min, max);
    return 0;
}
