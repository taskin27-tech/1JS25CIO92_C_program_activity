#include <stdio.h>
int main() {
float degree, x, term, sum;
int n, i;
printf("Enter angle in degrees: ");
scanf("%f", &degree);
printf("Enter number of terms: ");
scanf("%d", &n);
// Convert degree to radian
x = degree * 3.14159 / 180.0;
term = x; // first term
sum = term;
for (i = 1; i < n; i++) {
term = -term * x * x / ((2 * i) * (2 * i + 1));
sum = sum + term;
}
printf("Approximate value of sin(%.2f) = %.6f\n", degree, sum);
return 0;
}
