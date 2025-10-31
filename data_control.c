#include <stdio.h>
#include <math.h>


int m_function(int s_parameter); // prototype
void fibn(int n);
int isPrime(unsigned long long n); // ptype

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
    printf("\n");
    fibn(10);
    printf("%d",  isPrime(10000001427));

    int m_int=5;
    int *m_int_ptr=&m_int; // overload with &
    printf("\n%d", *m_int_ptr);
    printf("\n%p", m_int_ptr);
    printf("\n%p", &m_int_ptr);

    return 0;
}

int m_function(int s_parameter){
    return s_parameter;
}

void fibn(int n){
    int l=1; int sl=0;int crnt = 0;
    printf("%d ", sl); printf("%d ", l);

    for(int i=0;i<n;i++){
        crnt = sl+l;
        sl=l;
        l=crnt;
        printf("%d ", crnt);
    }

}

int isPrime(unsigned long long n) {
    int cntr=0;

    if (n<2) {cntr=0;}
    if (n==2 || n==3) {cntr=1;}
    if (n%2 == 0 || n%3 == 0) {cntr=0;}

    long long limit = sqrt(n);
    for (long long i=5; i<= limit; i+=6){
        if (n%i==0 || n%(i+2) == 0) {
            cntr=1;
        }
    }
    return cntr;
} // def
