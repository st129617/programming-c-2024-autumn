#include<cstdio>
#include<cstdlib>
#include<ctime>

int* initIntArray(int len)
{
	int* res = nullptr;
	res = (int*)malloc(sizeof(int) * len);
	for (int i = 0; res != nullptr && i < len; ++i)
	{
		res[i] = 0;
	}
	return res;
}

void printIntArray(int* a, int len)
{
	for (int i = 0; a != nullptr && i < len; ++i)
	{
		printf("%d ", a[i]);
	}
	printf("\n");
}

void randomizeIntArray(int* a, int len, int min = 0, int max = 9)
{
	if (a != nullptr)
	{
		for (int i = 0; i < len; ++i)
		{
			a[i] = rand() % (max - min + 1) + min;
		}
	}
}

int sumOfIntArray(int* a, int len)
{
	int res = 0;
	for (int i = 0; a != nullptr && i < len; ++i)
	{
		res += a[i];
	}
	return res;
}

void expandIntArrayRight(int** a, int* len)
{
	int* newArray = initIntArray(*len + 1);
	if (newArray != nullptr)
	{
		for (int i = 0; i < *len; ++i)
		{
			newArray[i] = (*a)[i];
		}
		free(*a);
		*a = newArray;
		(*len)++;
	}
}
void expandIntArrayLeft(int** a, int* len)
{
	int* newArray = initIntArray(*len + 1);
	if (newArray != nullptr)
	{
		for (int i = 1; i < *len + 1; ++i)
		{
			newArray[i] = (*a)[i - 1];
		}
		free(*a);
		*a = newArray;
		(*len)++;
	}
}

void addElementToEnd(int** a, int* len, int element)
{
	expandIntArrayRight(a, len);
	(*a)[*len - 1] = element;
}
void addElementToBeginning(int** a, int* len, int element)
{
	expandIntArrayLeft(a, len);
	(*a)[0] = element;
}

void deleteElementToEnd(int** a, int* len)
{
	int* newArray = initIntArray(*len - 1);
	if (newArray != nullptr)
	{
		for (int i = 0; i < *len - 1; ++i)
		{
			newArray[i] = (*a)[i];
		}
		free(*a);
		*a = newArray;
		(*len)--;
	}
}
void deleteElementToBeginning(int** a, int* len)
{
	int* newArray = initIntArray(*len - 1);
	if (newArray != nullptr)
	{
		for (int i = 0; i < *len - 1; ++i)
		{
			newArray[i] = (*a)[i + 1];
		}
		free(*a);
		*a = newArray;
		(*len)--;
	}
}

int main(int argc, char* argv[])
{
	int len = 10;
	int* a = initIntArray(len);

	randomizeIntArray(a, len);
	printIntArray(a, len);

	addElementToEnd(&a, &len, 300);
	printIntArray(a, len);

	addElementToBeginning(&a, &len, 100);
	printIntArray(a, len);

	deleteElementToEnd(&a, &len);
	printIntArray(a, len);

	deleteElementToBeginning(&a, &len);
	printIntArray(a, len);
	free(a);


	return 0;
}