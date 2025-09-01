#include <stdio.h>

int main() {
    double cost, selling, percentage;
    scanf("%lf %lf", &cost, &selling);

    if(selling > cost) {
        percentage = ((selling - cost) / cost) * 100;
        printf("Profit %.0lf%%\n", percentage);
    } else if(cost > selling) {
        percentage = ((cost - selling) / cost) * 100;
        printf("Loss %.0lf%%\n", percentage);
    } else {
        printf("No Profit No Loss\n");
    }

    return 0;
}
