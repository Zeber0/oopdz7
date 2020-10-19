#include "Head.h"

Kladovshikov::Kladovshikov()
{
	l1.push_back(new int(1));
	l1.push_back(new int(2));
	l1.push_back(new int(3));
}

void Kladovshikov::Print()
{
		
	for (list<int*>::const_iterator it = l1.begin(); it != l1.end(); ++it) {
		cout << **it << " ";
	}
}



Kladovshikov::~Kladovshikov()
{
	for (int* e : l1) { delete e; }
}

Dmitry::Dmitry() {
	l2.push_back("Red");
	l2.push_back("Green");
	l2.push_back("Blue");
}
void Dmitry::Print()
{
	copy(l2.begin(), l2.end(), ostream_iterator<string>(cout, " "));
}
Dmitry::~Dmitry(){
	l2.resize(0);
	l2.clear();
}

DB::DB()
{
}
DB DB::operator=(const DB& obj)
{
	if (this == &obj) {
		return *this;
	}
	a = obj.a;
	return *this;
}
void DB::add(Kladovshikov* b)
{
	a.push_back(b);
}

void DB::print()
{
	for (int i = 0; i < 2; i++) {
		a[i]->Print();
		delete a[i];
		
	}
}


DB::~DB()
{
	/*
	for (int i = 0; i < 2; i++) 
	{
		delete a[i];
	}
	*/
}
