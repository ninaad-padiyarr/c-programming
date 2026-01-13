/*print number 1-5 in rows skipping 3 using continue and nested for loops*/
#include <stdio.h>

int main() {
    int i, j;

    for (i = 1; i <= 3; i++) {          // outer loop (rows)
        for (j = 1; j <= 5; j++) {      // inner loop (columns)

            if (j == 3) {
                continue;              // skip 3
            }

            if (j == 5) {
                break;                 // stop inner loop
            }

            printf("%d ", j);
        }
        printf("\n");
    }

    return 0;
}
