#include <stdio.h>
#include "my_mat.h"

int main(){
char i;   
int ans [10][10];
int n=10;
//printf("Enter a value [%c]\n", i);
scanf ("%c", &i);
while (i!='D'){
     if (i=='A'){
     A(ans,n);
     }
     if (i=='B'){ 
     B(ans,n);    
     }
     if (i=='C'){     
     C(ans,n);    
     }
//printf("Enter a value [%c]\n", i);
scanf ("%c", &i);
}
return 0;
}