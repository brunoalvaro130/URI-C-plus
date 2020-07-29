#include <stdio.h>
#include <iostream>

using namespace std;

int main(int argc, char** argv)
{
	int x;
	
	scanf("%d", &x);
	
	for(int i = x; i <= x + 11; i++){
		if(i%2 !=0){
			printf("%d\n", i);
		}
	}
	return 0;
}