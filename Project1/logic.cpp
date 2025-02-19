#include"logic.h"


void create_matrix(int matrix[N][N], int a , int b ) {

	for (int i = 0; i < N; i++)
	{
		for(int j = 0; j < N; j++){
			
			matrix[i][j] = rand() % (b -a + 1) + a;
		}
	}

}

string convert(int matrix[N][N]) {
	string s = "";

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++)
		{
			s = to_string(matrix[i][j]) + " ";
		}
		s += "\n";
	}
	return s;
}

string find_lines_that_include_zero(int matrix[N][N]  ) {

	string line = " ";

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++)
		{
			if (matrix[i][j] == 0) {
				line += "line:" + to_string(i + 1) + " ";
				break;
			}
		}
	}
	return line;
}