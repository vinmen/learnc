
#include <stdio.h>
#include <math.h>

struct point {
    int x;
    int y;
};

int main() {
    
    struct point point1;
    struct point point2;    
    double len;

    printf("Enter first line x and y: ");
    scanf("%d %d", &point1.x, &point1.y);
    printf("Enter second line x and y: ");
    scanf("%d %d", &point2.x, &point2.y);

    len = sqrt(pow(point2.x - point1.x, 2) + pow(point2.y - point1.y, 2));
    printf("Line length: %.2f", len);
    return 0;
}