#ifndef bubble_hpp
#define bubble_hpp

#include "turing.cpp"

class bubble : public turing{

public:

	bubble(string);

	void init();
	void compare();
	void swap();
	void lap();
};


#endif