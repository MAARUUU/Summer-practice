using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace WindowsFormsApp1
{
    public partial class Form1 : Form
    {
        string s;
        double n,i,b,j,a;
        public Form1()
        {
            InitializeComponent();
        }

        private void textBox1_TextChanged(object sender, EventArgs e)
        {
            s = textBox1.Text;
            n = Convert.ToDouble(s);
        }

        private void textBox2_MouseClick(object sender, MouseEventArgs e)
        {
            for (i=2;i<=(n/2);i++)
            { if((n%i)==0)
                {
                    b = 0;
                    for (a=2;a<=(i-1);a++)
                    {
                        if ((i % a) == 0) b++;
                    }
                    if (b==0)
                        textBox2.Text = textBox2.Text + Convert.ToString(i) + ",";
                }
            }
        }

    }
}
