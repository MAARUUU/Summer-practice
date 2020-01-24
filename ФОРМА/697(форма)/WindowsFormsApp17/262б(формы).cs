using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace WindowsFormsApp7
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void button1_Click(object sender, EventArgs e)
        {
            string str = textBox1.Text;
            int n,l;
            l = str.Length;
            n = 0;
            for (int i=0; i<(l-2); i++)
            {
                if ((str[i] == 'a') && (str[i + 1] == 'b') && (str[i + 2] == 'a')) n += 1;
            }
            textBox2.Text = n.ToString();

        }
    }
}
