//============================================================================
// Name        : setofcpp.cpp
// Author      : redcoder
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include<set>
using namespace std;

int main() {

	set<int> setoff;

	setoff.insert(11);
	setoff.insert(22);
	setoff.insert(23);
	setoff.insert(26);
	setoff.insert(29);
	setoff.insert(288);
	setoff.insert(223);
	setoff.insert(21);
	setoff.insert(25);

   set <int>::iterator it1 = setoff.begin();
   it1++;
   setoff.erase(it1);
	for (int i:setoff)
	{	cout<<i <<" ";

	}
	cout <<"";
	cout << "number is find number "<<endl;
set<int>::iterator it1end = setoff.find(29);
for (auto i = it1end; i!=setoff.end(); i++)
{
	cout << *i <<"";
	cout <<endl;
}
	return 0;
}
