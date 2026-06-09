// printing artifact name and its edges
#include <stdio.h>

int main() {
    char name[100];
    int edges;

    scanf("%s", name);
    scanf("%d", &edges);

    printf("%s has %d sides.\n", name, edges);

    return 0;
}
