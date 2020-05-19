#include<iostream>
using namespace std;


void main() {
	int i = 0, asum = 0, bsum = 0; //asum : 1부터 100까지 홀수, bsum : 1부터 100까지 짝수합
	int sw = 0;

	while (i < 100) {
		i++;
		if (sw == 0) {
			asum = asum + i;
			sw = 1;
		}
		else {
			bsum = bsum + i;
			sw = 0;
		}
	}
	cout << " 1~100 홀수 합: asum = " << asum << "\n 1~100 짝수 합: bsum = " << bsum << endl;
}

