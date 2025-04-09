using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

public class Person
{
    public string Name { get; set; }

    public Person(string name)
    {
        Name = name;
    }
}

public class Student : Person
{
    public string StudentId { get; }
    public static int StudentCount { get; private set; }

    public Student(string name, string studentId) : base(name)
    {
        StudentId = studentId;
        StudentCount++;
    }

    public void Study()
    {
        Console.WriteLine($"{Name}（学号：{StudentId}）正在努力学习...");
    }
}

public class Teacher : Person
{
    public string TeacherId { get; }
    public static int TeacherCount { get; private set; }

    public Teacher(string name, string teacherId) : base(name)
    {
        TeacherId = teacherId;
        TeacherCount++;
    }

    public void Teach()
    {
        Console.WriteLine($"{Name}（工号：{TeacherId}）开始授课啦！");
    }
}

class Program
{
    static void Main(string[] args)
    {
        // 创建学生对象
        var s1 = new Student("张三", "2023001");
        var s2 = new Student("李四", "2023002");

        // 创建教师对象
        var t1 = new Teacher("王老师", "T1001");
        var t2 = new Teacher("赵老师", "T1002");
        var t3 = new Teacher("孙老师", "T1003");

        // 调用不同行为
        s1.Study();
        t1.Teach();

        // 显示统计信息
        Console.WriteLine($"\n学生人数：{Student.StudentCount}");
        Console.WriteLine($"教师人数：{Teacher.TeacherCount}");
    }
}