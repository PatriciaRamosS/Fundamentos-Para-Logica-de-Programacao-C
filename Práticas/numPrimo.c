#include <stdio.h>

int main()
{
    int N=1, i;
    
    for(N=1;N<=1000;N++)
    {
        if(N%i==1)
        {
            N++; 
            i++;
        }
        else
        {
            printf("%d nao e primo\n",N);
        }
    }
    return 0;
}