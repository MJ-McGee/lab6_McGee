SquareMatrix: square_matrix.o
	g++ -std=c++11 -g -Wall square_matrix.o -o SquareMatrix
clean:
	rm *.o SquareMatrix
