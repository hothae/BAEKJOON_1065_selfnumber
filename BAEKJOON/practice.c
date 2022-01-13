#pragma warning(disable:4996)

/*
셀프넘버 출력하기
기존의 내 생각에는 n의 생성자를 배열에 넣어서
배열비교를 통해 배열 내에 존재하지 않는 숫자를 차례대로 출력 하려고 했음

근데 그냥 생성자의 숫자와 배열의 주소의 숫자를 동일시 해서 0이 아닌 숫자를 채워 넣으면
해당 배열에 0이 있는 배열의 숫자들은 모두 셀프넘버가 됨

그리고 d() 함수에서의 while문 생각을 못하고 if else 문으로 네줄,다섯줄 더 붙여서 쓰느라 애먹음
*/

#include <stdio.h>
int arr[10001] = { 0, };

int d(int n) {
	int gen = n;
	while (n > 0) {
		gen += n % 10;
		n /= 10;
	}
	return gen;
}


int main(void) {

	int i,tmp;

	for (i = 1; i < 10001; i++) {
		tmp = d(i);
		if (tmp < 10001) arr[tmp] = 1;
	}
	for (i = 1; i < 10001; i++) {
		if (arr[i] != 1) printf("%d\n", i);
	}
	return 0;
}

