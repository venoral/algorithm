/*
 * factorialNum.h 阶乘溢出问题 pos范围及进位判断条件
 *
 *  Created on: 2018年4月19日
 *      Author: xuxinxx.xu
 */

#ifndef FACTORIALNUM_H_
#define FACTORIALNUM_H_
#include <iostream>
using namespace std;
const int MAX = 3000;

void factorial(int (&arr)[MAX], int n, int *&pos) {
	if (n > 1) {
		int added = 0; // 进位数
		for(int *beg = begin(arr); beg <= pos; ++beg) {
			int value = *beg * n + added;
			*beg = value % 10;
			added = value / 10;
			if (beg == pos && added > 0) { // 进位需要在beg==pos时判断
				++pos;
			}
		}
		factorial(arr, n-1, pos);
	}
}
ostream &reversePrintln(int (&arr)[MAX], int *end, int *beg) {
	for(; end >= beg; --end) {
		cout << *end;
	}
	return cout;
}
void factorialNum() {
	int arr[MAX];
	// 初始化，初值为1
	memset(arr, 0, sizeof(arr));
	arr[0] = 1;
	cout << "输入阶乘数：";
	int n;
	cin >> n;
	int *beg = begin(arr);
	int *pos = begin(arr);
	factorial(arr, n, pos);
	reversePrintln(arr, pos, beg) << endl;
}

#endif /* FACTORIALNUM_H_ */
