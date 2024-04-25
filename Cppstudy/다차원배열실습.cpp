#include <iostream>
using namespace std;


int main()
{
	string student[4][4] = {
		{"방지턱", "19", "국어: 66", "수학: 68"},
		{"정직한", "20", "국어: 73", "수학: 94"},
		{"김가루", "19", "국어: 58", "수학: 37"},
		{"조나단", "20", "국어: 82", "수학: 29"}
	};

	cout << "나이를 입력해주세요\n";
	
	string age;
	cin >> age;

	for (int i = 0; i < 4; i++)
	{
		if (student[i][1] == age)
		{
			cout << student[i][0] << " " << student[i][3] << "\n";
		}

	}

	return 0;
}



// 전처리 define 사용법
/*
#include <iostream>
#define ROW_SIZE 5
#define COL_SIZE 4
using namespace std;
int main()
{
	//int dim2Array1[5][4] = { 0 };
	int dim2Array2[ROW_SIZE][COL_SIZE] = { 0 };
	for (int i = 0; i < ROW_SIZE; i++)
	{
		for (int j = 0; j < COL_SIZE; j++)
		{
		}
	}
}

*/