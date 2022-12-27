#pragma once

namespace GUI {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;
	
	

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^  panel1;
	protected:
	private: System::Windows::Forms::Panel^  panel2;
	private: System::Windows::Forms::Panel^  panel3;
	private: System::Windows::Forms::Panel^  panel4;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::Windows::Forms::PictureBox^  pictureBox3;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::PictureBox^  pictureBox4;
	private: System::Windows::Forms::Panel^  panel5;
	private: System::Windows::Forms::Panel^  panel12;
	private: System::Windows::Forms::Button^  button9;
	private: System::Windows::Forms::Panel^  panel11;
	private: System::Windows::Forms::Button^  button8;
	private: System::Windows::Forms::Panel^  panel10;
	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::Panel^  panel9;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Panel^  panel8;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Panel^  panel7;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Panel^  panel6;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::PictureBox^  pictureBox12;
	private: System::Windows::Forms::PictureBox^  pictureBox11;
	private: System::Windows::Forms::PictureBox^  pictureBox10;
	private: System::Windows::Forms::PictureBox^  pictureBox9;
	private: System::Windows::Forms::PictureBox^  pictureBox8;
	private: System::Windows::Forms::PictureBox^  pictureBox7;
	private: System::Windows::Forms::PictureBox^  pictureBox6;
	private: System::Windows::Forms::PictureBox^  pictureBox5;
	private: System::Windows::Forms::Panel^  panel13;

	private: System::Windows::Forms::Panel^  panel14;
	private: System::Windows::Forms::PictureBox^  pictureBox14;

	private: System::Windows::Forms::Panel^  panel15;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Button^  button11;
	private: System::Windows::Forms::PictureBox^  pictureBox15;


	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  textBox4;

	private: System::Windows::Forms::Label^  label6;

	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label7;

	private: System::Windows::Forms::DateTimePicker^  dateTimePicker1;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::Panel^  panel16;
	private: System::Windows::Forms::PictureBox^  pictureBox16;

	private: System::Windows::Forms::Button^  button10;
	private: System::Windows::Forms::Panel^  panel17;
	private: System::Windows::Forms::Button^  button12;

	private: System::Windows::Forms::PictureBox^  pictureBox17;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Panel^  panel18;

	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::PictureBox^  pictureBox18;
	private: System::Windows::Forms::PictureBox^  pictureBox19;
	private: System::Windows::Forms::RadioButton^  radioButton2;
	private: System::Windows::Forms::RadioButton^  radioButton1;
	private: System::Windows::Forms::TextBox^  textBox9;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::TextBox^  textBox6;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::TextBox^  textBox7;
	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::Label^  label15;
	private: System::Windows::Forms::TextBox^  textBox8;
private: System::Windows::Forms::Panel^  panel19;
private: System::Windows::Forms::Label^  label16;
private: System::Windows::Forms::Button^  button13;
private: System::Windows::Forms::PictureBox^  pictureBox20;
private: System::Windows::Forms::Panel^  panel20;

private: System::Windows::Forms::DataGridView^  dataGridView1;

private: System::Windows::Forms::Panel^  panel21;
private: System::Windows::Forms::TextBox^  textBox14;
private: System::Windows::Forms::Label^  label20;
private: System::Windows::Forms::TextBox^  textBox10;
private: System::Windows::Forms::Label^  label22;
private: System::Windows::Forms::TextBox^  textBox11;
private: System::Windows::Forms::Label^  label18;
private: System::Windows::Forms::TextBox^  textBox12;
private: System::Windows::Forms::Label^  label21;
private: System::Windows::Forms::Label^  label19;
private: System::Windows::Forms::TextBox^  textBox13;
private: System::Windows::Forms::TextBox^  textBox15;
private: System::Windows::Forms::Label^  label23;
private: System::Windows::Forms::Panel^  panel22;
private: System::Windows::Forms::PictureBox^  pictureBox21;
private: System::Windows::Forms::TextBox^  textBox21;
private: System::Windows::Forms::Label^  label28;
private: System::Windows::Forms::TextBox^  textBox16;
private: System::Windows::Forms::Label^  label17;
private: System::Windows::Forms::TextBox^  textBox17;
private: System::Windows::Forms::Label^  label24;
private: System::Windows::Forms::TextBox^  textBox18;
private: System::Windows::Forms::Label^  label25;
private: System::Windows::Forms::TextBox^  textBox19;
private: System::Windows::Forms::Label^  label26;
private: System::Windows::Forms::Label^  label27;
private: System::Windows::Forms::TextBox^  textBox20;
private: System::Windows::Forms::ComboBox^  comboBox2;
private: System::Windows::Forms::Panel^  panel23;
private: System::Windows::Forms::PictureBox^  pictureBox22;
private: System::Windows::Forms::DataGridView^  dataGridView2;
private: System::Windows::Forms::Panel^  panel24;
private: System::Windows::Forms::TextBox^  textBox22;
private: System::Windows::Forms::Label^  label29;
private: System::Windows::Forms::TextBox^  textBox23;
private: System::Windows::Forms::Label^  label30;
private: System::Windows::Forms::TextBox^  textBox24;
private: System::Windows::Forms::Label^  label31;
private: System::Windows::Forms::TextBox^  textBox25;
private: System::Windows::Forms::Label^  label32;
private: System::Windows::Forms::TextBox^  textBox26;
private: System::Windows::Forms::Label^  label33;
private: System::Windows::Forms::Label^  label34;
private: System::Windows::Forms::TextBox^  textBox27;
private: System::Windows::Forms::PictureBox^  pictureBox23;
private: System::Windows::Forms::Panel^  panel25;
private: System::Windows::Forms::Panel^  panel26;
private: System::Windows::Forms::Label^  label42;
private: System::Windows::Forms::Button^  button14;
private: System::Windows::Forms::PictureBox^  pictureBox26;
private: System::Windows::Forms::Label^  label41;



private: System::Windows::Forms::Label^  label36;
private: System::Windows::Forms::TextBox^  textBox30;
private: System::Windows::Forms::Label^  label37;
private: System::Windows::Forms::TextBox^  textBox31;
private: System::Windows::Forms::Label^  label38;
private: System::Windows::Forms::TextBox^  textBox32;
private: System::Windows::Forms::Label^  label39;
private: System::Windows::Forms::Label^  label40;
private: System::Windows::Forms::TextBox^  textBox33;
private: System::Windows::Forms::ComboBox^  comboBox3;
private: System::Windows::Forms::PictureBox^  pictureBox24;
private: System::Windows::Forms::PictureBox^  pictureBox25;
private: System::Windows::Forms::DateTimePicker^  dateTimePicker2;
private: System::Windows::Forms::GroupBox^  groupBox1;
private: System::Windows::Forms::RadioButton^  radioButton3;
private: System::Windows::Forms::RadioButton^  radioButton4;
private: System::Windows::Forms::TextBox^  textBox28;
private: System::Windows::Forms::Panel^  panel28;
private: System::Windows::Forms::Label^  label43;
private: System::Windows::Forms::Button^  button16;
private: System::Windows::Forms::PictureBox^  pictureBox28;
private: System::Windows::Forms::Panel^  panel27;
private: System::Windows::Forms::Panel^  panel29;
private: System::Windows::Forms::TextBox^  textBox29;
private: System::Windows::Forms::Label^  label35;
private: System::Windows::Forms::TextBox^  textBox34;
private: System::Windows::Forms::Label^  label44;
private: System::Windows::Forms::TextBox^  textBox35;
private: System::Windows::Forms::Label^  label45;
private: System::Windows::Forms::TextBox^  textBox36;
private: System::Windows::Forms::Label^  label46;
private: System::Windows::Forms::TextBox^  textBox37;
private: System::Windows::Forms::Label^  label47;
private: System::Windows::Forms::Label^  label48;
private: System::Windows::Forms::TextBox^  textBox38;
private: System::Windows::Forms::PictureBox^  pictureBox29;
private: System::Windows::Forms::ComboBox^  comboBox4;
private: System::Windows::Forms::PictureBox^  pictureBox27;
private: System::Windows::Forms::Panel^  panel30;
private: System::Windows::Forms::Label^  label49;
private: System::Windows::Forms::Button^  button15;
private: System::Windows::Forms::PictureBox^  pictureBox30;
private: System::Windows::Forms::Panel^  panel31;




private: System::Windows::Forms::Button^  button19;
private: System::Windows::Forms::Button^  button18;
private: System::Windows::Forms::Button^  button17;
private: System::Windows::Forms::Panel^  panel32;
private: System::Windows::Forms::TextBox^  textBox40;
private: System::Windows::Forms::Label^  label51;
private: System::Windows::Forms::TextBox^  textBox41;
private: System::Windows::Forms::Label^  label52;
private: System::Windows::Forms::TextBox^  textBox42;
private: System::Windows::Forms::Label^  label53;
private: System::Windows::Forms::TextBox^  textBox43;
private: System::Windows::Forms::Label^  label54;
private: System::Windows::Forms::TextBox^  textBox44;
private: System::Windows::Forms::Label^  label55;
private: System::Windows::Forms::Label^  label56;
private: System::Windows::Forms::TextBox^  textBox45;
private: System::Windows::Forms::PictureBox^  pictureBox32;
private: System::Windows::Forms::DataGridView^  dataGridView3;
private: System::Windows::Forms::Panel^  panel33;
private: System::Windows::Forms::Button^  button20;

private: System::Windows::Forms::TextBox^  textBox39;
private: System::Windows::Forms::PictureBox^  pictureBox31;
private: System::Windows::Forms::Button^  button21;
private: System::Windows::Forms::Panel^  panel34;
private: System::Windows::Forms::Label^  label57;
private: System::Windows::Forms::Button^  button22;
private: System::Windows::Forms::PictureBox^  pictureBox33;
private: System::Windows::Forms::Panel^  panel35;
private: System::Windows::Forms::Button^  button24;
private: System::Windows::Forms::Label^  label59;
private: System::Windows::Forms::TextBox^  textBox46;
private: System::Windows::Forms::PictureBox^  pictureBox35;
private: System::Windows::Forms::Label^  label50;




private: System::Windows::Forms::Panel^  panel37;
private: System::Windows::Forms::DateTimePicker^  dateTimePicker3;
private: System::Windows::Forms::Button^  button25;
private: System::Windows::Forms::Label^  label60;
private: System::Windows::Forms::PictureBox^  pictureBox36;
private: System::Windows::Forms::Panel^  panel38;
private: System::Windows::Forms::TextBox^  textBox47;
private: System::Windows::Forms::Button^  button26;
private: System::Windows::Forms::Label^  label61;
private: System::Windows::Forms::PictureBox^  pictureBox37;
private: System::Windows::Forms::Panel^  panel36;
private: System::Windows::Forms::Label^  label58;
private: System::Windows::Forms::Button^  button23;
private: System::Windows::Forms::PictureBox^  pictureBox34;
private: System::Windows::Forms::Panel^  panel39;
private: System::Windows::Forms::Label^  label62;
private: System::Windows::Forms::Button^  button27;
private: System::Windows::Forms::PictureBox^  pictureBox38;
private: System::Windows::Forms::Panel^  panel40;
private: System::Windows::Forms::Label^  label63;
private: System::Windows::Forms::Button^  button28;
private: System::Windows::Forms::PictureBox^  pictureBox39;











































	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle3 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle4 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle5 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle6 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle7 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle8 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle9 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox12 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox11 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox10 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox9 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox8 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox7 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->panel13 = (gcnew System::Windows::Forms::Panel());
			this->panel12 = (gcnew System::Windows::Forms::Panel());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->panel11 = (gcnew System::Windows::Forms::Panel());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->panel10 = (gcnew System::Windows::Forms::Panel());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->panel9 = (gcnew System::Windows::Forms::Panel());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->panel8 = (gcnew System::Windows::Forms::Panel());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->panel7 = (gcnew System::Windows::Forms::Panel());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel16 = (gcnew System::Windows::Forms::Panel());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->pictureBox16 = (gcnew System::Windows::Forms::PictureBox());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->panel14 = (gcnew System::Windows::Forms::Panel());
			this->panel18 = (gcnew System::Windows::Forms::Panel());
			this->panel20 = (gcnew System::Windows::Forms::Panel());
			this->panel22 = (gcnew System::Windows::Forms::Panel());
			this->panel23 = (gcnew System::Windows::Forms::Panel());
			this->panel25 = (gcnew System::Windows::Forms::Panel());
			this->panel27 = (gcnew System::Windows::Forms::Panel());
			this->panel31 = (gcnew System::Windows::Forms::Panel());
			this->panel38 = (gcnew System::Windows::Forms::Panel());
			this->panel36 = (gcnew System::Windows::Forms::Panel());
			this->label58 = (gcnew System::Windows::Forms::Label());
			this->button23 = (gcnew System::Windows::Forms::Button());
			this->pictureBox34 = (gcnew System::Windows::Forms::PictureBox());
			this->textBox47 = (gcnew System::Windows::Forms::TextBox());
			this->button26 = (gcnew System::Windows::Forms::Button());
			this->label61 = (gcnew System::Windows::Forms::Label());
			this->pictureBox37 = (gcnew System::Windows::Forms::PictureBox());
			this->button21 = (gcnew System::Windows::Forms::Button());
			this->panel33 = (gcnew System::Windows::Forms::Panel());
			this->panel35 = (gcnew System::Windows::Forms::Panel());
			this->panel37 = (gcnew System::Windows::Forms::Panel());
			this->dateTimePicker3 = (gcnew System::Windows::Forms::DateTimePicker());
			this->button25 = (gcnew System::Windows::Forms::Button());
			this->label60 = (gcnew System::Windows::Forms::Label());
			this->pictureBox36 = (gcnew System::Windows::Forms::PictureBox());
			this->panel39 = (gcnew System::Windows::Forms::Panel());
			this->label62 = (gcnew System::Windows::Forms::Label());
			this->button27 = (gcnew System::Windows::Forms::Button());
			this->pictureBox38 = (gcnew System::Windows::Forms::PictureBox());
			this->button24 = (gcnew System::Windows::Forms::Button());
			this->label59 = (gcnew System::Windows::Forms::Label());
			this->textBox46 = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox35 = (gcnew System::Windows::Forms::PictureBox());
			this->panel40 = (gcnew System::Windows::Forms::Panel());
			this->label63 = (gcnew System::Windows::Forms::Label());
			this->button28 = (gcnew System::Windows::Forms::Button());
			this->pictureBox39 = (gcnew System::Windows::Forms::PictureBox());
			this->panel34 = (gcnew System::Windows::Forms::Panel());
			this->label57 = (gcnew System::Windows::Forms::Label());
			this->button22 = (gcnew System::Windows::Forms::Button());
			this->pictureBox33 = (gcnew System::Windows::Forms::PictureBox());
			this->button20 = (gcnew System::Windows::Forms::Button());
			this->label50 = (gcnew System::Windows::Forms::Label());
			this->textBox39 = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox31 = (gcnew System::Windows::Forms::PictureBox());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->panel32 = (gcnew System::Windows::Forms::Panel());
			this->textBox40 = (gcnew System::Windows::Forms::TextBox());
			this->label51 = (gcnew System::Windows::Forms::Label());
			this->textBox41 = (gcnew System::Windows::Forms::TextBox());
			this->label52 = (gcnew System::Windows::Forms::Label());
			this->textBox42 = (gcnew System::Windows::Forms::TextBox());
			this->label53 = (gcnew System::Windows::Forms::Label());
			this->textBox43 = (gcnew System::Windows::Forms::TextBox());
			this->label54 = (gcnew System::Windows::Forms::Label());
			this->textBox44 = (gcnew System::Windows::Forms::TextBox());
			this->label55 = (gcnew System::Windows::Forms::Label());
			this->label56 = (gcnew System::Windows::Forms::Label());
			this->textBox45 = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox32 = (gcnew System::Windows::Forms::PictureBox());
			this->dataGridView3 = (gcnew System::Windows::Forms::DataGridView());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->panel30 = (gcnew System::Windows::Forms::Panel());
			this->label49 = (gcnew System::Windows::Forms::Label());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->pictureBox30 = (gcnew System::Windows::Forms::PictureBox());
			this->panel29 = (gcnew System::Windows::Forms::Panel());
			this->textBox29 = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox29 = (gcnew System::Windows::Forms::PictureBox());
			this->label35 = (gcnew System::Windows::Forms::Label());
			this->textBox34 = (gcnew System::Windows::Forms::TextBox());
			this->label44 = (gcnew System::Windows::Forms::Label());
			this->textBox35 = (gcnew System::Windows::Forms::TextBox());
			this->label45 = (gcnew System::Windows::Forms::Label());
			this->textBox36 = (gcnew System::Windows::Forms::TextBox());
			this->label46 = (gcnew System::Windows::Forms::Label());
			this->textBox37 = (gcnew System::Windows::Forms::TextBox());
			this->label47 = (gcnew System::Windows::Forms::Label());
			this->label48 = (gcnew System::Windows::Forms::Label());
			this->textBox38 = (gcnew System::Windows::Forms::TextBox());
			this->comboBox4 = (gcnew System::Windows::Forms::ComboBox());
			this->pictureBox27 = (gcnew System::Windows::Forms::PictureBox());
			this->panel28 = (gcnew System::Windows::Forms::Panel());
			this->label43 = (gcnew System::Windows::Forms::Label());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->pictureBox28 = (gcnew System::Windows::Forms::PictureBox());
			this->textBox28 = (gcnew System::Windows::Forms::TextBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton4 = (gcnew System::Windows::Forms::RadioButton());
			this->panel26 = (gcnew System::Windows::Forms::Panel());
			this->label42 = (gcnew System::Windows::Forms::Label());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->pictureBox26 = (gcnew System::Windows::Forms::PictureBox());
			this->label41 = (gcnew System::Windows::Forms::Label());
			this->label36 = (gcnew System::Windows::Forms::Label());
			this->textBox30 = (gcnew System::Windows::Forms::TextBox());
			this->label37 = (gcnew System::Windows::Forms::Label());
			this->textBox31 = (gcnew System::Windows::Forms::TextBox());
			this->label38 = (gcnew System::Windows::Forms::Label());
			this->textBox32 = (gcnew System::Windows::Forms::TextBox());
			this->label39 = (gcnew System::Windows::Forms::Label());
			this->label40 = (gcnew System::Windows::Forms::Label());
			this->textBox33 = (gcnew System::Windows::Forms::TextBox());
			this->comboBox3 = (gcnew System::Windows::Forms::ComboBox());
			this->pictureBox25 = (gcnew System::Windows::Forms::PictureBox());
			this->dateTimePicker2 = (gcnew System::Windows::Forms::DateTimePicker());
			this->pictureBox24 = (gcnew System::Windows::Forms::PictureBox());
			this->panel24 = (gcnew System::Windows::Forms::Panel());
			this->textBox22 = (gcnew System::Windows::Forms::TextBox());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->textBox23 = (gcnew System::Windows::Forms::TextBox());
			this->label30 = (gcnew System::Windows::Forms::Label());
			this->textBox24 = (gcnew System::Windows::Forms::TextBox());
			this->label31 = (gcnew System::Windows::Forms::Label());
			this->textBox25 = (gcnew System::Windows::Forms::TextBox());
			this->label32 = (gcnew System::Windows::Forms::Label());
			this->textBox26 = (gcnew System::Windows::Forms::TextBox());
			this->label33 = (gcnew System::Windows::Forms::Label());
			this->label34 = (gcnew System::Windows::Forms::Label());
			this->textBox27 = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox22 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox23 = (gcnew System::Windows::Forms::PictureBox());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->textBox21 = (gcnew System::Windows::Forms::TextBox());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->textBox16 = (gcnew System::Windows::Forms::TextBox());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->textBox17 = (gcnew System::Windows::Forms::TextBox());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->textBox18 = (gcnew System::Windows::Forms::TextBox());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->textBox19 = (gcnew System::Windows::Forms::TextBox());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->textBox20 = (gcnew System::Windows::Forms::TextBox());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->pictureBox21 = (gcnew System::Windows::Forms::PictureBox());
			this->panel21 = (gcnew System::Windows::Forms::Panel());
			this->textBox15 = (gcnew System::Windows::Forms::TextBox());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->textBox14 = (gcnew System::Windows::Forms::TextBox());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->textBox13 = (gcnew System::Windows::Forms::TextBox());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->panel19 = (gcnew System::Windows::Forms::Panel());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->pictureBox20 = (gcnew System::Windows::Forms::PictureBox());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->pictureBox18 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox19 = (gcnew System::Windows::Forms::PictureBox());
			this->panel17 = (gcnew System::Windows::Forms::Panel());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->pictureBox17 = (gcnew System::Windows::Forms::PictureBox());
			this->panel15 = (gcnew System::Windows::Forms::Panel());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->pictureBox15 = (gcnew System::Windows::Forms::PictureBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->pictureBox14 = (gcnew System::Windows::Forms::PictureBox());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox12))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox11))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox10))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			this->panel4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->panel16->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox16))->BeginInit();
			this->panel2->SuspendLayout();
			this->panel14->SuspendLayout();
			this->panel18->SuspendLayout();
			this->panel20->SuspendLayout();
			this->panel22->SuspendLayout();
			this->panel23->SuspendLayout();
			this->panel25->SuspendLayout();
			this->panel27->SuspendLayout();
			this->panel31->SuspendLayout();
			this->panel38->SuspendLayout();
			this->panel36->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox34))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox37))->BeginInit();
			this->panel33->SuspendLayout();
			this->panel35->SuspendLayout();
			this->panel37->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox36))->BeginInit();
			this->panel39->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox38))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox35))->BeginInit();
			this->panel40->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox39))->BeginInit();
			this->panel34->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox33))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox31))->BeginInit();
			this->panel32->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox32))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->BeginInit();
			this->panel30->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox30))->BeginInit();
			this->panel29->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox29))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox27))->BeginInit();
			this->panel28->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox28))->BeginInit();
			this->groupBox1->SuspendLayout();
			this->panel26->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox26))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox25))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox24))->BeginInit();
			this->panel24->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox22))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox23))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox21))->BeginInit();
			this->panel21->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->panel19->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox20))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox18))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox19))->BeginInit();
			this->panel17->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox17))->BeginInit();
			this->panel15->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox15))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox14))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			this->panel3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->SuspendLayout();
			// 
			// textBox3
			// 
			this->textBox3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(249)), static_cast<System::Int32>(static_cast<System::Byte>(245)),
				static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->textBox3->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Tahoma", 14));
			this->textBox3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(9)), static_cast<System::Int32>(static_cast<System::Byte>(24)),
				static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->textBox3->Location = System::Drawing::Point(241, 105);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(121, 36);
			this->textBox3->TabIndex = 10;
			this->textBox3->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox3_TextChanged);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(9)), static_cast<System::Int32>(static_cast<System::Byte>(24)),
				static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->panel1->Controls->Add(this->pictureBox12);
			this->panel1->Controls->Add(this->pictureBox11);
			this->panel1->Controls->Add(this->pictureBox10);
			this->panel1->Controls->Add(this->pictureBox9);
			this->panel1->Controls->Add(this->pictureBox8);
			this->panel1->Controls->Add(this->pictureBox7);
			this->panel1->Controls->Add(this->pictureBox6);
			this->panel1->Controls->Add(this->pictureBox5);
			this->panel1->Controls->Add(this->panel13);
			this->panel1->Controls->Add(this->panel12);
			this->panel1->Controls->Add(this->button9);
			this->panel1->Controls->Add(this->panel11);
			this->panel1->Controls->Add(this->button8);
			this->panel1->Controls->Add(this->panel10);
			this->panel1->Controls->Add(this->button7);
			this->panel1->Controls->Add(this->panel9);
			this->panel1->Controls->Add(this->button6);
			this->panel1->Controls->Add(this->panel8);
			this->panel1->Controls->Add(this->button5);
			this->panel1->Controls->Add(this->panel7);
			this->panel1->Controls->Add(this->button4);
			this->panel1->Controls->Add(this->panel6);
			this->panel1->Controls->Add(this->button3);
			this->panel1->Controls->Add(this->panel5);
			this->panel1->Controls->Add(this->button2);
			this->panel1->Controls->Add(this->panel4);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(224, 717);
			this->panel1->TabIndex = 0;
			// 
			// pictureBox12
			// 
			this->pictureBox12->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox12.Image")));
			this->pictureBox12->Location = System::Drawing::Point(174, 587);
			this->pictureBox12->Name = L"pictureBox12";
			this->pictureBox12->Size = System::Drawing::Size(34, 34);
			this->pictureBox12->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox12->TabIndex = 25;
			this->pictureBox12->TabStop = false;
			// 
			// pictureBox11
			// 
			this->pictureBox11->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox11.Image")));
			this->pictureBox11->Location = System::Drawing::Point(174, 532);
			this->pictureBox11->Name = L"pictureBox11";
			this->pictureBox11->Size = System::Drawing::Size(34, 34);
			this->pictureBox11->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox11->TabIndex = 24;
			this->pictureBox11->TabStop = false;
			// 
			// pictureBox10
			// 
			this->pictureBox10->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox10.Image")));
			this->pictureBox10->Location = System::Drawing::Point(174, 474);
			this->pictureBox10->Name = L"pictureBox10";
			this->pictureBox10->Size = System::Drawing::Size(34, 34);
			this->pictureBox10->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox10->TabIndex = 23;
			this->pictureBox10->TabStop = false;
			// 
			// pictureBox9
			// 
			this->pictureBox9->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox9.Image")));
			this->pictureBox9->Location = System::Drawing::Point(174, 419);
			this->pictureBox9->Name = L"pictureBox9";
			this->pictureBox9->Size = System::Drawing::Size(34, 34);
			this->pictureBox9->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox9->TabIndex = 22;
			this->pictureBox9->TabStop = false;
			// 
			// pictureBox8
			// 
			this->pictureBox8->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox8.Image")));
			this->pictureBox8->Location = System::Drawing::Point(174, 361);
			this->pictureBox8->Name = L"pictureBox8";
			this->pictureBox8->Size = System::Drawing::Size(34, 34);
			this->pictureBox8->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox8->TabIndex = 21;
			this->pictureBox8->TabStop = false;
			// 
			// pictureBox7
			// 
			this->pictureBox7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox7.Image")));
			this->pictureBox7->Location = System::Drawing::Point(174, 303);
			this->pictureBox7->Name = L"pictureBox7";
			this->pictureBox7->Size = System::Drawing::Size(34, 34);
			this->pictureBox7->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox7->TabIndex = 20;
			this->pictureBox7->TabStop = false;
			// 
			// pictureBox6
			// 
			this->pictureBox6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox6.Image")));
			this->pictureBox6->Location = System::Drawing::Point(174, 248);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(34, 34);
			this->pictureBox6->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox6->TabIndex = 19;
			this->pictureBox6->TabStop = false;
			// 
			// pictureBox5
			// 
			this->pictureBox5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.Image")));
			this->pictureBox5->Location = System::Drawing::Point(174, 188);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(34, 34);
			this->pictureBox5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox5->TabIndex = 18;
			this->pictureBox5->TabStop = false;
			// 
			// panel13
			// 
			this->panel13->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(55)), static_cast<System::Int32>(static_cast<System::Byte>(144)),
				static_cast<System::Int32>(static_cast<System::Byte>(116)));
			this->panel13->Location = System::Drawing::Point(33, 678);
			this->panel13->Name = L"panel13";
			this->panel13->Size = System::Drawing::Size(125, 37);
			this->panel13->TabIndex = 17;
			// 
			// panel12
			// 
			this->panel12->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(55)), static_cast<System::Int32>(static_cast<System::Byte>(144)),
				static_cast<System::Int32>(static_cast<System::Byte>(116)));
			this->panel12->Location = System::Drawing::Point(3, 579);
			this->panel12->Name = L"panel12";
			this->panel12->Size = System::Drawing::Size(18, 51);
			this->panel12->TabIndex = 16;
			this->panel12->Visible = false;
			// 
			// button9
			// 
			this->button9->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(9)), static_cast<System::Int32>(static_cast<System::Byte>(24)),
				static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->button9->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button9->FlatAppearance->BorderSize = 0;
			this->button9->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(55)),
				static_cast<System::Int32>(static_cast<System::Byte>(144)), static_cast<System::Int32>(static_cast<System::Byte>(116)));
			this->button9->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button9->Font = (gcnew System::Drawing::Font(L"Stensil", 15));
			this->button9->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(249)), static_cast<System::Int32>(static_cast<System::Byte>(245)),
				static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->button9->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button9->Location = System::Drawing::Point(0, 579);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(224, 51);
			this->button9->TabIndex = 15;
			this->button9->Text = L"Search";
			this->button9->UseVisualStyleBackColor = false;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::button9_Click);
			// 
			// panel11
			// 
			this->panel11->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(55)), static_cast<System::Int32>(static_cast<System::Byte>(144)),
				static_cast<System::Int32>(static_cast<System::Byte>(116)));
			this->panel11->Location = System::Drawing::Point(3, 522);
			this->panel11->Name = L"panel11";
			this->panel11->Size = System::Drawing::Size(18, 51);
			this->panel11->TabIndex = 14;
			this->panel11->Visible = false;
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(9)), static_cast<System::Int32>(static_cast<System::Byte>(24)),
				static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->button8->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button8->FlatAppearance->BorderSize = 0;
			this->button8->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(55)),
				static_cast<System::Int32>(static_cast<System::Byte>(144)), static_cast<System::Int32>(static_cast<System::Byte>(116)));
			this->button8->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button8->Font = (gcnew System::Drawing::Font(L"Stensil", 15));
			this->button8->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(249)), static_cast<System::Int32>(static_cast<System::Byte>(245)),
				static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->button8->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button8->Location = System::Drawing::Point(0, 522);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(224, 51);
			this->button8->TabIndex = 13;
			this->button8->Text = L"Delete";
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			// 
			// panel10
			// 
			this->panel10->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(55)), static_cast<System::Int32>(static_cast<System::Byte>(144)),
				static_cast<System::Int32>(static_cast<System::Byte>(116)));
			this->panel10->Location = System::Drawing::Point(3, 465);
			this->panel10->Name = L"panel10";
			this->panel10->Size = System::Drawing::Size(18, 51);
			this->panel10->TabIndex = 12;
			this->panel10->Visible = false;
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(9)), static_cast<System::Int32>(static_cast<System::Byte>(24)),
				static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->button7->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button7->FlatAppearance->BorderSize = 0;
			this->button7->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(55)),
				static_cast<System::Int32>(static_cast<System::Byte>(144)), static_cast<System::Int32>(static_cast<System::Byte>(116)));
			this->button7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button7->Font = (gcnew System::Drawing::Font(L"Stensil", 15));
			this->button7->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(249)), static_cast<System::Int32>(static_cast<System::Byte>(245)),
				static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->button7->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button7->Location = System::Drawing::Point(0, 465);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(224, 51);
			this->button7->TabIndex = 11;
			this->button7->Text = L"Edit";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// panel9
			// 
			this->panel9->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(55)), static_cast<System::Int32>(static_cast<System::Byte>(144)),
				static_cast<System::Int32>(static_cast<System::Byte>(116)));
			this->panel9->Location = System::Drawing::Point(3, 408);
			this->panel9->Name = L"panel9";
			this->panel9->Size = System::Drawing::Size(18, 51);
			this->panel9->TabIndex = 10;
			this->panel9->Visible = false;
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(9)), static_cast<System::Int32>(static_cast<System::Byte>(24)),
				static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->button6->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button6->FlatAppearance->BorderSize = 0;
			this->button6->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(55)),
				static_cast<System::Int32>(static_cast<System::Byte>(144)), static_cast<System::Int32>(static_cast<System::Byte>(116)));
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button6->Font = (gcnew System::Drawing::Font(L"Stensil", 15));
			this->button6->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(249)), static_cast<System::Int32>(static_cast<System::Byte>(245)),
				static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->button6->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button6->Location = System::Drawing::Point(0, 408);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(224, 51);
			this->button6->TabIndex = 9;
			this->button6->Text = L"Done ";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// panel8
			// 
			this->panel8->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(55)), static_cast<System::Int32>(static_cast<System::Byte>(144)),
				static_cast<System::Int32>(static_cast<System::Byte>(116)));
			this->panel8->Location = System::Drawing::Point(3, 351);
			this->panel8->Name = L"panel8";
			this->panel8->Size = System::Drawing::Size(18, 51);
			this->panel8->TabIndex = 8;
			this->panel8->Visible = false;
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(9)), static_cast<System::Int32>(static_cast<System::Byte>(24)),
				static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->button5->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button5->FlatAppearance->BorderSize = 0;
			this->button5->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(55)),
				static_cast<System::Int32>(static_cast<System::Byte>(144)), static_cast<System::Int32>(static_cast<System::Byte>(116)));
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button5->Font = (gcnew System::Drawing::Font(L"Stensil", 15));
			this->button5->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(249)), static_cast<System::Int32>(static_cast<System::Byte>(245)),
				static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->button5->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button5->Location = System::Drawing::Point(0, 351);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(224, 51);
			this->button5->TabIndex = 7;
			this->button5->Text = L"Overdue";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// panel7
			// 
			this->panel7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(55)), static_cast<System::Int32>(static_cast<System::Byte>(144)),
				static_cast<System::Int32>(static_cast<System::Byte>(116)));
			this->panel7->Location = System::Drawing::Point(3, 294);
			this->panel7->Name = L"panel7";
			this->panel7->Size = System::Drawing::Size(18, 51);
			this->panel7->TabIndex = 6;
			this->panel7->Visible = false;
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(9)), static_cast<System::Int32>(static_cast<System::Byte>(24)),
				static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->button4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button4->FlatAppearance->BorderSize = 0;
			this->button4->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(55)),
				static_cast<System::Int32>(static_cast<System::Byte>(144)), static_cast<System::Int32>(static_cast<System::Byte>(116)));
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->Font = (gcnew System::Drawing::Font(L"Stensil", 15));
			this->button4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(249)), static_cast<System::Int32>(static_cast<System::Byte>(245)),
				static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->button4->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button4->Location = System::Drawing::Point(0, 294);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(224, 51);
			this->button4->TabIndex = 5;
			this->button4->Text = L"Tasks";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// panel6
			// 
			this->panel6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(55)), static_cast<System::Int32>(static_cast<System::Byte>(144)),
				static_cast<System::Int32>(static_cast<System::Byte>(116)));
			this->panel6->Location = System::Drawing::Point(3, 237);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(18, 51);
			this->panel6->TabIndex = 4;
			this->panel6->Visible = false;
			this->panel6->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::panel6_Paint);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(9)), static_cast<System::Int32>(static_cast<System::Byte>(24)),
				static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->button3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button3->FlatAppearance->BorderSize = 0;
			this->button3->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(55)),
				static_cast<System::Int32>(static_cast<System::Byte>(144)), static_cast<System::Int32>(static_cast<System::Byte>(116)));
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Font = (gcnew System::Drawing::Font(L"Stensil", 15));
			this->button3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(249)), static_cast<System::Int32>(static_cast<System::Byte>(245)),
				static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->button3->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button3->Location = System::Drawing::Point(0, 237);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(224, 51);
			this->button3->TabIndex = 3;
			this->button3->Text = L"My Day";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click_1);
			// 
			// panel5
			// 
			this->panel5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(55)), static_cast<System::Int32>(static_cast<System::Byte>(144)),
				static_cast<System::Int32>(static_cast<System::Byte>(116)));
			this->panel5->Location = System::Drawing::Point(3, 180);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(18, 51);
			this->panel5->TabIndex = 2;
			this->panel5->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::panel5_Paint);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(9)), static_cast<System::Int32>(static_cast<System::Byte>(24)),
				static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->button2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button2->FlatAppearance->BorderSize = 0;
			this->button2->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(55)),
				static_cast<System::Int32>(static_cast<System::Byte>(144)), static_cast<System::Int32>(static_cast<System::Byte>(116)));
			this->button2->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(55)),
				static_cast<System::Int32>(static_cast<System::Byte>(144)), static_cast<System::Int32>(static_cast<System::Byte>(116)));
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Stensil", 15));
			this->button2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(249)), static_cast<System::Int32>(static_cast<System::Byte>(245)),
				static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->button2->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button2->Location = System::Drawing::Point(0, 180);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(224, 51);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Home";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(55)), static_cast<System::Int32>(static_cast<System::Byte>(144)),
				static_cast<System::Int32>(static_cast<System::Byte>(116)));
			this->panel4->Controls->Add(this->pictureBox1);
			this->panel4->Controls->Add(this->label1);
			this->panel4->Location = System::Drawing::Point(33, 3);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(121, 120);
			this->panel4->TabIndex = 0;
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(20, 0);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(72, 65);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 1;
			this->pictureBox1->TabStop = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Stensil", 13));
			this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(249)), static_cast<System::Int32>(static_cast<System::Byte>(245)),
				static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->label1->Location = System::Drawing::Point(1, 78);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(123, 27);
			this->label1->TabIndex = 0;
			this->label1->Text = L"To Do List";
			// 
			// panel16
			// 
			this->panel16->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(9)), static_cast<System::Int32>(static_cast<System::Byte>(24)),
				static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->panel16->Controls->Add(this->label8);
			this->panel16->Controls->Add(this->button10);
			this->panel16->Controls->Add(this->pictureBox16);
			this->panel16->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(249)), static_cast<System::Int32>(static_cast<System::Byte>(245)),
				static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->panel16->Location = System::Drawing::Point(283, 193);
			this->panel16->Name = L"panel16";
			this->panel16->Size = System::Drawing::Size(421, 280);
			this->panel16->TabIndex = 16;
			this->panel16->Visible = false;
			// 
			// label8
			// 
			this->label8->Font = (gcnew System::Drawing::Font(L"KacstOneFixed", 15));
			this->label8->Location = System::Drawing::Point(30, 142);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(362, 84);
			this->label8->TabIndex = 18;
			this->label8->Text = L"Please Enter A Valid Information And Priority From 1 To 100";
			this->label8->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// button10
			// 
			this->button10->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(249)), static_cast<System::Int32>(static_cast<System::Byte>(245)),
				static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->button10->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button10->Font = (gcnew System::Drawing::Font(L"KacstOneFixed", 10));
			this->button10->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(9)), static_cast<System::Int32>(static_cast<System::Byte>(24)),
				static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->button10->Location = System::Drawing::Point(168, 238);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(87, 28);
			this->button10->TabIndex = 3;
			this->button10->Text = L"OK";
			this->button10->UseVisualStyleBackColor = false;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm::button10_Click_1);
			// 
			// pictureBox16
			// 
			this->pictureBox16->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox16.Image")));
			this->pictureBox16->Location = System::Drawing::Point(22, -3);
			this->pictureBox16->Name = L"pictureBox16";
			this->pictureBox16->Size = System::Drawing::Size(299, 169);
			this->pictureBox16->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox16->TabIndex = 2;
			this->pictureBox16->TabStop = false;
			this->pictureBox16->Click += gcnew System::EventHandler(this, &MyForm::pictureBox16_Click);
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(199)), static_cast<System::Int32>(static_cast<System::Byte>(158)),
				static_cast<System::Int32>(static_cast<System::Byte>(183)));
			this->panel2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel2.BackgroundImage")));
			this->panel2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel2->Controls->Add(this->panel14);
			this->panel2->Controls->Add(this->button1);
			this->panel2->Controls->Add(this->pictureBox4);
			this->panel2->Location = System::Drawing::Point(223, 43);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(1061, 674);
			this->panel2->TabIndex = 1;
			this->panel2->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::panel2_Paint);
			// 
			// panel14
			// 
			this->panel14->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(249)), static_cast<System::Int32>(static_cast<System::Byte>(245)),
				static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->panel14->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel14.BackgroundImage")));
			this->panel14->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel14->Controls->Add(this->panel18);
			this->panel14->Controls->Add(this->panel17);
			this->panel14->Controls->Add(this->panel15);
			this->panel14->Controls->Add(this->panel16);
			this->panel14->Controls->Add(this->label7);
			this->panel14->Controls->Add(this->textBox4);
			this->panel14->Controls->Add(this->label6);
			this->panel14->Controls->Add(this->textBox3);
			this->panel14->Controls->Add(this->label5);
			this->panel14->Controls->Add(this->textBox1);
			this->panel14->Controls->Add(this->label4);
			this->panel14->Controls->Add(this->label3);
			this->panel14->Controls->Add(this->pictureBox14);
			this->panel14->Controls->Add(this->dateTimePicker1);
			this->panel14->Controls->Add(this->textBox2);
			this->panel14->Location = System::Drawing::Point(0, 0);
			this->panel14->Name = L"panel14";
			this->panel14->Size = System::Drawing::Size(1061, 674);
			this->panel14->TabIndex = 2;
			this->panel14->Visible = false;
			this->panel14->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::panel14_Paint);
			// 
			// panel18
			// 
			this->panel18->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(249)), static_cast<System::Int32>(static_cast<System::Byte>(245)),
				static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->panel18->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->panel18->Controls->Add(this->panel20);
			this->panel18->Controls->Add(this->panel19);
			this->panel18->Controls->Add(this->textBox9);
			this->panel18->Controls->Add(this->label11);
			this->panel18->Controls->Add(this->textBox5);
			this->panel18->Controls->Add(this->label12);
			this->panel18->Controls->Add(this->textBox6);
			this->panel18->Controls->Add(this->label13);
			this->panel18->Controls->Add(this->textBox7);
			this->panel18->Controls->Add(this->label14);
			this->panel18->Controls->Add(this->label15);
			this->panel18->Controls->Add(this->textBox8);
			this->panel18->Controls->Add(this->radioButton2);
			this->panel18->Controls->Add(this->radioButton1);
			this->panel18->Controls->Add(this->comboBox1);
			this->panel18->Controls->Add(this->label10);
			this->panel18->Controls->Add(this->pictureBox18);
			this->panel18->Controls->Add(this->pictureBox19);
			this->panel18->Location = System::Drawing::Point(0, 0);
			this->panel18->Name = L"panel18";
			this->panel18->Size = System::Drawing::Size(1061, 674);
			this->panel18->TabIndex = 19;
			this->panel18->Visible = false;
			this->panel18->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::panel18_Paint);
			// 
			// panel20
			// 
			this->panel20->Controls->Add(this->panel22);
			this->panel20->Controls->Add(this->panel21);
			this->panel20->Controls->Add(this->dataGridView1);
			this->panel20->Location = System::Drawing::Point(0, 0);
			this->panel20->Name = L"panel20";
			this->panel20->Size = System::Drawing::Size(1061, 672);
			this->panel20->TabIndex = 30;
			this->panel20->Visible = false;
			// 
			// panel22
			// 
			this->panel22->Controls->Add(this->panel23);
			this->panel22->Controls->Add(this->textBox21);
			this->panel22->Controls->Add(this->label28);
			this->panel22->Controls->Add(this->textBox16);
			this->panel22->Controls->Add(this->label17);
			this->panel22->Controls->Add(this->textBox17);
			this->panel22->Controls->Add(this->label24);
			this->panel22->Controls->Add(this->textBox18);
			this->panel22->Controls->Add(this->label25);
			this->panel22->Controls->Add(this->textBox19);
			this->panel22->Controls->Add(this->label26);
			this->panel22->Controls->Add(this->label27);
			this->panel22->Controls->Add(this->textBox20);
			this->panel22->Controls->Add(this->comboBox2);
			this->panel22->Controls->Add(this->pictureBox21);
			this->panel22->Location = System::Drawing::Point(0, 3);
			this->panel22->Name = L"panel22";
			this->panel22->Size = System::Drawing::Size(1061, 671);
			this->panel22->TabIndex = 4;
			// 
			// panel23
			// 
			this->panel23->Controls->Add(this->panel25);
			this->panel23->Controls->Add(this->panel24);
			this->panel23->Controls->Add(this->pictureBox22);
			this->panel23->Controls->Add(this->pictureBox23);
			this->panel23->Controls->Add(this->dataGridView2);
			this->panel23->Location = System::Drawing::Point(0, 0);
			this->panel23->Name = L"panel23";
			this->panel23->Size = System::Drawing::Size(1061, 671);
			this->panel23->TabIndex = 41;
			this->panel23->Visible = false;
			// 
			// panel25
			// 
			this->panel25->Controls->Add(this->panel27);
			this->panel25->Controls->Add(this->panel28);
			this->panel25->Controls->Add(this->textBox28);
			this->panel25->Controls->Add(this->groupBox1);
			this->panel25->Controls->Add(this->panel26);
			this->panel25->Controls->Add(this->label41);
			this->panel25->Controls->Add(this->label36);
			this->panel25->Controls->Add(this->textBox30);
			this->panel25->Controls->Add(this->label37);
			this->panel25->Controls->Add(this->textBox31);
			this->panel25->Controls->Add(this->label38);
			this->panel25->Controls->Add(this->textBox32);
			this->panel25->Controls->Add(this->label39);
			this->panel25->Controls->Add(this->label40);
			this->panel25->Controls->Add(this->textBox33);
			this->panel25->Controls->Add(this->comboBox3);
			this->panel25->Controls->Add(this->pictureBox25);
			this->panel25->Controls->Add(this->dateTimePicker2);
			this->panel25->Controls->Add(this->pictureBox24);
			this->panel25->Location = System::Drawing::Point(0, -3);
			this->panel25->Name = L"panel25";
			this->panel25->Size = System::Drawing::Size(1058, 675);
			this->panel25->TabIndex = 8;
			this->panel25->Visible = false;
			// 
			// panel27
			// 
			this->panel27->Controls->Add(this->panel31);
			this->panel27->Controls->Add(this->panel30);
			this->panel27->Controls->Add(this->panel29);
			this->panel27->Controls->Add(this->comboBox4);
			this->panel27->Controls->Add(this->pictureBox27);
			this->panel27->Location = System::Drawing::Point(0, 3);
			this->panel27->Name = L"panel27";
			this->panel27->Size = System::Drawing::Size(1061, 672);
			this->panel27->TabIndex = 64;
			this->panel27->Visible = false;
			// 
			// panel31
			// 
			this->panel31->Controls->Add(this->panel38);
			this->panel31->Controls->Add(this->button21);
			this->panel31->Controls->Add(this->panel33);
			this->panel31->Controls->Add(this->button17);
			this->panel31->Controls->Add(this->panel32);
			this->panel31->Controls->Add(this->pictureBox32);
			this->panel31->Controls->Add(this->dataGridView3);
			this->panel31->Controls->Add(this->button19);
			this->panel31->Controls->Add(this->button18);
			this->panel31->Location = System::Drawing::Point(0, 0);
			this->panel31->Name = L"panel31";
			this->panel31->Size = System::Drawing::Size(1061, 672);
			this->panel31->TabIndex = 58;
			this->panel31->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::panel31_Paint);
			// 
			// panel38
			// 
			this->panel38->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(9)), static_cast<System::Int32>(static_cast<System::Byte>(24)),
				static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->panel38->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel38->Controls->Add(this->panel36);
			this->panel38->Controls->Add(this->textBox47);
			this->panel38->Controls->Add(this->button26);
			this->panel38->Controls->Add(this->label61);
			this->panel38->Controls->Add(this->pictureBox37);
			this->panel38->Location = System::Drawing::Point(245, 133);
			this->panel38->Name = L"panel38";
			this->panel38->Size = System::Drawing::Size(526, 387);
			this->panel38->TabIndex = 66;
			this->panel38->TabStop = true;
			this->panel38->Visible = false;
			// 
			// panel36
			// 
			this->panel36->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(9)), static_cast<System::Int32>(static_cast<System::Byte>(24)),
				static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->panel36->Controls->Add(this->label58);
			this->panel36->Controls->Add(this->button23);
			this->panel36->Controls->Add(this->pictureBox34);
			this->panel36->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(249)), static_cast<System::Int32>(static_cast<System::Byte>(245)),
				static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->panel36->Location = System::Drawing::Point(57, 63);
			this->panel36->Name = L"panel36";
			this->panel36->Size = System::Drawing::Size(421, 280);
			this->panel36->TabIndex = 64;
			this->panel36->Visible = false;
			// 
			// label58
			// 
			this->label58->Font = (gcnew System::Drawing::Font(L"KacstOneFixed", 15));
			this->label58->Location = System::Drawing::Point(30, 142);
			this->label58->Name = L"label58";
			this->label58->Size = System::Drawing::Size(362, 84);
			this->label58->TabIndex = 18;
			this->label58->Text = L"Please Enter A Valid Information";
			this->label58->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// button23
			// 
			this->button23->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(249)), static_cast<System::Int32>(static_cast<System::Byte>(245)),
				static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->button23->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button23->Font = (gcnew System::Drawing::Font(L"KacstOneFixed", 10));
			this->button23->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(9)), static_cast<System::Int32>(static_cast<System::Byte>(24)),
				static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->button23->Location = System::Drawing::Point(168, 238);
			this->button23->Name = L"button23";
			this->button23->Size = System::Drawing::Size(87, 28);
			this->button23->TabIndex = 3;
			this->button23->Text = L"OK";
			this->button23->UseVisualStyleBackColor = false;
			this->button23->Click += gcnew System::EventHandler(this, &MyForm::button23_Click_1);
			// 
			// pictureBox34
			// 
			this->pictureBox34->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox34.Image")));
			this->pictureBox34->Location = System::Drawing::Point(22, -3);
			this->pictureBox34->Name = L"pictureBox34";
			this->pictureBox34->Size = System::Drawing::Size(299, 169);
			this->pictureBox34->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox34->TabIndex = 2;
			this->pictureBox34->TabStop = false;
			// 
			// textBox47
			// 
			this->textBox47->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(249)), static_cast<System::Int32>(static_cast<System::Byte>(245)),
				static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->textBox47->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox47->Font = (gcnew System::Drawing::Font(L"Tahoma", 14));
			this->textBox47->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(9)), static_cast<System::Int32>(static_cast<System::Byte>(24)),
				static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->textBox47->Location = System::Drawing::Point(203, 303);
			this->textBox47->Name = L"textBox47";
			this->textBox47->Size = System::Drawing::Size(208, 36);
			this->textBox47->TabIndex = 41;
			// 
			// button26
			// 
			this->button26->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(249)), static_cast<System::Int32>(static_cast<System::Byte>(245)),
				static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->button26->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(55)),
				static_cast<System::Int32>(static_cast<System::Byte>(144)), static_cast<System::Int32>(static_cast<System::Byte>(116)));
			this->button26->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button26->Font = (gcnew System::Drawing::Font(L"KacstOneFixed", 10));
			this->button26->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(9)), static_cast<System::Int32>(static_cast<System::Byte>(24)),
				static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->button26->Location = System::Drawing::Point(217, 354);
			this->button26->Name = L"button26";
			this->button26->Size = System::Drawing::Size(102, 28);
			this->button26->TabIndex = 0;
			this->button26->Text = L"SEARCH";
			this->button26->UseVisualStyleBackColor = false;
			this->button26->Click += gcnew System::EventHandler(this, &MyForm::button26_Click);
			// 
			// label61
			// 
			this->label61->AutoSize = true;
			this->label61->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(9)), static_cast<System::Int32>(static_cast<System::Byte>(24)),
				static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->label61->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label61->Font = (gcnew System::Drawing::Font(L"KacstOneFixed", 15));
			this->label61->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(249)), static_cast<System::Int32>(static_cast<System::Byte>(245)),
				static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->label61->Location = System::Drawing::Point(46, 310);
			this->label61->Name = L"label61";
			this->label61->Size = System::Drawing::Size(157, 28);
			this->label61->TabIndex = 40;
			this->label61->Text = L"Enter Title:";
			// 
			// pictureBox37
			// 
			this->pictureBox37->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox37.Image")));
			this->pictureBox37->Location = System::Drawing::Point(27, -49);
			this->pictureBox37->Name = L"pictureBox37";
			this->pictureBox37->Size = System::Drawing::Size(511, 404);
			this->pictureBox37->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox37->TabIndex = 39;
			this->pictureBox37->TabStop = false;
			// 
			// button21
			// 
			this->button21->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(9)), static_cast<System::Int32>(static_cast<System::Byte>(24)),
				static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->button21->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(55)),
				static_cast<System::Int32>(static_cast<System::Byte>(144)), static_cast<System::Int32>(static_cast<System::Byte>(116)));
			this->button21->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button21->Font = (gcnew System::Drawing::Font(L"KacstOneFixed", 12));
			this->button21->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(249)), static_cast<System::Int32>(static_cast<System::Byte>(245)),
				static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->button21->Location = System::Drawing::Point(795, 635);
			this->button21->Name = L"button21";
			this->button21->Size = System::Drawing::Size(203, 35);
			this->button21->TabIndex = 59;
			this->button21->Text = L"Search By Title";
			this->button21->UseVisualStyleBackColor = false;
			this->button21->Click += gcnew System::EventHandler(this, &MyForm::button21_Click);
			// 
			// panel33
			// 
			this->panel33->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(9)), static_cast<System::Int32>(static_cast<System::Byte>(24)),
				static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->panel33->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel33->Controls->Add(this->panel35);
			this->panel33->Controls->Add(this->panel40);
			this->panel33->Controls->Add(this->panel34);
			this->panel33->Controls->Add(this->button20);
			this->panel33->Controls->Add(this->label50);
			this->panel33->Controls->Add(this->textBox39);
			this->panel33->Controls->Add(this->pictureBox31);
			this->panel33->Location = System::Drawing::Point(244, 134);
			this->panel33->Name = L"panel33";
			this->panel33->Size = System::Drawing::Size(526, 387);
			this->panel33->TabIndex = 58;
			this->panel33->TabStop = true;
			this->panel33->Visible = false;
			// 
			// panel35
			// 
			this->panel35->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(9)), static_cast<System::Int32>(static_cast<System::Byte>(24)),
				static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->panel35->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel35->Controls->Add(this->panel37);
			this->panel35->Controls->Add(this->panel39);
			this->panel35->Controls->Add(this->button24);
			this->panel35->Controls->Add(this->label59);
			this->panel35->Controls->Add(this->textBox46);
			this->panel35->Controls->Add(this->pictureBox35);
			this->panel35->Location = System::Drawing::Point(1, 2);
			this->panel35->Name = L"panel35";
			this->panel35->Size = System::Drawing::Size(526, 387);
			this->panel35->TabIndex = 60;
			this->panel35->TabStop = true;
			this->panel35->Visible = false;
			// 
			// panel37
			// 
			this->panel37->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(9)), static_cast<System::Int32>(static_cast<System::Byte>(24)),
				static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->panel37->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel37->Controls->Add(this->dateTimePicker3);
			this->panel37->Controls->Add(this->button25);
			this->panel37->Controls->Add(this->label60);
			this->panel37->Controls->Add(this->pictureBox36);
			this->panel37->Location = System::Drawing::Point(-2, -2);
			this->panel37->Name = L"panel37";
			this->panel37->Size = System::Drawing::Size(526, 387);
			this->panel37->TabIndex = 65;
			this->panel37->TabStop = true;
			this->panel37->Visible = false;
			// 
			// dateTimePicker3
			// 
			this->dateTimePicker3->CalendarForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(9)),
				static_cast<System::Int32>(static_cast<System::Byte>(24)), static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->dateTimePicker3->CalendarMonthBackground = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(249)),
				static_cast<System::Int32>(static_cast<System::Byte>(245)), static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->dateTimePicker3->CustomFormat = L"yyyy/MM/dd";
			this->dateTimePicker3->Font = (gcnew System::Drawing::Font(L"Tahoma", 12));
			this->dateTimePicker3->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->dateTimePicker3->Location = System::Drawing::Point(234, 306);
			this->dateTimePicker3->Name = L"dateTimePicker3";
			this->dateTimePicker3->Size = System::Drawing::Size(177, 32);
			this->dateTimePicker3->TabIndex = 59;
			this->dateTimePicker3->Value = System::DateTime(2019, 4, 22, 0, 12, 41, 0);
			// 
			// button25
			// 
			this->button25->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(249)), static_cast<System::Int32>(static_cast<System::Byte>(245)),
				static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->button25->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(55)),
				static_cast<System::Int32>(static_cast<System::Byte>(144)), static_cast<System::Int32>(static_cast<System::Byte>(116)));
			this->button25->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button25->Font = (gcnew System::Drawing::Font(L"KacstOneFixed", 10));
			this->button25->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(9)), static_cast<System::Int32>(static_cast<System::Byte>(24)),
				static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->button25->Location = System::Drawing::Point(217, 354);
			this->button25->Name = L"button25";
			this->button25->Size = System::Drawing::Size(102, 28);
			this->button25->TabIndex = 0;
			this->button25->Text = L"SEARCH";
			this->button25->UseVisualStyleBackColor = false;
			this->button25->Click += gcnew System::EventHandler(this, &MyForm::button25_Click);
			// 
			// label60
			// 
			this->label60->AutoSize = true;
			this->label60->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(9)), static_cast<System::Int32>(static_cast<System::Byte>(24)),
				static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->label60->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label60->Font = (gcnew System::Drawing::Font(L"KacstOneFixed", 15));
			this->label60->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(249)), static_cast<System::Int32>(static_cast<System::Byte>(245)),
				static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->label60->Location = System::Drawing::Point(46, 310);
			this->label60->Name = L"label60";
			this->label60->Size = System::Drawing::Size(181, 28);
			this->label60->TabIndex = 40;
			this->label60->Text = L"Choose Date:";
			// 
			// pictureBox36
			// 
			this->pictureBox36->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox36.Image")));
			this->pictureBox36->Location = System::Drawing::Point(27, -49);
			this->pictureBox36->Name = L"pictureBox36";
			this->pictureBox36->Size = System::Drawing::Size(511, 404);
			this->pictureBox36->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox36->TabIndex = 39;
			this->pictureBox36->TabStop = false;
			// 
			// panel39
			// 
			this->panel39->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(9)), static_cast<System::Int32>(static_cast<System::Byte>(24)),
				static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->panel39->Controls->Add(this->label62);
			this->panel39->Controls->Add(this->button27);
			this->panel39->Controls->Add(this->pictureBox38);
			this->panel39->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(249)), static_cast<System::Int32>(static_cast<System::Byte>(245)),
				static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->panel39->Location = System::Drawing::Point(47, 58);
			this->panel39->Name = L"panel39";
			this->panel39->Size = System::Drawing::Size(421, 280);
			this->panel39->TabIndex = 65;
			this->panel39->Visible = false;
			// 
			// label62
			// 
			this->label62->Font = (gcnew System::Drawing::Font(L"KacstOneFixed", 15));
			this->label62->Location = System::Drawing::Point(30, 142);
			this->label62->Name = L"label62";
			this->label62->Size = System::Drawing::Size(362, 84);
			this->label62->TabIndex = 18;
			this->label62->Text = L"Please Enter A Valid Information";
			this->label62->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// button27
			// 
			this->button27->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(249)), static_cast<System::Int32>(static_cast<System::Byte>(245)),
				static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->button27->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button27->Font = (gcnew System::Drawing::Font(L"KacstOneFixed", 10));
			this->button27->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(9)), static_cast<System::Int32>(static_cast<System::Byte>(24)),
				static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->button27->Location = System::Drawing::Point(168, 238);
			this->button27->Name = L"button27";
			this->button27->Size = System::Drawing::Size(87, 28);
			this->button27->TabIndex = 3;
			this->button27->Text = L"OK";
			this->button27->UseVisualStyleBackColor = false;
			this->button27->Click += gcnew System::EventHandler(this, &MyForm::button27_Click);
			// 
			// pictureBox38
			// 
			this->pictureBox38->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox38.Image")));
			this->pictureBox38->Location = System::Drawing::Point(22, -3);
			this->pictureBox38->Name = L"pictureBox38";
			this->pictureBox38->Size = System::Drawing::Size(299, 169);
			this->pictureBox38->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox38->TabIndex = 2;
			this->pictureBox38->TabStop = false;
			// 
			// button24
			// 
			this->button24->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(249)), static_cast<System::Int32>(static_cast<System::Byte>(245)),
				static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->button24->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(55)),
				static_cast<System::Int32>(static_cast<System::Byte>(144)), static_cast<System::Int32>(static_cast<System::Byte>(116)));
			this->button24->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button24->Font = (gcnew System::Drawing::Font(L"KacstOneFixed", 10));
			this->button24->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(9)), static_cast<System::Int32>(static_cast<System::Byte>(24)),
				static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->button24->Location = System::Drawing::Point(217, 354);
			this->button24->Name = L"button24";
			this->button24->Size = System::Drawing::Size(102, 28);
			this->button24->TabIndex = 0;
			this->button24->Text = L"SEARCH";
			this->button24->UseVisualStyleBackColor = false;
			this->button24->Click += gcnew System::EventHandler(this, &MyForm::button24_Click);
			// 
			// label59
			// 
			this->label59->AutoSize = true;
			this->label59->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(9)), static_cast<System::Int32>(static_cast<System::Byte>(24)),
				static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->label59->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label59->Font = (gcnew System::Drawing::Font(L"KacstOneFixed", 15));
			this->label59->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(249)), static_cast<System::Int32>(static_cast<System::Byte>(245)),
				static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->label59->Location = System::Drawing::Point(46, 310);
			this->label59->Name = L"label59";
			this->label59->Size = System::Drawing::Size(193, 28);
			this->label59->TabIndex = 40;
			this->label59->Text = L"Enter Priority:";
			// 
			// textBox46
			// 
			this->textBox46->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(249)), static_cast<System::Int32>(static_cast<System::Byte>(245)),
				static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->textBox46->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox46->Font = (gcnew System::Drawing::Font(L"Tahoma", 14));
			this->textBox46->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(9)), static_cast<System::Int32>(static_cast<System::Byte>(24)),
				static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->textBox46->Location = System::Drawing::Point(241, 304);
			this->textBox46->Name = L"textBox46";
			this->textBox46->Size = System::Drawing::Size(131, 36);
			this->textBox46->TabIndex = 41;
			// 
			// pictureBox35
			// 
			this->pictureBox35->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox35.Image")));
			this->pictureBox35->Location = System::Drawing::Point(27, -49);
			this->pictureBox35->Name = L"pictureBox35";
			this->pictureBox35->Size = System::Drawing::Size(511, 404);
			this->pictureBox35->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox35->TabIndex = 39;
			this->pictureBox35->TabStop = false;
			// 
			// panel40
			// 
			this->panel40->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(9)), static_cast<System::Int32>(static_cast<System::Byte>(24)),
				static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->panel40->Controls->Add(this->label63);
			this->panel40->Controls->Add(this->button28);
			this->panel40->Controls->Add(this->pictureBox39);
			this->panel40->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(249)), static_cast<System::Int32>(static_cast<System::Byte>(245)),
				static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->panel40->Location = System::Drawing::Point(60, 55);
			this->panel40->Name = L"panel40";
			this->panel40->Size = System::Drawing::Size(421, 280);
			this->panel40->TabIndex = 65;
			this->panel40->Visible = false;
			// 
			// label63
			// 
			this->label63->Font = (gcnew System::Drawing::Font(L"KacstOneFixed", 15));
			this->label63->Location = System::Drawing::Point(30, 142);
			this->label63->Name = L"label63";
			this->label63->Size = System::Drawing::Size(362, 84);
			this->label63->TabIndex = 18;
			this->label63->Text = L"Please Enter A Valid Information";
			this->label63->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// button28
			// 
			this->button28->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(249)), static_cast<System::Int32>(static_cast<System::Byte>(245)),
				static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->button28->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button28->Font = (gcnew System::Drawing::Font(L"KacstOneFixed", 10));
			this->button28->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(9)), static_cast<System::Int32>(static_cast<System::Byte>(24)),
				static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->button28->Location = System::Drawing::Point(168, 238);
			this->button28->Name = L"button28";
			this->button28->Size = System::Drawing::Size(87, 28);
			this->button28->TabIndex = 3;
			this->button28->Text = L"OK";
			this->button28->UseVisualStyleBackColor = false;
			this->button28->Click += gcnew System::EventHandler(this, &MyForm::button28_Click);
			// 
			// pictureBox39
			// 
			this->pictureBox39->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox39.Image")));
			this->pictureBox39->Location = System::Drawing::Point(22, -3);
			this->pictureBox39->Name = L"pictureBox39";
			this->pictureBox39->Size = System::Drawing::Size(299, 169);
			this->pictureBox39->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox39->TabIndex = 2;
			this->pictureBox39->TabStop = false;
			// 
			// panel34
			// 
			this->panel34->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(9)), static_cast<System::Int32>(static_cast<System::Byte>(24)),
				static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->panel34->Controls->Add(this->label57);
			this->panel34->Controls->Add(this->button22);
			this->panel34->Controls->Add(this->pictureBox33);
			this->panel34->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(249)), static_cast<System::Int32>(static_cast<System::Byte>(245)),
				static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->panel34->Location = System::Drawing::Point(346, 199);
			this->panel34->Name = L"panel34";
			this->panel34->Size = System::Drawing::Size(421, 280);
			this->panel34->TabIndex = 64;
			this->panel34->Visible = false;
			// 
			// label57
			// 
			this->label57->Font = (gcnew System::Drawing::Font(L"KacstOneFixed", 15));
			this->label57->Location = System::Drawing::Point(29, 152);
			this->label57->Name = L"label57";
			this->label57->Size = System::Drawing::Size(362, 84);
			this->label57->TabIndex = 18;
			this->label57->Text = L"Please Enter A Valid Information.";
			this->label57->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label57->Click += gcnew System::EventHandler(this, &MyForm::label57_Click);
			// 
			// button22
			// 
			this->button22->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(249)), static_cast<System::Int32>(static_cast<System::Byte>(245)),
				static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->button22->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button22->Font = (gcnew System::Drawing::Font(L"KacstOneFixed", 10));
			this->button22->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(9)), static_cast<System::Int32>(static_cast<System::Byte>(24)),
				static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->button22->Location = System::Drawing::Point(168, 238);
			this->button22->Name = L"button22";
			this->button22->Size = System::Drawing::Size(87, 28);
			this->button22->TabIndex = 3;
			this->button22->Text = L"OK";
			this->button22->UseVisualStyleBackColor = false;
			this->button22->Click += gcnew System::EventHandler(this, &MyForm::button22_Click);
			// 
			// pictureBox33
			// 
			this->pictureBox33->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox33.Image")));
			this->pictureBox33->Location = System::Drawing::Point(22, -3);
			this->pictureBox33->Name = L"pictureBox33";
			this->pictureBox33->Size = System::Drawing::Size(299, 169);
			this->pictureBox33->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox33->TabIndex = 2;
			this->pictureBox33->TabStop = false;
			// 
			// button20
			// 
			this->button20->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(249)), static_cast<System::Int32>(static_cast<System::Byte>(245)),
				static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->button20->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(55)),
				static_cast<System::Int32>(static_cast<System::Byte>(144)), static_cast<System::Int32>(static_cast<System::Byte>(116)));
			this->button20->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button20->Font = (gcnew System::Drawing::Font(L"KacstOneFixed", 10));
			this->button20->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(9)), static_cast<System::Int32>(static_cast<System::Byte>(24)),
				static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->button20->Location = System::Drawing::Point(217, 354);
			this->button20->Name = L"button20";
			this->button20->Size = System::Drawing::Size(102, 28);
			this->button20->TabIndex = 0;
			this->button20->Text = L"SEARCH";
			this->button20->UseVisualStyleBackColor = false;
			this->button20->Click += gcnew System::EventHandler(this, &MyForm::button20_Click);
			// 
			// label50
			// 
			this->label50->AutoSize = true;
			this->label50->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(9)), static_cast<System::Int32>(static_cast<System::Byte>(24)),
				static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->label50->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label50->Font = (gcnew System::Drawing::Font(L"KacstOneFixed", 15));
			this->label50->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(249)), static_cast<System::Int32>(static_cast<System::Byte>(245)),
				static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->label50->Location = System::Drawing::Point(46, 310);
			this->label50->Name = L"label50";
			this->label50->Size = System::Drawing::Size(132, 28);
			this->label50->TabIndex = 40;
			this->label50->Text = L"Enter ID:";
			// 
			// textBox39
			// 
			this->textBox39->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(249)), static_cast<System::Int32>(static_cast<System::Byte>(245)),
				static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->textBox39->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox39->Font = (gcnew System::Drawing::Font(L"Tahoma", 14));
			this->textBox39->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(9)), static_cast<System::Int32>(static_cast<System::Byte>(24)),
				static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->textBox39->Location = System::Drawing::Point(184, 305);
			this->textBox39->Name = L"textBox39";
			this->textBox39->Size = System::Drawing::Size(208, 36);
			this->textBox39->TabIndex = 41;
			// 
			// pictureBox31
			// 
			this->pictureBox31->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox31.Image")));
			this->pictureBox31->Location = System::Drawing::Point(27, -49);
			this->pictureBox31->Name = L"pictureBox31";
			this->pictureBox31->Size = System::Drawing::Size(511, 404);
			this->pictureBox31->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox31->TabIndex = 39;
			this->pictureBox31->TabStop = false;
			// 
			// button17
			// 
			this->button17->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(9)), static_cast<System::Int32>(static_cast<System::Byte>(24)),
				static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->button17->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(55)),
				static_cast<System::Int32>(static_cast<System::Byte>(144)), static_cast<System::Int32>(static_cast<System::Byte>(116)));
			this->button17->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button17->Font = (gcnew System::Drawing::Font(L"KacstOneFixed", 12));
			this->button17->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(249)), static_cast<System::Int32>(static_cast<System::Byte>(245)),
				static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->button17->Location = System::Drawing::Point(121, 633);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(190, 37);
			this->button17->TabIndex = 2;
			this->button17->Text = L"Search By ID";
			this->button17->UseVisualStyleBackColor = false;
			this->button17->Click += gcnew System::EventHandler(this, &MyForm::button17_Click);
			// 
			// panel32
			// 
			this->panel32->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(9)), static_cast<System::Int32>(static_cast<System::Byte>(24)),
				static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->panel32->Controls->Add(this->textBox40);
			this->panel32->Controls->Add(this->label51);
			this->panel32->Controls->Add(this->textBox41);
			this->panel32->Controls->Add(this->label52);
			this->panel32->Controls->Add(this->textBox42);
			this->panel32->Controls->Add(this->label53);
			this->panel32->Controls->Add(this->textBox43);
			this->panel32->Controls->Add(this->label54);
			this->panel32->Controls->Add(this->textBox44);
			this->panel32->Controls->Add(this->label55);
			this->panel32->Controls->Add(this->label56);
			this->panel32->Controls->Add(this->textBox45);
			this->panel32->Location = System::Drawing::Point(755, 3);
			this->panel32->Name = L"panel32";
			this->panel32->Size = System::Drawing::Size(307, 574);
			this->panel32->TabIndex = 34;
			this->panel32->Visible = false;
			// 
			// textBox40
			// 
			this->textBox40->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(249)), static_cast<System::Int32>(static_cast<System::Byte>(245)),
				static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->textBox40->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox40->Enabled = false;
			this->textBox40->Font = (gcnew System::Drawing::Font(L"Tahoma", 14));
			this->textBox40->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(9)), static_cast<System::Int32>(static_cast<System::Byte>(24)),
				static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->textBox40->Location = System::Drawing::Point(132, 498);
			this->textBox40->Name = L"textBox40";
			this->textBox40->Size = System::Drawing::Size(129, 36);
			this->textBox40->TabIndex = 40;
			// 
			// label51
			// 
			this->label51->AutoSize = true;
			this->label51->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(9)), static_cast<System::Int32>(static_cast<System::Byte>(24)),
				static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->label51->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label51->Font = (gcnew System::Drawing::Font(L"KacstOneFixed", 17));
			this->label51->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(249)), static_cast<System::Int32>(static_cast<System::Byte>(245)),
				static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->label51->Location = System::Drawing::Point(8, 501);
			this->label51->Name = L"label51";
			this->label51->Size = System::Drawing::Size(118, 33);
			this->label51->TabIndex = 39;
			this->label51->Text = L"Status:";
			// 
			// textBox41
			// 
			this->textBox41->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(249)), static_cast<System::Int32>(static_cast<System::Byte>(245)),
				static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->textBox41->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox41->Enabled = false;
			this->textBox41->Font = (gcnew System::Drawing::Font(L"Tahoma", 14));
			this->textBox41->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(9)), static_cast<System::Int32>(static_cast<System::Byte>(24)),
				static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->textBox41->Location = System::Drawing::Point(14, 282);
			this->textBox41->Multiline = true;
			this->textBox41->Name = L"textBox41";
			this->textBox41->Size = System::Drawing::Size(279, 197);
			this->textBox41->TabIndex = 37;
			// 
			// label52
			// 
			this->label52->AutoSize = true;
			this->label52->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(9)), static_cast<System::Int32>(static_cast<System::Byte>(24)),
				static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->label52->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label52->Font = (gcnew System::Drawing::Font(L"KacstOneFixed", 17));
			this->label52->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(249)), static_cast<System::Int32>(static_cast<System::Byte>(245)),
				static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->label52->Location = System::Drawing::Point(6, 237);
			this->label52->Name = L"label52";
			this->label52->Size = System::Drawing::Size(188, 33);
			this->label52->TabIndex = 32;
			this->label52->Text = L"Description:";
			// 
			// textBox42
			// 
			this->textBox42->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(249)), static_cast<System::Int32>(static_cast<System::Byte>(245)),
				static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->textBox42->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox42->Enabled = false;
			this->textBox42->Font = (gcnew System::Drawing::Font(L"Tahoma", 14));
			this->textBox42->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(9)), static_cast<System::Int32>(static_cast<System::Byte>(24)),
				static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->textBox42->Location = System::Drawing::Point(161, 190);
			this->textBox42->Name = L"textBox42";
			this->textBox42->Size = System::Drawing::Size(129, 36);
			this->textBox42->TabIndex = 38;
			// 
			// label53
			// 
			this->label53->AutoSize = true;
			this->label53->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(9)), static_cast<System::Int32>(static_cast<System::Byte>(24)),
				static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->label53->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label53->Font = (gcnew System::Drawing::Font(L"KacstOneFixed", 17));
			this->label53->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(249)), static_cast<System::Int32>(static_cast<System::Byte>(245)),
				static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->label53->Location = System::Drawing::Point(6, 38);
			this->label53->Name = L"label53";
			this->label53->Size = System::Drawing::Size(58, 33);
			this->label53->TabIndex = 29;
			this->label53->Tag = L"";
			this->label53->Text = L"ID:";
			// 
			// textBox43
			// 
			this->textBox43->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(249)), static_cast<System::Int32>(static_cast<System::Byte>(245)),
				static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->textBox43->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox43->Enabled = false;
			this->textBox43->Font = (gcnew System::Drawing::Font(L"Tahoma", 14));
			this->textBox43->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(9)), static_cast<System::Int32>(static_cast<System::Byte>(24)),
				static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->textBox43->Location = System::Drawing::Point(161, 140);
			this->textBox43->Name = L"textBox43";
			this->textBox43->Size = System::Drawing::Size(121, 36);
			this->textBox43->TabIndex = 35;
			// 
			// label54
			// 
			this->label54->AutoSize = true;
			this->label54->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(9)), static_cast<System::Int32>(static_cast<System::Byte>(24)),
				static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->label54->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label54->Font = (gcnew System::Drawing::Font(L"KacstOneFixed", 17));
			this->label54->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(249)), static_cast<System::Int32>(static_cast<System::Byte>(245)),
				static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->label54->Location = System::Drawing::Point(6, 190);
			this->label54->Name = L"label54";
			this->label54->Size = System::Drawing::Size(149, 33);
			this->label54->TabIndex = 36;
			this->label54->Text = L"DueDate:";
			// 
			// textBox44
			// 
			this->textBox44->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(249)), static_cast<System::Int32>(static_cast<System::Byte>(245)),
				static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->textBox44->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox44->Enabled = false;
			this->textBox44->Font = (gcnew System::Drawing::Font(L"Tahoma", 14));
			this->textBox44->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(9)), static_cast<System::Int32>(static_cast<System::Byte>(24)),
				static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->textBox44->Location = System::Drawing::Point(96, 36);
			this->textBox44->Name = L"textBox44";
			this->textBox44->Size = System::Drawing::Size(121, 36);
			this->textBox44->TabIndex = 33;
			// 
			// label55
			// 
			this->label55->AutoSize = true;
			this->label55->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(9)), static_cast<System::Int32>(static_cast<System::Byte>(24)),
				static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->label55->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label55->Font = (gcnew System::Drawing::Font(L"KacstOneFixed", 17));
			this->label55->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(249)), static_cast<System::Int32>(static_cast<System::Byte>(245)),
				static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->label55->Location = System::Drawing::Point(6, 92);
			this->label55->Name = L"label55";
			this->label55->Size = System::Drawing::Size(87, 33);
			this->label55->TabIndex = 30;
			this->label55->Text = L"Title:";
			// 
			// label56
			// 
			this->label56->AutoSize = true;
			this->label56->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(9)), static_cast<System::Int32>(static_cast<System::Byte>(24)),
				static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->label56->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label56->Font = (gcnew System::Drawing::Font(L"KacstOneFixed", 17));
			this->label56->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(249)), static_cast<System::Int32>(static_cast<System::Byte>(245)),
				static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->label56->Location = System::Drawing::Point(6, 143);
			this->label56->Name = L"label56";
			this->label56->Size = System::Drawing::Size(130, 33);
			this->label56->TabIndex = 34;
			this->label56->Text = L"Priority:";
			// 
			// textBox45
			// 
			this->textBox45->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(249)), static_cast<System::Int32>(static_cast<System::Byte>(245)),
				static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->textBox45->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox45->Enabled = false;
			this->textBox45->Font = (gcnew System::Drawing::Font(L"Tahoma", 14));
			this->textBox45->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(9)), static_cast<System::Int32>(static_cast<System::Byte>(24)),
				static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->textBox45->Location = System::Drawing::Point(96, 89);
			this->textBox45->Name = L"textBox45";
			this->textBox45->Size = System::Drawing::Size(208, 36);
			this->textBox45->TabIndex = 31;
			// 
			// pictureBox32
			// 
			this->pictureBox32->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox32.Image")));
			this->pictureBox32->Location = System::Drawing::Point(-66, 431);
			this->pictureBox32->Name = L"pictureBox32";
			this->pictureBox32->Size = System::Drawing::Size(343, 244);
			this->pictureBox32->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox32->TabIndex = 36;
			this->pictureBox32->TabStop = false;
			this->pictureBox32->Visible = false;
			// 
			// dataGridView3
			// 
			this->dataGridView3->AllowUserToAddRows = false;
			this->dataGridView3->AllowUserToDeleteRows = false;
			this->dataGridView3->AllowUserToResizeColumns = false;
			this->dataGridView3->AllowUserToResizeRows = false;
			this->dataGridView3->BackgroundColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(249)),
				static_cast<System::Int32>(static_cast<System::Byte>(245)), static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->dataGridView3->CellBorderStyle = System::Windows::Forms::DataGridViewCellBorderStyle::SingleVertical;
			this->dataGridView3->ClipboardCopyMode = System::Windows::Forms::DataGridViewClipboardCopyMode::Disable;
			this->dataGridView3->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::Sunken;
			dataGridViewCellStyle1->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(9)), static_cast<System::Int32>(static_cast<System::Byte>(24)),
				static_cast<System::Int32>(static_cast<System::Byte>(36)));
			dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"KacstOneFixed", 12));
			dataGridViewCellStyle1->ForeColor = System::Drawing::Color::White;
			dataGridViewCellStyle1->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(55)),
				static_cast<System::Int32>(static_cast<System::Byte>(144)), static_cast<System::Int32>(static_cast<System::Byte>(116)));
			dataGridViewCellStyle1->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle1->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView3->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle1;
			this->dataGridView3->ColumnHeadersHeight = 25;
			this->dataGridView3->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::DisableResizing;
			dataGridViewCellStyle2->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(249)),
				static_cast<System::Int32>(static_cast<System::Byte>(245)), static_cast<System::Int32>(static_cast<System::Byte>(242)));
			dataGridViewCellStyle2->Font = (gcnew System::Drawing::Font(L"KacstOneFixed", 12));
			dataGridViewCellStyle2->ForeColor = System::Drawing::SystemColors::ControlText;
			dataGridViewCellStyle2->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(55)),
				static_cast<System::Int32>(static_cast<System::Byte>(144)), static_cast<System::Int32>(static_cast<System::Byte>(116)));
			dataGridViewCellStyle2->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle2->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->dataGridView3->DefaultCellStyle = dataGridViewCellStyle2;
			this->dataGridView3->GridColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(9)), static_cast<System::Int32>(static_cast<System::Byte>(24)),
				static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->dataGridView3->Location = System::Drawing::Point(3, 8);
			this->dataGridView3->MultiSelect = false;
			this->dataGridView3->Name = L"dataGridView3";
			this->dataGridView3->ReadOnly = true;
			dataGridViewCellStyle3->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(9)), static_cast<System::Int32>(static_cast<System::Byte>(24)),
				static_cast<System::Int32>(static_cast<System::Byte>(36)));
			dataGridViewCellStyle3->Font = (gcnew System::Drawing::Font(L"KacstOneFixed", 19));
			dataGridViewCellStyle3->ForeColor = System::Drawing::SystemColors::Info;
			dataGridViewCellStyle3->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle3->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			this->dataGridView3->RowHeadersDefaultCellStyle = dataGridViewCellStyle3;
			this->dataGridView3->RowHeadersWidth = 30;
			this->dataGridView3->RowHeadersWidthSizeMode = System::Windows::Forms::DataGridViewRowHeadersWidthSizeMode::DisableResizing;
			this->dataGridView3->RowTemplate->Height = 26;
			this->dataGridView3->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->dataGridView3->Size = System::Drawing::Size(745, 415);
			this->dataGridView3->TabIndex = 35;
			this->dataGridView3->Visible = false;
			this->dataGridView3->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::dataGridView3_CellClick);
			this->dataGridView3->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::dataGridView3_CellContentClick);
			// 
			// button19
			// 
			this->button19->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(9)), static_cast<System::Int32>(static_cast<System::Byte>(24)),
				static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->button19->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(55)),
				static_cast<System::Int32>(static_cast<System::Byte>(144)), static_cast<System::Int32>(static_cast<System::Byte>(116)));
			this->button19->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button19->Font = (gcnew System::Drawing::Font(L"KacstOneFixed", 12));
			this->button19->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(249)), static_cast<System::Int32>(static_cast<System::Byte>(245)),
				static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->button19->Location = System::Drawing::Point(552, 635);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(237, 34);
			this->button19->TabIndex = 4;
			this->button19->Text = L"Search By Date";
			this->button19->UseVisualStyleBackColor = false;
			this->button19->Click += gcnew System::EventHandler(this, &MyForm::button19_Click);
			// 
			// button18
			// 
			this->button18->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(9)), static_cast<System::Int32>(static_cast<System::Byte>(24)),
				static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->button18->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(55)),
				static_cast<System::Int32>(static_cast<System::Byte>(144)), static_cast<System::Int32>(static_cast<System::Byte>(116)));
			this->button18->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button18->Font = (gcnew System::Drawing::Font(L"KacstOneFixed", 12));
			this->button18->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(249)), static_cast<System::Int32>(static_cast<System::Byte>(245)),
				static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->button18->Location = System::Drawing::Point(316, 635);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(230, 35);
			this->button18->TabIndex = 3;
			this->button18->Text = L"Search By Priority";
			this->button18->UseVisualStyleBackColor = false;
			this->button18->Click += gcnew System::EventHandler(this, &MyForm::button18_Click);
			// 
			// panel30
			// 
			this->panel30->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(9)), static_cast<System::Int32>(static_cast<System::Byte>(24)),
				static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->panel30->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel30->Controls->Add(this->label49);
			this->panel30->Controls->Add(this->button15);
			this->panel30->Controls->Add(this->pictureBox30);
			this->panel30->Location = System::Drawing::Point(346, 202);
			this->panel30->Name = L"panel30";
			this->panel30->Size = System::Drawing::Size(342, 256);
			this->panel30->TabIndex = 57;
			this->panel30->TabStop = true;
			this->panel30->Visible = false;
			// 
			// label49
			// 
			this->label49->AutoSize = true;
			this->label49->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(9)), static_cast<System::Int32>(static_cast<System::Byte>(24)),
				static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->label49->Font = (gcnew System::Drawing::Font(L"KacstOneFixed", 20));
			this->label49->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(249)), static_cast<System::Int32>(static_cast<System::Byte>(245)),
				static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->label49->Location = System::Drawing::Point(108, 179);
			this->label49->Name = L"label49";
			this->label49->Size = System::Drawing::Size(152, 38);
			this->label49->TabIndex = 2;
			this->label49->Text = L"Success";
			// 
			// button15
			// 
			this->button15->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(249)), static_cast<System::Int32>(static_cast<System::Byte>(245)),
				static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->button15->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(55)),
				static_cast<System::Int32>(static_cast<System::Byte>(144)), static_cast<System::Int32>(static_cast<System::Byte>(116)));
			this->button15->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button15->Font = (gcnew System::Drawing::Font(L"KacstOneFixed", 10));
			this->button15->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(9)), static_cast<System::Int32>(static_cast<System::Byte>(24)),
				static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->button15->Location = System::Drawing::Point(138, 218);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(88, 28);
			this->button15->TabIndex = 0;
			this->button15->Text = L"OK";
			this->button15->UseVisualStyleBackColor = false;
			this->button15->Click += gcnew System::EventHandler(this, &MyForm::button15_Click);
			// 
			// pictureBox30
			// 
			this->pictureBox30->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox30.Image")));
			this->pictureBox30->Location = System::Drawing::Point(75, 14);
			this->pictureBox30->Name = L"pictureBox30";
			this->pictureBox30->Size = System::Drawing::Size(207, 152);
			this->pictureBox30->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox30->TabIndex = 1;
			this->pictureBox30->TabStop = false;
			// 
			// panel29
			// 
			this->panel29->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(9)), static_cast<System::Int32>(static_cast<System::Byte>(24)),
				static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->panel29->Controls->Add(this->textBox29);
			this->panel29->Controls->Add(this->pictureBox29);
			this->panel29->Controls->Add(this->label35);
			this->panel29->Controls->Add(this->textBox34);
			this->panel29->Controls->Add(this->label44);
			this->panel29->Controls->Add(this->textBox35);
			this->panel29->Controls->Add(this->label45);
			this->panel29->Controls->Add(this->textBox36);
			this->panel29->Controls->Add(this->label46);
			this->panel29->Controls->Add(this->textBox37);
			this->panel29->Controls->Add(this->label47);
			this->panel29->Controls->Add(this->label48);
			this->panel29->Controls->Add(this->textBox38);
			this->panel29->Location = System::Drawing::Point(751, 1);
			this->panel29->Name = L"panel29";
			this->panel29->Size = System::Drawing::Size(307, 671);
			this->panel29->TabIndex = 6;
			// 
			// textBox29
			// 
			this->textBox29->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(249)), static_cast<System::Int32>(static_cast<System::Byte>(245)),
				static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->textBox29->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox29->Enabled = false;
			this->textBox29->Font = (gcnew System::Drawing::Font(L"Tahoma", 14));
			this->textBox29->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(9)), static_cast<System::Int32>(static_cast<System::Byte>(24)),
				static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->textBox29->Location = System::Drawing::Point(132, 498);
			this->textBox29->Name = L"textBox29";
			this->textBox29->Size = System::Drawing::Size(129, 36);
			this->textBox29->TabIndex = 40;
			// 
			// pictureBox29
			// 
			this->pictureBox29->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox29.Image")));
			this->pictureBox29->Location = System::Drawing::Point(205, 583);
			this->pictureBox29->Name = L"pictureBox29";
			this->pictureBox29->Size = System::Drawing::Size(102, 85);
			this->pictureBox29->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox29->TabIndex = 7;
			this->pictureBox29->TabStop = false;
			this->pictureBox29->Click += gcnew System::EventHandler(this, &MyForm::pictureBox29_Click);
			// 
			// label35
			// 
			this->label35->AutoSize = true;
			this->label35->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(9)), static_cast<System::Int32>(static_cast<System::Byte>(24)),
				static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->label35->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label35->Font = (gcnew System::Drawing::Font(L"KacstOneFixed", 17));
			this->label35->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(249)), static_cast<System::Int32>(static_cast<System::Byte>(245)),
				static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->label35->Location = System::Drawing::Point(8, 501);
			this->label35->Name = L"label35";
			this->label35->Size = System::Drawing::Size(118, 33);
			this->label35->TabIndex = 39;
			this->label35->Text = L"Status:";
			// 
			// textBox34
			// 
			this->textBox34->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(249)), static_cast<System::Int32>(static_cast<System::Byte>(245)),
				static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->textBox34->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox34->Enabled = false;
			this->textBox34->Font = (gcnew System::Drawing::Font(L"Tahoma", 14));
			this->textBox34->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(9)), static_cast<System::Int32>(static_cast<System::Byte>(24)),
				static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->textBox34->Location = System::Drawing::Point(14, 282);
			this->textBox34->Multiline = true;
			this->textBox34->Name = L"textBox34";
			this->textBox34->Size = System::Drawing::Size(279, 197);
			this->textBox34->TabIndex = 37;
			// 
			// label44
			// 
			this->label44->AutoSize = true;
			this->label44->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(9)), static_cast<System::Int32>(static_cast<System::Byte>(24)),
				static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->label44->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label44->Font = (gcnew System::Drawing::Font(L"KacstOneFixed", 17));
			this->label44->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(249)), static_cast<System::Int32>(static_cast<System::Byte>(245)),
				static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->label44->Location = System::Drawing::Point(6, 237);
			this->label44->Name = L"label44";
			this->label44->Size = System::Drawing::Size(188, 33);
			this->label44->TabIndex = 32;
			this->label44->Text = L"Description:";
			// 
			// textBox35
			// 
			this->textBox35->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(249)), static_cast<System::Int32>(static_cast<System::Byte>(245)),
				static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->textBox35->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox35->Enabled = false;
			this->textBox35->Font = (gcnew System::Drawing::Font(L"Tahoma", 14));
			this->textBox35->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(9)), static_cast<System::Int32>(static_cast<System::Byte>(24)),
				static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->textBox35->Location = System::Drawing::Point(164, 190);
			this->textBox35->Name = L"textBox35";
			this->textBox35->Size = System::Drawing::Size(121, 36);
			this->textBox35->TabIndex = 38;
			// 
			// label45
			// 
			this->label45->AutoSize = true;
			this->label45->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(9)), static_cast<System::Int32>(static_cast<System::Byte>(24)),
				static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->label45->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label45->Font = (gcnew System::Drawing::Font(L"KacstOneFixed", 17));
			this->label45->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(249)), static_cast<System::Int32>(static_cast<System::Byte>(245)),
				static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->label45->Location = System::Drawing::Point(6, 38);
			this->label45->Name = L"label45";
			this->label45->Size = System::Drawing::Size(58, 33);
			this->label45->TabIndex = 29;
			this->label45->Tag = L"";
			this->label45->Text = L"ID:";
			// 
			// textBox36
			// 
			this->textBox36->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(249)), static_cast<System::Int32>(static_cast<System::Byte>(245)),
				static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->textBox36->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox36->Enabled = false;
			this->textBox36->Font = (gcnew System::Drawing::Font(L"Tahoma", 14));
			this->textBox36->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(9)), static_cast<System::Int32>(static_cast<System::Byte>(24)),
				static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->textBox36->Location = System::Drawing::Point(161, 140);
			this->textBox36->Name = L"textBox36";
			this->textBox36->Size = System::Drawing::Size(121, 36);
			this->textBox36->TabIndex = 35;
			// 
			// label46
			// 
			this->label46->AutoSize = true;
			this->label46->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(9)), static_cast<System::Int32>(static_cast<System::Byte>(24)),
				static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->label46->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label46->Font = (gcnew System::Drawing::Font(L"KacstOneFixed", 17));
			this->label46->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(249)), static_cast<System::Int32>(static_cast<System::Byte>(245)),
				static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->label46->Location = System::Drawing::Point(6, 190);
			this->label46->Name = L"label46";
			this->label46->Size = System::Drawing::Size(149, 33);
			this->label46->TabIndex = 36;
			this->label46->Text = L"DueDate:";
			// 
			// textBox37
			// 
			this->textBox37->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(249)), static_cast<System::Int32>(static_cast<System::Byte>(245)),
				static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->textBox37->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox37->Enabled = false;
			this->textBox37->Font = (gcnew System::Drawing::Font(L"Tahoma", 14));
			this->textBox37->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(9)), static_cast<System::Int32>(static_cast<System::Byte>(24)),
				static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->textBox37->Location = System::Drawing::Point(96, 36);
			this->textBox37->Name = L"textBox37";
			this->textBox37->Size = System::Drawing::Size(121, 36);
			this->textBox37->TabIndex = 33;
			// 
			// label47
			// 
			this->label47->AutoSize = true;
			this->label47->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(9)), static_cast<System::Int32>(static_cast<System::Byte>(24)),
				static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->label47->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label47->Font = (gcnew System::Drawing::Font(L"KacstOneFixed", 17));
			this->label47->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(249)), static_cast<System::Int32>(static_cast<System::Byte>(245)),
				static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->label47->Location = System::Drawing::Point(6, 92);
			this->label47->Name = L"label47";
			this->label47->Size = System::Drawing::Size(87, 33);
			this->label47->TabIndex = 30;
			this->label47->Text = L"Title:";
			// 
			// label48
			// 
			this->label48->AutoSize = true;
			this->label48->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(9)), static_cast<System::Int32>(static_cast<System::Byte>(24)),
				static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->label48->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label48->Font = (gcnew System::Drawing::Font(L"KacstOneFixed", 17));
			this->label48->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(249)), static_cast<System::Int32>(static_cast<System::Byte>(245)),
				static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->label48->Location = System::Drawing::Point(6, 143);
			this->label48->Name = L"label48";
			this->label48->Size = System::Drawing::Size(130, 33);
			this->label48->TabIndex = 34;
			this->label48->Text = L"Priority:";
			// 
			// textBox38
			// 
			this->textBox38->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(249)), static_cast<System::Int32>(static_cast<System::Byte>(245)),
				static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->textBox38->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox38->Enabled = false;
			this->textBox38->Font = (gcnew System::Drawing::Font(L"Tahoma", 14));
			this->textBox38->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(9)), static_cast<System::Int32>(static_cast<System::Byte>(24)),
				static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->textBox38->Location = System::Drawing::Point(96, 89);
			this->textBox38->Name = L"textBox38";
			this->textBox38->Size = System::Drawing::Size(208, 36);
			this->textBox38->TabIndex = 31;
			// 
			// comboBox4
			// 
			this->comboBox4->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->comboBox4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(55)), static_cast<System::Int32>(static_cast<System::Byte>(144)),
				static_cast<System::Int32>(static_cast<System::Byte>(116)));
			this->comboBox4->Font = (gcnew System::Drawing::Font(L"KacstOneFixed", 15, System::Drawing::FontStyle::Bold));
			this->comboBox4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(249)), static_cast<System::Int32>(static_cast<System::Byte>(245)),
				static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->comboBox4->FormattingEnabled = true;
			this->comboBox4->ItemHeight = 28;
			this->comboBox4->Location = System::Drawing::Point(34, 26);
			this->comboBox4->Name = L"comboBox4";
			this->comboBox4->Size = System::Drawing::Size(260, 36);
			this->comboBox4->TabIndex = 4;
			this->comboBox4->Text = L"Tasks";
			this->comboBox4->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox4_SelectedIndexChanged);
			// 
			// pictureBox27
			// 
			this->pictureBox27->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox27.Image")));
			this->pictureBox27->Location = System::Drawing::Point(19, 4);
			this->pictureBox27->Name = L"pictureBox27";
			this->pictureBox27->Size = System::Drawing::Size(776, 665);
			this->pictureBox27->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox27->TabIndex = 0;
			this->pictureBox27->TabStop = false;
			// 
			// panel28
			// 
			this->panel28->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(9)), static_cast<System::Int32>(static_cast<System::Byte>(24)),
				static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->panel28->Controls->Add(this->label43);
			this->panel28->Controls->Add(this->button16);
			this->panel28->Controls->Add(this->pictureBox28);
			this->panel28->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(249)), static_cast<System::Int32>(static_cast<System::Byte>(245)),
				static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->panel28->Location = System::Drawing::Point(349, 209);
			this->panel28->Name = L"panel28";
			this->panel28->Size = System::Drawing::Size(421, 280);
			this->panel28->TabIndex = 63;
			this->panel28->Visible = false;
			// 
			// label43
			// 
			this->label43->Font = (gcnew System::Drawing::Font(L"KacstOneFixed", 15));
			this->label43->Location = System::Drawing::Point(30, 142);
			this->label43->Name = L"label43";
			this->label43->Size = System::Drawing::Size(362, 84);
			this->label43->TabIndex = 18;
			this->label43->Text = L"Please Enter A Valid Information And Priority From 1 To 100";
			this->label43->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// button16
			// 
			this->button16->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(249)), static_cast<System::Int32>(static_cast<System::Byte>(245)),
				static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->button16->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button16->Font = (gcnew System::Drawing::Font(L"KacstOneFixed", 10));
			this->button16->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(9)), static_cast<System::Int32>(static_cast<System::Byte>(24)),
				static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->button16->Location = System::Drawing::Point(168, 238);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(87, 28);
			this->button16->TabIndex = 3;
			this->button16->Text = L"OK";
			this->button16->UseVisualStyleBackColor = false;
			this->button16->Click += gcnew System::EventHandler(this, &MyForm::button16_Click_1);
			// 
			// pictureBox28
			// 
			this->pictureBox28->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox28.Image")));
			this->pictureBox28->Location = System::Drawing::Point(22, -3);
			this->pictureBox28->Name = L"pictureBox28";
			this->pictureBox28->Size = System::Drawing::Size(299, 169);
			this->pictureBox28->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox28->TabIndex = 2;
			this->pictureBox28->TabStop = false;
			// 
			// textBox28
			// 
			this->textBox28->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(249)), static_cast<System::Int32>(static_cast<System::Byte>(245)),
				static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->textBox28->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox28->Font = (gcnew System::Drawing::Font(L"Tahoma", 14));
			this->textBox28->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(9)), static_cast<System::Int32>(static_cast<System::Byte>(24)),
				static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->textBox28->Location = System::Drawing::Point(912, 327);
			this->textBox28->Name = L"textBox28";
			this->textBox28->Size = System::Drawing::Size(121, 36);
			this->textBox28->TabIndex = 60;
			this->textBox28->Visible = false;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->radioButton3);
			this->groupBox1->Controls->Add(this->radioButton4);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"KacstOneFixed", 19.8F));
			this->groupBox1->Location = System::Drawing::Point(34, 547);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(378, 100);
			this->groupBox1->TabIndex = 59;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Status";
			// 
			// radioButton3
			// 
			this->radioButton3->AutoSize = true;
			this->radioButton3->Checked = true;
			this->radioButton3->Font = (gcnew System::Drawing::Font(L"KacstOneFixed", 15));
			this->radioButton3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(9)), static_cast<System::Int32>(static_cast<System::Byte>(24)),
				static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->radioButton3->Location = System::Drawing::Point(187, 57);
			this->radioButton3->Name = L"radioButton3";
			this->radioButton3->Size = System::Drawing::Size(179, 32);
			this->radioButton3->TabIndex = 9;
			this->radioButton3->TabStop = true;
			this->radioButton3->Text = L"NOT DONE";
			this->radioButton3->UseVisualStyleBackColor = true;
			this->radioButton3->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton3_CheckedChanged);
			// 
			// radioButton4
			// 
			this->radioButton4->AutoSize = true;
			this->radioButton4->Font = (gcnew System::Drawing::Font(L"KacstOneFixed", 15));
			this->radioButton4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(9)), static_cast<System::Int32>(static_cast<System::Byte>(24)),
				static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->radioButton4->Location = System::Drawing::Point(25, 57);
			this->radioButton4->Name = L"radioButton4";
			this->radioButton4->Size = System::Drawing::Size(110, 32);
			this->radioButton4->TabIndex = 8;
			this->radioButton4->Text = L"DONE";
			this->radioButton4->UseVisualStyleBackColor = true;
			this->radioButton4->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton4_CheckedChanged);
			// 
			// panel26
			// 
			this->panel26->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(9)), static_cast<System::Int32>(static_cast<System::Byte>(24)),
				static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->panel26->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel26->Controls->Add(this->label42);
			this->panel26->Controls->Add(this->button14);
			this->panel26->Controls->Add(this->pictureBox26);
			this->panel26->Location = System::Drawing::Point(358, 212);
			this->panel26->Name = L"panel26";
			this->panel26->Size = System::Drawing::Size(342, 256);
			this->panel26->TabIndex = 56;
			this->panel26->TabStop = true;
			this->panel26->Visible = false;
			// 
			// label42
			// 
			this->label42->AutoSize = true;
			this->label42->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(9)), static_cast<System::Int32>(static_cast<System::Byte>(24)),
				static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->label42->Font = (gcnew System::Drawing::Font(L"KacstOneFixed", 20));
			this->label42->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(249)), static_cast<System::Int32>(static_cast<System::Byte>(245)),
				static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->label42->Location = System::Drawing::Point(108, 179);
			this->label42->Name = L"label42";
			this->label42->Size = System::Drawing::Size(152, 38);
			this->label42->TabIndex = 2;
			this->label42->Text = L"Success";
			// 
			// button14
			// 
			this->button14->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(249)), static_cast<System::Int32>(static_cast<System::Byte>(245)),
				static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->button14->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(55)),
				static_cast<System::Int32>(static_cast<System::Byte>(144)), static_cast<System::Int32>(static_cast<System::Byte>(116)));
			this->button14->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button14->Font = (gcnew System::Drawing::Font(L"KacstOneFixed", 10));
			this->button14->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(9)), static_cast<System::Int32>(static_cast<System::Byte>(24)),
				static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->button14->Location = System::Drawing::Point(138, 218);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(88, 28);
			this->button14->TabIndex = 0;
			this->button14->Text = L"OK";
			this->button14->UseVisualStyleBackColor = false;
			this->button14->Click += gcnew System::EventHandler(this, &MyForm::button14_Click);
			// 
			// pictureBox26
			// 
			this->pictureBox26->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox26.Image")));
			this->pictureBox26->Location = System::Drawing::Point(75, 14);
			this->pictureBox26->Name = L"pictureBox26";
			this->pictureBox26->Size = System::Drawing::Size(207, 152);
			this->pictureBox26->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox26->TabIndex = 1;
			this->pictureBox26->TabStop = false;
			// 
			// label41
			// 
			this->label41->AutoSize = true;
			this->label41->BackColor = System::Drawing::Color::White;
			this->label41->Font = (gcnew System::Drawing::Font(L"KacstOneFixed", 19.8F));
			this->label41->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(9)), static_cast<System::Int32>(static_cast<System::Byte>(24)),
				static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->label41->Location = System::Drawing::Point(819, 624);
			this->label41->Name = L"label41";
			this->label41->Size = System::Drawing::Size(155, 37);
			this->label41->TabIndex = 55;
			this->label41->Text = L"UPDATE";
			this->label41->Click += gcnew System::EventHandler(this, &MyForm::label41_Click);
			// 
			// label36
			// 
			this->label36->AutoSize = true;
			this->label36->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(249)), static_cast<System::Int32>(static_cast<System::Byte>(245)),
				static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->label36->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label36->Font = (gcnew System::Drawing::Font(L"KacstOneFixed", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->label36->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(9)), static_cast<System::Int32>(static_cast<System::Byte>(24)),
				static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->label36->Location = System::Drawing::Point(27, 266);
			this->label36->Name = L"label36";
			this->label36->Size = System::Drawing::Size(168, 37);
			this->label36->TabIndex = 48;
			this->label36->Text = L"DueDate:";
			// 
			// textBox30
			// 
			this->textBox30->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(249)), static_cast<System::Int32>(static_cast<System::Byte>(245)),
				static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->textBox30->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox30->Font = (gcnew System::Drawing::Font(L"Tahoma", 14));
			this->textBox30->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(9)), static_cast<System::Int32>(static_cast<System::Byte>(24)),
				static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->textBox30->Location = System::Drawing::Point(246, 183);
			this->textBox30->Name = L"textBox30";
			this->textBox30->Size = System::Drawing::Size(121, 36);
			this->textBox30->TabIndex = 47;
			// 
			// label37
			// 
			this->label37->AutoSize = true;
			this->label37->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(249)), static_cast<System::Int32>(static_cast<System::Byte>(245)),
				static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->label37->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label37->Font = (gcnew System::Drawing::Font(L"KacstOneFixed", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->label37->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(9)), static_cast<System::Int32>(static_cast<System::Byte>(24)),
				static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->label37->Location = System::Drawing::Point(27, 186);
			this->label37->Name = L"label37";
			this->label37->Size = System::Drawing::Size(147, 37);
			this->label37->TabIndex = 46;
			this->label37->Text = L"Priority:";
			// 
			// textBox31
			// 
			this->textBox31->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(249)), static_cast<System::Int32>(static_cast<System::Byte>(245)),
				static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->textBox31->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox31->Enabled = false;
			this->textBox31->Font = (gcnew System::Drawing::Font(L"Tahoma", 14));
			this->textBox31->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(9)), static_cast<System::Int32>(static_cast<System::Byte>(24)),
				static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->textBox31->Location = System::Drawing::Point(246, 54);
			this->textBox31->Name = L"textBox31";
			this->textBox31->Size = System::Drawing::Size(121, 36);
			this->textBox31->TabIndex = 45;
			// 
			// label38
			// 
			this->label38->AutoSize = true;
			this->label38->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(249)), static_cast<System::Int32>(static_cast<System::Byte>(245)),
				static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->label38->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label38->Font = (gcnew System::Drawing::Font(L"KacstOneFixed", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->label38->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(9)), static_cast<System::Int32>(static_cast<System::Byte>(24)),
				static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->label38->Location = System::Drawing::Point(27, 333);
			this->label38->Name = L"label38";
			this->label38->Size = System::Drawing::Size(213, 37);
			this->label38->TabIndex = 44;
			this->label38->Text = L"Description:";
			// 
			// textBox32
			// 
			this->textBox32->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(249)), static_cast<System::Int32>(static_cast<System::Byte>(245)),
				static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->textBox32->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox32->Font = (gcnew System::Drawing::Font(L"Tahoma", 14));
			this->textBox32->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(9)), static_cast<System::Int32>(static_cast<System::Byte>(24)),
				static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->textBox32->Location = System::Drawing::Point(246, 115);
			this->textBox32->Name = L"textBox32";
			this->textBox32->Size = System::Drawing::Size(270, 36);
			this->textBox32->TabIndex = 43;
			// 
			// label39
			// 
			this->label39->AutoSize = true;
			this->label39->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(249)), static_cast<System::Int32>(static_cast<System::Byte>(245)),
				static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->label39->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label39->Font = (gcnew System::Drawing::Font(L"KacstOneFixed", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->label39->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(9)), static_cast<System::Int32>(static_cast<System::Byte>(24)),
				static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->label39->Location = System::Drawing::Point(27, 114);
			this->label39->Name = L"label39";
			this->label39->Size = System::Drawing::Size(98, 37);
			this->label39->TabIndex = 42;
			this->label39->Text = L"Title:";
			// 
			// label40
			// 
			this->label40->AutoSize = true;
			this->label40->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(249)), static_cast<System::Int32>(static_cast<System::Byte>(245)),
				static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->label40->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label40->Font = (gcnew System::Drawing::Font(L"KacstOneFixed", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->label40->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(9)), static_cast<System::Int32>(static_cast<System::Byte>(24)),
				static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->label40->Location = System::Drawing::Point(27, 45);
			this->label40->Name = L"label40";
			this->label40->Size = System::Drawing::Size(65, 37);
			this->label40->TabIndex = 41;
			this->label40->Tag = L"";
			this->label40->Text = L"ID:";
			// 
			// textBox33
			// 
			this->textBox33->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(249)), static_cast<System::Int32>(static_cast<System::Byte>(245)),
				static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->textBox33->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox33->Font = (gcnew System::Drawing::Font(L"Tahoma", 14));
			this->textBox33->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(9)), static_cast<System::Int32>(static_cast<System::Byte>(24)),
				static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->textBox33->Location = System::Drawing::Point(246, 333);
			this->textBox33->Multiline = true;
			this->textBox33->Name = L"textBox33";
			this->textBox33->Size = System::Drawing::Size(279, 197);
			this->textBox33->TabIndex = 49;
			// 
			// comboBox3
			// 
			this->comboBox3->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->comboBox3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(55)), static_cast<System::Int32>(static_cast<System::Byte>(144)),
				static_cast<System::Int32>(static_cast<System::Byte>(116)));
			this->comboBox3->Font = (gcnew System::Drawing::Font(L"KacstOneFixed", 15, System::Drawing::FontStyle::Bold));
			this->comboBox3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(249)), static_cast<System::Int32>(static_cast<System::Byte>(245)),
				static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->comboBox3->FormattingEnabled = true;
			this->comboBox3->ItemHeight = 28;
			this->comboBox3->Location = System::Drawing::Point(781, 29);
			this->comboBox3->Name = L"comboBox3";
			this->comboBox3->Size = System::Drawing::Size(260, 36);
			this->comboBox3->TabIndex = 3;
			this->comboBox3->Text = L"Tasks";
			this->comboBox3->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox3_SelectedIndexChanged);
			// 
			// pictureBox25
			// 
			this->pictureBox25->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox25.Image")));
			this->pictureBox25->Location = System::Drawing::Point(688, 466);
			this->pictureBox25->Name = L"pictureBox25";
			this->pictureBox25->Size = System::Drawing::Size(389, 351);
			this->pictureBox25->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox25->TabIndex = 54;
			this->pictureBox25->TabStop = false;
			this->pictureBox25->Click += gcnew System::EventHandler(this, &MyForm::pictureBox25_Click);
			// 
			// dateTimePicker2
			// 
			this->dateTimePicker2->CalendarForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(9)),
				static_cast<System::Int32>(static_cast<System::Byte>(24)), static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->dateTimePicker2->CalendarMonthBackground = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(249)),
				static_cast<System::Int32>(static_cast<System::Byte>(245)), static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->dateTimePicker2->CustomFormat = L"yyyy/MM/dd";
			this->dateTimePicker2->Font = (gcnew System::Drawing::Font(L"Tahoma", 12));
			this->dateTimePicker2->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->dateTimePicker2->Location = System::Drawing::Point(246, 267);
			this->dateTimePicker2->Name = L"dateTimePicker2";
			this->dateTimePicker2->Size = System::Drawing::Size(177, 32);
			this->dateTimePicker2->TabIndex = 58;
			this->dateTimePicker2->Value = System::DateTime(2019, 4, 22, 0, 12, 41, 0);
			// 
			// pictureBox24
			// 
			this->pictureBox24->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox24.Image")));
			this->pictureBox24->Location = System::Drawing::Point(121, -143);
			this->pictureBox24->Name = L"pictureBox24";
			this->pictureBox24->Size = System::Drawing::Size(766, 900);
			this->pictureBox24->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox24->TabIndex = 53;
			this->pictureBox24->TabStop = false;
			// 
			// panel24
			// 
			this->panel24->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(9)), static_cast<System::Int32>(static_cast<System::Byte>(24)),
				static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->panel24->Controls->Add(this->textBox22);
			this->panel24->Controls->Add(this->label29);
			this->panel24->Controls->Add(this->textBox23);
			this->panel24->Controls->Add(this->label30);
			this->panel24->Controls->Add(this->textBox24);
			this->panel24->Controls->Add(this->label31);
			this->panel24->Controls->Add(this->textBox25);
			this->panel24->Controls->Add(this->label32);
			this->panel24->Controls->Add(this->textBox26);
			this->panel24->Controls->Add(this->label33);
			this->panel24->Controls->Add(this->label34);
			this->panel24->Controls->Add(this->textBox27);
			this->panel24->Location = System::Drawing::Point(754, 1);
			this->panel24->Name = L"panel24";
			this->panel24->Size = System::Drawing::Size(307, 671);
			this->panel24->TabIndex = 5;
			// 
			// textBox22
			// 
			this->textBox22->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(249)), static_cast<System::Int32>(static_cast<System::Byte>(245)),
				static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->textBox22->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox22->Enabled = false;
			this->textBox22->Font = (gcnew System::Drawing::Font(L"Tahoma", 14));
			this->textBox22->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(9)), static_cast<System::Int32>(static_cast<System::Byte>(24)),
				static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->textBox22->Location = System::Drawing::Point(132, 498);
			this->textBox22->Name = L"textBox22";
			this->textBox22->Size = System::Drawing::Size(129, 36);
			this->textBox22->TabIndex = 40;
			// 
			// label29
			// 
			this->label29->AutoSize = true;
			this->label29->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(9)), static_cast<System::Int32>(static_cast<System::Byte>(24)),
				static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->label29->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label29->Font = (gcnew System::Drawing::Font(L"KacstOneFixed", 17));
			this->label29->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(249)), static_cast<System::Int32>(static_cast<System::Byte>(245)),
				static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->label29->Location = System::Drawing::Point(8, 501);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(118, 33);
			this->label29->TabIndex = 39;
			this->label29->Text = L"Status:";
			// 
			// textBox23
			// 
			this->textBox23->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(249)), static_cast<System::Int32>(static_cast<System::Byte>(245)),
				static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->textBox23->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox23->Enabled = false;
			this->textBox23->Font = (gcnew System::Drawing::Font(L"Tahoma", 14));
			this->textBox23->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(9)), static_cast<System::Int32>(static_cast<System::Byte>(24)),
				static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->textBox23->Location = System::Drawing::Point(14, 282);
			this->textBox23->Multiline = true;
			this->textBox23->Name = L"textBox23";
			this->textBox23->Size = System::Drawing::Size(279, 197);
			this->textBox23->TabIndex = 37;
			// 
			// label30
			// 
			this->label30->AutoSize = true;
			this->label30->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(9)), static_cast<System::Int32>(static_cast<System::Byte>(24)),
				static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->label30->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label30->Font = (gcnew System::Drawing::Font(L"KacstOneFixed", 17));
			this->label30->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(249)), static_cast<System::Int32>(static_cast<System::Byte>(245)),
				static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->label30->Location = System::Drawing::Point(6, 237);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size(188, 33);
			this->label30->TabIndex = 32;
			this->label30->Text = L"Description:";
			// 
			// textBox24
			// 
			this->textBox24->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(249)), static_cast<System::Int32>(static_cast<System::Byte>(245)),
				static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->textBox24->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox24->Enabled = false;
			this->textBox24->Font = (gcnew System::Drawing::Font(L"Tahoma", 14));
			this->textBox24->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(9)), static_cast<System::Int32>(static_cast<System::Byte>(24)),
				static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->textBox24->Location = System::Drawing::Point(161, 190);
			this->textBox24->Name = L"textBox24";
			this->textBox24->Size = System::Drawing::Size(129, 36);
			this->textBox24->TabIndex = 38;
			// 
			// label31
			// 
			this->label31->AutoSize = true;
			this->label31->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(9)), static_cast<System::Int32>(static_cast<System::Byte>(24)),
				static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->label31->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label31->Font = (gcnew System::Drawing::Font(L"KacstOneFixed", 17));
			this->label31->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(249)), static_cast<System::Int32>(static_cast<System::Byte>(245)),
				static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->label31->Location = System::Drawing::Point(6, 38);
			this->label31->Name = L"label31";
			this->label31->Size = System::Drawing::Size(58, 33);
			this->label31->TabIndex = 29;
			this->label31->Tag = L"";
			this->label31->Text = L"ID:";
			// 
			// textBox25
			// 
			this->textBox25->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(249)), static_cast<System::Int32>(static_cast<System::Byte>(245)),
				static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->textBox25->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox25->Enabled = false;
			this->textBox25->Font = (gcnew System::Drawing::Font(L"Tahoma", 14));
			this->textBox25->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(9)), static_cast<System::Int32>(static_cast<System::Byte>(24)),
				static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->textBox25->Location = System::Drawing::Point(161, 140);
			this->textBox25->Name = L"textBox25";
			this->textBox25->Size = System::Drawing::Size(121, 36);
			this->textBox25->TabIndex = 35;
			// 
			// label32
			// 
			this->label32->AutoSize = true;
			this->label32->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(9)), static_cast<System::Int32>(static_cast<System::Byte>(24)),
				static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->label32->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label32->Font = (gcnew System::Drawing::Font(L"KacstOneFixed", 17));
			this->label32->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(249)), static_cast<System::Int32>(static_cast<System::Byte>(245)),
				static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->label32->Location = System::Drawing::Point(6, 190);
			this->label32->Name = L"label32";
			this->label32->Size = System::Drawing::Size(149, 33);
			this->label32->TabIndex = 36;
			this->label32->Text = L"DueDate:";
			// 
			// textBox26
			// 
			this->textBox26->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(249)), static_cast<System::Int32>(static_cast<System::Byte>(245)),
				static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->textBox26->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox26->Enabled = false;
			this->textBox26->Font = (gcnew System::Drawing::Font(L"Tahoma", 14));
			this->textBox26->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(9)), static_cast<System::Int32>(static_cast<System::Byte>(24)),
				static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->textBox26->Location = System::Drawing::Point(96, 36);
			this->textBox26->Name = L"textBox26";
			this->textBox26->Size = System::Drawing::Size(121, 36);
			this->textBox26->TabIndex = 33;
			// 
			// label33
			// 
			this->label33->AutoSize = true;
			this->label33->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(9)), static_cast<System::Int32>(static_cast<System::Byte>(24)),
				static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->label33->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label33->Font = (gcnew System::Drawing::Font(L"KacstOneFixed", 17));
			this->label33->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(249)), static_cast<System::Int32>(static_cast<System::Byte>(245)),
				static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->label33->Location = System::Drawing::Point(6, 92);
			this->label33->Name = L"label33";
			this->label33->Size = System::Drawing::Size(87, 33);
			this->label33->TabIndex = 30;
			this->label33->Text = L"Title:";
			// 
			// label34
			// 
			this->label34->AutoSize = true;
			this->label34->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(9)), static_cast<System::Int32>(static_cast<System::Byte>(24)),
				static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->label34->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label34->Font = (gcnew System::Drawing::Font(L"KacstOneFixed", 17));
			this->label34->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(249)), static_cast<System::Int32>(static_cast<System::Byte>(245)),
				static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->label34->Location = System::Drawing::Point(6, 143);
			this->label34->Name = L"label34";
			this->label34->Size = System::Drawing::Size(130, 33);
			this->label34->TabIndex = 34;
			this->label34->Text = L"Priority:";
			// 
			// textBox27
			// 
			this->textBox27->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(249)), static_cast<System::Int32>(static_cast<System::Byte>(245)),
				static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->textBox27->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox27->Enabled = false;
			this->textBox27->Font = (gcnew System::Drawing::Font(L"Tahoma", 14));
			this->textBox27->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(9)), static_cast<System::Int32>(static_cast<System::Byte>(24)),
				static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->textBox27->Location = System::Drawing::Point(96, 89);
			this->textBox27->Name = L"textBox27";
			this->textBox27->Size = System::Drawing::Size(208, 36);
			this->textBox27->TabIndex = 31;
			// 
			// pictureBox22
			// 
			this->pictureBox22->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox22.Image")));
			this->pictureBox22->Location = System::Drawing::Point(349, 281);
			this->pictureBox22->Name = L"pictureBox22";
			this->pictureBox22->Size = System::Drawing::Size(382, 387);
			this->pictureBox22->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox22->TabIndex = 0;
			this->pictureBox22->TabStop = false;
			this->pictureBox22->Click += gcnew System::EventHandler(this, &MyForm::pictureBox22_Click);
			// 
			// pictureBox23
			// 
			this->pictureBox23->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox23.Image")));
			this->pictureBox23->Location = System::Drawing::Point(-59, 371);
			this->pictureBox23->Name = L"pictureBox23";
			this->pictureBox23->Size = System::Drawing::Size(446, 315);
			this->pictureBox23->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox23->TabIndex = 7;
			this->pictureBox23->TabStop = false;
			// 
			// dataGridView2
			// 
			this->dataGridView2->AllowUserToAddRows = false;
			this->dataGridView2->AllowUserToDeleteRows = false;
			this->dataGridView2->AllowUserToResizeColumns = false;
			this->dataGridView2->AllowUserToResizeRows = false;
			this->dataGridView2->BackgroundColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(249)),
				static_cast<System::Int32>(static_cast<System::Byte>(245)), static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->dataGridView2->CellBorderStyle = System::Windows::Forms::DataGridViewCellBorderStyle::SingleVertical;
			this->dataGridView2->ClipboardCopyMode = System::Windows::Forms::DataGridViewClipboardCopyMode::Disable;
			this->dataGridView2->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::Sunken;
			dataGridViewCellStyle4->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(9)), static_cast<System::Int32>(static_cast<System::Byte>(24)),
				static_cast<System::Int32>(static_cast<System::Byte>(36)));
			dataGridViewCellStyle4->Font = (gcnew System::Drawing::Font(L"KacstOneFixed", 12));
			dataGridViewCellStyle4->ForeColor = System::Drawing::Color::White;
			dataGridViewCellStyle4->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(55)),
				static_cast<System::Int32>(static_cast<System::Byte>(144)), static_cast<System::Int32>(static_cast<System::Byte>(116)));
			dataGridViewCellStyle4->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle4->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView2->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle4;
			this->dataGridView2->ColumnHeadersHeight = 25;
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::DisableResizing;
			dataGridViewCellStyle5->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(249)),
				static_cast<System::Int32>(static_cast<System::Byte>(245)), static_cast<System::Int32>(static_cast<System::Byte>(242)));
			dataGridViewCellStyle5->Font = (gcnew System::Drawing::Font(L"KacstOneFixed", 12));
			dataGridViewCellStyle5->ForeColor = System::Drawing::SystemColors::ControlText;
			dataGridViewCellStyle5->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(55)),
				static_cast<System::Int32>(static_cast<System::Byte>(144)), static_cast<System::Int32>(static_cast<System::Byte>(116)));
			dataGridViewCellStyle5->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle5->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->dataGridView2->DefaultCellStyle = dataGridViewCellStyle5;
			this->dataGridView2->GridColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(9)), static_cast<System::Int32>(static_cast<System::Byte>(24)),
				static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->dataGridView2->Location = System::Drawing::Point(0, 0);
			this->dataGridView2->MultiSelect = false;
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->ReadOnly = true;
			dataGridViewCellStyle6->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(9)), static_cast<System::Int32>(static_cast<System::Byte>(24)),
				static_cast<System::Int32>(static_cast<System::Byte>(36)));
			dataGridViewCellStyle6->Font = (gcnew System::Drawing::Font(L"KacstOneFixed", 19));
			dataGridViewCellStyle6->ForeColor = System::Drawing::SystemColors::Info;
			dataGridViewCellStyle6->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle6->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			this->dataGridView2->RowHeadersDefaultCellStyle = dataGridViewCellStyle6;
			this->dataGridView2->RowHeadersWidth = 30;
			this->dataGridView2->RowHeadersWidthSizeMode = System::Windows::Forms::DataGridViewRowHeadersWidthSizeMode::DisableResizing;
			this->dataGridView2->RowTemplate->Height = 26;
			this->dataGridView2->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->dataGridView2->Size = System::Drawing::Size(734, 281);
			this->dataGridView2->TabIndex = 6;
			this->dataGridView2->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::dataGridView2_CellClick);
			this->dataGridView2->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::dataGridView2_CellContentClick);
			// 
			// textBox21
			// 
			this->textBox21->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(249)), static_cast<System::Int32>(static_cast<System::Byte>(245)),
				static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->textBox21->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox21->Enabled = false;
			this->textBox21->Font = (gcnew System::Drawing::Font(L"Tahoma", 14));
			this->textBox21->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(9)), static_cast<System::Int32>(static_cast<System::Byte>(24)),
				static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->textBox21->Location = System::Drawing::Point(231, 594);
			this->textBox21->Name = L"textBox21";
			this->textBox21->Size = System::Drawing::Size(121, 36);
			this->textBox21->TabIndex = 40;
			// 
			// label28
			// 
			this->label28->AutoSize = true;
			this->label28->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(249)), static_cast<System::Int32>(static_cast<System::Byte>(245)),
				static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->label28->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label28->Font = (gcnew System::Drawing::Font(L"KacstOneFixed", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->label28->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(9)), static_cast<System::Int32>(static_cast<System::Byte>(24)),
				static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->label28->Location = System::Drawing::Point(12, 594);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(134, 37);
			this->label28->TabIndex = 39;
			this->label28->Text = L"Status:";
			// 
			// textBox16
			// 
			this->textBox16->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(249)), static_cast<System::Int32>(static_cast<System::Byte>(245)),
				static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->textBox16->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox16->Enabled = false;
			this->textBox16->Font = (gcnew System::Drawing::Font(L"Tahoma", 14));
			this->textBox16->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(9)), static_cast<System::Int32>(static_cast<System::Byte>(24)),
				static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->textBox16->Location = System::Drawing::Point(231, 305);
			this->textBox16->Name = L"textBox16";
			this->textBox16->Size = System::Drawing::Size(121, 36);
			this->textBox16->TabIndex = 38;
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(249)), static_cast<System::Int32>(static_cast<System::Byte>(245)),
				static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->label17->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label17->Font = (gcnew System::Drawing::Font(L"KacstOneFixed", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->label17->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(9)), static_cast<System::Int32>(static_cast<System::Byte>(24)),
				static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->label17->Location = System::Drawing::Point(12, 304);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(168, 37);
			this->label17->TabIndex = 36;
			this->label17->Text = L"DueDate:";
			// 
			// textBox17
			// 
			this->textBox17->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(249)), static_cast<System::Int32>(static_cast<System::Byte>(245)),
				static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->textBox17->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox17->Enabled = false;
			this->textBox17->Font = (gcnew System::Drawing::Font(L"Tahoma", 14));
			this->textBox17->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(9)), static_cast<System::Int32>(static_cast<System::Byte>(24)),
				static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->textBox17->Location = System::Drawing::Point(231, 221);
			this->textBox17->Name = L"textBox17";
			this->textBox17->Size = System::Drawing::Size(121, 36);
			this->textBox17->TabIndex = 35;
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(249)), static_cast<System::Int32>(static_cast<System::Byte>(245)),
				static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->label24->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label24->Font = (gcnew System::Drawing::Font(L"KacstOneFixed", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->label24->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(9)), static_cast<System::Int32>(static_cast<System::Byte>(24)),
				static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->label24->Location = System::Drawing::Point(12, 224);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(147, 37);
			this->label24->TabIndex = 34;
			this->label24->Text = L"Priority:";
			// 
			// textBox18
			// 
			this->textBox18->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(249)), static_cast<System::Int32>(static_cast<System::Byte>(245)),
				static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->textBox18->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox18->Enabled = false;
			this->textBox18->Font = (gcnew System::Drawing::Font(L"Tahoma", 14));
			this->textBox18->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(9)), static_cast<System::Int32>(static_cast<System::Byte>(24)),
				static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->textBox18->Location = System::Drawing::Point(231, 92);
			this->textBox18->Name = L"textBox18";
			this->textBox18->Size = System::Drawing::Size(121, 36);
			this->textBox18->TabIndex = 33;
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(249)), static_cast<System::Int32>(static_cast<System::Byte>(245)),
				static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->label25->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label25->Font = (gcnew System::Drawing::Font(L"KacstOneFixed", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->label25->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(9)), static_cast<System::Int32>(static_cast<System::Byte>(24)),
				static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->label25->Location = System::Drawing::Point(12, 371);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(213, 37);
			this->label25->TabIndex = 32;
			this->label25->Text = L"Description:";
			// 
			// textBox19
			// 
			this->textBox19->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(249)), static_cast<System::Int32>(static_cast<System::Byte>(245)),
				static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->textBox19->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox19->Enabled = false;
			this->textBox19->Font = (gcnew System::Drawing::Font(L"Tahoma", 14));
			this->textBox19->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(9)), static_cast<System::Int32>(static_cast<System::Byte>(24)),
				static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->textBox19->Location = System::Drawing::Point(231, 153);
			this->textBox19->Name = L"textBox19";
			this->textBox19->Size = System::Drawing::Size(270, 36);
			this->textBox19->TabIndex = 31;
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(249)), static_cast<System::Int32>(static_cast<System::Byte>(245)),
				static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->label26->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label26->Font = (gcnew System::Drawing::Font(L"KacstOneFixed", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->label26->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(9)), static_cast<System::Int32>(static_cast<System::Byte>(24)),
				static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->label26->Location = System::Drawing::Point(12, 152);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(98, 37);
			this->label26->TabIndex = 30;
			this->label26->Text = L"Title:";
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(249)), static_cast<System::Int32>(static_cast<System::Byte>(245)),
				static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->label27->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label27->Font = (gcnew System::Drawing::Font(L"KacstOneFixed", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->label27->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(9)), static_cast<System::Int32>(static_cast<System::Byte>(24)),
				static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->label27->Location = System::Drawing::Point(12, 83);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(65, 37);
			this->label27->TabIndex = 29;
			this->label27->Tag = L"";
			this->label27->Text = L"ID:";
			// 
			// textBox20
			// 
			this->textBox20->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(249)), static_cast<System::Int32>(static_cast<System::Byte>(245)),
				static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->textBox20->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox20->Enabled = false;
			this->textBox20->Font = (gcnew System::Drawing::Font(L"Tahoma", 14));
			this->textBox20->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(9)), static_cast<System::Int32>(static_cast<System::Byte>(24)),
				static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->textBox20->Location = System::Drawing::Point(231, 371);
			this->textBox20->Multiline = true;
			this->textBox20->Name = L"textBox20";
			this->textBox20->Size = System::Drawing::Size(279, 197);
			this->textBox20->TabIndex = 37;
			// 
			// comboBox2
			// 
			this->comboBox2->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->comboBox2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(55)), static_cast<System::Int32>(static_cast<System::Byte>(144)),
				static_cast<System::Int32>(static_cast<System::Byte>(116)));
			this->comboBox2->Font = (gcnew System::Drawing::Font(L"KacstOneFixed", 15, System::Drawing::FontStyle::Bold));
			this->comboBox2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(249)), static_cast<System::Int32>(static_cast<System::Byte>(245)),
				static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->ItemHeight = 28;
			this->comboBox2->Location = System::Drawing::Point(617, 32);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(369, 36);
			this->comboBox2->TabIndex = 2;
			this->comboBox2->Text = L"OverDue Tasks";
			this->comboBox2->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox2_SelectedIndexChanged);
			// 
			// pictureBox21
			// 
			this->pictureBox21->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox21.Image")));
			this->pictureBox21->Location = System::Drawing::Point(196, 33);
			this->pictureBox21->Name = L"pictureBox21";
			this->pictureBox21->Size = System::Drawing::Size(1049, 778);
			this->pictureBox21->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox21->TabIndex = 0;
			this->pictureBox21->TabStop = false;
			// 
			// panel21
			// 
			this->panel21->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(9)), static_cast<System::Int32>(static_cast<System::Byte>(24)),
				static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->panel21->Controls->Add(this->textBox15);
			this->panel21->Controls->Add(this->label23);
			this->panel21->Controls->Add(this->textBox14);
			this->panel21->Controls->Add(this->label20);
			this->panel21->Controls->Add(this->textBox10);
			this->panel21->Controls->Add(this->label22);
			this->panel21->Controls->Add(this->textBox11);
			this->panel21->Controls->Add(this->label18);
			this->panel21->Controls->Add(this->textBox12);
			this->panel21->Controls->Add(this->label21);
			this->panel21->Controls->Add(this->label19);
			this->panel21->Controls->Add(this->textBox13);
			this->panel21->Location = System::Drawing::Point(751, 0);
			this->panel21->Name = L"panel21";
			this->panel21->Size = System::Drawing::Size(307, 672);
			this->panel21->TabIndex = 3;
			// 
			// textBox15
			// 
			this->textBox15->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(249)), static_cast<System::Int32>(static_cast<System::Byte>(245)),
				static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->textBox15->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox15->Enabled = false;
			this->textBox15->Font = (gcnew System::Drawing::Font(L"Tahoma", 14));
			this->textBox15->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(9)), static_cast<System::Int32>(static_cast<System::Byte>(24)),
				static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->textBox15->Location = System::Drawing::Point(132, 498);
			this->textBox15->Name = L"textBox15";
			this->textBox15->Size = System::Drawing::Size(129, 36);
			this->textBox15->TabIndex = 40;
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(9)), static_cast<System::Int32>(static_cast<System::Byte>(24)),
				static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->label23->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label23->Font = (gcnew System::Drawing::Font(L"KacstOneFixed", 17));
			this->label23->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(249)), static_cast<System::Int32>(static_cast<System::Byte>(245)),
				static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->label23->Location = System::Drawing::Point(8, 501);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(118, 33);
			this->label23->TabIndex = 39;
			this->label23->Text = L"Status:";
			// 
			// textBox14
			// 
			this->textBox14->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(249)), static_cast<System::Int32>(static_cast<System::Byte>(245)),
				static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->textBox14->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox14->Enabled = false;
			this->textBox14->Font = (gcnew System::Drawing::Font(L"Tahoma", 14));
			this->textBox14->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(9)), static_cast<System::Int32>(static_cast<System::Byte>(24)),
				static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->textBox14->Location = System::Drawing::Point(14, 282);
			this->textBox14->Multiline = true;
			this->textBox14->Name = L"textBox14";
			this->textBox14->Size = System::Drawing::Size(279, 197);
			this->textBox14->TabIndex = 37;
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(9)), static_cast<System::Int32>(static_cast<System::Byte>(24)),
				static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->label20->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label20->Font = (gcnew System::Drawing::Font(L"KacstOneFixed", 17));
			this->label20->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(249)), static_cast<System::Int32>(static_cast<System::Byte>(245)),
				static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->label20->Location = System::Drawing::Point(6, 237);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(188, 33);
			this->label20->TabIndex = 32;
			this->label20->Text = L"Description:";
			// 
			// textBox10
			// 
			this->textBox10->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(249)), static_cast<System::Int32>(static_cast<System::Byte>(245)),
				static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->textBox10->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox10->Enabled = false;
			this->textBox10->Font = (gcnew System::Drawing::Font(L"Tahoma", 14));
			this->textBox10->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(9)), static_cast<System::Int32>(static_cast<System::Byte>(24)),
				static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->textBox10->Location = System::Drawing::Point(161, 190);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(129, 36);
			this->textBox10->TabIndex = 38;
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(9)), static_cast<System::Int32>(static_cast<System::Byte>(24)),
				static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->label22->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label22->Font = (gcnew System::Drawing::Font(L"KacstOneFixed", 17));
			this->label22->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(249)), static_cast<System::Int32>(static_cast<System::Byte>(245)),
				static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->label22->Location = System::Drawing::Point(6, 38);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(58, 33);
			this->label22->TabIndex = 29;
			this->label22->Tag = L"";
			this->label22->Text = L"ID:";
			// 
			// textBox11
			// 
			this->textBox11->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(249)), static_cast<System::Int32>(static_cast<System::Byte>(245)),
				static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->textBox11->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox11->Enabled = false;
			this->textBox11->Font = (gcnew System::Drawing::Font(L"Tahoma", 14));
			this->textBox11->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(9)), static_cast<System::Int32>(static_cast<System::Byte>(24)),
				static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->textBox11->Location = System::Drawing::Point(161, 140);
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(121, 36);
			this->textBox11->TabIndex = 35;
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(9)), static_cast<System::Int32>(static_cast<System::Byte>(24)),
				static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->label18->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label18->Font = (gcnew System::Drawing::Font(L"KacstOneFixed", 17));
			this->label18->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(249)), static_cast<System::Int32>(static_cast<System::Byte>(245)),
				static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->label18->Location = System::Drawing::Point(6, 190);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(149, 33);
			this->label18->TabIndex = 36;
			this->label18->Text = L"DueDate:";
			// 
			// textBox12
			// 
			this->textBox12->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(249)), static_cast<System::Int32>(static_cast<System::Byte>(245)),
				static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->textBox12->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox12->Enabled = false;
			this->textBox12->Font = (gcnew System::Drawing::Font(L"Tahoma", 14));
			this->textBox12->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(9)), static_cast<System::Int32>(static_cast<System::Byte>(24)),
				static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->textBox12->Location = System::Drawing::Point(96, 36);
			this->textBox12->Name = L"textBox12";
			this->textBox12->Size = System::Drawing::Size(121, 36);
			this->textBox12->TabIndex = 33;
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(9)), static_cast<System::Int32>(static_cast<System::Byte>(24)),
				static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->label21->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label21->Font = (gcnew System::Drawing::Font(L"KacstOneFixed", 17));
			this->label21->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(249)), static_cast<System::Int32>(static_cast<System::Byte>(245)),
				static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->label21->Location = System::Drawing::Point(6, 92);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(87, 33);
			this->label21->TabIndex = 30;
			this->label21->Text = L"Title:";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(9)), static_cast<System::Int32>(static_cast<System::Byte>(24)),
				static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->label19->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label19->Font = (gcnew System::Drawing::Font(L"KacstOneFixed", 17));
			this->label19->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(249)), static_cast<System::Int32>(static_cast<System::Byte>(245)),
				static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->label19->Location = System::Drawing::Point(6, 143);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(130, 33);
			this->label19->TabIndex = 34;
			this->label19->Text = L"Priority:";
			// 
			// textBox13
			// 
			this->textBox13->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(249)), static_cast<System::Int32>(static_cast<System::Byte>(245)),
				static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->textBox13->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox13->Enabled = false;
			this->textBox13->Font = (gcnew System::Drawing::Font(L"Tahoma", 14));
			this->textBox13->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(9)), static_cast<System::Int32>(static_cast<System::Byte>(24)),
				static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->textBox13->Location = System::Drawing::Point(96, 89);
			this->textBox13->Name = L"textBox13";
			this->textBox13->Size = System::Drawing::Size(208, 36);
			this->textBox13->TabIndex = 31;
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AllowUserToDeleteRows = false;
			this->dataGridView1->AllowUserToResizeColumns = false;
			this->dataGridView1->AllowUserToResizeRows = false;
			this->dataGridView1->BackgroundColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(249)),
				static_cast<System::Int32>(static_cast<System::Byte>(245)), static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->dataGridView1->CellBorderStyle = System::Windows::Forms::DataGridViewCellBorderStyle::SingleVertical;
			this->dataGridView1->ClipboardCopyMode = System::Windows::Forms::DataGridViewClipboardCopyMode::Disable;
			this->dataGridView1->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::Sunken;
			dataGridViewCellStyle7->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(9)), static_cast<System::Int32>(static_cast<System::Byte>(24)),
				static_cast<System::Int32>(static_cast<System::Byte>(36)));
			dataGridViewCellStyle7->Font = (gcnew System::Drawing::Font(L"KacstOneFixed", 12));
			dataGridViewCellStyle7->ForeColor = System::Drawing::Color::White;
			dataGridViewCellStyle7->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(55)),
				static_cast<System::Int32>(static_cast<System::Byte>(144)), static_cast<System::Int32>(static_cast<System::Byte>(116)));
			dataGridViewCellStyle7->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle7->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView1->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle7;
			this->dataGridView1->ColumnHeadersHeight = 25;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::DisableResizing;
			dataGridViewCellStyle8->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle8->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(249)),
				static_cast<System::Int32>(static_cast<System::Byte>(245)), static_cast<System::Int32>(static_cast<System::Byte>(242)));
			dataGridViewCellStyle8->Font = (gcnew System::Drawing::Font(L"KacstOneFixed", 12));
			dataGridViewCellStyle8->ForeColor = System::Drawing::SystemColors::ControlText;
			dataGridViewCellStyle8->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(55)),
				static_cast<System::Int32>(static_cast<System::Byte>(144)), static_cast<System::Int32>(static_cast<System::Byte>(116)));
			dataGridViewCellStyle8->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle8->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->dataGridView1->DefaultCellStyle = dataGridViewCellStyle8;
			this->dataGridView1->GridColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(9)), static_cast<System::Int32>(static_cast<System::Byte>(24)),
				static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->dataGridView1->Location = System::Drawing::Point(0, 3);
			this->dataGridView1->MultiSelect = false;
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			dataGridViewCellStyle9->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle9->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(9)), static_cast<System::Int32>(static_cast<System::Byte>(24)),
				static_cast<System::Int32>(static_cast<System::Byte>(36)));
			dataGridViewCellStyle9->Font = (gcnew System::Drawing::Font(L"KacstOneFixed", 19));
			dataGridViewCellStyle9->ForeColor = System::Drawing::SystemColors::Info;
			dataGridViewCellStyle9->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle9->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			this->dataGridView1->RowHeadersDefaultCellStyle = dataGridViewCellStyle9;
			this->dataGridView1->RowHeadersWidth = 30;
			this->dataGridView1->RowHeadersWidthSizeMode = System::Windows::Forms::DataGridViewRowHeadersWidthSizeMode::DisableResizing;
			this->dataGridView1->RowTemplate->Height = 26;
			this->dataGridView1->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->dataGridView1->Size = System::Drawing::Size(734, 669);
			this->dataGridView1->TabIndex = 0;
			this->dataGridView1->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::dataGridView1_CellClick);
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::dataGridView1_CellContentClick);
			// 
			// panel19
			// 
			this->panel19->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(9)), static_cast<System::Int32>(static_cast<System::Byte>(24)),
				static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->panel19->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel19->Controls->Add(this->label16);
			this->panel19->Controls->Add(this->button13);
			this->panel19->Controls->Add(this->pictureBox20);
			this->panel19->Location = System::Drawing::Point(333, 209);
			this->panel19->Name = L"panel19";
			this->panel19->Size = System::Drawing::Size(342, 256);
			this->panel19->TabIndex = 29;
			this->panel19->TabStop = true;
			this->panel19->Visible = false;
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(9)), static_cast<System::Int32>(static_cast<System::Byte>(24)),
				static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->label16->Font = (gcnew System::Drawing::Font(L"KacstOneFixed", 20));
			this->label16->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(249)), static_cast<System::Int32>(static_cast<System::Byte>(245)),
				static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->label16->Location = System::Drawing::Point(108, 179);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(152, 38);
			this->label16->TabIndex = 2;
			this->label16->Text = L"Success";
			// 
			// button13
			// 
			this->button13->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(249)), static_cast<System::Int32>(static_cast<System::Byte>(245)),
				static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->button13->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(55)),
				static_cast<System::Int32>(static_cast<System::Byte>(144)), static_cast<System::Int32>(static_cast<System::Byte>(116)));
			this->button13->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button13->Font = (gcnew System::Drawing::Font(L"KacstOneFixed", 10));
			this->button13->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(9)), static_cast<System::Int32>(static_cast<System::Byte>(24)),
				static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->button13->Location = System::Drawing::Point(138, 218);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(88, 28);
			this->button13->TabIndex = 0;
			this->button13->Text = L"OK";
			this->button13->UseVisualStyleBackColor = false;
			this->button13->Click += gcnew System::EventHandler(this, &MyForm::button13_Click);
			// 
			// pictureBox20
			// 
			this->pictureBox20->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox20.Image")));
			this->pictureBox20->Location = System::Drawing::Point(75, 14);
			this->pictureBox20->Name = L"pictureBox20";
			this->pictureBox20->Size = System::Drawing::Size(207, 152);
			this->pictureBox20->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox20->TabIndex = 1;
			this->pictureBox20->TabStop = false;
			// 
			// textBox9
			// 
			this->textBox9->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(249)), static_cast<System::Int32>(static_cast<System::Byte>(245)),
				static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->textBox9->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox9->Enabled = false;
			this->textBox9->Font = (gcnew System::Drawing::Font(L"Tahoma", 14));
			this->textBox9->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(9)), static_cast<System::Int32>(static_cast<System::Byte>(24)),
				static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->textBox9->Location = System::Drawing::Point(222, 350);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(121, 36);
			this->textBox9->TabIndex = 28;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(249)), static_cast<System::Int32>(static_cast<System::Byte>(245)),
				static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->label11->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label11->Font = (gcnew System::Drawing::Font(L"KacstOneFixed", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->label11->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(9)), static_cast<System::Int32>(static_cast<System::Byte>(24)),
				static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->label11->Location = System::Drawing::Point(3, 349);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(168, 37);
			this->label11->TabIndex = 26;
			this->label11->Text = L"DueDate:";
			// 
			// textBox5
			// 
			this->textBox5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(249)), static_cast<System::Int32>(static_cast<System::Byte>(245)),
				static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->textBox5->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox5->Enabled = false;
			this->textBox5->Font = (gcnew System::Drawing::Font(L"Tahoma", 14));
			this->textBox5->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(9)), static_cast<System::Int32>(static_cast<System::Byte>(24)),
				static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->textBox5->Location = System::Drawing::Point(222, 266);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(121, 36);
			this->textBox5->TabIndex = 25;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(249)), static_cast<System::Int32>(static_cast<System::Byte>(245)),
				static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->label12->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label12->Font = (gcnew System::Drawing::Font(L"KacstOneFixed", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->label12->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(9)), static_cast<System::Int32>(static_cast<System::Byte>(24)),
				static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->label12->Location = System::Drawing::Point(3, 269);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(147, 37);
			this->label12->TabIndex = 24;
			this->label12->Text = L"Priority:";
			// 
			// textBox6
			// 
			this->textBox6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(249)), static_cast<System::Int32>(static_cast<System::Byte>(245)),
				static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->textBox6->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox6->Enabled = false;
			this->textBox6->Font = (gcnew System::Drawing::Font(L"Tahoma", 14));
			this->textBox6->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(9)), static_cast<System::Int32>(static_cast<System::Byte>(24)),
				static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->textBox6->Location = System::Drawing::Point(222, 137);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(121, 36);
			this->textBox6->TabIndex = 23;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(249)), static_cast<System::Int32>(static_cast<System::Byte>(245)),
				static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->label13->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label13->Font = (gcnew System::Drawing::Font(L"KacstOneFixed", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->label13->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(9)), static_cast<System::Int32>(static_cast<System::Byte>(24)),
				static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->label13->Location = System::Drawing::Point(3, 416);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(213, 37);
			this->label13->TabIndex = 22;
			this->label13->Text = L"Description:";
			// 
			// textBox7
			// 
			this->textBox7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(249)), static_cast<System::Int32>(static_cast<System::Byte>(245)),
				static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->textBox7->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox7->Enabled = false;
			this->textBox7->Font = (gcnew System::Drawing::Font(L"Tahoma", 14));
			this->textBox7->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(9)), static_cast<System::Int32>(static_cast<System::Byte>(24)),
				static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->textBox7->Location = System::Drawing::Point(222, 198);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(270, 36);
			this->textBox7->TabIndex = 21;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(249)), static_cast<System::Int32>(static_cast<System::Byte>(245)),
				static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->label14->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label14->Font = (gcnew System::Drawing::Font(L"KacstOneFixed", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->label14->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(9)), static_cast<System::Int32>(static_cast<System::Byte>(24)),
				static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->label14->Location = System::Drawing::Point(3, 197);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(98, 37);
			this->label14->TabIndex = 20;
			this->label14->Text = L"Title:";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(249)), static_cast<System::Int32>(static_cast<System::Byte>(245)),
				static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->label15->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label15->Font = (gcnew System::Drawing::Font(L"KacstOneFixed", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->label15->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(9)), static_cast<System::Int32>(static_cast<System::Byte>(24)),
				static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->label15->Location = System::Drawing::Point(3, 128);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(65, 37);
			this->label15->TabIndex = 19;
			this->label15->Tag = L"";
			this->label15->Text = L"ID:";
			// 
			// textBox8
			// 
			this->textBox8->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(249)), static_cast<System::Int32>(static_cast<System::Byte>(245)),
				static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->textBox8->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox8->Enabled = false;
			this->textBox8->Font = (gcnew System::Drawing::Font(L"Tahoma", 14));
			this->textBox8->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(9)), static_cast<System::Int32>(static_cast<System::Byte>(24)),
				static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->textBox8->Location = System::Drawing::Point(222, 416);
			this->textBox8->Multiline = true;
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(279, 197);
			this->textBox8->TabIndex = 27;
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Checked = true;
			this->radioButton2->Font = (gcnew System::Drawing::Font(L"KacstOneFixed", 15));
			this->radioButton2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(9)), static_cast<System::Int32>(static_cast<System::Byte>(24)),
				static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->radioButton2->Location = System::Drawing::Point(346, 630);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(179, 32);
			this->radioButton2->TabIndex = 7;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"NOT DONE";
			this->radioButton2->UseVisualStyleBackColor = true;
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Font = (gcnew System::Drawing::Font(L"KacstOneFixed", 15));
			this->radioButton1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(9)), static_cast<System::Int32>(static_cast<System::Byte>(24)),
				static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->radioButton1->Location = System::Drawing::Point(221, 630);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(110, 32);
			this->radioButton1->TabIndex = 6;
			this->radioButton1->Text = L"DONE";
			this->radioButton1->UseVisualStyleBackColor = true;
			this->radioButton1->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton1_CheckedChanged);
			// 
			// comboBox1
			// 
			this->comboBox1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->comboBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(55)), static_cast<System::Int32>(static_cast<System::Byte>(144)),
				static_cast<System::Int32>(static_cast<System::Byte>(116)));
			this->comboBox1->Font = (gcnew System::Drawing::Font(L"KacstOneFixed", 15, System::Drawing::FontStyle::Bold));
			this->comboBox1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(249)), static_cast<System::Int32>(static_cast<System::Byte>(245)),
				static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->ItemHeight = 28;
			this->comboBox1->Location = System::Drawing::Point(49, 29);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(369, 36);
			this->comboBox1->TabIndex = 1;
			this->comboBox1->Text = L"Tasks For Today";
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox1_SelectedIndexChanged);
			// 
			// label10
			// 
			this->label10->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(77)), static_cast<System::Int32>(static_cast<System::Byte>(155)),
				static_cast<System::Int32>(static_cast<System::Byte>(130)));
			this->label10->Font = (gcnew System::Drawing::Font(L"KacstOneFixed", 15));
			this->label10->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(9)), static_cast<System::Int32>(static_cast<System::Byte>(24)),
				static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->label10->Location = System::Drawing::Point(649, 40);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(173, 37);
			this->label10->TabIndex = 2;
			this->label10->Text = L"Date";
			this->label10->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label10->Click += gcnew System::EventHandler(this, &MyForm::label10_Click);
			// 
			// pictureBox18
			// 
			this->pictureBox18->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox18.Image")));
			this->pictureBox18->Location = System::Drawing::Point(141, 96);
			this->pictureBox18->Name = L"pictureBox18";
			this->pictureBox18->Size = System::Drawing::Size(920, 578);
			this->pictureBox18->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox18->TabIndex = 0;
			this->pictureBox18->TabStop = false;
			// 
			// pictureBox19
			// 
			this->pictureBox19->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox19.Image")));
			this->pictureBox19->Location = System::Drawing::Point(418, -64);
			this->pictureBox19->Name = L"pictureBox19";
			this->pictureBox19->Size = System::Drawing::Size(654, 360);
			this->pictureBox19->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox19->TabIndex = 4;
			this->pictureBox19->TabStop = false;
			// 
			// panel17
			// 
			this->panel17->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(9)), static_cast<System::Int32>(static_cast<System::Byte>(24)),
				static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->panel17->Controls->Add(this->label9);
			this->panel17->Controls->Add(this->button12);
			this->panel17->Controls->Add(this->pictureBox17);
			this->panel17->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(249)), static_cast<System::Int32>(static_cast<System::Byte>(245)),
				static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->panel17->Location = System::Drawing::Point(283, 194);
			this->panel17->Name = L"panel17";
			this->panel17->Size = System::Drawing::Size(421, 280);
			this->panel17->TabIndex = 17;
			this->panel17->Visible = false;
			// 
			// label9
			// 
			this->label9->Font = (gcnew System::Drawing::Font(L"KacstOneFixed", 15));
			this->label9->Location = System::Drawing::Point(60, 143);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(329, 85);
			this->label9->TabIndex = 4;
			this->label9->Text = L"Please Enter A Valid ID And Not Exist Before ";
			this->label9->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// button12
			// 
			this->button12->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(249)), static_cast<System::Int32>(static_cast<System::Byte>(245)),
				static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->button12->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button12->Font = (gcnew System::Drawing::Font(L"KacstOneFixed", 10));
			this->button12->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(9)), static_cast<System::Int32>(static_cast<System::Byte>(24)),
				static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->button12->Location = System::Drawing::Point(168, 238);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(87, 28);
			this->button12->TabIndex = 3;
			this->button12->Text = L"OK";
			this->button12->UseVisualStyleBackColor = false;
			this->button12->Click += gcnew System::EventHandler(this, &MyForm::button12_Click);
			// 
			// pictureBox17
			// 
			this->pictureBox17->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox17.Image")));
			this->pictureBox17->Location = System::Drawing::Point(22, -3);
			this->pictureBox17->Name = L"pictureBox17";
			this->pictureBox17->Size = System::Drawing::Size(299, 169);
			this->pictureBox17->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox17->TabIndex = 2;
			this->pictureBox17->TabStop = false;
			// 
			// panel15
			// 
			this->panel15->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(9)), static_cast<System::Int32>(static_cast<System::Byte>(24)),
				static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->panel15->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel15->Controls->Add(this->label2);
			this->panel15->Controls->Add(this->button11);
			this->panel15->Controls->Add(this->pictureBox15);
			this->panel15->Location = System::Drawing::Point(332, 205);
			this->panel15->Name = L"panel15";
			this->panel15->Size = System::Drawing::Size(342, 256);
			this->panel15->TabIndex = 2;
			this->panel15->TabStop = true;
			this->panel15->Visible = false;
			this->panel15->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::panel15_Paint);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(9)), static_cast<System::Int32>(static_cast<System::Byte>(24)),
				static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->label2->Font = (gcnew System::Drawing::Font(L"KacstOneFixed", 20));
			this->label2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(249)), static_cast<System::Int32>(static_cast<System::Byte>(245)),
				static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->label2->Location = System::Drawing::Point(108, 179);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(152, 38);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Success";
			// 
			// button11
			// 
			this->button11->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(249)), static_cast<System::Int32>(static_cast<System::Byte>(245)),
				static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->button11->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(55)),
				static_cast<System::Int32>(static_cast<System::Byte>(144)), static_cast<System::Int32>(static_cast<System::Byte>(116)));
			this->button11->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button11->Font = (gcnew System::Drawing::Font(L"KacstOneFixed", 10));
			this->button11->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(9)), static_cast<System::Int32>(static_cast<System::Byte>(24)),
				static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->button11->Location = System::Drawing::Point(138, 218);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(88, 28);
			this->button11->TabIndex = 0;
			this->button11->Text = L"OK";
			this->button11->UseVisualStyleBackColor = false;
			this->button11->Click += gcnew System::EventHandler(this, &MyForm::button11_Click);
			// 
			// pictureBox15
			// 
			this->pictureBox15->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox15.Image")));
			this->pictureBox15->Location = System::Drawing::Point(75, 14);
			this->pictureBox15->Name = L"pictureBox15";
			this->pictureBox15->Size = System::Drawing::Size(207, 152);
			this->pictureBox15->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox15->TabIndex = 1;
			this->pictureBox15->TabStop = false;
			this->pictureBox15->Click += gcnew System::EventHandler(this, &MyForm::pictureBox15_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(249)), static_cast<System::Int32>(static_cast<System::Byte>(245)),
				static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->label7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label7->Font = (gcnew System::Drawing::Font(L"KacstOneFixed", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->label7->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(9)), static_cast<System::Int32>(static_cast<System::Byte>(24)),
				static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->label7->Location = System::Drawing::Point(22, 327);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(168, 37);
			this->label7->TabIndex = 13;
			this->label7->Text = L"DueDate:";
			this->label7->Click += gcnew System::EventHandler(this, &MyForm::label7_Click);
			// 
			// textBox4
			// 
			this->textBox4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(249)), static_cast<System::Int32>(static_cast<System::Byte>(245)),
				static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->textBox4->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Tahoma", 14));
			this->textBox4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(9)), static_cast<System::Int32>(static_cast<System::Byte>(24)),
				static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->textBox4->Location = System::Drawing::Point(241, 242);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(121, 36);
			this->textBox4->TabIndex = 12;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(249)), static_cast<System::Int32>(static_cast<System::Byte>(245)),
				static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->label6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label6->Font = (gcnew System::Drawing::Font(L"KacstOneFixed", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->label6->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(9)), static_cast<System::Int32>(static_cast<System::Byte>(24)),
				static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->label6->Location = System::Drawing::Point(22, 247);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(147, 37);
			this->label6->TabIndex = 11;
			this->label6->Text = L"Priority:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(249)), static_cast<System::Int32>(static_cast<System::Byte>(245)),
				static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->label5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label5->Font = (gcnew System::Drawing::Font(L"KacstOneFixed", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->label5->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(9)), static_cast<System::Int32>(static_cast<System::Byte>(24)),
				static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->label5->Location = System::Drawing::Point(22, 394);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(213, 37);
			this->label5->TabIndex = 9;
			this->label5->Text = L"Description:";
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(249)), static_cast<System::Int32>(static_cast<System::Byte>(245)),
				static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Tahoma", 14));
			this->textBox1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(9)), static_cast<System::Int32>(static_cast<System::Byte>(24)),
				static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->textBox1->Location = System::Drawing::Point(241, 170);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(270, 36);
			this->textBox1->TabIndex = 7;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(249)), static_cast<System::Int32>(static_cast<System::Byte>(245)),
				static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->label4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label4->Font = (gcnew System::Drawing::Font(L"KacstOneFixed", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->label4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(9)), static_cast<System::Int32>(static_cast<System::Byte>(24)),
				static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->label4->Location = System::Drawing::Point(22, 175);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(98, 37);
			this->label4->TabIndex = 6;
			this->label4->Text = L"Title:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(249)), static_cast<System::Int32>(static_cast<System::Byte>(245)),
				static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->label3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label3->Font = (gcnew System::Drawing::Font(L"KacstOneFixed", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->label3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(9)), static_cast<System::Int32>(static_cast<System::Byte>(24)),
				static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->label3->Location = System::Drawing::Point(22, 106);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(65, 37);
			this->label3->TabIndex = 3;
			this->label3->Tag = L"";
			this->label3->Text = L"ID:";
			// 
			// pictureBox14
			// 
			this->pictureBox14->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(249)), static_cast<System::Int32>(static_cast<System::Byte>(245)),
				static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->pictureBox14->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox14.Image")));
			this->pictureBox14->Location = System::Drawing::Point(825, 479);
			this->pictureBox14->Name = L"pictureBox14";
			this->pictureBox14->Size = System::Drawing::Size(272, 195);
			this->pictureBox14->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox14->TabIndex = 1;
			this->pictureBox14->TabStop = false;
			this->pictureBox14->Click += gcnew System::EventHandler(this, &MyForm::pictureBox14_Click);
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->CalendarForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(9)),
				static_cast<System::Int32>(static_cast<System::Byte>(24)), static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->dateTimePicker1->CalendarMonthBackground = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(249)),
				static_cast<System::Int32>(static_cast<System::Byte>(245)), static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->dateTimePicker1->CustomFormat = L"yyyy/MM/dd";
			this->dateTimePicker1->Font = (gcnew System::Drawing::Font(L"Tahoma", 12));
			this->dateTimePicker1->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->dateTimePicker1->Location = System::Drawing::Point(241, 327);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(177, 32);
			this->dateTimePicker1->TabIndex = 15;
			this->dateTimePicker1->Value = System::DateTime(2019, 4, 22, 0, 12, 41, 0);
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(249)), static_cast<System::Int32>(static_cast<System::Byte>(245)),
				static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->textBox2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Tahoma", 14));
			this->textBox2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(9)), static_cast<System::Int32>(static_cast<System::Byte>(24)),
				static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->textBox2->Location = System::Drawing::Point(241, 394);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(279, 197);
			this->textBox2->TabIndex = 18;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(9)), static_cast<System::Int32>(static_cast<System::Byte>(24)),
				static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->button1->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(55)),
				static_cast<System::Int32>(static_cast<System::Byte>(144)), static_cast<System::Int32>(static_cast<System::Byte>(116)));
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Stensil", 20));
			this->button1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(249)), static_cast<System::Int32>(static_cast<System::Byte>(245)),
				static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->button1->Location = System::Drawing::Point(410, 597);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(324, 65);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Add New Task";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// pictureBox4
			// 
			this->pictureBox4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(249)), static_cast<System::Int32>(static_cast<System::Byte>(245)),
				static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->Location = System::Drawing::Point(294, 110);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(525, 431);
			this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox4->TabIndex = 0;
			this->pictureBox4->TabStop = false;
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(55)), static_cast<System::Int32>(static_cast<System::Byte>(144)),
				static_cast<System::Int32>(static_cast<System::Byte>(116)));
			this->panel3->Controls->Add(this->pictureBox3);
			this->panel3->Controls->Add(this->pictureBox2);
			this->panel3->Location = System::Drawing::Point(223, 0);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(1061, 46);
			this->panel3->TabIndex = 0;
			// 
			// pictureBox3
			// 
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(968, 6);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(30, 31);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox3->TabIndex = 1;
			this->pictureBox3->TabStop = false;
			this->pictureBox3->Click += gcnew System::EventHandler(this, &MyForm::pictureBox3_Click);
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(1016, 6);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(31, 31);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 0;
			this->pictureBox2->TabStop = false;
			this->pictureBox2->Click += gcnew System::EventHandler(this, &MyForm::pictureBox2_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(7, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoValidate = System::Windows::Forms::AutoValidate::EnablePreventFocusChange;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(9)), static_cast<System::Int32>(static_cast<System::Byte>(24)),
				static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1282, 717);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MyForm";
			this->panel1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox12))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox11))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox10))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			this->panel4->ResumeLayout(false);
			this->panel4->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->panel16->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox16))->EndInit();
			this->panel2->ResumeLayout(false);
			this->panel14->ResumeLayout(false);
			this->panel14->PerformLayout();
			this->panel18->ResumeLayout(false);
			this->panel18->PerformLayout();
			this->panel20->ResumeLayout(false);
			this->panel22->ResumeLayout(false);
			this->panel22->PerformLayout();
			this->panel23->ResumeLayout(false);
			this->panel25->ResumeLayout(false);
			this->panel25->PerformLayout();
			this->panel27->ResumeLayout(false);
			this->panel31->ResumeLayout(false);
			this->panel38->ResumeLayout(false);
			this->panel38->PerformLayout();
			this->panel36->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox34))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox37))->EndInit();
			this->panel33->ResumeLayout(false);
			this->panel33->PerformLayout();
			this->panel35->ResumeLayout(false);
			this->panel35->PerformLayout();
			this->panel37->ResumeLayout(false);
			this->panel37->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox36))->EndInit();
			this->panel39->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox38))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox35))->EndInit();
			this->panel40->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox39))->EndInit();
			this->panel34->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox33))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox31))->EndInit();
			this->panel32->ResumeLayout(false);
			this->panel32->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox32))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->EndInit();
			this->panel30->ResumeLayout(false);
			this->panel30->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox30))->EndInit();
			this->panel29->ResumeLayout(false);
			this->panel29->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox29))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox27))->EndInit();
			this->panel28->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox28))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->panel26->ResumeLayout(false);
			this->panel26->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox26))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox25))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox24))->EndInit();
			this->panel24->ResumeLayout(false);
			this->panel24->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox22))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox23))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox21))->EndInit();
			this->panel21->ResumeLayout(false);
			this->panel21->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->panel19->ResumeLayout(false);
			this->panel19->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox20))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox18))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox19))->EndInit();
			this->panel17->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox17))->EndInit();
			this->panel15->ResumeLayout(false);
			this->panel15->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox15))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox14))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			this->panel3->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->ResumeLayout(false);

		}
		
#pragma endregion
	private: System::Void pictureBox2_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Close();
	}
private: System::Void pictureBox3_Click(System::Object^  sender, System::EventArgs^  e) {
	this->WindowState = FormWindowState::Minimized;
}
private: System::Void panel2_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {

}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	panel2->Visible = true;
	panel5->Visible = true;
	panel18->Visible = false;
	panel6->Visible = false;
	panel7->Visible = false;
	panel8->Visible = false;
	panel9->Visible = false;
	panel10->Visible = false;
	panel11->Visible = false;
	panel12->Visible = false;
	panel14->Visible = false;
	panel22->Visible = false;
	panel23->Visible = false;
	panel27->Visible = false;
	panel25->Visible = false;
	panel31->Visible = false;
}
private: System::Void panel5_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
}
private: System::Void button3_Click_1(System::Object^  sender, System::EventArgs^  e) {
	panel2->Visible =true ;
	panel14->Visible = true;
	panel18->Visible = true;
	comboBox1->Items->Clear();
	fillcombo();
	panel5->Visible = false;
	panel6->Visible = true;
	panel7->Visible = false;
	panel8->Visible = false;
	panel9->Visible = false;
	panel10->Visible = false;
	panel11->Visible = false;
	panel12->Visible = false;
	panel20->Visible = false;
	panel22->Visible = false;
	panel23->Visible = false;
	panel25->Visible = false;
	panel27->Visible = false;
	panel31->Visible = false;
	DateTime datetime = DateTime::Now;
	this->label10->Text = datetime.ToString();
	
	
}
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
	panel2->Visible = true;
	panel14->Visible = true;
	panel18->Visible = true;
	panel20->Visible = true;
	panel5->Visible = false;
	panel6->Visible = false;
	panel7->Visible = true;
	panel8->Visible = false;
	panel9->Visible = false;
	panel10->Visible = false;
	panel11->Visible = false;
	panel12->Visible = false;
	panel22->Visible = false;
	panel23->Visible = false;
	panel25->Visible = false;
	panel27->Visible = false;
	panel31->Visible = false;
	//.................................

	String^ Constring = L"datasource=127.0.0.1;port=3306;username=root;password=manar123";
	MySqlConnection^ ConDataBase = gcnew MySqlConnection(Constring);
	MySqlCommand^ cmdDataBase = gcnew MySqlCommand("select * from project.tasks;", ConDataBase);
	MySqlDataReader^ myReader;

	try
	{
		MySqlDataAdapter^ sda = gcnew MySqlDataAdapter();
		sda->SelectCommand = cmdDataBase;
		DataTable^ dat = gcnew DataTable();
		sda->Fill(dat);
		BindingSource^ bsource = gcnew BindingSource();
		bsource->DataSource = dat;
		dataGridView1->DataSource = bsource;
		sda->Update(dat);
		
	}
	catch (Exception^ex)
	{
		MessageBox::Show("Try Again");
	}


}
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
	panel2->Visible = true;
	panel14->Visible = true;
	panel18->Visible = true;
	panel20->Visible = true;
	panel22->Visible = true;
	panel23->Visible = false;
	panel25->Visible = false;
	panel5->Visible = false;
	panel6->Visible = false;
	panel7->Visible = false;
	panel8->Visible = true;
	panel9->Visible = false;
	panel10->Visible = false;
	panel11->Visible = false;
	panel12->Visible = false;
	panel27->Visible = false;
	panel31->Visible = false;
	//..........................
	textBox19->Text = Text->Empty;
	textBox18->Text = Text->Empty;
	textBox16->Text = Text->Empty;
	textBox17->Text = Text->Empty;
	textBox20->Text = Text->Empty;
	textBox21->Text = Text->Empty;
	comboBox2->Items->Clear();
	comboBox2->Text = "OverDue Tasks";
	fillover();
}
private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
	panel2->Visible = true;
	panel14->Visible = true;
	panel18->Visible = true;
	panel20->Visible = true;
	panel22->Visible = true;
	panel23->Visible = true;
	panel25->Visible = false;
	panel5->Visible = false;
	panel6->Visible = false;
	panel7->Visible = false;
	panel8->Visible = false;
	panel9->Visible = true;
	panel10->Visible = false;
	panel11->Visible = false;
	panel12->Visible = false;
	panel27->Visible = false;
	panel31->Visible = false;
	//......................................................
	String^ Constring = L"datasource=127.0.0.1;port=3306;username=root;password=manar123";
	MySqlConnection^ ConDataBase = gcnew MySqlConnection(Constring);
	MySqlCommand^ cmdDataBase = gcnew MySqlCommand("select * from project.tasks where Status=1;", ConDataBase);
	MySqlDataReader^ myReader;

	try
	{
		MySqlDataAdapter^ sda = gcnew MySqlDataAdapter();
		sda->SelectCommand = cmdDataBase;
		DataTable^ dat = gcnew DataTable();
		sda->Fill(dat);
		BindingSource^ bsource = gcnew BindingSource();
		bsource->DataSource = dat;
		dataGridView2->DataSource = bsource;
		sda->Update(dat);

	}
	catch (Exception^ex)
	{
		MessageBox::Show("Try Again");
	}

}
private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) {
	panel2->Visible = true;
	panel14->Visible = true;
	panel18->Visible = true;
	panel20->Visible = true;
	panel22->Visible = true;
	panel23->Visible = true;
	panel25->Visible = true;
	panel5->Visible = false;
	panel6->Visible = false;
	panel7->Visible = false;
	panel8->Visible = false;
	panel9->Visible = false;
	panel10->Visible = true;
	panel11->Visible = false;
	panel12->Visible = false;
	panel27->Visible = false;
	panel31->Visible = false;
	comboBox3->Items->Clear();
	filledit();
	//.......................
	textBox31->Text = Text->Empty;
	textBox32->Text = Text->Empty;
	textBox30->Text = Text->Empty;
	textBox33->Text = Text->Empty;

	comboBox3->Text = "Tasks";
}
private: System::Void button8_Click(System::Object^  sender, System::EventArgs^  e) {
	panel2->Visible = true;
	panel14->Visible = true;
	panel18->Visible = true;
	panel20->Visible = true;
	panel22->Visible = true;
	panel23->Visible = true;
	panel25->Visible = true;
	panel5->Visible = false;
	panel6->Visible = false;
	panel7->Visible = false;
	panel8->Visible = false;
	panel9->Visible = false;
	panel10->Visible = false;
	panel11->Visible = true;
	panel12->Visible = false;
	panel27->Visible = true;
	panel31->Visible = false;
	//..........................
	textBox37->Text = Text->Empty;
	textBox38->Text = Text->Empty;
	textBox36->Text = Text->Empty;
	textBox35->Text = Text->Empty;
	textBox34->Text = Text->Empty;
	textBox29->Text = Text->Empty;
	comboBox4->Text = "Tasks";
	comboBox4->Items->Clear();
	filldelete();
}
private: System::Void button9_Click(System::Object^  sender, System::EventArgs^  e) {
	panel2->Visible = true;
	panel14->Visible = true;
	panel18->Visible = true;
	panel20->Visible = true;
	panel22->Visible = true;
	panel23->Visible = true;
	panel25->Visible = true;
	panel5->Visible = false;
	panel6->Visible = false;
	panel7->Visible = false;
	panel8->Visible = false;
	panel9->Visible = false;
	panel10->Visible = false;
	panel11->Visible = false;
	panel12->Visible = true;
	panel27->Visible = true;
	panel31->Visible = true;
	panel33->Visible = false;
	pictureBox32->Visible = false;
	dataGridView3->Visible = false;
	panel32->Visible = false;
	textBox39->Text = Text->Empty;
	panel35->Visible = false;
	textBox46->Text = Text->Empty;
	panel37->Visible = false;
	panel36->Visible = false;
	panel38->Visible = false;
	textBox47->Text = Text->Empty;
}
private: System::Void button10_Click(System::Object^  sender, System::EventArgs^  e) {

	
}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	panel14->Visible = true;
	textBox3->Text = Text->Empty;
	textBox4->Text = Text->Empty;
	textBox1->Text = Text->Empty;
	textBox2->Text = Text->Empty;
}

private: System::Void button11_Click(System::Object^  sender, System::EventArgs^  e) { //ok button in add task
	panel15->Visible = false; //smile ok in add
	panel14->Visible = false; //add form
	panel2->Visible = true; // welcome background

	
}
private: System::Void panel6_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
}
private: System::Void panel14_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
}
private: System::Void label7_Click(System::Object^  sender, System::EventArgs^  e) {
}
	

private: System::Void pictureBox14_Click(System::Object^  sender, System::EventArgs^  e) {

	String^ Constring = L"datasource=127.0.0.1;port=3306;username=root;password=manar123";
	MySqlConnection^ ConDataBase = gcnew MySqlConnection(Constring);
	MySqlCommand^ cmdDataBase = gcnew MySqlCommand("insert into project.tasks (ID,Title,Priority,Date,Description) values('"+this-> textBox3 ->Text+"','" + this->textBox1->Text + "','" + this-> textBox4->Text + "','" + this->dateTimePicker1->Text + "','" + this->textBox2->Text + "');", ConDataBase);
	MySqlDataReader^ myReader; int d;
	bool check = false;
	if (textBox4->Text->Trim()->Length != 0) {
		d = Convert::ToInt32(textBox4->Text);
		if (d > 100 || d <= 0) {
			check = true;
		}
	}
	if ( check==true || textBox3->Text->Trim()->Length == 0 || textBox2->Text->Trim()->Length == 0 || textBox1->Text->Trim()->Length == 0 || textBox4->Text->Trim()->Length == 0)
	{
		panel16->Visible = true;
	} 
	else {
		try
		{
			ConDataBase->Open();
			myReader = cmdDataBase->ExecuteReader();
			panel15->Visible = true;
		}
		catch (Exception^ex)
		{
			panel17->Visible = true;
		}
	}

}
private: System::Void textBox3_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
		
private: System::Void textBox5_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	
}
private: System::Void panel15_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
}
private: System::Void pictureBox15_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void pictureBox16_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label8_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void button10_Click_1(System::Object^  sender, System::EventArgs^  e) {
	panel16->Visible = false;
}
private: System::Void button12_Click(System::Object^  sender, System::EventArgs^  e) {
	panel17->Visible = false;
	
}

private: System::Void panel18_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
}
private: System::Void label10_Click(System::Object^  sender, System::EventArgs^  e) {
	DateTime datetime = DateTime::Now;
	this->label10->Text = datetime.ToString();
}
private: System::Void comboBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {

	String^ combovol = comboBox1->Text;
	String^ Constring = L"datasource=127.0.0.1;port=3306;username=root;password=manar123";
	MySqlConnection^ ConDataBase = gcnew MySqlConnection(Constring);
	MySqlCommand^ cmdDataBase = gcnew MySqlCommand("select * from project.tasks where Title= '"+ combovol +"';", ConDataBase);
	MySqlDataReader^ myReader;

	try
	{
		
		ConDataBase->Open();
		myReader = cmdDataBase->ExecuteReader();
		if (myReader->Read()) {
			String^ ID = myReader->GetInt32("ID").ToString();
			textBox6->Text = ID;
			String^ Title = myReader->GetString("Title");
			textBox7->Text = Title;
			String^ Priority = myReader->GetInt32("Priority").ToString();
			textBox5->Text = Priority;
			String^ Date = myReader->GetDateTime("Date").ToString();
			textBox9->Text = Date;
			String^ Description = myReader->GetString("Description");
			textBox8->Text = Description;
		}

	}
	catch (Exception^ex)
	{
		MessageBox::Show("Try Again");
	}

}

		 private: void fillcombo(void) {
			 String^ Constring = L"datasource=127.0.0.1;port=3306;username=root;password=manar123";
			 MySqlConnection^ ConDataBase = gcnew MySqlConnection(Constring);
			 MySqlCommand^ cmdDataBase = gcnew MySqlCommand("select * from project.tasks where Date=current_date()and Status=false;", ConDataBase);
			 MySqlDataReader^ myReader; 
		
				 try
				 {
					 
					 ConDataBase->Open();
					 myReader = cmdDataBase->ExecuteReader();
					 while (myReader->Read()) {
						 String^ vtitle;
						 vtitle = myReader->GetString("Title");
						 
                                  comboBox1->Items->Add(vtitle);
						 
						 
					 }
					 
				 }
				 catch (Exception^ex)
				 {
					 MessageBox::Show("Try Again");
				 }
		 }
	private: System::Void radioButton1_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
		panel19->Visible = true;
		String^ Constring = L"datasource=127.0.0.1;port=3306;username=root;password=manar123";
		MySqlConnection^ ConDataBase = gcnew MySqlConnection(Constring);
		MySqlCommand^ cmdDataBase = gcnew MySqlCommand("update project.tasks set Status=1 where ID='"+this->textBox6->Text +"';", ConDataBase);
		MySqlDataReader^ myReader;

		try
		{

			ConDataBase->Open();
			myReader = cmdDataBase->ExecuteReader();
		}
		catch (Exception^ex)
		{
			MessageBox::Show("Try Again");
		}
	}
private: System::Void button13_Click(System::Object^  sender, System::EventArgs^  e) {
   	
	textBox6->Text = Text->Empty;
	textBox7->Text = Text->Empty;
	textBox9->Text = Text->Empty;
	textBox8->Text = Text->Empty;
	textBox5->Text = Text->Empty;
	radioButton2->Checked = true;
	comboBox1->Items->Clear();
	fillcombo();
	comboBox1->Text = "Tasks For Today";
	panel19->Visible = false;
}

private: System::Void dataGridView1_CellContentClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
}
private: System::Void dataGridView1_CellClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
	textBox12->Text = dataGridView1->Rows[e->RowIndex]->Cells["ID"]->FormattedValue->ToString();
	textBox13->Text= dataGridView1->Rows[e->RowIndex]->Cells["Title"]->FormattedValue->ToString();
	textBox11->Text = dataGridView1->Rows[e->RowIndex]->Cells["Priority"]->FormattedValue->ToString();
	textBox10->Text = dataGridView1->Rows[e->RowIndex]->Cells["Date"]->FormattedValue->ToString();
	textBox14->Text = dataGridView1->Rows[e->RowIndex]->Cells["Description"]->FormattedValue->ToString();
	String^ check = dataGridView1->Rows[e->RowIndex]->Cells["Status"]->Value->ToString();
	if (check == "True") {
		textBox15->Text = "Done";
	}
	else
		textBox15->Text = "Not Done";
}





		  private: void fillover(void) {
			 String^ Constring = L"datasource=127.0.0.1;port=3306;username=root;password=manar123";
			 MySqlConnection^ ConDataBase = gcnew MySqlConnection(Constring);
			 MySqlCommand^ cmdDataBase = gcnew MySqlCommand("select * from project.tasks where Date<current_date()and Status=false;", ConDataBase);
			 MySqlDataReader^ myReader; 
		
				 try
				 {
					 
					 ConDataBase->Open();
					 myReader = cmdDataBase->ExecuteReader();
					 while (myReader->Read()) {
						 String^ vtitle;
						 vtitle = myReader->GetString("Title");
						 
                                  comboBox2->Items->Add(vtitle);
						 
						 
					 }
					 
				 }
				 catch (Exception^ex)
				 {
					 MessageBox::Show("Try Again");
				 }
		 }
private: System::Void comboBox2_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {

	String^ combovol = comboBox2->Text;
	String^ Constring = L"datasource=127.0.0.1;port=3306;username=root;password=manar123";
	MySqlConnection^ ConDataBase = gcnew MySqlConnection(Constring);
	MySqlCommand^ cmdDataBase = gcnew MySqlCommand("select * from project.tasks where Title= '" + combovol + "';", ConDataBase);
	MySqlDataReader^ myReader;

	try
	{

		ConDataBase->Open();
		myReader = cmdDataBase->ExecuteReader();
		if (myReader->Read()) {
			String^ ID = myReader->GetInt32("ID").ToString();
			textBox18->Text = ID;
			String^ Title = myReader->GetString("Title");
			textBox19->Text = Title;
			String^ Priority = myReader->GetInt32("Priority").ToString();
			textBox17->Text = Priority;
			String^ Date = myReader->GetDateTime("Date").ToString();
			textBox16->Text = Date;
			String^ Description = myReader->GetString("Description");
			textBox20->Text = Description;
			String^ st= myReader->GetString("Status");
			if (st == "True") {
				textBox21->Text = "Done";
			}
			else
				textBox21->Text = "Not Done";
		}

	}
	catch (Exception^ex)
	{
		MessageBox::Show("Try Again");
	}
	
}
private: System::Void pictureBox22_Click(System::Object^  sender, System::EventArgs^  e) {
}

private: System::Void dataGridView2_CellClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
	textBox26->Text = dataGridView2->Rows[e->RowIndex]->Cells["ID"]->FormattedValue->ToString();
	textBox27->Text = dataGridView2->Rows[e->RowIndex]->Cells["Title"]->FormattedValue->ToString();
	textBox25->Text = dataGridView2->Rows[e->RowIndex]->Cells["Priority"]->FormattedValue->ToString();
	textBox24->Text = dataGridView2->Rows[e->RowIndex]->Cells["Date"]->FormattedValue->ToString();
	textBox23->Text = dataGridView2->Rows[e->RowIndex]->Cells["Description"]->FormattedValue->ToString();
	String^ check = dataGridView2->Rows[e->RowIndex]->Cells["Status"]->Value->ToString();
	if (check == "True") {
		textBox22->Text = "Done";
	}
	else
		textBox22->Text = "Not Done";
}

private: System::Void dataGridView2_CellContentClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
}

		 private: void filledit(void) {
			 String^ Constring = L"datasource=127.0.0.1;port=3306;username=root;password=manar123";
			 MySqlConnection^ ConDataBase = gcnew MySqlConnection(Constring);
			 MySqlCommand^ cmdDataBase = gcnew MySqlCommand("select * from project.tasks;", ConDataBase);
			 MySqlDataReader^ myReader;

			 try
			 {

				 ConDataBase->Open();
				 myReader = cmdDataBase->ExecuteReader();
				 while (myReader->Read()) {
					 String^ vtitle;
					 vtitle = myReader->GetString("Title");

					 comboBox3->Items->Add(vtitle);


				 }

			 }
			 catch (Exception^ex)
			 {
				 MessageBox::Show("Try Again");
			 }
		 }
private: System::Void pictureBox25_Click(System::Object^  sender, System::EventArgs^  e) {
	
	String^ combovol = comboBox3->Text;
	String^ Constring = L"datasource=127.0.0.1;port=3306;username=root;password=manar123";
	MySqlConnection^ ConDataBase = gcnew MySqlConnection(Constring);
	MySqlCommand^ cmdDataBase = gcnew MySqlCommand("Update project.tasks  set ID='" + this->textBox31->Text + "',Title='" + this->textBox32->Text + "',Priority='" + this->textBox30->Text + "',Date='" + this->dateTimePicker2->Text + "',Description='" + this->textBox33->Text + "',Status='" + this->textBox28->Text + "' where Title='" + combovol + "' ;", ConDataBase);
	MySqlDataReader^ myReader;
	int d;
	bool check = false;
	if (textBox30->Text->Trim()->Length != 0) {
		d = Convert::ToInt32(textBox30->Text);
		if (d > 100 || d <= 0) {
			check = true;
		}
	}
	if (check == true || textBox31->Text->Trim()->Length == 0 || textBox32->Text->Trim()->Length == 0 || textBox30->Text->Trim()->Length == 0 || textBox33->Text->Trim()->Length == 0)
	{
		panel28->Visible = true;
		
	}
	else {
		try
		{

			ConDataBase->Open();
			myReader = cmdDataBase->ExecuteReader();
			panel26->Visible = true;
			comboBox3->Items->Clear();
			filledit();
		}
		catch (Exception^ex)
		{
			MessageBox::Show("Try Again");
		}

	}
}

private: System::Void button14_Click(System::Object^  sender, System::EventArgs^  e) {
	
	textBox31->Text = Text->Empty;
	textBox32->Text = Text->Empty;
	textBox30->Text = Text->Empty;
	textBox33->Text = Text->Empty;
	
	comboBox3->Text = "Tasks";
	panel26->Visible = false;
}
private: System::Void comboBox3_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {

	String^ combovol = comboBox3->Text;
	String^ Constring = L"datasource=127.0.0.1;port=3306;username=root;password=manar123";
	MySqlConnection^ ConDataBase = gcnew MySqlConnection(Constring);
	MySqlCommand^ cmdDataBase = gcnew MySqlCommand("select * from project.tasks where Title= '" + combovol + "';", ConDataBase);
	MySqlDataReader^ myReader;

	try
	{

		ConDataBase->Open();
		myReader = cmdDataBase->ExecuteReader();
		if (myReader->Read()) {
			String^ ID = myReader->GetInt32("ID").ToString();
			textBox31->Text = ID;
			String^ Title = myReader->GetString("Title");
			textBox32->Text = Title;
			String^ Priority = myReader->GetInt32("Priority").ToString();
			textBox30->Text = Priority;
			String^ Date = myReader->GetDateTime("Date").ToString();
			dateTimePicker2->Text = Date;
			String^ Description = myReader->GetString("Description");
			textBox33->Text = Description;
			String^ st = myReader->GetString("Status");
			if (st == "True") {
				radioButton4->Checked = true;
				
			}
			else
				radioButton3->Checked = true;
			
		}

	}
	catch (Exception^ex)
	{
		MessageBox::Show("Try Again");
	}

}
private: System::Void radioButton3_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	textBox28->Text = "0";
}
private: System::Void label41_Click(System::Object^  sender, System::EventArgs^  e) {
	String^ combovol = comboBox3->Text;
	String^ Constring = L"datasource=127.0.0.1;port=3306;username=root;password=manar123";
	MySqlConnection^ ConDataBase = gcnew MySqlConnection(Constring);
	MySqlCommand^ cmdDataBase = gcnew MySqlCommand("Update project.tasks  set Title='" + this->textBox32->Text + "',Priority='" + this->textBox30->Text + "',Date='" + this->dateTimePicker2->Text + "',Description='" + this->textBox33->Text + "',Status='" + this->textBox28->Text + "' where Title='" + combovol + "' ;", ConDataBase);
	MySqlDataReader^ myReader;
	int d;
	bool check = false;
	if (textBox30->Text->Trim()->Length != 0) {
		d = Convert::ToInt32(textBox30->Text);
		if (d > 100 || d <= 0) {
			check = true;
		}
	}
	if (check == true || textBox31->Text->Trim()->Length == 0 || textBox32->Text->Trim()->Length == 0 || textBox30->Text->Trim()->Length == 0 || textBox33->Text->Trim()->Length == 0)
	{
		panel28->Visible = true;
		
	}
	else {
		try
		{

			ConDataBase->Open();
			myReader = cmdDataBase->ExecuteReader();
			panel26->Visible = true;
			comboBox3->Items->Clear();
			filledit();
		}
		catch (Exception^ex)
		{
			MessageBox::Show("Try Again");
		}

	}
}
private: System::Void radioButton4_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	textBox28->Text = "1";
}

private: System::Void button16_Click(System::Object^  sender, System::EventArgs^  e) {
	panel28->Visible = false;
}
private: System::Void button16_Click_1(System::Object^  sender, System::EventArgs^  e) {
	panel28->Visible = false;
}
private: System::Void comboBox4_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
	String^ combovol = comboBox4->Text;
	String^ Constring = L"datasource=127.0.0.1;port=3306;username=root;password=manar123";
	MySqlConnection^ ConDataBase = gcnew MySqlConnection(Constring);
	MySqlCommand^ cmdDataBase = gcnew MySqlCommand("select * from project.tasks where Title= '" + combovol + "';", ConDataBase);
	MySqlDataReader^ myReader;

	try
	{

		ConDataBase->Open();
		myReader = cmdDataBase->ExecuteReader();
		if (myReader->Read()) {
			String^ ID = myReader->GetInt32("ID").ToString();
			textBox37->Text = ID;
			String^ Title = myReader->GetString("Title");
			textBox38->Text = Title;
			String^ Priority = myReader->GetInt32("Priority").ToString();
			textBox36->Text = Priority;
			String^ Date = myReader->GetDateTime("Date").ToString();
			textBox35->Text = Date;
			String^ Description = myReader->GetString("Description");
			textBox34->Text = Description;
			String^ st = myReader->GetString("Status");
			if (st == "True") {
				textBox29->Text = "Done";

			}
			else
				textBox29->Text = "Not Done";

		}

	}
	catch (Exception^ex)
	{
		MessageBox::Show("Try Again");
	}

}
		 private: void filldelete(void) {
			 String^ Constring = L"datasource=127.0.0.1;port=3306;username=root;password=manar123";
			 MySqlConnection^ ConDataBase = gcnew MySqlConnection(Constring);
			 MySqlCommand^ cmdDataBase = gcnew MySqlCommand("select * from project.tasks;", ConDataBase);
			 MySqlDataReader^ myReader;

			 try
			 {

				 ConDataBase->Open();
				 myReader = cmdDataBase->ExecuteReader();
				 while (myReader->Read()) {
					 String^ vtitle;
					 vtitle = myReader->GetString("Title");

					 comboBox4->Items->Add(vtitle);


				 }

			 }
			 catch (Exception^ex)
			 {
				 MessageBox::Show("Try Again");
			 }
		 }
private: System::Void pictureBox29_Click(System::Object^  sender, System::EventArgs^  e) {
	comboBox4->Items->Clear();
	filldelete();

	String^ combovol = comboBox4->Text;
	String^ Constring = L"datasource=127.0.0.1;port=3306;username=root;password=manar123";
	MySqlConnection^ ConDataBase = gcnew MySqlConnection(Constring);
	MySqlCommand^ cmdDataBase = gcnew MySqlCommand("Delete from project.tasks where ID= '" + textBox37->Text + "';", ConDataBase);
	MySqlDataReader^ myReader;

	try
	{

		ConDataBase->Open();
		myReader = cmdDataBase->ExecuteReader();
		panel30->Visible = true;
		
	}
	catch (Exception^ex)
	{
		MessageBox::Show("Try Again");
	}


}
private: System::Void button15_Click(System::Object^  sender, System::EventArgs^  e) {
	panel30->Visible = false;
	textBox37->Text = Text->Empty;
	textBox38->Text = Text->Empty;
	textBox36->Text = Text->Empty;
	textBox35->Text = Text->Empty;
	textBox34->Text = Text->Empty;
	textBox29->Text = Text->Empty;
	comboBox4->Text = "Tasks";
	comboBox4->Items->Clear();
	filldelete();
}
private: System::Void button17_Click(System::Object^  sender, System::EventArgs^  e) {
	panel33->Visible = true;
	panel37->Visible = false;
	panel35->Visible = false;
	panel38->Visible = false;
	textBox44->Text = Text->Empty;
	textBox45->Text = Text->Empty;
	textBox43->Text = Text->Empty;
	textBox42->Text = Text->Empty;
	textBox41->Text = Text->Empty;
	textBox40->Text = Text->Empty;
}
private: System::Void button18_Click(System::Object^  sender, System::EventArgs^  e) {
	panel35->Visible = true;
	panel33->Visible = true;
	panel37->Visible = false;
	panel38->Visible = false;
	textBox44->Text = Text->Empty;
	textBox45->Text = Text->Empty;
	textBox43->Text = Text->Empty;
	textBox42->Text = Text->Empty;
	textBox41->Text = Text->Empty;
	textBox40->Text = Text->Empty;
}
private: System::Void panel31_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
}
private: System::Void dataGridView3_CellContentClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
}
private: System::Void button20_Click(System::Object^  sender, System::EventArgs^  e) {

	if (textBox39->Text->Trim()->Length == 0) {
		panel40->Visible = true;
		
	}
	else {
		int id = Convert::ToInt32(textBox39->Text);
		textBox39->Text = Text->Empty;
		panel33->Visible = false;
		panel32->Visible = true;
		pictureBox32->Visible = true;
		dataGridView3->Visible = true;
		
		
		//.......................................
		String^ Constring = L"datasource=127.0.0.1;port=3306;username=root;password=manar123";
		MySqlConnection^ ConDataBase = gcnew MySqlConnection(Constring);
		MySqlCommand^ cmdDataBase = gcnew MySqlCommand("select * from project.tasks where ID='" + id + "';", ConDataBase);
		MySqlDataReader^ myReader;

		try
		{
			
			MySqlDataAdapter^ sda = gcnew MySqlDataAdapter();
			sda->SelectCommand = cmdDataBase;
			DataTable^ dat = gcnew DataTable();
			sda->Fill(dat);
			BindingSource^ bsource = gcnew BindingSource();
			bsource->DataSource = dat;
			dataGridView3->DataSource = bsource;
			sda->Update(dat);

		}
		catch (Exception^ex)
		{
			MessageBox::Show("Try Again");
		}
	}
}
private: System::Void dataGridView3_CellClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
	textBox44->Text = dataGridView3->Rows[e->RowIndex]->Cells["ID"]->FormattedValue->ToString();
	textBox45->Text = dataGridView3->Rows[e->RowIndex]->Cells["Title"]->FormattedValue->ToString();
	textBox43->Text = dataGridView3->Rows[e->RowIndex]->Cells["Priority"]->FormattedValue->ToString();
	textBox42->Text = dataGridView3->Rows[e->RowIndex]->Cells["Date"]->FormattedValue->ToString();
	textBox41->Text = dataGridView3->Rows[e->RowIndex]->Cells["Description"]->FormattedValue->ToString();
	String^ check = dataGridView3->Rows[e->RowIndex]->Cells["Status"]->Value->ToString();
	if (check == "True") {
		textBox40->Text = "Done";
	}
	else
		textBox40->Text = "Not Done";
}
private: System::Void label57_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void button22_Click(System::Object^  sender, System::EventArgs^  e) {
panel36->Visible = false;
	panel33->Visible = false;
	panel35->Visible = false;
	panel37->Visible = false;
	panel38->Visible = false;
	
}
private: System::Void button24_Click(System::Object^  sender, System::EventArgs^  e) {
	if (textBox46->Text->Trim()->Length == 0) {
		panel39->Visible = true;
		


	}
	else {
		int pr = Convert::ToInt32(textBox46->Text);
		textBox46->Text = Text->Empty;
		panel33->Visible = false;
		panel35->Visible = false;
		panel38->Visible = false;
		panel37->Visible = false;

		panel32->Visible = true;
		pictureBox32->Visible = true;
		dataGridView3->Visible = true;


		//.......................................
		String^ Constring = L"datasource=127.0.0.1;port=3306;username=root;password=manar123";
		MySqlConnection^ ConDataBase = gcnew MySqlConnection(Constring);
		MySqlCommand^ cmdDataBase = gcnew MySqlCommand("select * from project.tasks where Priority='" + pr + "';", ConDataBase);
		MySqlDataReader^ myReader;

		try
		{

			MySqlDataAdapter^ sda = gcnew MySqlDataAdapter();
			sda->SelectCommand = cmdDataBase;
			DataTable^ dat = gcnew DataTable();
			sda->Fill(dat);
			BindingSource^ bsource = gcnew BindingSource();
			bsource->DataSource = dat;
			dataGridView3->DataSource = bsource;
			sda->Update(dat);

		}
		catch (Exception^ex)
		{
			MessageBox::Show("Try Again");
		}
	}
}
private: System::Void button19_Click(System::Object^  sender, System::EventArgs^  e) {
	panel37->Visible = true;
	panel35->Visible = true;
	panel33->Visible = true;
	panel38->Visible = false;
	textBox44->Text = Text->Empty;
	textBox45->Text = Text->Empty;
	textBox43->Text = Text->Empty;
	textBox42->Text = Text->Empty;
	textBox41->Text = Text->Empty;
	textBox40->Text = Text->Empty;
}
private: System::Void button25_Click(System::Object^  sender, System::EventArgs^  e) {
	    panel37->Visible = false;
		panel38->Visible = false;
		panel33->Visible = false;
		panel35->Visible = false;
		panel32->Visible = true;
		
		pictureBox32->Visible = true;
		dataGridView3->Visible = true;

		//.......................................
		String^ Constring = L"datasource=127.0.0.1;port=3306;username=root;password=manar123";
		MySqlConnection^ ConDataBase = gcnew MySqlConnection(Constring);
		MySqlCommand^ cmdDataBase = gcnew MySqlCommand("select * from project.tasks where Date='" + this->dateTimePicker3->Text + "';", ConDataBase);
		MySqlDataReader^ myReader;

		try
		{

			MySqlDataAdapter^ sda = gcnew MySqlDataAdapter();
			sda->SelectCommand = cmdDataBase;
			DataTable^ dat = gcnew DataTable();
			sda->Fill(dat);
			BindingSource^ bsource = gcnew BindingSource();
			bsource->DataSource = dat;
			dataGridView3->DataSource = bsource;
			sda->Update(dat);
			
		}
		catch (Exception^ex)
		{
			MessageBox::Show("Try Again");
		}
	

}
private: System::Void button21_Click(System::Object^  sender, System::EventArgs^  e) {
	panel38->Visible = true;
	panel37->Visible = true;
	panel35->Visible = true;
	panel33->Visible = true;
	textBox44->Text = Text->Empty;
	textBox45->Text = Text->Empty;
	textBox43->Text = Text->Empty;
	textBox42->Text = Text->Empty;
	textBox41->Text = Text->Empty;
	textBox40->Text = Text->Empty;
}
private: System::Void button26_Click(System::Object^  sender, System::EventArgs^  e) {
	if (textBox47->Text->Trim()->Length == 0) {
		panel36->Visible = true;
		panel38->Visible = true;
		

	}
	else {
		
		panel37 ->Visible = false;
		panel35->Visible = false;
		panel33->Visible = false;
		panel32->Visible = true;
		pictureBox32->Visible = true;
		dataGridView3->Visible = true;


		//.......................................
		String^ Constring = L"datasource=127.0.0.1;port=3306;username=root;password=manar123";
		MySqlConnection^ ConDataBase = gcnew MySqlConnection(Constring);
		MySqlCommand^ cmdDataBase = gcnew MySqlCommand("select * from project.tasks where Title='" + this->textBox47->Text+ "';", ConDataBase);
		MySqlDataReader^ myReader;

		try
		{

			MySqlDataAdapter^ sda = gcnew MySqlDataAdapter();
			sda->SelectCommand = cmdDataBase;
			DataTable^ dat = gcnew DataTable();
			sda->Fill(dat);
			BindingSource^ bsource = gcnew BindingSource();
			bsource->DataSource = dat;
			dataGridView3->DataSource = bsource;
			sda->Update(dat);
			textBox47->Text = Text->Empty;
			panel38->Visible = false;
			
		}
		catch (Exception^ex)
		{
			MessageBox::Show("Try Again");
		}
	}
}
private: System::Void button23_Click(System::Object^  sender, System::EventArgs^  e) {
	panel36->Visible = false;
}
private: System::Void button23_Click_1(System::Object^  sender, System::EventArgs^  e) {
	panel36->Visible = false;
}
private: System::Void button27_Click(System::Object^  sender, System::EventArgs^  e) {
	panel39->Visible = false;
}
private: System::Void button28_Click(System::Object^  sender, System::EventArgs^  e) {
	panel40->Visible = false;
}
};

}
