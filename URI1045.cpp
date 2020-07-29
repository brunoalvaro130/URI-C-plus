#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


int main(int argc, char** argv)
{
	float x;
	vector<float> v;
	
	for(int i = 0;i < 3;i++){
		cin >> x;
		v.push_back(x);
	}
	
	sort(v.begin(), v.begin() + 3);
	float A, B, C;
	
	C = v[0];
	B = v[1];
	A = v[2];
	
    
    if(A >= (B + C)){
		cout << "NAO FORMA TRIANGULO" << endl; 
	} else {
		if ((A * A) == (B * B) + (C * C)){
		    cout << "TRIANGULO RETANGULO" << endl;
	    } else if ((A * A) > (B * B) + (C * C)){
		    cout << "TRIANGULO OBTUSANGULO" << endl;
	    } else if ((A * A) < (B * B) + (C * C)){
		    cout << "TRIANGULO ACUTANGULO" << endl;
	    }
	}
	if (A == B && B == C){
		cout << "TRIANGULO EQUILATERO" << endl;
	} else if((A == B && A != C) || (B == C && B != A)|| (C == A && C != B)){
		cout << "TRIANGULO ISOSCELES" << endl;
	}
	return 0;
}