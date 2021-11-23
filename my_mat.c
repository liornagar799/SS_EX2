#include <stdio.h>
#define MAX_VALUE 1000000 /* Defining an "infinite" distance between vertices */
/* This program receives a 10*10 square matrix from the user */
void A(int mat[][10], int n){
    int i, j; /* counters and indexes */
    for ( i = 0 ; i <n ; i ++){
        for ( j = 0 ; j < 10 ; j++){
        scanf ("%d", &mat[i][j]); 
}}}

/* This program will implement the algorithm of Floyd Warshall depending on function B prints  */
void FloydWarshall_Algo_B(int mat[][10], int n,int i_b,int j_b){
    int current[10][10], i, j, k; /* i,j,k indexes designed to go through each location in the matrix , current examine each location in the matrix   */
    for (i=0; i<n ; i++){
        for (j = 0; j < 10; j++){
            current[i][j] = mat[i][j];
            if(i != j && mat[i][j] == 0) 
                 current[i][j]=MAX_VALUE; 
            
    }}
    for (k=0; k<10 ; k++) {
        for (i=0; i<10; i++) {
            for (j=0; j<10; j++) {
                if (current[i][j] > (current[i][k] + current[k][j]))
                    current[i][j] = current[i][k] + current[k][j];

    }}}
    if ((current[i_b][j_b]!=MAX_VALUE) && (i_b!=j_b))
        printf ("True\n");
    else
        printf ("False\n");
}


/* The program receives from the user the values i and j and prints "True" if there is a route from i to j .Otherwise, print "False." */
void B(int mat[][10], int n){
int i,j, p =10;   
scanf ("%d", &i);
scanf ("%d", &j);
FloydWarshall_Algo_B(mat,p,i,j);
}


/* This program will implement the algorithm of Floyd Warshall depending on function C prints  */
void FloydWarshall_Algo(int mat[][10], int n,int i_c,int j_c)
{
    int current[10][10], i, j, k; /* i,j,k indexes designed to go through each location in the matrix , current examine each location in the matrix   */
    for (i=0; i<n ; i++){
        for (j = 0; j < 10; j++){
            current[i][j] = mat[i][j];
            if(i != j && mat[i][j] == 0) 
                 current[i][j]=MAX_VALUE; 
    }}
    for (k=0; k<10 ; k++) 
        for (i=0; i<10; i++)
            for (j=0; j<10; j++) 
                if (current[i][j] > (current[i][k] + current[k][j]))
                    current[i][j] = current[i][k] + current[k][j];

    

    if((current[i_c][j_c]!=MAX_VALUE) && (i_c!=j_c))
        printf("%d\n", current[i_c][j_c]);
    else
        printf("-1\n");   
    

}

/*The program captures the i and j values from the user and prints the shortest route from i to j, if the program route does not exist Print 1. */
void C(int mat[][10], int n){
int i,j, p =10;   
scanf ("%d", &i);
scanf ("%d", &j);
FloydWarshall_Algo(mat,p,i,j);
}