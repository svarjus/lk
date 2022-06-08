#pragma once

#ifndef lottokone
#define lottokone
#include "ikkuna.h"
#include <set>

struct lk
{
	std::set<short> numerot;
	int foundNumbers;

};
namespace LK
{
	void LK_GenerateNumbers(int limit, int max, lk& rakenne);
}

#endif