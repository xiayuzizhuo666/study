using System.Collections.Generic;
using System.Text;

namespace 实验八_3
{
    public class Grade<T> where T : Student
    {
        private readonly List<T> _students = new List<T>();

        public void AddStudent(T student)
        {
            if (_students.Exists(s => s.StuNo == student.StuNo))
                throw new System.ArgumentException($"学号 {student.StuNo} 已存在");

            _students.Add(student);
        }

        public string GetAllInfo()
        {
            var sb = new StringBuilder();
            foreach (var s in _students)
            {
                sb.AppendLine($"【{s.GetType().Name}】");
                sb.AppendLine($"学号：{s.StuNo}");
                sb.AppendLine($"姓名：{s.Name}");
                sb.AppendLine($"性别：{s.Gender}");
                sb.AppendLine($"年龄：{s.Age}");
                sb.AppendLine($"学习状态：{s.StudyBehavior}");
                sb.AppendLine("----------------------");
            }
            return sb.ToString();
        }
    }
}