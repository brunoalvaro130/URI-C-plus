#include <iostream>

using namespace std;

int main(int argc, char** argv)
{
	int n, x, v1, v2;
	v1 = 0;
	v2 = 0;
	
	cin >> n;
	
	for(int i = 0; i < n; i++){
		cin >> x;
		if(x >= 10 && x <= 20){
			v1++;
		} else {
			v2++;
		}
	}
	
	cout << v1 << " in" << endl << v2 << " out" << endl;
	return 0;
}