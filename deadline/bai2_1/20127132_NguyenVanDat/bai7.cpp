#include "Header.h"
bool splitArray(int start, int size, int sum1, int sum2, int nums[], int cnt1, int cnt2)
{
	if (start > size)
		return false;
	if (start == size) {
		if (cnt1 == 0 || cnt2 == 0) return 0;
		return (sum1 == sum2) ? 1 : 0;
	}
	return splitArray(start + 1, size, sum1 + nums[start], sum2, nums, cnt1 + 1, cnt2) || splitArray(start + 1, size, sum1, sum2 + nums[start], nums, cnt1, cnt2 + 1);
}