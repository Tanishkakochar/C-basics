//A file numbers.txt contains a list of integers separated by spaces. Read all integers, compute their sum and average, and print both.//
#include <stdio.h>
int main ()
{
    FILE *fp;
    int num, sum = 0, count = 0;
    double average;

    fp = fopen("numbers.txt", "r");
    if (fp == NULL) {
        perror("Error opening file");
        return 1;
    }

    while (fscanf(fp, "%d", &num) == 1) {
        sum += num;
        count++;
    }

    fclose(fp);

    if (count > 0) {
        average = (double)sum / count;
        printf("Sum: %d\n", sum);
        printf("Average: %.2f\n", average);
    } else {
        printf("No numbers found in the file.\n");
    }

    return 0;
}