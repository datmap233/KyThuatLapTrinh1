#include "Header.h"
bool groupSum(int start, int sum, int nums[], int target, int size)
{
	if (sum == target) return true;
	if (start >= size) return false;
	return groupSum(start + 1, sum + nums[start], nums, target, size) || groupSum(start + 1, sum, nums, target, size);
}