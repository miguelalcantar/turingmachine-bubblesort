#include "turing.hpp"

turing::turing(string s){
	int n = s.size();

	// aux
	tape[0] = ' ';
	// first X
	tape[1] = 'x';

	for(int i = 0; i < n; i++)
		tape[i + 2] = s[i];
	
	tape[n + 2] = 'x';

	// header and bounds
	header = 0;
	lbound = 0;
	rbound = n + 2;
}

void turing::left(int i){
	int new_header = header - i;
	if(new_header < lbound){
		for(int i = lbound-1; i >= new_header; i--){
			tape[i] = ' ';
		}
		lbound = new_header;
	}
	header = new_header;
}

void turing::right(int i){
	int new_header = header + i;
	if(new_header > rbound){
		for(int i = rbound+1; i <= new_header; i++){
			tape[i] = ' ';
		}
		rbound = new_header;
	}
	header = new_header;
}

void turing::left_x(char a){
	while(a != tape[header])
		left();
}

void turing::right_x(char a){
	while(a != tape[header])
		right();
}

char turing::sigma(char a){
	tape[header] = a;
	return a;
}

char turing::read(){
	return tape[header];
}

void turing::print(){
	cout<<"[";
	int i = lbound;
	while(i <= rbound){
		if(i == header) cout << '.';
		cout << tape[i];
		i++;
	};
	cout<<"]\n";
}