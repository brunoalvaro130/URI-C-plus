#include <iostream>

using namespace std;

int main(int argc, char** argv)
{
	int i, j;
	
	for(i = 1,j = 7; i < 10; j--){
		cout << "I=" << i << " J=" << j << endl;
	    if(j == 5){
			i += 2;
			j = 8;
		}
	
	}
	
	return 0;
}