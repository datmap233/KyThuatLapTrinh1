int bai3(int* a, int size)
{
	int max = *a;
	for (int i = 0; i < size; i++)
	{
		if (max < *(a + i))
			max = *(a + i);
	}
	return max;
}