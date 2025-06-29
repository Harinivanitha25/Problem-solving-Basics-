#include <stdio.h>

#define MAX 10000  

int main() {
    int n;
    scanf("%d", &n);
    
    int arr[n], freq[MAX] = {0};
    
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        freq[arr[i]]++;
    }

    int max = 0, value = 0;
    for(int i = 0; i < MAX; i++) {
        if(freq[i] > max) {
            max = freq[i];
            value = i;
        }
    }

    printf("%d", value);
    return 0;
}
