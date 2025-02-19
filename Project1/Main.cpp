#include"logic.h"
#include"test.h"


int main() {

	int matrix[N][N];
	int a, b;

	bool result_dis = false;
	bool result = false;

	cout << "Input min and max number " << endl;
	cin >> a >> b;

		/*test01();
		test02();
		test03();*/

		 is_line_ordered_increasing( matrix);
		 is_line_ordered_discreasing(matrix);
		bool_convert(result,  result_dis);

	 system("pause");
	 return 0;
}