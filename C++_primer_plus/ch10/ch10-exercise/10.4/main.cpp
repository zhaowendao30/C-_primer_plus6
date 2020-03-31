#include "sales.h"

int main(void)
{
    using namespace SALES;

    double ar[3] = {3.0, 4.0, 1.0};
    Sales s1;
    Sales s2 = {ar, 3};
    Sales s3;
    s3.setSales();
    // show struct
    s1.show();
    s2.show();
    s3.show();
    
    return 0;
}