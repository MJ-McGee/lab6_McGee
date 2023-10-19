/*
Author: MJ McGee
Date Created: 10/19/23
Date Last Modified: 10/19/23
Description: Read an input file to get 2 square matrices, print them, print their sum, print their dot product, and print their difference.
*/
#include <iostream>
#include <fstream>
using namespace std;

//Declare the maximum square matrix size as a constant global variable
const int N = 100;

//Declare function prototypes
void print_matrix(int[N][N]);
void sum_matrices(int[N][N], int[N][N], int[N][N]);
void dot_product_matrices(int[N][N], int[N][N], int[N][N]);
void difference_matrices(int[N][N], int[N][N], int[N][N]);

//Driver function
int main() {
    char x;
    fstream file("matrix_input.txt");

    for(int i = 0; i< 64; i++) {
        file >> x;
        cout << x;
    }
    return 0;
}

//Declare functions
void sum_matrices(int[N][N], int[N][N], int[N][N]) {
    return;
}