#include<iostream>
#include<string.h>
#include<stack>


using namespace std;

void Reverse(string c,int n){

	stack<char> S;
	// Loop for Push
	for (int i = 0; i < n;i++){
		S.push(c[i]);

	}

	//Loop for Pop

	for(int i = 0; i < n; i++){
		c[i]=S.top();
		S.pop();
	}
};

int main(){

	string m;
	cout<<"Enter the string: ";
	cin >> m;

	Reverse(m, m.length());
	cout << "Output= "<<m;
	return 0;
}
