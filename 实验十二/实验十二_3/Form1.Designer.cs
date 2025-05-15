using System.Windows.Forms;

namespace 实验十二_3
{
    partial class Form1
    {
        private System.ComponentModel.IContainer components = null;

        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Windows Form Designer generated code

        private void InitializeComponent()
        {
            // 控件定义
            this.previewTextBox = new System.Windows.Forms.TextBox();
            this.fontComboBox = new System.Windows.Forms.ComboBox();
            this.styleComboBox = new System.Windows.Forms.ComboBox();
            this.sizeNumericUpDown = new System.Windows.Forms.NumericUpDown();
            this.lblFont = new System.Windows.Forms.Label();
            this.lblStyle = new System.Windows.Forms.Label();
            this.lblSize = new System.Windows.Forms.Label();
            ((System.ComponentModel.ISupportInitialize)(this.sizeNumericUpDown)).BeginInit();
            this.SuspendLayout();

            // previewTextBox
            this.previewTextBox.Anchor = ((System.Windows.Forms.AnchorStyles)(((System.Windows.Forms.AnchorStyles.Top | System.Windows.Forms.AnchorStyles.Left)
            | System.Windows.Forms.AnchorStyles.Right)));
            this.previewTextBox.BackColor = System.Drawing.Color.White;
            this.previewTextBox.BorderStyle = System.Windows.Forms.BorderStyle.FixedSingle;
            this.previewTextBox.Font = new System.Drawing.Font("微软雅黑", 14F);
            this.previewTextBox.Location = new System.Drawing.Point(20, 20);
            this.previewTextBox.Multiline = true;
            this.previewTextBox.Size = new System.Drawing.Size(400, 100);
            this.previewTextBox.Text = "字体预览示例 ABC 123";
            this.previewTextBox.TextAlign = System.Windows.Forms.HorizontalAlignment.Center;

            // fontComboBox
            this.fontComboBox.DropDownStyle = System.Windows.Forms.ComboBoxStyle.DropDownList;
            this.fontComboBox.FormattingEnabled = true;
            this.fontComboBox.Location = new System.Drawing.Point(20, 140);
            this.fontComboBox.Size = new System.Drawing.Size(150, 20);

            // styleComboBox
            this.styleComboBox.DropDownStyle = System.Windows.Forms.ComboBoxStyle.DropDownList;
            this.styleComboBox.FormattingEnabled = true;
            this.styleComboBox.Location = new System.Drawing.Point(190, 140);
            this.styleComboBox.Size = new System.Drawing.Size(120, 20);

            // sizeNumericUpDown
            this.sizeNumericUpDown.Location = new System.Drawing.Point(330, 140);
            this.sizeNumericUpDown.Size = new System.Drawing.Size(90, 21);

            // 标签设置
            this.lblFont.AutoSize = true;
            this.lblFont.Location = new System.Drawing.Point(20, 125);
            this.lblFont.Text = "字体选择";

            this.lblStyle.AutoSize = true;
            this.lblStyle.Location = new System.Drawing.Point(190, 125);
            this.lblStyle.Text = "文字样式";

            this.lblSize.AutoSize = true;
            this.lblSize.Location = new System.Drawing.Point(330, 125);
            this.lblSize.Text = "字号(磅)";

            // 窗体设置
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 12F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.BackColor = System.Drawing.Color.FromArgb(240, 240, 240);
            this.ClientSize = new System.Drawing.Size(440, 200);
            this.Controls.AddRange(new Control[] {
                previewTextBox,
                fontComboBox,
                styleComboBox,
                sizeNumericUpDown,
                lblFont,
                lblStyle,
                lblSize
            });
            this.FormBorderStyle = System.Windows.Forms.FormBorderStyle.FixedSingle;
            this.StartPosition = System.Windows.Forms.FormStartPosition.CenterScreen;
            this.Text = "专业字体设置工具";
            ((System.ComponentModel.ISupportInitialize)(this.sizeNumericUpDown)).EndInit();
            this.ResumeLayout(false);
            this.PerformLayout();
        }

        #endregion

        private TextBox previewTextBox;
        private ComboBox fontComboBox;
        private ComboBox styleComboBox;
        private NumericUpDown sizeNumericUpDown;
        private Label lblFont;
        private Label lblStyle;
        private Label lblSize;
    }
}