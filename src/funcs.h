#ifndef FUNCS_H_
#define FUNCS_H_
#include <iostream>
using namespace std;

/*
 * factorialNum.h 阶乘溢出问题 pos范围及进位判断条件
 *
 *  Created on: 2018年4月19日
 *      Author: xuxinxx.xu
 */
void factorial(int (&arr)[], int n, int *&pos);
ostream &reversePrintln(int (&arr)[], int *end, int *beg);
void factorialMain();

/**
 * physical period.h 生理周期问题
 *
 */
void physicalMain();

#endif /* FUNCS_H_ */
