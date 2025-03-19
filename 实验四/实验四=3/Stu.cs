using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace 实验四_3
{
    class Stu
    {
        private string no;
        private string name;
        private string sex;
        private double score;



        public string No
        {
            get { return no; }
            set { no = value; }
        }
        public string Name
        {
            get { return name; }
            set { name = value; }
        }
        public string Sex
        {
            get { return sex; }
            set { sex = value; }
        }
        public double Score
        {
            get { return score; }
            set { score = value; }
        }
        public Stu(string no, string name, string sex, double score)
        {
            this.no = no;
            this.name = name;
            this.sex = sex;
            this.score = score;
        }
    }
}
