using System;
using System.Windows.Forms;

namespace 实验十二_2
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
            InitializeCourses();
        }

        private void InitializeCourses()
        {
            listBoxAvailableCourses.Items.AddRange(new object[] {
                "计算机基础",
                "ASP.NET网站设计",
                "C#程序设计",
                "Java程序设计",
                "Linux网站设置与维护",
                "VC++程序设计",
                "Flash动画设计",
                "管理信息系统",
                "计算机网络",
                "C语言程序设计",
                "ERP管理",
                "程序设计导论",
                "嵌入式开发",
                "高数1",
                "高数2"
            });
        }

        private void buttonAddCourse_Click(object sender, EventArgs e)
        {
            try
            {
                if (listBoxAvailableCourses.SelectedIndex != -1)
                {
                    var selected = listBoxAvailableCourses.SelectedItem;
                    if (!listBoxSelectedCourses.Items.Contains(selected))
                    {
                        listBoxSelectedCourses.Items.Add(selected);
                        listBoxAvailableCourses.Items.Remove(selected);
                    }
                }
                else
                {
                    MessageBox.Show("请先选择要添加的课程", "提示",
                        MessageBoxButtons.OK, MessageBoxIcon.Information);
                }
            }
            catch (Exception ex)
            {
                MessageBox.Show($"操作失败: {ex.Message}", "错误",
                    MessageBoxButtons.OK, MessageBoxIcon.Error);
            }
        }

        private void buttonAddAllCourses_Click(object sender, EventArgs e)
        {
            listBoxSelectedCourses.Items.AddRange(listBoxAvailableCourses.Items);
            listBoxAvailableCourses.Items.Clear();
        }

        private void buttonRemoveCourse_Click(object sender, EventArgs e)
        {
            try
            {
                if (listBoxSelectedCourses.SelectedIndex != -1)
                {
                    var selected = listBoxSelectedCourses.SelectedItem;
                    if (!listBoxAvailableCourses.Items.Contains(selected))
                    {
                        listBoxAvailableCourses.Items.Add(selected);
                        listBoxSelectedCourses.Items.Remove(selected);
                    }
                }
                else
                {
                    MessageBox.Show("请先选择要移除的课程", "提示",
                        MessageBoxButtons.OK, MessageBoxIcon.Information);
                }
            }
            catch (Exception ex)
            {
                MessageBox.Show($"操作失败: {ex.Message}", "错误",
                    MessageBoxButtons.OK, MessageBoxIcon.Error);
            }
        }

        private void buttonRemoveAllCourses_Click(object sender, EventArgs e)
        {
            listBoxAvailableCourses.Items.AddRange(listBoxSelectedCourses.Items);
            listBoxSelectedCourses.Items.Clear();
        }
    }
}