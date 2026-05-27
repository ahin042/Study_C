#include <stdio.h>

int main() {
    int a;
    scanf("%d", &a);
    int m[a];
    for (int i = 1; i <= a; i++) {
        scanf("%d", &m[i]);
    }
    for (int i = 1; i <= 2; i++) {
        for (int j = 0; j < a; j++) {
            printf("%d", m[j]);
        }
    } 
}