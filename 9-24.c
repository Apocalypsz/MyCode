#include <stdio.h>

struct stu
{
	char name[20];
	int age;
	double mark;
};



int main()
{
	//printf("%d\n", sizeof(char*));

	struct stu s = { "ÕÅÈı", 20, 90 };
	printf("%s %d %lf\n", s.name, s.age, s.mark);


	return 0;
}