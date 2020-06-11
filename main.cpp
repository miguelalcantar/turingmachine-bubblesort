# include "bubble.cpp"
# include <ctime>


// inicializar cadena de valores aleatorios de 0 a 9
string init(){
	srand((unsigned) time(0));

	string s = to_string(rand());

	return s;
}

int main(int argc, char** argv) {
	string s;

	cout << "Ingrese lista a ordenar:\n";
	s = init();

	bubble machine(s);
	machine.print();

	machine.init();
	machine.print();
	
	return 0;
}