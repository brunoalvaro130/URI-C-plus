#include <iostream>
#include <stdio.h>

using namespace std;

int main(int argc, char** argv)
{
	int m, n, l, sum;
	
	while(true){
		cin >> m >> n;
		
		if(m <= 0|| n <= 0){
				break;
		} else {
			if(m > n){
			l = m;
			m = n;
			n = l;
		    }
		    sum = 0;
		    for(int i = m; i <= n;i++){
			    sum += i;
                printf("%d ", i);
		    }
		    cout << "Sum=" << sum << endl;
		
		}
		
	}
	return 0;
}