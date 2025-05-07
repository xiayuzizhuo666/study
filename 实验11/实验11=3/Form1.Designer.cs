namespace 实验11_3
{
    partial class Form1
    {
        /// <summary>
        /// 必需的设计器变量。
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        /// 清理所有正在使用的资源。
        /// </summary>
        /// <param name="disposing">如果应释放托管资源，为 true；否则为 false。</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Windows 窗体设计器生成的代码

        /// <summary>
        /// 设计器支持所需的方法 - 不要修改
        /// 使用代码编辑器修改此方法的内容。
        /// </summary>
        private void InitializeComponent()
        {
            this.txtEditor = new System.Windows.Forms.RichTextBox();
            this.btnBold = new System.Windows.Forms.Button();
            this.btnItalic = new System.Windows.Forms.Button();
            this.btnTextColor = new System.Windows.Forms.Button();
            this.btnBackColor = new System.Windows.Forms.Button();
            this.btnFont = new System.Windows.Forms.Button();
            this.btnSize = new System.Windows.Forms.Button();
            this.btnPassword = new System.Windows.Forms.Button();
            this.btnClearFormat = new System.Windows.Forms.Button();
            this.SuspendLayout();

            // txtEditor
            this.txtEditor.Anchor = ((System.Windows.Forms.AnchorStyles)((((System.Windows.Forms.AnchorStyles.Top | System.Windows.Forms.AnchorStyles.Bottom)
            | System.Windows.Forms.AnchorStyles.Left)
            | System.Windows.Forms.AnchorStyles.Right)));
            this.txtEditor.BackColor = System.Drawing.Color.White;
            this.txtEditor.Font = new System.Drawing.Font("微软雅黑", 9F);
            this.txtEditor.Location = new System.Drawing.Point(12, 12);
            this.txtEditor.Name = "txtEditor";
            this.txtEditor.Size = new System.Drawing.Size(560, 250);
            this.txtEditor.TabIndex = 0;

            // btnBold
            this.btnBold.Anchor = ((System.Windows.Forms.AnchorStyles)((System.Windows.Forms.AnchorStyles.Bottom | System.Windows.Forms.AnchorStyles.Left)));
            this.btnBold.BackColor = System.Drawing.Color.FromArgb(((int)(((byte)(240)))), ((int)(((byte)(240)))), ((int)(((byte)(240)))));
            this.btnBold.FlatStyle = System.Windows.Forms.FlatStyle.Flat;
            this.btnBold.Location = new System.Drawing.Point(12, 275);
            this.btnBold.Name = "btnBold";
            this.btnBold.Size = new System.Drawing.Size(60, 30);
            this.btnBold.TabIndex = 1;
            this.btnBold.Text = "加粗";
            this.btnBold.UseVisualStyleBackColor = false;

            // btnItalic
            this.btnItalic.Anchor = ((System.Windows.Forms.AnchorStyles)((System.Windows.Forms.AnchorStyles.Bottom | System.Windows.Forms.AnchorStyles.Left)));
            this.btnItalic.BackColor = System.Drawing.Color.FromArgb(((int)(((byte)(240)))), ((int)(((byte)(240)))), ((int)(((byte)(240)))));
            this.btnItalic.FlatStyle = System.Windows.Forms.FlatStyle.Flat;
            this.btnItalic.Location = new System.Drawing.Point(78, 275);
            this.btnItalic.Name = "btnItalic";
            this.btnItalic.Size = new System.Drawing.Size(60, 30);
            this.btnItalic.TabIndex = 2;
            this.btnItalic.Text = "倾斜";
            this.btnItalic.UseVisualStyleBackColor = false;

            // btnTextColor
            this.btnTextColor.Anchor = ((System.Windows.Forms.AnchorStyles)((System.Windows.Forms.AnchorStyles.Bottom | System.Windows.Forms.AnchorStyles.Left)));
            this.btnTextColor.BackColor = System.Drawing.Color.FromArgb(((int)(((byte)(240)))), ((int)(((byte)(240)))), ((int)(((byte)(240)))));
            this.btnTextColor.FlatStyle = System.Windows.Forms.FlatStyle.Flat;
            this.btnTextColor.Location = new System.Drawing.Point(144, 275);
            this.btnTextColor.Name = "btnTextColor";
            this.btnTextColor.Size = new System.Drawing.Size(75, 30);
            this.btnTextColor.TabIndex = 3;
            this.btnTextColor.Text = "文字颜色";
            this.btnTextColor.UseVisualStyleBackColor = false;

            // btnBackColor
            this.btnBackColor.Anchor = ((System.Windows.Forms.AnchorStyles)((System.Windows.Forms.AnchorStyles.Bottom | System.Windows.Forms.AnchorStyles.Left)));
            this.btnBackColor.BackColor = System.Drawing.Color.FromArgb(((int)(((byte)(240)))), ((int)(((byte)(240)))), ((int)(((byte)(240)))));
            this.btnBackColor.FlatStyle = System.Windows.Forms.FlatStyle.Flat;
            this.btnBackColor.Location = new System.Drawing.Point(225, 275);
            this.btnBackColor.Name = "btnBackColor";
            this.btnBackColor.Size = new System.Drawing.Size(75, 30);
            this.btnBackColor.TabIndex = 4;
            this.btnBackColor.Text = "背景颜色";
            this.btnBackColor.UseVisualStyleBackColor = false;

            // btnFont
            this.btnFont.Anchor = ((System.Windows.Forms.AnchorStyles)((System.Windows.Forms.AnchorStyles.Bottom | System.Windows.Forms.AnchorStyles.Left)));
            this.btnFont.BackColor = System.Drawing.Color.FromArgb(((int)(((byte)(240)))), ((int)(((byte)(240)))), ((int)(((byte)(240)))));
            this.btnFont.FlatStyle = System.Windows.Forms.FlatStyle.Flat;
            this.btnFont.Location = new System.Drawing.Point(306, 275);
            this.btnFont.Name = "btnFont";
            this.btnFont.Size = new System.Drawing.Size(60, 30);
            this.btnFont.TabIndex = 5;
            this.btnFont.Text = "字体";
            this.btnFont.UseVisualStyleBackColor = false;

            // btnSize
            this.btnSize.Anchor = ((System.Windows.Forms.AnchorStyles)((System.Windows.Forms.AnchorStyles.Bottom | System.Windows.Forms.AnchorStyles.Left)));
            this.btnSize.BackColor = System.Drawing.Color.FromArgb(((int)(((byte)(240)))), ((int)(((byte)(240)))), ((int)(((byte)(240)))));
            this.btnSize.FlatStyle = System.Windows.Forms.FlatStyle.Flat;
            this.btnSize.Location = new System.Drawing.Point(372, 275);
            this.btnSize.Name = "btnSize";
            this.btnSize.Size = new System.Drawing.Size(60, 30);
            this.btnSize.TabIndex = 6;
            this.btnSize.Text = "大小";
            this.btnSize.UseVisualStyleBackColor = false;

            // btnPassword
            this.btnPassword.Anchor = ((System.Windows.Forms.AnchorStyles)((System.Windows.Forms.AnchorStyles.Bottom | System.Windows.Forms.AnchorStyles.Left)));
            this.btnPassword.BackColor = System.Drawing.Color.FromArgb(((int)(((byte)(240)))), ((int)(((byte)(240)))), ((int)(((byte)(240)))));
            this.btnPassword.FlatStyle = System.Windows.Forms.FlatStyle.Flat;
            this.btnPassword.Location = new System.Drawing.Point(438, 275);
            this.btnPassword.Name = "btnPassword";
            this.btnPassword.Size = new System.Drawing.Size(60, 30);
            this.btnPassword.TabIndex = 7;
            this.btnPassword.Text = "密码";
            this.btnPassword.UseVisualStyleBackColor = false;

            // btnClearFormat
            this.btnClearFormat.Anchor = ((System.Windows.Forms.AnchorStyles)((System.Windows.Forms.AnchorStyles.Bottom | System.Windows.Forms.AnchorStyles.Left)));
            this.btnClearFormat.BackColor = System.Drawing.Color.FromArgb(((int)(((byte)(240)))), ((int)(((byte)(240)))), ((int)(((byte)(240)))));
            this.btnClearFormat.FlatStyle = System.Windows.Forms.FlatStyle.Flat;
            this.btnClearFormat.Location = new System.Drawing.Point(504, 275);
            this.btnClearFormat.Name = "btnClearFormat";
            this.btnClearFormat.Size = new System.Drawing.Size(75, 30);
            this.btnClearFormat.TabIndex = 8;
            this.btnClearFormat.Text = "清除格式";
            this.btnClearFormat.UseVisualStyleBackColor = false;

            // Form1
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 12F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.BackColor = System.Drawing.Color.FromArgb(((int)(((byte)(245)))), ((int)(((byte)(245)))), ((int)(((byte)(245)))));
            this.ClientSize = new System.Drawing.Size(584, 311);
            this.Controls.Add(this.btnClearFormat);
            this.Controls.Add(this.btnPassword);
            this.Controls.Add(this.btnSize);
            this.Controls.Add(this.btnFont);
            this.Controls.Add(this.btnBackColor);
            this.Controls.Add(this.btnTextColor);
            this.Controls.Add(this.btnItalic);
            this.Controls.Add(this.btnBold);
            this.Controls.Add(this.txtEditor);
            this.MinimumSize = new System.Drawing.Size(600, 350);
            this.Name = "Form1";
            this.Text = "文本编辑器";
            this.ResumeLayout(false);
        }

        #endregion

        private System.Windows.Forms.RichTextBox txtEditor;
        private System.Windows.Forms.Button btnBold;
        private System.Windows.Forms.Button btnItalic;
        private System.Windows.Forms.Button btnTextColor;
        private System.Windows.Forms.Button btnBackColor;
        private System.Windows.Forms.Button btnFont;
        private System.Windows.Forms.Button btnSize;
        private System.Windows.Forms.Button btnPassword;
        private System.Windows.Forms.Button btnClearFormat;
    }
}

