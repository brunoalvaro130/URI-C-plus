#include <iostream>
#include <stdio.h>

using namespace std;

int main(int argc, char** argv)
{
	int a, b, c, d;
	
	cin >> a >> b >> c >> d;
	
	if(a >= b){
		cout << "O JOGO DUROU " << (24 - a) + b << " HORA(S)" << endl;
	}else {
		cout << "O JOGO DUROU " << b - a << " HORA(S)" << endl;
	}
	return 0;
}