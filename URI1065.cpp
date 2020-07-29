#include <iostream>

using namespace std;

int main(int argc, char** argv)
{
	int n;
	int val, vez;
	val = 0;
	
	for(vez = 1; vez <= 5; vez++){
		cin >> n;
		if(n%2 == 0){
			val = val + 1;
		}
	}
		
	cout << val << " valores pares" << endl;
	return 0;
}