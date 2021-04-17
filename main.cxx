#include "main.hxx"

int main(int argc, char* argv[])
{
	int a = 5;
	glBegin();
	a = glTest(a);
	glEnd();
	printf("[TEST]: %d\n", a);
	return 0;
}