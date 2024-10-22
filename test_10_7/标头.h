#pragma once
#ifndef SALES_DADA_H
#define SALES_DADA_H
#include <string>
using namespace std;
struct Sales_data
{
	string bookNo;
	unsigned units_sold = 0;
	double revenue = 0.0;

};
#endif