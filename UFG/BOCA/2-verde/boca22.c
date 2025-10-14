#include <stdio.h>

#define MAX 50000

int pai[MAX];

int find(int x) {
    if (pai[x] != x) {
        pai[x] = find(pai[x]);
    }
    return pai[x];
}

void union_sets(int x, int y) {
    int px = find(x);
    int py = find(y);
    if (px != py) {
        pai[px] = py;
    }
}

int main() {
    int n, m, a, b, i;
    scanf("%d %d", &n, &m);

    for (i = 1; i <= n; i++) {
        pai[i] = i;
    }

    for (i = 0; i < m; i++) {
        scanf("%d %d", &a, &b);
        union_sets(a, b);
    }

    int familias = 0;
    for (i = 1; i <= n; i++) {
        if (find(i) == i) {
            familias++;
        }
    }

    printf("%d\n", familias);
    return 0;
}
