#pragma once

#include "My_storage.h"
#include "Ccircle.h"
#include "CSquare.h"
#include "CTriangle.h"
#include "CGroup.h"
#include "Shapes.h"

namespace laba6 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();

			
			//
			//TODO: добавьте код конструктора
			//
		}
	private: System::Windows::Forms::Button^ button5;

	public:
		string* col = new string;
	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
				delete group;
				delete storage;
			}
		}
	private: System::Windows::Forms::NumericUpDown^ num_choosing_shape;
	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::RadioButton^ rb_color_green;
	private: System::Windows::Forms::RadioButton^ rb_color_blue;
	private: System::Windows::Forms::RadioButton^ rb_color_red;
	private: System::Windows::Forms::NumericUpDown^ num_increase_size;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ btn_OK;


	private: System::Windows::Forms::Button^ btn_delete;
	private: System::Windows::Forms::Label^ lb_quantily;






	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ button1;

	private: System::Windows::Forms::TreeView^ treeView1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;













	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->num_choosing_shape = (gcnew System::Windows::Forms::NumericUpDown());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->rb_color_green = (gcnew System::Windows::Forms::RadioButton());
			this->rb_color_blue = (gcnew System::Windows::Forms::RadioButton());
			this->rb_color_red = (gcnew System::Windows::Forms::RadioButton());
			this->num_increase_size = (gcnew System::Windows::Forms::NumericUpDown());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->btn_OK = (gcnew System::Windows::Forms::Button());
			this->btn_delete = (gcnew System::Windows::Forms::Button());
			this->lb_quantily = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->treeView1 = (gcnew System::Windows::Forms::TreeView());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->num_choosing_shape))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->num_increase_size))->BeginInit();
			this->SuspendLayout();
			// 
			// num_choosing_shape
			// 
			this->num_choosing_shape->Location = System::Drawing::Point(9, 23);
			this->num_choosing_shape->Name = L"num_choosing_shape";
			this->num_choosing_shape->Size = System::Drawing::Size(70, 20);
			this->num_choosing_shape->TabIndex = 0;
			this->num_choosing_shape->ValueChanged += gcnew System::EventHandler(this, &MyForm::num_choosing_shape_ValueChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(6, 7);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(46, 13);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Фигура";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// rb_color_green
			// 
			this->rb_color_green->AutoSize = true;
			this->rb_color_green->BackColor = System::Drawing::Color::LimeGreen;
			this->rb_color_green->ForeColor = System::Drawing::Color::LimeGreen;
			this->rb_color_green->Location = System::Drawing::Point(177, 27);
			this->rb_color_green->Name = L"rb_color_green";
			this->rb_color_green->Size = System::Drawing::Size(54, 17);
			this->rb_color_green->TabIndex = 2;
			this->rb_color_green->TabStop = true;
			this->rb_color_green->Text = L"Green";
			this->rb_color_green->UseVisualStyleBackColor = false;
			this->rb_color_green->CheckedChanged += gcnew System::EventHandler(this, &MyForm::rb_color_green_CheckedChanged);
			// 
			// rb_color_blue
			// 
			this->rb_color_blue->AutoSize = true;
			this->rb_color_blue->BackColor = System::Drawing::Color::MediumBlue;
			this->rb_color_blue->ForeColor = System::Drawing::Color::MediumBlue;
			this->rb_color_blue->Location = System::Drawing::Point(297, 27);
			this->rb_color_blue->Name = L"rb_color_blue";
			this->rb_color_blue->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->rb_color_blue->Size = System::Drawing::Size(54, 17);
			this->rb_color_blue->TabIndex = 3;
			this->rb_color_blue->TabStop = true;
			this->rb_color_blue->Text = L"Green";
			this->rb_color_blue->TextImageRelation = System::Windows::Forms::TextImageRelation::TextBeforeImage;
			this->rb_color_blue->UseVisualStyleBackColor = false;
			this->rb_color_blue->CheckedChanged += gcnew System::EventHandler(this, &MyForm::rb_color_blue_CheckedChanged);
			// 
			// rb_color_red
			// 
			this->rb_color_red->AutoSize = true;
			this->rb_color_red->BackColor = System::Drawing::Color::Crimson;
			this->rb_color_red->ForeColor = System::Drawing::Color::Crimson;
			this->rb_color_red->Location = System::Drawing::Point(237, 27);
			this->rb_color_red->Name = L"rb_color_red";
			this->rb_color_red->Size = System::Drawing::Size(54, 17);
			this->rb_color_red->TabIndex = 4;
			this->rb_color_red->TabStop = true;
			this->rb_color_red->Text = L"Green";
			this->rb_color_red->UseVisualStyleBackColor = false;
			this->rb_color_red->CheckedChanged += gcnew System::EventHandler(this, &MyForm::rb_color_red_CheckedChanged);
			// 
			// num_increase_size
			// 
			this->num_increase_size->Location = System::Drawing::Point(369, 27);
			this->num_increase_size->Name = L"num_increase_size";
			this->num_increase_size->Size = System::Drawing::Size(70, 20);
			this->num_increase_size->TabIndex = 5;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(366, 11);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(46, 13);
			this->label2->TabIndex = 6;
			this->label2->Text = L"Размер";
			// 
			// btn_OK
			// 
			this->btn_OK->Location = System::Drawing::Point(458, 24);
			this->btn_OK->Name = L"btn_OK";
			this->btn_OK->Size = System::Drawing::Size(75, 23);
			this->btn_OK->TabIndex = 8;
			this->btn_OK->Text = L"Принять";
			this->btn_OK->UseVisualStyleBackColor = true;
			this->btn_OK->Click += gcnew System::EventHandler(this, &MyForm::btn_OK_Click);
			// 
			// btn_delete
			// 
			this->btn_delete->Location = System::Drawing::Point(539, 24);
			this->btn_delete->Name = L"btn_delete";
			this->btn_delete->Size = System::Drawing::Size(134, 23);
			this->btn_delete->TabIndex = 9;
			this->btn_delete->Text = L"Удалить фигуру";
			this->btn_delete->UseVisualStyleBackColor = true;
			this->btn_delete->Click += gcnew System::EventHandler(this, &MyForm::btn_delete_Click);
			// 
			// lb_quantily
			// 
			this->lb_quantily->AutoSize = true;
			this->lb_quantily->Location = System::Drawing::Point(952, 123);
			this->lb_quantily->Name = L"lb_quantily";
			this->lb_quantily->Size = System::Drawing::Size(13, 13);
			this->lb_quantily->TabIndex = 10;
			this->lb_quantily->Text = L"0";
			this->lb_quantily->Click += gcnew System::EventHandler(this, &MyForm::lb_quantily_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(858, 123);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(88, 13);
			this->label4->TabIndex = 16;
			this->label4->Text = L"Всего объектов";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(780, 24);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 17;
			this->button1->Text = L"Load";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::Load_Click);
			// 
			// treeView1
			// 
			this->treeView1->CheckBoxes = true;
			this->treeView1->LabelEdit = true;
			this->treeView1->Location = System::Drawing::Point(861, 12);
			this->treeView1->Name = L"treeView1";
			this->treeView1->Size = System::Drawing::Size(121, 97);
			this->treeView1->TabIndex = 19;
			this->treeView1->AfterSelect += gcnew System::Windows::Forms::TreeViewEventHandler(this, &MyForm::treeView1_AfterSelect);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(690, 24);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 20;
			this->button2->Text = L"Save";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(6, 46);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(187, 26);
			this->label5->TabIndex = 21;
			this->label5->Text = L"\n0 - круг, 1 - треугольник,2 - квадрат";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(174, 11);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(32, 13);
			this->label6->TabIndex = 22;
			this->label6->Text = L"Цвет";
			this->label6->Click += gcnew System::EventHandler(this, &MyForm::label6_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(690, 5);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(60, 13);
			this->label7->TabIndex = 23;
			this->label7->Text = L"Сохранить";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(780, 4);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(61, 13);
			this->label8->TabIndex = 24;
			this->label8->Text = L"Выгрузить";
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(861, 148);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(103, 23);
			this->button3->TabIndex = 25;
			this->button3->Text = L"Сделать липким";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(861, 177);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(104, 23);
			this->button4->TabIndex = 26;
			this->button4->Text = L"Убрать липкость";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(861, 206);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(103, 24);
			this->button5->TabIndex = 27;
			this->button5->Text = L"Расгруппировать";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(984, 661);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->treeView1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->lb_quantily);
			this->Controls->Add(this->btn_delete);
			this->Controls->Add(this->btn_OK);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->num_increase_size);
			this->Controls->Add(this->rb_color_red);
			this->Controls->Add(this->rb_color_blue);
			this->Controls->Add(this->rb_color_green);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->num_choosing_shape);
			this->KeyPreview = true;
			this->MaximumSize = System::Drawing::Size(1000, 700);
			this->MinimumSize = System::Drawing::Size(1000, 700);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::MyForm_Paint);
			this->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::MyForm_KeyDown);
			this->KeyUp += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::MyForm_KeyUp);
			this->MouseDoubleClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::MyForm_MouseDoubleClick);
			this->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::MyForm_MouseDown);
			this->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::MyForm_MouseMove);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->num_choosing_shape))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->num_increase_size))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) 
	{
		Graphics^ g = Graphics::FromHwnd(this->Handle);
		if (rb_color_red->Checked == true)
		{
			*col = "R";
		}
		else
			if (rb_color_blue->Checked == true)
			{
				*col = "B";
			}
			else
				if (rb_color_green->Checked == true)
				{
					*col = "G";
				}
		for (int i = 0; i < storage->getCount() - 1; i++) {
			storage->getObject(i).draw(g);
		}
		if (storage->getCount() > 0) {
			storage->getObject(storage->getCount() - 1).setcolor(*col); // Устанавливаем цвет
			storage->getObject(storage->getCount() - 1).draw(g);
		}
	}

	My_storage* storage = new My_storage(0); //хранилище фигур
	CGroup* group = new CGroup(0); //Группа фигур

	private: System::Void MyForm_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) 
	{
		/*Создаём фигуры*/
		if (e->Button.ToString() == "Right")
		{
			if (num_choosing_shape->Value == 0)
			{
				storage->addObjects(storage->getCount(), new CCircle(e->X, e->Y));
				Invalidate();
			}
			else
				if (num_choosing_shape->Value == 2)
				{
					storage->addObjects(storage->getCount(), new CSquare(e->X, e->Y));
					Invalidate();
				}
				else
					if (num_choosing_shape->Value == 1)
					{
						storage->addObjects(storage->getCount(), new CTriangle(e->X, e->Y));
						Invalidate();
					} // Рисуем объект
			UpdateFromStorage(sender, e);
		}
	}

    /*Выделяем одну фигуру*/
	private: System::Void MyForm_MouseDoubleClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) 
	{
		bool anyflag = false;
		for (int i = 0; i < storage->getCount(); i++)
		{
			storage->getObject(i).unselect();
			Invalidate();
		}

		for (int i = 0; i < storage->getCount(); i++)
		{
			if (storage->getObject(i).reach(e->X, e->Y))
			{
				storage->getObject(i).select();
				for each (TreeNode ^ n in treeView1->Nodes) {
					if (n->Index == i) {
						n->Checked = true;
					}
					else {
						n->Checked = false;
					}
				}
				Invalidate();
				anyflag = true;
			}

		}
		if (!anyflag) {
			for each (TreeNode ^ n in treeView1->Nodes) {
				n->Checked = false;
			}
		}
 	}

	/*Изменяем размер фигуры*/
	private: System::Void btn_OK_Click(System::Object^ sender, System::EventArgs^ e)
	{
		for (int i = 0; i < storage->getCount(); i++)
		{
			if (storage->getObject(i).is_select() == true)
			{
				storage->getObject(i).change_the_size(Decimal::ToInt32(num_increase_size->Value));
			}
		}
		Invalidate();
	}
    
	/*Удаляем выбранную фигуру*/
	private: System::Void btn_delete_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		for (int i = 0; i < storage->getCount(); i++)
		{
			if (storage->getObject(i).is_select() == true)
			{
				storage->deleteObject(i);
				Invalidate();
			}
		}

		UpdateFromStorage(sender, e);
	}

	/*Изменяем положение фигуры*/
	private: System::Void MyForm_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) 
	{
		for (int i = 0; i < storage->getCount(); i++)
		{
			for (int p = 0; p < 15; p++) {
				if (e->KeyValue == 65 && storage->getObject(i).is_select() == true)
				{
					if (storage->getObject(i).getcoord(0) > 15)
					{
						storage->getObject(i).change_the_x(-1);

						for (int j = 0; j < storage->getCount(); j++)
						{
							if ((storage->getObject(j).getsticky() == true) || (storage->getObject(i).getsticky() == true))
							{
								for (int a1 = 0; a1 < (storage->getObject(i).getcoordlen()) / 2; a1++) {
									for (int a2 = 0; a2 < (storage->getObject(j).getcoordlen()) / 2; a2++) {
										if ((storage->getObject(j).reach(storage->getObject(i).getcoord(a1 * 2), storage->getObject(i).getcoord(a1 * 2 + 1))) || (storage->getObject(i).reach(storage->getObject(j).getcoord(a2 * 2), storage->getObject(j).getcoord(a2 * 2 + 1))))
										{
											storage->getObject(i).select();
											storage->getObject(j).select();
											break;
										}
									}
								}
							}
						}

						Invalidate();
					}
					else break;
				}
			}

			if (e->KeyValue == 68 && storage->getObject(i).is_select() == true)
			{
				for (int p = 0; p < 15; p++) {
					if (storage->getObject(i).getcoord(4) < 950)
					{
						storage->getObject(i).change_the_x(1);

						for (int j = 0; j < storage->getCount(); j++)
						{
							if ((storage->getObject(j).getsticky() == true) || (storage->getObject(i).getsticky() == true))
							{
								for (int a1 = 0; a1 < (storage->getObject(i).getcoordlen()) / 2; a1++) {
									for (int a2 = 0; a2 < (storage->getObject(j).getcoordlen()) / 2; a2++) {
										if ((storage->getObject(j).reach(storage->getObject(i).getcoord(a1 * 2), storage->getObject(i).getcoord(a1 * 2 + 1))) || (storage->getObject(i).reach(storage->getObject(j).getcoord(a2 * 2), storage->getObject(j).getcoord(a2 * 2 + 1))))
										{
											storage->getObject(i).select();
											storage->getObject(j).select();
											break;
										}
									}
								}
							}
						}
						Invalidate();
					}
					else break;
				}
			}

			if (e->KeyValue == 87 && storage->getObject(i).is_select() == true)
			{
				for (int p = 0; p < 15; p++) {
					if (storage->getObject(i).getcoord(3) > 15)
					{
						storage->getObject(i).change_the_y(-1);

						for (int j = 0; j < storage->getCount(); j++)
						{
							if ((storage->getObject(j).getsticky() == true) || (storage->getObject(i).getsticky() == true))
							{
								for (int a1 = 0; a1 < (storage->getObject(i).getcoordlen()) / 2; a1++) {
									for (int a2 = 0; a2 < (storage->getObject(j).getcoordlen()) / 2; a2++) {
										if ((storage->getObject(j).reach(storage->getObject(i).getcoord(a1 * 2), storage->getObject(i).getcoord(a1 * 2 + 1))) || (storage->getObject(i).reach(storage->getObject(j).getcoord(a2 * 2), storage->getObject(j).getcoord(a2 * 2 + 1))))
										{
											storage->getObject(i).select();
											storage->getObject(j).select();
											break;
										}
									}
								}
							}
						}

						Invalidate();
					}
					else break;
				}
			}

			if (e->KeyValue == 83 && storage->getObject(i).is_select() == true)
			{
				for (int p = 0; p < 15; p++) {
					if ((storage->getObject(i).getcoord(7) < 650))
					{
						storage->getObject(i).change_the_y(1);

						for (int j = 0; j < storage->getCount(); j++)
						{
							if ((storage->getObject(j).getsticky() == true) || (storage->getObject(i).getsticky() == true))
							{
								for (int a1 = 0; a1 < (storage->getObject(i).getcoordlen()) / 2; a1++) {
									for (int a2 = 0; a2 < (storage->getObject(j).getcoordlen()) / 2; a2++) {
										if ((storage->getObject(j).reach(storage->getObject(i).getcoord(a1 * 2), storage->getObject(i).getcoord(a1 * 2 + 1))) || (storage->getObject(i).reach(storage->getObject(j).getcoord(a2 * 2), storage->getObject(j).getcoord(a2 * 2 + 1))))
										{
											storage->getObject(i).select();
											storage->getObject(j).select();
											break;
										}
									}
								}
							}
						}

						Invalidate();
					}
					else break;
				}
			}
		}

		if (e->Control == true)
		{
			marked_ctrl = true;
		}
	}

    bool marked_ctrl = false;

	int suc = 0;
	private: System::Void MyForm_KeyUp(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) 
	{
		if ((marked_ctrl == true) && (suc > 0))
		{
			marked_ctrl = false;

			storage->addObjects(storage->getCount(), group); //добавляем группу в хранилище
			storage->getObject(storage->getCount() - 1).select();
			UpdateFromStorage(sender, e);
			Invalidate();

			suc = 0;
			group = new CGroup(0); //Группа фигур
		}
	}

	/*Выделяем фигуры и заносим их в группу*/
	private: System::Void MyForm_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) 
	{
		lb_quantily->Text = storage->getCount().ToString();// записываем количество фигур

		if ((marked_ctrl == true) && e->Button.ToString() == "Left")
		{
			for (int i = 0; i < storage->getCount(); i++)
			{
				if (storage->getObject(i).reach(e->X, e->Y) == true)
				{
					suc += 1;
					storage->getObject(i).select(); //выделил фигуру
					group->expand_the_group(&(storage->getObject(i))); //добавил её в группу
					storage->deleteObject(i); //удалил из хранилища

				}
			}
		}
	}
	
	/*Восстанавливаем объекты из файла*/
    private: System::Void Load_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		Graphics^ g = Graphics::FromHwnd(this->Handle);
		storage->Load(g);
		UpdateFromStorage(sender, e);
		Invalidate();
	}

	private: System::Void UpdateFromStorage(System::Object^ sender, System::EventArgs^ e)
	{
		treeView1->Nodes->Clear();

		for (int i = 0; i < storage->getCount(); i++)
		{
			TreeNode^ n = gcnew TreeNode();

			treeView1->Nodes->Add(FigureToNode((storage->getObject(i)), n, i));
		}
	}

	private: TreeNode^ FigureToNode(Shapes &a, TreeNode^ t, int i)
	{
		int k = 0;

		if (a.is_select() == true)
			t->Checked = true;

		TreeNode^ n = gcnew TreeNode();

		if (a.getName() == "CGroup")
		{
			t->Text = i + " " + a.ftostring();

			for (int j = 0; j < a.getSize(); j++)
			{
				n = gcnew TreeNode();
				k = t->Nodes->Add(FigureToNode(a.getObject(j), n, i * 100 + k));
			}
		}
		else
		{
			t->Text = i + " " + a.ftostring();
		}
		return t;
	}

	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) 
	{
		
	}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	storage->Save();
}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void rb_color_blue_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void lb_quantily_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void num_choosing_shape_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	for (int i = 0; i < storage->getCount(); i++)
	{
		if (storage->getObject(i).is_select() == true)
		{
			(storage->getObject(i)).setsticky();
			Invalidate();
		}
	}
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	for (int i = 0; i < storage->getCount(); i++)
	{
		if (storage->getObject(i).is_select() == true)
		{
			(storage->getObject(i)).assetsticky();
			Invalidate();
		}
	}
}
private: System::Void rb_color_red_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
       }
private: System::Void rb_color_green_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
       }
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	for (int i = 0; i < storage->getCount(); i++) {
		if ((storage->getObject(i).is_select() == true) && (storage->getObject(i).getName() == "CGroup")) {
			storage->getObject(i).unselect();
			for (int j = 0; j < storage->getObject(i).getSize(); j++) {
				storage->addObjects(storage->getCount(), storage->getObject(i).returnshapes(j));
			}
			storage->deleteObject(i);
	}
	}
	UpdateFromStorage(sender, e);
}
private: System::Void treeView1_AfterSelect(System::Object^ sender, System::Windows::Forms::TreeViewEventArgs^ e) {
	for each (TreeNode ^ n in treeView1->Nodes) {
		if (n->IsSelected) {
			storage->getObject(n->Index).select();
			n->Checked = true;
			Invalidate();
		}
		else {
			n->Checked = false;
			storage->getObject(n->Index).unselect();
		}
		treeView1->Refresh();
	}
}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}