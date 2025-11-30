#include <iostream>
using namespace std;

void teks() {
	cout << "Segitiga Pascal";
}
int main() {
	int n;
	system ("color 05");
	cout << teks << endl;
	cout << "Input First:";
	cin >> n;

	for (int i = 0; i < n; i++){
		for(int s =0; s < n - i; s++) {
			cout << " ";
		}

		int angka = 1;
		for (int j = 0; j <= i; j++) {
			cout << angka << " ";
			angka = angka * (i - j) / (j + 1);
		}

		cout << endl;
	}

	return 0;
}