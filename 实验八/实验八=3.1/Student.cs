using System;
using System.Collections.Generic;
using System.Text;

namespace 实验八_3
{
    public abstract class Student
    {
        public string StuNo { get; set; }
        public string Name { get; set; }
        public string Gender { get; set; }
        public int Age { get; set; }
        public abstract string StudyBehavior { get; }
    }

    public class PrimaryStudent : Student
    {
        public override string StudyBehavior => "正在学习语文、数学、英语基础课程";
    }

    public class MiddleStudent : Student
    {
        public override string StudyBehavior => "正在备战中考全科复习";
    }

    public class CollegeStudent : Student
    {
        public override string StudyBehavior => "正在学习专业课程和实习";
    }
}