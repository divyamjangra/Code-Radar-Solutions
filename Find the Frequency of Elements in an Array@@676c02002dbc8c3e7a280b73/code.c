#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    int visited[n];
    for (int i = 0; i < n; i++) {
        visited[i] = 0;  // Mark all elements as unvisited initially
    }
    
    for (int i = 0; i < n; i++) {
        if (visited[i] == 0) {
            int count = 1;
            for (int j = i + 1; j < n; j++) {
                if (arr[i] == arr[j]) {
                    visited[j] = 1;  // Mark as visited
                    count++;
                }
            }
            printf("%d %d\n", arr[i], count);
        }
    }
    
    return 0;
}
