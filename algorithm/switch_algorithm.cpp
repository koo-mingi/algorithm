#include<iostream>
using namespace std;


void main() {
	int i = 0, asum = 0, bsum = 0; //asum : 1���� 100���� Ȧ��, bsum : 1���� 100���� ¦����
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
	cout << " 1~100 Ȧ�� ��: asum = " << asum << "\n 1~100 ¦�� ��: bsum = " << bsum << endl;
}

