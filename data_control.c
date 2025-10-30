#include <stdio.h>

int main(){
    printf("\nthis is for control structure, data type and operator\n");
    // char c2 = 100; printf("%c", c2);
    /*int n1, n2, n3; n1 = 3; n2 = 3; n3 = 4;
    float res  = (float) (n1 + n2 + n3)/3; // type casted explicit
    printf("\n%.2f", res); // %[flags][width][.precision][length]specifier
    */
    // most optimzied FBn
    int Max = 10, cntr=1;
    int n1=0, n2=1; int trl;

    printf("%d", n1);
    while(cntr<=Max){
        printf("\n%d", n2);
        trl=n1+n2;
        n1=n2;
        n2=trl;

        cntr+=1;
    }
    return 0;
}

