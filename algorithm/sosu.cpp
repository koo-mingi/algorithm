#include<iostream>
#include<math.h>
using namespace std;

// 소수 판별법

//void main() {
//
//	int n, flag = 0, i;
//	cout << "숫자를 입력하세요 : ";
//	cin >> n;
//
//	for (i = 2; i < n; i++) {
//		if (n%i == 0) {
//			flag++;
//			break;
//		}
//	}
//
//	if (flag == 0) {
//		cout << "소수입니다.\n";
//	}
//	else {
//		cout << "소수가 아닙니다.\n";
//	}
//}

// 제곱근을 이용한 소수 판별법
// 제곱근 구하기 : sqrt(숫자)

//void main() {
//	int i, j = 2,flag=0;
//	cout << "숫자를 입력하세요: ";
//	cin >> i;
//
//	while (j <= sqrt(i)) {
//		if (i%j==0) {
//			flag = 1;
//			break;
//		}
//		else {
//			j = j + 1;
//		}
//	}
//
//	if (flag == 0) {
//		cout << "소수입니다." << endl;
//	}
//	else {
//		cout << "소수가 아닙니다.\n";
//	}
//}

//----------------------------------------------------------------------------------------

// 1~100까지 가장 큰 소수
void main() {

	int n = 3, p = 2,max; // n = 100까지 가는 판별할 숫자 , p : 가장 큰 소수를 담는 변수
	int r = 0;

	cout << "구하고자 하는 최대 숫자를 입력하세요 : ";
	cin >> max;

	for (; n < max; n++) {
		for (int i = 2; i <= sqrt(n); i++) {
			if ((r=(n%i)) == 0) {
				break;
			}
		}
		if (r != 0) { // 소수이면 기존 소수와 판별해서 크면 교체
			cout << n<<" "; // 현재 소수를 출력
			if (n > p) p=n;
		}
	}
	cout << "\n가장 큰 소수 " << p << endl;
}