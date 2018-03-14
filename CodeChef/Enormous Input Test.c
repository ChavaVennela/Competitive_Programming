#include <stdio.h>
 
int main(void) {
    long n, k, i;
    scanf("%ld%ld", &n, &k);
    long long l;
    int count = 0;
    for(i = 0; i < n; i++){
        scanf("%lld", &l);
        if(l % k == 0){
            count = count + 1;
        }
    }
    printf("%d", count);
	// your code goes here
	return 0;
} 