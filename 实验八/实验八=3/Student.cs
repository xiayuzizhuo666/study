using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;


namespace 实验八_3
{
    public abstract class Student
    {
        // 保留唯一属性定义
        public string StuNo { get; set; }
        public string StuName { get; set; }
        public string StuSex { get; set; }
        public int StuAge { get; set; }

        public abstract string StudyBehavior();
    }

    public class Pupil : Student
    {
        public override string StudyBehavior() => "正在学习语文数学";
    }

    public class MiddleStudent : Student
    {
        public override string StudyBehavior() => "备战中考全科复习";
    }

    public class CollegeStudent : Student
    {
        public override string StudyBehavior() => "专业课题研究";
    }
}