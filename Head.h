#pragma once
#include <iostream>
#include <list>
#include <vector>
#include <iterator>
using namespace std;
class Kladovshikov {
public:
	list<int*> l1;
	Kladovshikov();
	virtual void Print();
	~Kladovshikov();
};
class Dmitry :public Kladovshikov {
public:
	list<string> l2;
	Dmitry();
	void Print() override;
	~Dmitry();
};
class DB
{
private:
	vector<Kladovshikov*> a;
public:
	DB();
	void add(Kladovshikov* b);
	void print();
	~DB();
};