using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace _264
{
    public partial class z264 : Form
    {
        public z264()
        {
            InitializeComponent();
        }

        private void checkBtn_Click(object sender, EventArgs e)
        {
            string strInput = textInputBox.Text;
            string strExclude = excludeBox.Text;

            string strAnser = strInput.Replace(strExclude, "");

            answer.Text = strAnser;
        }
    }
}
