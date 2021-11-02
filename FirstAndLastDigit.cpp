#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin >> T;
	while(T--){
    	int n;
    	cin >> n;
    	
    	int last_number = n % 10;
    	int first_number = n;
    	while(n >= 10){
    	    n = n / 10;
    	}
    	first_number = n;
    	cout << last_number + first_number << endl;
	}
	return 0;
}
