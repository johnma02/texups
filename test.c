#include <stdio.h>
int main(void) {
    float funds = 1.0, cost = 0.1;
    int candies = 0;
    while(cost <= funds) {
        candies += 1;
        funds -= cost;
        cost += 0.1;
    }
    printf("%d candies with $%.2f left over.\n",candies,funds);
    return 0;
}
