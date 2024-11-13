#include <iostream>
using namespace std;

struct Student
{
	string name;//姓名

	int age;//年龄

	int score;//成绩

}s3;
struct teacher
{
	int id;
	string name;
	int age;
	Student stu;
};

int main()
{
	//struct Student s1;
	//s1.name = "zhangsan";
	//s1.age = 18;
	//s1.score = 100;
	//cout << "名字：" << s1.name << endl
	//	<< "年龄：" << s1.age << endl
	//	<< "成绩：" << s1.score << endl;


	//struct Student s2 = { "lisii",19,100 };
	//cout << s2.name<<s2.age<<s2.score << endl;
	//s3.name = "zhaowu";
	//s3.age = 20;
	//s3.score = 60;

	//system("pause");

	//Student arr[3]
	//{
	//	{"zhangsan",18,100},
	//	{"lisi",18,80},
	//	{"zhaowu",60,60}
	//};

	//for (size_t i = 0;i<3;i++)
	//{
	//	cout << arr->age << arr->name << endl;
	//}




	return 0;
}