#include <stdio.h>

int check_same(int* lotto_nums, int* my_nums);

int main(void)
{
	int lotto_nums[6] = { 4, 10, 25, 30, 41, 45 };
	int my_nums[6] = { 4, 10, 25, 30, 41, 45 };
	int res;

	res = check_same(lotto_nums, my_nums);
	printf("number of same:  %d\n", res);

	return 0;

}


int check_same(int* lotto_nums, int* my_nums)
{
	int i, j;
	int cnt = 0;

	for (i = 0; i < 6; i++) {
		for (j = 0; j < 6; j++) {
			if (my_nums[i] == lotto_nums[j]) cnt++;
		}
	}

	return cnt;
}

