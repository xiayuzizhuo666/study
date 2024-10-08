#include <stdio.h>

struct Stu
{
	
	char name[20];
	int age;
	char sex[10];
	char tele[12];
}; 
void print(struct Stu* ps)
{
	printf("%s %d %s %s\n", (*ps).name, (*ps).age, (*ps).sex, (*ps).tele);

	printf("%s %d %s %s\n", ps->name, ps->age, ps->sex, ps->tele);
}



int main()
{
	struct Stu s = { "zhangsan",18,"man","13537270598" };

	/*printf("%s %d %s %s\n", s.name, s.age, s.sex, s.tele);*/

	print(&s);

	return 0;
}