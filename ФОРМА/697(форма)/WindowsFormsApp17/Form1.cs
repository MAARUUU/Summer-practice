using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace WindowsFormsApp17
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        int n;
        private void button1_Click(object sender, EventArgs e)
        {
            n = Int32.Parse(textBox1.Text);
            dataGridView1.RowCount = n;
            dataGridView1.ColumnCount = n;
            dataGridView2.RowCount = n;
            dataGridView2.ColumnCount = 1;
            dataGridView1.Visible = true;
            button2.Visible = true;
        }

        private void button2_Click(object sender, EventArgs e)
        {
            dataGridView2.Visible = true;
            double[,] matrix = new double[n, n];
            double[] vector = new double[n];

            for (int i = 0; i < n; i++)
                for (int j = 0; j < n; j++)
                {
                    matrix[i, j] = Convert.ToDouble(dataGridView1[i, j].Value);
                }
            for (int k = 0; k < n; k++)
                vector[k] = 1 / (Math.Pow(k, 2) + 2);

            double sum=0;

            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < n; j++)
                {
                    sum += matrix[i, j] * vector[j];
                }
                dataGridView2[0, i].Value = sum;
            }
        }

        private void label2_Click(object sender, EventArgs e)
        {

        }
    }
}
