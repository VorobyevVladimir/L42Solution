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

bool is_line_ordered_increasing(int matrix[N][N], bool result){

	

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++)
		{
			if (matrix[i][j] > matrix[i][j + 1]) {
				result = true;
				break;
			}
			else 
			{
				result = false;
			}
		}
	}
	return result;
}
bool is_line_ordered_discreasing(int matrix[N][N] , bool result_dis) {

	

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++)
		{
			if (matrix[i][j] < matrix[i][j + 1]) {
				result_dis = true;
				break;
			}
			else
			{
				result_dis = false;
			}
		}
	}
	return result_dis;
}
string bool_convert(bool result, bool result_dis)
{
	if (result == true || result_dis == true) {
		return "yes";
	}
	else {
		return "no";
	}
	
}