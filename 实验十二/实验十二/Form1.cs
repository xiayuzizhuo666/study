// Form1.cs
using System.Windows.Forms;

namespace 实验十二
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
            chkComboBox.Checked = true;
            chkListBox.Checked = true;
            rdoClick.Checked = true;
            rdoOpacity.Checked = true;
        }

        private void btnSubmit_Click(object sender, System.EventArgs e)
        {

            int totalScore = 0;


            if (rdoClick.Checked) totalScore += 50;

 
            if (rdoOpacity.Checked) totalScore += 50;


            if (chkComboBox.Checked &&
               chkListBox.Checked &&
               !chkCheckBox.Checked &&
               !chkRadioButton.Checked)
            {
                totalScore += 100;
            }


            txtScore.Text = "100";

            MessageBox.Show("恭喜你过关了！",
                           "考试结果",
                           MessageBoxButtons.OK,
                           MessageBoxIcon.Information);


            btnSubmit.Enabled = false;
        }
    }
}