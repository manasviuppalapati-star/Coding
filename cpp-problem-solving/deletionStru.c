#include <stdio.h>

struct Student {
    char name[50];
    int rno;
    int age;
    float totalMarks;
};

int main() {
    int n, pos,i;
    scanf("%d", &n);
    struct Student s[100];
    for ( i = 0; i < n; i++) {
        scanf("%s %d %d %f",s[i].name,&s[i].rno,&s[i].age,&s[i].totalMarks);
    }
    scanf("%d", &pos);
    for (i = pos - 1; i < n - 1; i++) {
        s[i] = s[i + 1];
    }
    n--; 
    for ( i = 0; i < n; i++) {
        printf("%s %d %d %.2f\n",s[i].name,s[i].rno,s[i].age,s[i].totalMarks);
    }
    return 0;
}

