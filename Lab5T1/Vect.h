#pragma once
#include <iostream>
#include <list>
using namespace std;

extern int length;
extern list <int> VectData;

class Vect
{
public:
	void add(int element);
	int get(int id);
	void print();
	void del(int id);
	int get_len();
};

