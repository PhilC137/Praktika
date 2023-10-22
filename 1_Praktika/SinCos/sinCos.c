#include <stdio.h>
#include <math.h>

#define PI 3.14159265

void sinF(){
    printf("Print whit sinF Function");
    double ret, val;
    val = PI / 180;
    for (double i = 0; i <= 360; i+=10) {
        ret = sin(i*val);
        printf("\nThe sine of %.0f is %.3f degrees", i, ret);
    }
}

void sinW(){
    printf("\nPrint whit sinW Function");
    double x, res ,value;
    x = 0;
    value = PI / 180;
    while (x >= 360) {
        res = sin(x*value);
        printf("\nThe sine of %.0f is %.3f degrees" , x,res);
        x += 10;
    }

}

int main() {
    sinF();
    sinW();
    return 0;
}
