#include<iostream>
#include<string>
using namespace std;

#define N 5




void create_matrix(int[][N] , int , int , int );
string convert(int[][N], int);
string find_lines_that_include_zero(int[][N]);
bool is_line_ordered_increasing(int[][N]);
bool is_line_ordered_discreasing(int[][N]);
string bool_convert(bool, bool);