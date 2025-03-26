using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace 实验五_3
{
    class Student
    {
        private string stuNo;
        private string stuName;
        private string stuSex;
        private int stuAge;
        private string stuSpecialty;

        public Student(string myNo, string myName, string mySex, int myAge, string mySpecialty)
        {
            this.stuNo = myNo;
            this.stuName = myName;
            this.stuSex = mySex;
            this.stuAge = myAge;
            this.stuSpecialty = mySpecialty;
        }

        public string StuNo 
        {
            get; 
            set;
        }

        public string StuName
        {
            get;
            set;
        }

        public string StuSex
        {
            get;
            set;
        }

        public int StuAge
        {
            get
            { if (stuAge <= 0) { return 0; }
                else { return stuAge; }
            }
            set {stuAge = value; }
        }

        public string StuSpecialty
        {
            get {
                if (stuSpecialty == null) { return "未输入"; }
                else { return stuSpecialty; }
            }
            set { stuSpecialty = value; }
        }
        public string GetMessage()
        {
            return string.Format("添加学生信息为：\n学号；{0}\n姓名：{1}\n性别：{2}\n年龄；{3}\n专业：{4}\n", StuNo, StuName, StuSex, StuAge, StuSpecialty);
        }
    }
}
