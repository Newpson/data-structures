#include <queue>
#include <iostream>

typedef struct
{
	int a;
	int b;
} hello_t;

int main(void)
{
	std::queue<hello_t> queue;

	for (int i = 0; i < 10000000; ++i)
	{
		hello_t temp = {i, i+1};
		queue.push(temp);
	}

	for (int i = 0; i < 10000000; ++i)
	{
		queue.pop();
	}

	return 0;
}
