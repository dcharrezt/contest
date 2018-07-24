#include <fstream>

int main(){

	std::ifstream inf("input.txt");
	std::ofstream ouf("output.txt");

	int a, b;
	inf >> a;
	inf >> b;
	ouf << a+b*b << std::endl;
	
	return 0;
}
