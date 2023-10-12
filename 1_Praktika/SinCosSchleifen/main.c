#include <stdio.h>
#include <math.h>

#define PI 3.14159265

void sinF(){
    printf("Print whit sinF Function\n");
    double ret, val;
    val = PI / 180;
    for (double i = 0; i <= 360; i+=10) {
        ret = sin(i*val);
        printf("The sin of %.0f is %.3f degrees\n",i ,ret);
    }
}

void sinW(){
    printf("\nPrint whit sinW Function\n");
    double x, res ,value;
    x = 0;
    value = PI / 180;
    do {
        res = sin(x*value);
        printf("The sin of %.0f is %.3f degrees\n",x ,res);
        x += 10;
    } while (x <= 360);
}

int main() {
    sinF();
    sinW();
    return 0;
}

