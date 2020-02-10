/*
Let K be your birth year and let N be your 7-digit phone number. 
User Euclid's Algorithm to find GCD(N,K), GCD(N,K+1), GCD(N,K+2).
*/

#include "iostream"
using namespace std;

void GCD(int,int);

int main() {

	const int K = 1998, N = 4174559;

	GCD(K, N);

	system("pause");
	return 0;
}

void GCD(int K, int N) {
	int A = K;
	int B = N;
	int R = A % B;

	do 
	{
		cout << "A			B			R			R > 0\n";
		cout << A;
			//<< "			" << B << "			" << R << "			" << (R>0);

		A = B;
		B = R;
		R = A % B;
	} while (R > 0);
}