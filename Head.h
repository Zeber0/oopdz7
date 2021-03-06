#pragma once
#include <iostream>
#include <list>
#include <vector>
#include <iterator>
#include <string>
using namespace std;
class Kladovshikov {
public:	
	list<int*> l1;
	Kladovshikov();
	virtual void Print();
	Kladovshikov(const Kladovshikov& cop);
	virtual Kladovshikov* Copy();
	virtual ~Kladovshikov();
};
class Dmitry :public Kladovshikov {
public:
	list<string> l2;
	Dmitry();
	Dmitry(const Dmitry& cop);
	Dmitry* Copy() override;
	void Print() override;
	~Dmitry();
};
class DB
{
private:
	vector<Kladovshikov*> a;
public:
	DB();
	DB& operator= (const DB& drob);
	void add(Kladovshikov* b);
	void print();
	~DB();
};