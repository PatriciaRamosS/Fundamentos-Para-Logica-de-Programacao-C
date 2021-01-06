//4. O que os programas abaixo imprimem. 

//A)  

#include <stdio.h>  
int main () 
{   
    int x=5, y=3, z;   
    int *p;   
    
    p=&x;   
    z=2*y+(*p)-x;   
    
    printf("z=%d",  z );   
    
    return 0;
}  

//Resposta: 6, Como P recebi x, então temos: z=2*3+(5)-5 = 6 B) 