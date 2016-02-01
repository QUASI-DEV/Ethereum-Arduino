#include <iostream>
#include "RLP.h"
#include <string>
#include "keccak.h"
using namespace std;
int main(int argc, char** argv) {
	RLP rlp;
	cout << rlp.encodeLength(5, 60) << "\n";
	cout << rlp.intToHex(5) << "\n";
	string s = rlp.encode("aa");
	s = rlp.string_to_hex(s);
	cout << s << endl;
	Keccak k;
	std::cout << k("Hello World") << std::endl;
}

