﻿namespace 实验十_2
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
            this.txtSource = new System.Windows.Forms.TextBox();
            this.txtTarget = new System.Windows.Forms.TextBox();
            this.btnCrateArray = new System.Windows.Forms.Button();
            this.btnAscSort = new System.Windows.Forms.Button();
            this.btnDescSort = new System.Windows.Forms.Button();
            this.label1 = new System.Windows.Forms.Label();
            this.label2 = new System.Windows.Forms.Label();
            this.SuspendLayout();
            // 
            // txtSource
            // 
            this.txtSource.Location = new System.Drawing.Point(31, 49);
            this.txtSource.Multiline = true;
            this.txtSource.Name = "txtSource";
            this.txtSource.Size = new System.Drawing.Size(100, 166);
            this.txtSource.TabIndex = 0;
            // 
            // txtTarget
            // 
            this.txtTarget.Location = new System.Drawing.Point(292, 49);
            this.txtTarget.Multiline = true;
            this.txtTarget.Name = "txtTarget";
            this.txtTarget.Size = new System.Drawing.Size(100, 166);
            this.txtTarget.TabIndex = 1;
            // 
            // btnCrateArray
            // 
            this.btnCrateArray.Location = new System.Drawing.Point(169, 69);
            this.btnCrateArray.Name = "btnCrateArray";
            this.btnCrateArray.Size = new System.Drawing.Size(75, 23);
            this.btnCrateArray.TabIndex = 2;
            this.btnCrateArray.Text = "生成数组";
            this.btnCrateArray.UseVisualStyleBackColor = true;
            this.btnCrateArray.Click += new System.EventHandler(this.btnCrateArray_Click);
            // 
            // btnAscSort
            // 
            this.btnAscSort.Location = new System.Drawing.Point(169, 124);
            this.btnAscSort.Name = "btnAscSort";
            this.btnAscSort.Size = new System.Drawing.Size(75, 23);
            this.btnAscSort.TabIndex = 3;
            this.btnAscSort.Text = "升序排列";
            this.btnAscSort.UseVisualStyleBackColor = true;
            this.btnAscSort.Click += new System.EventHandler(this.btnAscSort_Click);
            // 
            // btnDescSort
            // 
            this.btnDescSort.Location = new System.Drawing.Point(169, 180);
            this.btnDescSort.Name = "btnDescSort";
            this.btnDescSort.Size = new System.Drawing.Size(75, 23);
            this.btnDescSort.TabIndex = 4;
            this.btnDescSort.Text = "降序排列";
            this.btnDescSort.UseVisualStyleBackColor = true;
            this.btnDescSort.Click += new System.EventHandler(this.btnDescSort_Click);
            // 
            // label1
            // 
            this.label1.AutoSize = true;
            this.label1.Location = new System.Drawing.Point(29, 25);
            this.label1.Name = "label1";
            this.label1.Size = new System.Drawing.Size(53, 12);
            this.label1.TabIndex = 5;
            this.label1.Text = "排序前：";
            // 
            // label2
            // 
            this.label2.AutoSize = true;
            this.label2.Location = new System.Drawing.Point(290, 25);
            this.label2.Name = "label2";
            this.label2.Size = new System.Drawing.Size(53, 12);
            this.label2.TabIndex = 6;
            this.label2.Text = "排序后：";
            // 
            // Form1
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 12F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(433, 274);
            this.Controls.Add(this.label2);
            this.Controls.Add(this.label1);
            this.Controls.Add(this.btnDescSort);
            this.Controls.Add(this.btnAscSort);
            this.Controls.Add(this.btnCrateArray);
            this.Controls.Add(this.txtTarget);
            this.Controls.Add(this.txtSource);
            this.Name = "Form1";
            this.Text = "Form1";
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.TextBox txtSource;
        private System.Windows.Forms.TextBox txtTarget;
        private System.Windows.Forms.Button btnCrateArray;
        private System.Windows.Forms.Button btnAscSort;
        private System.Windows.Forms.Button btnDescSort;
        private System.Windows.Forms.Label label1;
        private System.Windows.Forms.Label label2;
    }
}

