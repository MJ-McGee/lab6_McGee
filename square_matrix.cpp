/*
Author: MJ McGee
Date Created: 10/19/23
Date Last Modified: 10/19/23
Source: stackoverflow.com
Description: Read an input file to get 2 square matrices, print them, print their sum, print their dot product, and print their difference.
*/
#include <iostream>
#include <fstream>
#include <stdint.h>
using namespace std;

//Declare the maximum square matrix size as a constant global variable
const int N = 100;

//Declare function prototypes
void print_matrix(int A[N][N], int n);
void sum_matrices(int A[N][N], int B[N][N], int C[N][N], int n);
void dot_product_matrices(int A[N][N], int B[N][N], int C[N][N], int n);
void difference_matrices(int A[N][N], int B[N][N], int C[N][N], int n);

//Driver function
int main() {
    //Initialize variables
    int temp;
    int n;
    fstream file("matrix_input.txt");
    int A[N][N];
    int B[N][N];
    int C[N][N];
    //Set the size of the matrices
    file >> n;

    if(n <= N) {
    //Print name and lab number
        cout << "MJ McGee\nLab #6: Matrix Multiplication\n" << endl;
        
        //Build two 2D arrays by getting values from the file
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++){
                file >> temp;
                A[i][j] = temp;
            }
        }
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++){
                file >> temp;
                B[i][j] = temp;
            }
        }

        //Print out A and B
        cout << "Matrix A:" << endl;
        print_matrix(A, n);

        cout << "\nMatrix B:" << endl;
        print_matrix(B, n);
    }
    else {
        cout << n << "x" << n << " is too large. Please enter a smaller matrix size!" << endl;
    }
    cout << "\nTERMINATING PROGRAM..." << endl;
    return 0;
}

//Declare functions
void print_matrix(int A[N][N], int n) {
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cout << A[i][j] << " ";
        }
        cout << endl;
    }
}