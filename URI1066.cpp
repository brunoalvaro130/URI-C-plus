#include <iostream>

using namespace std;

int main(int argc, char** argv)
{
	int n;
	int val,val2,val3,val4, vez;
	val = 0;
	val2= 0;
	val3 = 0;
	val4 = 0;
	
	for(vez = 1; vez <= 5; vez++){
		cin >> n;
		if(n%2 == 0){
			val++;
		} else if(n%2 != 0){
			val2++;
		}
		if(n > 0){
			val3++;
		} else if(n < 0){
			val4++;
		}
	    
	}	
	cout << val << " valor(es) par(es)" << endl;
	cout << val2 << " valor(es) impar(es)" << endl;
	cout << val3 << " valor(es) positivo(s)" << endl;
	cout << val4 << " valor(es) negativo(s)" << endl;
	return 0;
}