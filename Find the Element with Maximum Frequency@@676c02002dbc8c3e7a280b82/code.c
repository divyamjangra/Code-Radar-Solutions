#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    
    int arr[N];
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }
    
    int max_count = 0;
    int result = arr[0];


    for (int i = 0; i < N; i++) {
        int count = 1;
        for (int j = i + 1; j < N; j++) {
            if (arr[i] == arr[j]) {
                count++;
                arr[j] = -1;  
            }
        }


        if (count > max_count || (count == max_count && arr[i] < result)) {
            max_count = count;
            result = arr[i];
        }
    }
    
    printf("%d\n", result);
    return 0;
}
