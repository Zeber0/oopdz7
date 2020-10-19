#include "Head.h"

Kladovshikov::Kladovshikov()
{
	l1.push_back(new int(1));
	l1.push_back(new int(2));
	l1.push_back(new int(3));
}

void Kladovshikov::Print()
{
		
	for (list<int*>::iterator it = l1.begin(); it != l1.end(); ++it) {
		cout << **it << " ";
	}
}

Kladovshikov::Kladovshikov(const Kladovshikov& cop)
{
	for (list<int*>::const_iterator it = cop.l1.begin(); it != cop.l1.end(); it++)
	{

		l1.push_back(new int(**it));
	}
}

Kladovshikov* Kladovshikov::Copy()
{
	return new Kladovshikov(*this);
}

Kladovshikov::~Kladovshikov()
{
	for (list<int*>::const_iterator it = l1.begin(); it != l1.end(); ++it) {
		delete *it;
	}
}

Dmitry::Dmitry() {
	l2.push_back("Red");
	l2.push_back("Green");
	l2.push_back("Blue");
}
Dmitry::Dmitry(const Dmitry& cop)
{
	for (list<string>::const_iterator it = cop.l2.begin(); it != cop.l2.end(); it++)
	{

		l2.push_back(*it);
	}
}
Dmitry* Dmitry::Copy()
{
	return new Dmitry(*this);
}
void Dmitry::Print()
{
	for (list<string>::const_iterator it = l2.begin(); it != l2.end(); ++it) {
		cout << *it << " ";
	}
}
Dmitry::~Dmitry(){
}

DB::DB()
{
}
void DB::add(Kladovshikov* b)
{
	a.push_back(b);
}

void DB::print()
{
	for (int i = 0; i < 2; i++) {
		a[i]->Print();
		
	}
}
DB& DB::operator= (const DB& drob)
{
	if (this == &drob)
	{
		return *this;
	}
	if (a.size() != 0)
	{
		for (int i = 0; i < a.size(); i++)
		{
			delete a[i];
		}
		a.resize(0);
	}
	for (int i = 0; i < 2; i++) {
		a.push_back(drob.a.at(i)->Copy());
	}
	return *this;
}

DB::~DB()
{

	for (int i = 0; i < 2; i++) 
	{
		delete a[i];
	}
}
