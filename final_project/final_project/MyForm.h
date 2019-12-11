#pragma once
#include <msclr\marshal_cppstd.h>
#include<algorithm>
#include"divide_string.h"
#include"Queue.h"

Denis::Queue q[10];
int step = 0;

namespace finalproject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ MyForm
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

	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^  input_textBox;
	protected:
	private: System::Windows::Forms::Button^  input_button;
	private: System::Windows::Forms::Button^  nextStep_button;
	private: System::Windows::Forms::TextBox^  res_box;
	private: System::Windows::Forms::DataGridView^  q0;
	private: System::Windows::Forms::DataGridView^  q1;
	private: System::Windows::Forms::DataGridView^  q2;
	private: System::Windows::Forms::DataGridView^  q3;
	private: System::Windows::Forms::DataGridView^  q4;
	private: System::Windows::Forms::DataGridView^  q5;
	private: System::Windows::Forms::DataGridView^  q6;
	private: System::Windows::Forms::DataGridView^  q7;
	private: System::Windows::Forms::DataGridView^  q8;
	private: System::Windows::Forms::DataGridView^  q9;



















	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->input_textBox = (gcnew System::Windows::Forms::TextBox());
			this->input_button = (gcnew System::Windows::Forms::Button());
			this->nextStep_button = (gcnew System::Windows::Forms::Button());
			this->res_box = (gcnew System::Windows::Forms::TextBox());
			this->q0 = (gcnew System::Windows::Forms::DataGridView());
			this->q1 = (gcnew System::Windows::Forms::DataGridView());
			this->q2 = (gcnew System::Windows::Forms::DataGridView());
			this->q3 = (gcnew System::Windows::Forms::DataGridView());
			this->q4 = (gcnew System::Windows::Forms::DataGridView());
			this->q5 = (gcnew System::Windows::Forms::DataGridView());
			this->q6 = (gcnew System::Windows::Forms::DataGridView());
			this->q7 = (gcnew System::Windows::Forms::DataGridView());
			this->q8 = (gcnew System::Windows::Forms::DataGridView());
			this->q9 = (gcnew System::Windows::Forms::DataGridView());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->q0))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->q1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->q2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->q3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->q4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->q5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->q6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->q7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->q8))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->q9))->BeginInit();
			this->SuspendLayout();
			// 
			// input_textBox
			// 
			this->input_textBox->Location = System::Drawing::Point(12, 12);
			this->input_textBox->Name = L"input_textBox";
			this->input_textBox->Size = System::Drawing::Size(845, 20);
			this->input_textBox->TabIndex = 0;
			// 
			// input_button
			// 
			this->input_button->Location = System::Drawing::Point(863, 12);
			this->input_button->Name = L"input_button";
			this->input_button->Size = System::Drawing::Size(62, 20);
			this->input_button->TabIndex = 1;
			this->input_button->Text = L"Set";
			this->input_button->UseVisualStyleBackColor = true;
			this->input_button->Click += gcnew System::EventHandler(this, &MyForm::input_button_Click);
			// 
			// nextStep_button
			// 
			this->nextStep_button->Location = System::Drawing::Point(819, 71);
			this->nextStep_button->Name = L"nextStep_button";
			this->nextStep_button->Size = System::Drawing::Size(106, 20);
			this->nextStep_button->TabIndex = 2;
			this->nextStep_button->Text = L"Next step";
			this->nextStep_button->UseVisualStyleBackColor = true;
			this->nextStep_button->Click += gcnew System::EventHandler(this, &MyForm::nextStep_button_Click);
			// 
			// res_box
			// 
			this->res_box->Location = System::Drawing::Point(12, 71);
			this->res_box->Name = L"res_box";
			this->res_box->Size = System::Drawing::Size(801, 20);
			this->res_box->TabIndex = 3;
			// 
			// q0
			// 
			this->q0->AllowUserToAddRows = false;
			this->q0->AllowUserToDeleteRows = false;
			this->q0->AllowUserToResizeColumns = false;
			this->q0->AllowUserToResizeRows = false;
			this->q0->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::AllCells;
			this->q0->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::AllCells;
			this->q0->ClipboardCopyMode = System::Windows::Forms::DataGridViewClipboardCopyMode::Disable;
			this->q0->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::DisableResizing;
			this->q0->Location = System::Drawing::Point(12, 122);
			this->q0->MultiSelect = false;
			this->q0->Name = L"q0";
			this->q0->RowHeadersVisible = false;
			this->q0->RowHeadersWidthSizeMode = System::Windows::Forms::DataGridViewRowHeadersWidthSizeMode::DisableResizing;
			this->q0->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::CellSelect;
			this->q0->Size = System::Drawing::Size(86, 312);
			this->q0->TabIndex = 2;
			// 
			// q1
			// 
			this->q1->AllowUserToAddRows = false;
			this->q1->AllowUserToDeleteRows = false;
			this->q1->AllowUserToResizeColumns = false;
			this->q1->AllowUserToResizeRows = false;
			this->q1->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::AllCells;
			this->q1->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::AllCells;
			this->q1->ClipboardCopyMode = System::Windows::Forms::DataGridViewClipboardCopyMode::Disable;
			this->q1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::DisableResizing;
			this->q1->Location = System::Drawing::Point(104, 122);
			this->q1->MultiSelect = false;
			this->q1->Name = L"q1";
			this->q1->RowHeadersVisible = false;
			this->q1->RowHeadersWidthSizeMode = System::Windows::Forms::DataGridViewRowHeadersWidthSizeMode::DisableResizing;
			this->q1->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::CellSelect;
			this->q1->Size = System::Drawing::Size(86, 312);
			this->q1->TabIndex = 5;
			// 
			// q2
			// 
			this->q2->AllowUserToAddRows = false;
			this->q2->AllowUserToDeleteRows = false;
			this->q2->AllowUserToResizeColumns = false;
			this->q2->AllowUserToResizeRows = false;
			this->q2->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::AllCells;
			this->q2->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::AllCells;
			this->q2->ClipboardCopyMode = System::Windows::Forms::DataGridViewClipboardCopyMode::Disable;
			this->q2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::DisableResizing;
			this->q2->Location = System::Drawing::Point(196, 122);
			this->q2->MultiSelect = false;
			this->q2->Name = L"q2";
			this->q2->RowHeadersVisible = false;
			this->q2->RowHeadersWidthSizeMode = System::Windows::Forms::DataGridViewRowHeadersWidthSizeMode::DisableResizing;
			this->q2->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::CellSelect;
			this->q2->Size = System::Drawing::Size(86, 312);
			this->q2->TabIndex = 6;
			// 
			// q3
			// 
			this->q3->AllowUserToAddRows = false;
			this->q3->AllowUserToDeleteRows = false;
			this->q3->AllowUserToResizeColumns = false;
			this->q3->AllowUserToResizeRows = false;
			this->q3->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::AllCells;
			this->q3->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::AllCells;
			this->q3->ClipboardCopyMode = System::Windows::Forms::DataGridViewClipboardCopyMode::Disable;
			this->q3->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::DisableResizing;
			this->q3->Location = System::Drawing::Point(288, 122);
			this->q3->MultiSelect = false;
			this->q3->Name = L"q3";
			this->q3->RowHeadersVisible = false;
			this->q3->RowHeadersWidthSizeMode = System::Windows::Forms::DataGridViewRowHeadersWidthSizeMode::DisableResizing;
			this->q3->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::CellSelect;
			this->q3->Size = System::Drawing::Size(86, 312);
			this->q3->TabIndex = 7;
			// 
			// q4
			// 
			this->q4->AllowUserToAddRows = false;
			this->q4->AllowUserToDeleteRows = false;
			this->q4->AllowUserToResizeColumns = false;
			this->q4->AllowUserToResizeRows = false;
			this->q4->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::AllCells;
			this->q4->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::AllCells;
			this->q4->ClipboardCopyMode = System::Windows::Forms::DataGridViewClipboardCopyMode::Disable;
			this->q4->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::DisableResizing;
			this->q4->Location = System::Drawing::Point(380, 122);
			this->q4->MultiSelect = false;
			this->q4->Name = L"q4";
			this->q4->RowHeadersVisible = false;
			this->q4->RowHeadersWidthSizeMode = System::Windows::Forms::DataGridViewRowHeadersWidthSizeMode::DisableResizing;
			this->q4->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::CellSelect;
			this->q4->Size = System::Drawing::Size(86, 312);
			this->q4->TabIndex = 8;
			// 
			// q5
			// 
			this->q5->AllowUserToAddRows = false;
			this->q5->AllowUserToDeleteRows = false;
			this->q5->AllowUserToResizeColumns = false;
			this->q5->AllowUserToResizeRows = false;
			this->q5->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::AllCells;
			this->q5->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::AllCells;
			this->q5->ClipboardCopyMode = System::Windows::Forms::DataGridViewClipboardCopyMode::Disable;
			this->q5->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::DisableResizing;
			this->q5->Location = System::Drawing::Point(472, 122);
			this->q5->MultiSelect = false;
			this->q5->Name = L"q5";
			this->q5->RowHeadersVisible = false;
			this->q5->RowHeadersWidthSizeMode = System::Windows::Forms::DataGridViewRowHeadersWidthSizeMode::DisableResizing;
			this->q5->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::CellSelect;
			this->q5->Size = System::Drawing::Size(86, 312);
			this->q5->TabIndex = 9;
			// 
			// q6
			// 
			this->q6->AllowUserToAddRows = false;
			this->q6->AllowUserToDeleteRows = false;
			this->q6->AllowUserToResizeColumns = false;
			this->q6->AllowUserToResizeRows = false;
			this->q6->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::AllCells;
			this->q6->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::AllCells;
			this->q6->ClipboardCopyMode = System::Windows::Forms::DataGridViewClipboardCopyMode::Disable;
			this->q6->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::DisableResizing;
			this->q6->Location = System::Drawing::Point(564, 122);
			this->q6->MultiSelect = false;
			this->q6->Name = L"q6";
			this->q6->RowHeadersVisible = false;
			this->q6->RowHeadersWidthSizeMode = System::Windows::Forms::DataGridViewRowHeadersWidthSizeMode::DisableResizing;
			this->q6->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::CellSelect;
			this->q6->Size = System::Drawing::Size(86, 312);
			this->q6->TabIndex = 10;
			// 
			// q7
			// 
			this->q7->AllowUserToAddRows = false;
			this->q7->AllowUserToDeleteRows = false;
			this->q7->AllowUserToResizeColumns = false;
			this->q7->AllowUserToResizeRows = false;
			this->q7->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::AllCells;
			this->q7->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::AllCells;
			this->q7->ClipboardCopyMode = System::Windows::Forms::DataGridViewClipboardCopyMode::Disable;
			this->q7->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::DisableResizing;
			this->q7->Location = System::Drawing::Point(656, 122);
			this->q7->MultiSelect = false;
			this->q7->Name = L"q7";
			this->q7->RowHeadersVisible = false;
			this->q7->RowHeadersWidthSizeMode = System::Windows::Forms::DataGridViewRowHeadersWidthSizeMode::DisableResizing;
			this->q7->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::CellSelect;
			this->q7->Size = System::Drawing::Size(86, 312);
			this->q7->TabIndex = 11;
			// 
			// q8
			// 
			this->q8->AllowUserToAddRows = false;
			this->q8->AllowUserToDeleteRows = false;
			this->q8->AllowUserToResizeColumns = false;
			this->q8->AllowUserToResizeRows = false;
			this->q8->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::AllCells;
			this->q8->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::AllCells;
			this->q8->ClipboardCopyMode = System::Windows::Forms::DataGridViewClipboardCopyMode::Disable;
			this->q8->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::DisableResizing;
			this->q8->Location = System::Drawing::Point(748, 122);
			this->q8->MultiSelect = false;
			this->q8->Name = L"q8";
			this->q8->RowHeadersVisible = false;
			this->q8->RowHeadersWidthSizeMode = System::Windows::Forms::DataGridViewRowHeadersWidthSizeMode::DisableResizing;
			this->q8->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::CellSelect;
			this->q8->Size = System::Drawing::Size(86, 312);
			this->q8->TabIndex = 12;
			// 
			// q9
			// 
			this->q9->AllowUserToAddRows = false;
			this->q9->AllowUserToDeleteRows = false;
			this->q9->AllowUserToResizeColumns = false;
			this->q9->AllowUserToResizeRows = false;
			this->q9->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::AllCells;
			this->q9->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::AllCells;
			this->q9->ClipboardCopyMode = System::Windows::Forms::DataGridViewClipboardCopyMode::Disable;
			this->q9->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::DisableResizing;
			this->q9->Location = System::Drawing::Point(840, 122);
			this->q9->MultiSelect = false;
			this->q9->Name = L"q9";
			this->q9->RowHeadersVisible = false;
			this->q9->RowHeadersWidthSizeMode = System::Windows::Forms::DataGridViewRowHeadersWidthSizeMode::DisableResizing;
			this->q9->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::CellSelect;
			this->q9->Size = System::Drawing::Size(86, 312);
			this->q9->TabIndex = 13;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(937, 447);
			this->Controls->Add(this->q9);
			this->Controls->Add(this->q8);
			this->Controls->Add(this->q7);
			this->Controls->Add(this->q6);
			this->Controls->Add(this->q5);
			this->Controls->Add(this->q4);
			this->Controls->Add(this->q3);
			this->Controls->Add(this->q2);
			this->Controls->Add(this->q1);
			this->Controls->Add(this->q0);
			this->Controls->Add(this->res_box);
			this->Controls->Add(this->nextStep_button);
			this->Controls->Add(this->input_button);
			this->Controls->Add(this->input_textBox);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->q0))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->q1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->q2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->q3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->q4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->q5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->q6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->q7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->q8))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->q9))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: 
		int *mas;
		int n;
		int max_len_of_number = 0;
		void show_res() {
			std::string kek;
			for (int i = 0; i < n; i++) {
				kek += std::to_string(mas[i]) + ' ';
			}
			res_box->Text = msclr::interop::marshal_as<String^>(kek);
		}
		System::Void input_button_Click(System::Object^  sender, System::EventArgs^  e) {
			std::string inp = msclr::interop::marshal_as<std::string>(input_textBox->Text);
			if (inp.back() != ' ') inp += ' ';
			std::string* w = new std::string[inp.size() / 2 + 1];
			int cnt = 0;
			get_words_one_razdel(inp, w, cnt);
			mas = new int[cnt];
			n = cnt;
			for (int i = 0; i < cnt; i++) {
				mas[i] = atof(w[i].c_str());
				max_len_of_number = max(max_len_of_number, max_cnt(mas[i]));
			}
			input_textBox->ReadOnly = true;
			show_res();
		}
	private: 
		void draw_queues() {
			q0->Rows->Clear();q1->Rows->Clear();q2->Rows->Clear();q3->Rows->Clear();q4->Rows->Clear();
			q5->Rows->Clear();q6->Rows->Clear();q7->Rows->Clear();q8->Rows->Clear();q9->Rows->Clear();
			Denis::Queue tmp;
			tmp = q[0];
			q0->RowCount = (tmp.size() == 0 ? 1 : tmp.size());
			q0->ColumnCount = 1;
			int i = 0;
			while (!tmp.empty()) {
				q0->Rows[i++]->Cells[0]->Value = System::Convert::ToString(tmp.pop());
			}
			tmp = q[1];
			q1->RowCount = (tmp.size() == 0 ? 1 : tmp.size());
			q1->ColumnCount = 1;
			i = 0;
			while (!tmp.empty()) {
				q1->Rows[i++]->Cells[0]->Value = System::Convert::ToString(tmp.pop());
			}
			tmp = q[2];
			q2->RowCount = (tmp.size() == 0 ? 1 : tmp.size());
			q2->ColumnCount = 1;
			i = 0;
			while (!tmp.empty()) {
				q2->Rows[i++]->Cells[0]->Value = System::Convert::ToString(tmp.pop());
			}
			tmp = q[3];
			q3->RowCount = (tmp.size() == 0 ? 1 : tmp.size());
			q3->ColumnCount = 1;
			i = 0;
			while (!tmp.empty()) {
				q3->Rows[i++]->Cells[0]->Value = System::Convert::ToString(tmp.pop());
			}
			tmp = q[4];
			q4->RowCount = (tmp.size() == 0 ? 1 : tmp.size());
			q4->ColumnCount = 1;
			i = 0;
			while (!tmp.empty()) {
				q4->Rows[i++]->Cells[0]->Value = System::Convert::ToString(tmp.pop());
			}
			tmp = q[5];
			q5->RowCount = (tmp.size() == 0 ? 1 : tmp.size());
			q5->ColumnCount = 1;
			i = 0;
			while (!tmp.empty()) {
				q5->Rows[i++]->Cells[0]->Value = System::Convert::ToString(tmp.pop());
			}
			tmp = q[6];
			q6->RowCount = (tmp.size() == 0 ? 1 : tmp.size());
			q6->ColumnCount = 1;
			i = 0;
			while (!tmp.empty()) {
				q6->Rows[i++]->Cells[0]->Value = System::Convert::ToString(tmp.pop());
			}
			tmp = q[7];
			q7->RowCount = (tmp.size() == 0 ? 1 : tmp.size());
			q7->ColumnCount = 1;
			i = 0;
			while (!tmp.empty()) {
				q7->Rows[i++]->Cells[0]->Value = System::Convert::ToString(tmp.pop());
			}
			tmp = q[8];
			q8->RowCount = (tmp.size() == 0 ? 1 : tmp.size());
			q8->ColumnCount = 1;
			i = 0;
			while (!tmp.empty()) {
				q8->Rows[i++]->Cells[0]->Value = System::Convert::ToString(tmp.pop());
			}
			tmp = q[9];
			q9->RowCount = (tmp.size() == 0 ? 1 : tmp.size());
			q9->ColumnCount = 1;
			i = 0;
			while (!tmp.empty()) {
				q9->Rows[i++]->Cells[0]->Value = System::Convert::ToString(tmp.pop());
			}
			q0->Columns[0]->HeaderText = "VALUE";q1->Columns[0]->HeaderText = "VALUE";q2->Columns[0]->HeaderText = "VALUE";
			q3->Columns[0]->HeaderText = "VALUE";q4->Columns[0]->HeaderText = "VALUE";q5->Columns[0]->HeaderText = "VALUE";
			q6->Columns[0]->HeaderText = "VALUE";q7->Columns[0]->HeaderText = "VALUE";q8->Columns[0]->HeaderText = "VALUE";
			q9->Columns[0]->HeaderText = "VALUE";
			q0->ReadOnly = true;q1->ReadOnly = true;q2->ReadOnly = true;q3->ReadOnly = true;q4->ReadOnly = true;
			q5->ReadOnly = true;q6->ReadOnly = true;q7->ReadOnly = true;q8->ReadOnly = true;q9->ReadOnly = true;
			q0->ClearSelection();q1->ClearSelection();q2->ClearSelection();q3->ClearSelection();q4->ClearSelection();
			q5->ClearSelection();q6->ClearSelection();q7->ClearSelection();q8->ClearSelection();q9->ClearSelection();
		}
		System::Void nextStep_button_Click(System::Object^  sender, System::EventArgs^  e) {
			if (step >= max_len_of_number) {
				MessageBox::Show("Ўаги уже закончились");
				return;
			}
			for (int i = 0; i < n; i++) {
				q[calc(mas[i], step)].push(mas[i]);
			}
			draw_queues();
			int index = 0;
			for (int i = 0; i < 10; i++) {
				while (!q[i].empty()) {
					mas[index++] = q[i].pop();
				}
			}
			show_res();
			step++;
		}
};
}
