using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace 实验11_3
{
    public partial class Form1 : Form
    {
        private bool passwordMode = false;
        private string realText = "";
        private char passwordChar = '•';
        private ToolStrip fontSizeToolStrip;

        public Form1()
        {
            InitializeComponent();
            InitializeFontSizeCombo();
            WireUpEvents();
        }

        private void WireUpEvents()
        {
            btnBold.Click += btnBold_Click;
            btnItalic.Click += btnItalic_Click;
            btnTextColor.Click += btnTextColor_Click;
            btnBackColor.Click += btnBackColor_Click;
            btnFont.Click += btnFont_Click;
            btnSize.Click += btnSize_Click;
            btnPassword.Click += btnPassword_Click;
            btnClearFormat.Click += btnClearFormat_Click;
        }

        private void InitializeFontSizeCombo()
        {
            fontSizeToolStrip = new ToolStrip();
            var combo = new ToolStripComboBox { DropDownStyle = ComboBoxStyle.DropDownList };
            combo.Items.AddRange(new object[] { 8, 9, 10, 11, 12, 14, 16, 18, 20 });
            combo.SelectedIndexChanged += (s, e) =>
            {
                if (combo.SelectedItem != null)
                    UpdateFontSize(Convert.ToInt32(combo.SelectedItem));
            };

            fontSizeToolStrip.Items.Add(combo);
            this.Controls.Add(fontSizeToolStrip);
            fontSizeToolStrip.Visible = false;
        }

        private void UpdateFontStyle(FontStyle style)
        {
            var currentFont = txtEditor.SelectionFont ?? new Font("微软雅黑", 10);
            txtEditor.SelectionFont = new Font(currentFont.FontFamily, currentFont.Size, currentFont.Style ^ style);
        }

        private void btnBold_Click(object sender, EventArgs e) => UpdateFontStyle(FontStyle.Bold);
        private void btnItalic_Click(object sender, EventArgs e) => UpdateFontStyle(FontStyle.Italic);

        private void btnTextColor_Click(object sender, EventArgs e)
        {
            using (var dlg = new ColorDialog())
            {
                if (dlg.ShowDialog() == DialogResult.OK)
                    txtEditor.SelectionColor = dlg.Color;
            }
        }

        private void btnBackColor_Click(object sender, EventArgs e)
        {
            using (var dlg = new ColorDialog())
            {
                if (dlg.ShowDialog() == DialogResult.OK)
                    txtEditor.SelectionBackColor = dlg.Color;
            }
        }

        private void btnFont_Click(object sender, EventArgs e)
        {
            using (var dlg = new FontDialog())
            {
                if (dlg.ShowDialog() == DialogResult.OK)
                    txtEditor.SelectionFont = dlg.Font;
            }
        }

        private void btnSize_Click(object sender, EventArgs e)
        {
            var buttonPos = btnSize.PointToScreen(Point.Empty);
            fontSizeToolStrip.Location = this.PointToClient(new Point(buttonPos.X, buttonPos.Y - fontSizeToolStrip.Height));
            fontSizeToolStrip.Visible = !fontSizeToolStrip.Visible;
        }

        private void UpdateFontSize(int size)
        {
            var currentFont = txtEditor.SelectionFont;
            txtEditor.SelectionFont = new Font(
    currentFont?.FontFamily ?? new FontFamily("微软雅黑"),  // 左侧FontFamily类型
    size,
    currentFont?.Style ?? FontStyle.Regular
);
        }

        private void btnPassword_Click(object sender, EventArgs e)
        {
            passwordMode = !passwordMode;
            btnPassword.BackColor = passwordMode ? Color.LightGreen : SystemColors.Control;

            if (passwordMode)
            {
                realText = txtEditor.Text;
                txtEditor.Text = new string(passwordChar, realText.Length);
            }
            else
            {
                txtEditor.Text = realText;
            }
        }

        private void txtEditor_TextChanged(object sender, EventArgs e)
        {
            if (!passwordMode) return;

            txtEditor.TextChanged -= txtEditor_TextChanged;
            var newText = txtEditor.Text;

            if (newText.Length > realText.Length)
                realText += newText.Substring(realText.Length);
            else
                realText = realText.Substring(0, newText.Length);

            txtEditor.Text = new string(passwordChar, newText.Length);
            txtEditor.SelectionStart = txtEditor.Text.Length;
            txtEditor.TextChanged += txtEditor_TextChanged;
        }

        private void btnClearFormat_Click(object sender, EventArgs e)
        {
            txtEditor.SelectionFont = new Font("微软雅黑", 10);
            txtEditor.SelectionColor = Color.Black;
            txtEditor.SelectionBackColor = Color.White;
        }
    }
}