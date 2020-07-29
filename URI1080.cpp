#include <iostream>

using namespace std;

int main(int argc, char** argv)
{
	int n, m, p;
	m = 0;
	
	for(int i = 0; i < 100;i++){
		cin >> n;
		if(m < n){
			m = n;
			p = i;
		}
		
	}
	cout << m << endl << p << endl;
	return 0;
}