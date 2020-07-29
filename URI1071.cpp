#include <iostream>

using namespace std;

int main(int argc, char** argv)
{
	int x, y, s;
	
	cin >> x >> y;
	s = 0;
	
	
	for(int i = y + 1; i < x; i++){
		if(i % 2 != 0){
			s = s + i;
		}
	}
	
	cout << s << endl;
	return 0;
}