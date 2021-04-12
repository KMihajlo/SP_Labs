#include <stdio.h>
#define MAX 100

// вашите функции овде
int coprime(int a, int b);
int gcd(int a , int b);
void swap(int *a, int *b);

int main() {
	int a[MAX];
    int n;
    scanf("%d", &n);
    int i;
    for(i = 0; i < n; i++) {
		scanf("%d", &a[i]);
    }

    // вашиот код почнува овде
    for(i = 0; i < n-1; i++) {
        if (coprime(a[i], a[i+1]) == 1){
            swap(&a[i], &a[i+1]);
        	i++;
        }
    }

    // завршува овде

    for(i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    return 0;
}


void swap(int *a, int *b){
   int t;

   t  = *b;
   *b = *a;
   *a = t;
}


int coprime(int a, int b){
    int c;
    while(a != 0){
    	c = a;
        a = b%a;
        b = c;
    }
    return b;
}
