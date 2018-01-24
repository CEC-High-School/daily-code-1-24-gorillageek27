#include<iostream>
using namespace std;
int main() {

	cout << "what is your score?" << endl;
	int input;
    
	cin >> input;
	if (input < 30)
		cout << "you are made of failure" << endl;
	else if (input > 30)
		cout << "youre such an amazing unicorn" << endl;
	else if (input = 30)
		cout << "um i dont know what to say" << endl;
}