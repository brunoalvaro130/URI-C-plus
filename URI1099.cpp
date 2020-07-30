#include <iostream>

using namespace std;

int main(int argc, char** argv)
{
	int n, x, y, z, soma;
	
	cin >> n;
	
	while(true){
		if(n == 0){
			break;
		}
		cin >> x;
		cin >> y;
		
		if(x > y){
			z = x;
			x = y;
			y = z;
		}
		soma = 0;
		for(int i = x+1; i < y; i++){
			if(i%2 != 0){
				soma += i;
			}
		}
		cout << soma << endl;
		n--;
	}
	return 0;
}