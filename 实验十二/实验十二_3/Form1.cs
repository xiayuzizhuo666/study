using System;
using System.Drawing;
using System.Linq;
using System.Windows.Forms;

namespace 实验十二_3
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            // 使用布局优化技术提升初始化性能
            this.SuspendLayout();
            InitializeComponent();
            LoadFonts();
            InitControls();
            this.ResumeLayout(true);
        }

        private void LoadFonts()
        {
            try
            {
                // 添加常用字体族并排序
                var systemFonts = FontFamily.Families
                    .Where(f => f.IsStyleAvailable(FontStyle.Regular))
                    .Select(f => f.Name)
                    .OrderBy(f => f);

                fontComboBox.BeginUpdate();  // 防止频繁刷新
                fontComboBox.Items.AddRange(systemFonts.ToArray());
                fontComboBox.EndUpdate();

                fontComboBox.SelectedIndex = fontComboBox.FindString("微软雅黑");
            }
            catch (Exception ex)
            {
                MessageBox.Show($"字体加载失败：{ex.Message}");
            }
        }

        private void InitControls()
        {

            styleComboBox.Items.AddRange(new[] { "常规", "粗体", "斜体", "粗体+斜体", "下划线" });
            styleComboBox.SelectedIndex = 0;


            sizeNumericUpDown.Minimum = 6;
            sizeNumericUpDown.Maximum = 72;
            sizeNumericUpDown.Increment = 2;


            fontComboBox.SelectedIndexChanged += UpdateFontPreview;
            styleComboBox.SelectedIndexChanged += UpdateFontPreview;
            sizeNumericUpDown.ValueChanged += UpdateFontPreview;
        }

        private void UpdateFontPreview(object sender, EventArgs e)
        {
            if (fontComboBox.SelectedItem == null) return;

            var fontStyle = GetCombinedFontStyle();
            previewTextBox.Font = new Font(
                fontComboBox.SelectedItem.ToString(),
                (float)sizeNumericUpDown.Value,
                fontStyle
            );
        }

        private FontStyle GetCombinedFontStyle()
        {

            FontStyle style = FontStyle.Regular;
            switch (styleComboBox.SelectedIndex)
            {
                case 1: style |= FontStyle.Bold; break;
                case 2: style |= FontStyle.Italic; break;
                case 3: style |= FontStyle.Bold | FontStyle.Italic; break;
                case 4: style |= FontStyle.Underline; break;
            }
            return style;
        }
    }
}