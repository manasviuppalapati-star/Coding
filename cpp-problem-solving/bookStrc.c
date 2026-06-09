#include <stdio.h>

struct Book {
    int id;
    char name[50];
    char author[50];
    char publisher[50];
    int copies;
    float price;
};

int main() {
    int n, i;
    scanf("%d", &n);

    struct Book b[n];

    for (i = 0; i < n; i++) {
        scanf("%d %s %s %s %d %f",
              &b[i].id,
              b[i].name,
              b[i].author,
              b[i].publisher,
              &b[i].copies,
              &b[i].price);
    }

    for (i = 0; i < n; i++) {
        float total = b[i].price * b[i].copies;

        // Tax calculation
        if (b[i].price > 500)
            total += total * 0.10;   // 10% tax
        else
            total += total * 0.05;   // 5% tax

        // Output format: book name & final price
        printf("%s %.2f\n", b[i].name, total);
    }

    return 0;
}

