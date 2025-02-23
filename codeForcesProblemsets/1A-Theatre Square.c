#include <stdio.h>

int main() {
    long long int n, m, a;
    scanf("%lld %lld %lld", &n, &m, &a);
    
    long long int side1;
    if(n%a==0)
        side1 = n/a;
    else
        side1 = n/a+1;
    
    long long int side2;
    if(m%a==0)
        side2 = m/a;
    else
        side2 = m/a+1;
    
    printf("%lld", side1*side2);
    return 0;
}
