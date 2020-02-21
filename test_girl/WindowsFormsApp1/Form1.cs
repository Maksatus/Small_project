using System;
using System.Drawing;
using System.Windows.Forms;

namespace WindowsFormsApp1
{
    public partial class Form1 : Form
    {
        TextBox[] textBoxes = null;
        char[] password = null;
        const int count = 6;
        char[] key;


        public Form1()
        {
            InitializeComponent();
            addText();
            key = new char[count] {'з','а','б','о','т','а'};
        }

        private void button1_Click(object sender, EventArgs e)
        {
            errorProvider1.Clear();
            for (int i = 0; i < count; i++)
            {    
                password[i] = char.Parse(textBoxes[i].Text);
            }
            if(сheck())
            MessageBox.Show("ОТВЕТ");

        }
        private bool сheck()
        {
            bool temp=true;
            for (int i = 0; i < count; i++)
            {
                if (password[i] != key[i])
                {
                    errorProvider1.SetError(textBoxes[i], "Неверная буква!");
                    temp = false;
                }
            }
            return temp;
        }

        private void addText()
        {
            textBoxes = new TextBox[count];
            password = new char[count];
            for (int i = 0; i < count; i++)
            {    //создаем каждый тексбокс и размещаем его
                textBoxes[i] = new TextBox();
                textBoxes[i].Top = button1.Width + 10;
                textBoxes[i].Left = 160 + i * 70;
                textBoxes[i].Multiline = true;
                textBoxes[i].Anchor = AnchorStyles.Top;
                textBoxes[i].Font = new Font("Dikovina", 27.75F, FontStyle.Regular, GraphicsUnit.Point, ((byte)(0)));
                errorProvider1.SetIconAlignment(textBoxes[i], ErrorIconAlignment.BottomRight);
                textBoxes[i].Size = new Size(68, 68);
                textBoxes[i].MaxLength = 1;
                textBoxes[i].TextAlign = HorizontalAlignment.Center;
                textBoxes[i].TabIndex = 2;
                this.Controls.Add(textBoxes[i]);
            }
        }
    }
}
