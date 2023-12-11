#include<iostream>
using namespace std;

char before(char x){
	char ans;

	if( x == 'A'){
		ans = 'Z';
	}if(x > 'A' && x <= 'Z'){
		ans = x-1;
	}if((x != 'A' && x > 'Z' )|| x < 'A'){
		ans = '0';
	}
	
	return ans;
}

int main(){
	//Test Case
	cout << before('A') << "\n";
	cout << before('B') << "\n";
	cout << before('P') << "\n";
	cout << before('T') << "\n";
	cout << before('Z') << "\n";
	cout << before('a') << "\n";
	cout << before('0') << "\n";
	cout << before('c') << "\n";
	return 0;
}
