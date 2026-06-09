#include <stdio.h>

struct details {
    char name[50];
    int item_no;
    int quantity;
    int price;
};

int main() {
    int n,i;
    scanf("%d", &n);

    struct details item[n];

    for ( i = 0; i < n; i++) {
        scanf("%s", item[i].name);
        scanf("%d", &item[i].item_no);
        scanf("%d", &item[i].quantity);
        scanf("%d", &item[i].price);
    }

    for ( i = 0; i < n; i++) {
        int total = item[i].quantity * item[i].price;
        printf("%s %d\n", item[i].name, total);
    }

    return 0;
}

