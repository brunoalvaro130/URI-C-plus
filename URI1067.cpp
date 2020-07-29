#include <stdio.h>
#include <iostream>

using namespace std;

int main(int argc, char** argv)
{
	int x;
	
	scanf("%d", &x);
	
	for(int i = 0; i <= x; i++){
		if(i%2 !=0){
			cout << i << endl;
		}
	}
	return 0;
}