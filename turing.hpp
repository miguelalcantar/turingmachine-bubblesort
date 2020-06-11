#ifndef turing_hpp
#define turing_hpp

#include <iostream>
#include <string>
#include <map>

using namespace std;

class turing{

	map<int,char> tape;

	int header;
	int lbound;
	int rbound;

public:

	turing(string);

	void left(int = 1);
	void right(int = 1);
	
	void left_x(char);
	void right_x(char);

	char sigma(char);

	char read();
	void print();
};

#endif