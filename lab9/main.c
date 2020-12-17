#include <stdio.h>
#include "min.c"
#include <math.h>
#include "max.c"
#include "var.c"
int main()
{
    int n = 7, b = 5;
    int t[7]={13, 12, 5, 1, 19, 13, 17}; 
    float var; 
    int maxx;
    int minn;
    
	

    chercher_max (t, n, &maxx);
    chercher_min (t, n, &minn);
    variance(t, n, &var);
    printf("le max est :%d\n le min est :  %d\n la variance est : %f\n", maxx, minn, var );
     
	
    return 0;
}
