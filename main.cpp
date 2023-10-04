#include "hanoi.h"

int main(int argc, char* argv[]){
	hanoi h(std::stoi(argv[1]));
	h.solve();
	return 0;
}
