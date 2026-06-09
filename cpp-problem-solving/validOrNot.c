//If the input is invalid, print "Invalid" and prompt for re-entry until valid input is provided.



//Once valid input is provided, the output prints "Median: " followed by the median value formatted to
 //two decimal places

**#include <stdio.h>**



**int main() {**

    **double num1, num2, num3, median;**

**enter\_numbers:**

    **if (scanf("%lf %lf %lf", \&num1, \&num2, \&num3) != 3) {**

        **printf("Invalid\\n");**

        **while (getchar() != '\\n');**

        **goto enter\_numbers;**

    **}**

    **if (num1 > num2) {**

        **float temp = num1;**

        **num1 = num2;**

        **num2 = temp;**

    **}**

    **if (num2 > num3) {**

        **float temp = num2;**

        **num2 = num3;**

        **num3 = temp;**

    **}**

    **if (num1 > num2) {**

        **float temp = num1;**

        **num1 = num2;**

        **num2 = temp;**

    **}**

    **median = num2;**

    **printf("Median: %.2lf", median);**

    **return 0;**

**}**

