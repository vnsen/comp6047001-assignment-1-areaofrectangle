#include <stdio.h>

int main() {
    int p;      
    int l;      
    int area;   
    
    printf("Width = ");
    scanf("%d", &p);

    printf("Length = ");
    scanf("%d", &l);

    area = p * l;   
    printf("Area = %d\n", area);
    return 0;
}
