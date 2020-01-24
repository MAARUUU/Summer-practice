
using System;
using System.Windows.Forms;

namespace WindowsFormsApp1
{
    public partial class Form1 : Form
    {

        string s;
        double x, y, z,a,b, pi = 3.1415926535;

        private void textBox5_MouseClick(object sender, MouseEventArgs e)
        {
      
            b = 1 + z * z / (3 + z * z / 5);
            textBox5.Text = Convert.ToString(b);
        }

        private void textBox4_MouseClick(object sender, MouseEventArgs e)
        {

            a = 2 * Math.Cos(x - pi / 6) / (1 / 2 + (Math.Sin(y) * Math.Sin(y)));
            textBox4.Text = Convert.ToString(a);
        }

        private void textBox3_TextChanged(object sender, EventArgs e)
        {
            s = textBox3.Text;
            z = Convert.ToDouble(s);
        }

        private void textBox2_TextChanged(object sender, EventArgs e)
        {
            s = textBox2.Text;
            y = Convert.ToDouble(s);
        }

        public Form1()
        {
            InitializeComponent();
        }

        private void textBox1_TextChanged(object sender, EventArgs e)
        {
            s = textBox1.Text;
            x = Convert.ToDouble(s);
        }
    }
}
