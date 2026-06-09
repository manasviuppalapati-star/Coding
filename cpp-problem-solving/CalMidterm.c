//The first line prints "Midterm = " followed by the normalized midterm exam score.

//The second line prints "Final = " followed by the normalized final exam score
#include <stdio.h>

void normalizeScores(int *midterm, int *final) {
    int min_score = (*midterm < *final) ? *midterm : *final;
    *midterm -= min_score;
    *final -= min_score;
}

int main() {
    int midterm, final;

    scanf("%d", &midterm);
    scanf("%d", &final);

    normalizeScores(&midterm, &final);

    printf("Midterm = %d\nFinal = %d", midterm, final);

    return 0;
}