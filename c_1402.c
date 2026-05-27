#include<stdio.h>

int main() {
    int a;
    scanf("%d",&a);
    int m[a];
    for(int i=0;i<a;i++) {
        scanf("%d",&m[i]);
    }
    for (int i = a - 1; i >= 0; i--) {
        printf("%d",m[i]);
        if (i != 0) {
            printf(" ");
        }
    }
}