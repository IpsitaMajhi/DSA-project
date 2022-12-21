#include <stdio.h>
struct Distance
{
    int km;
    float meter;
} firstDistance, secondDistance, sum;
int main()
{
    printf("Enter km and meter for the first distance: \n");
    scanf("%d %f", &firstDistance.km, &firstDistance.meter);
    printf("Enter km and meter for the second distance: \n");
    scanf("%d %f", &secondDistance.km, &secondDistance.meter);
    sum.km = firstDistance.km + secondDistance.km;
    sum.meter = firstDistance.meter + secondDistance.meter;
    while (sum.meter >= 1000)
    {
        sum.meter = sum.meter - 1000;
        sum.km++;
    }
    printf("The Sum is %d km, %f meter\n", sum.km, sum.meter);
    return 0;
}
