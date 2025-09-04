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

/*
pseudo code
PROGRAM AREA OF RECTANGLE INPUT DATA
var p : integer
var l : integer
var area : integer

algoritma:
baca p
baca l
area -> p * l
tulis "area = ", area

*/
