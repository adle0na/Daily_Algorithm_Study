#include <cstdio>

int main() {
    int A, B, V;
    scanf("%d %d %d", &A, &B, &V);

    int days = (V - B - 1) / (A - B) + 1;

    printf("%d\n", days);
    return 0;
}