#include <stdio.h>
#include "my_mat.h"

int main(){
char i;   
int ans [10][10];
int n=10;
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
scanf ("%c", &i);
}
return 0;
}