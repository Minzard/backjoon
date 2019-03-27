#include <iostream>
using namespace std; // 표준 namespace를 사용

int sub_num(int a, int b) {
	int sum;

	sum = a-b;
	return sum;
}

int main() {
	int sum;
	
	while(true) {
		int A, B;

		cout << "A, B를 입력해 주세요 : ";
		cin >> A >> B;

		if(A < 0 || A > 10 || B < 0 || B > 10)
			cout << "잘못된 숫자입니다." << endl;

		else {
			sum = sub_num(A, B);
			break;
		}
	}

		cout << "두 수의 차는 " << sum << "입니다." << endl;
		return 0;
}
