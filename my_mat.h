//The program receives a 10*10 square matrix from the user/
int* A(int mat[][10], int n);
/*An auxiliary function that checks of has route between i to j
print: True if there is a path , if no has print False*/ 
void FloydWarshall_Algo_B(int mat[][10], int n,int i_b,int j_b);
//Checks if there is a route between i to j//
void B(int mat[][10], int n);
/*An auxiliary function that checks which route is the shortest in between i to j
and prints it, if there is no path print -1*/
void FloydWarshall_Algo(int mat[][10], int n,int i_c,int j_c);
/* Checking out what is the shortest route in between i to j*/
void C(int mat[][10], int n);