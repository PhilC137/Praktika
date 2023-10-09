#include <stdio.h>
#include <math.h>
#include <math.h>

#define PI 3.14159265

void sinF(){
    printf("Print whit sinF Function");
    double ret, val;
    val = PI / 180;
    for (double i = 0; i <= 360; i+=10) {
        ret = sin(i*val);
        printf("\nThe sine of %lf is ", i);
        printf("%.3f", ret);
        printf(" degrees");
    }
}

void sinW(){
    printf("\nPrint whit sinW Function");
    double x, res ,val = 0;
    val = PI / 180;
    do {
        res = sin(x*val);
        printf("\nThe sine of %lf is ", x);
        printf("%.3f", res);
        printf(" degrees");
        x += 10;
    } while (x <= 360);

}

int main() {
    sinF();
    sinW();
    return 0;
}

