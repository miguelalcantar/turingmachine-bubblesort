#include "bubble.hpp"

bubble::bubble(string s): turing(s){}

void bubble::init(){
	// posiciona el cabezal en la primer 'x'

	cout << "Init:\n";	
	right_x('x');
	print();
	cout << '\n';
	compare();
}

void bubble::compare(){

	
	right();
	print();
	char sigma_1 = read();
	right();
	print();
	char sigma_2 = read();

	if(sigma_2 == 'x' or sigma_1 > sigma_2){
		swap();
	}
	else{
		left();
		compare();
	}
}

void bubble::swap(){

	cout << "\nSwap:\n";
	char a = read();
	sigma('y');
	left_x('x');
	left();
	sigma(a);
	right_x('y');
	left();
	print();

	a = read();
	right();
	sigma(a);
	left();
	sigma('y');
	left_x('x');
	left();
	print();

	a = read();
	right_x('y');
	sigma(a);
	print();

	cout << '\n';

	if(a == 'x'){
		lap();
	}
	else{
		compare();
	}
}

void bubble::lap(){

	left();
	if(read() == 'x'){
		right_x(' ');
	}
	else{
		left_x('x');
		compare();
	}
}