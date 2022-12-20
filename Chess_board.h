#pragma once
#include "DrawingField.h"
#include "Element.h"
#include "Kon.h"
#include "Korol.h"
#include "Koroleva.h"
#include "Ladya.h"
#include "Peshka.h"
#include "Pole.h"
#include "Slon.h"
#include "Black_Kon.h"
#include "Black_Korol.h"
#include "Black_Koroleva.h"
#include "Black_Ladya.h"
#include "Black_Peshka.h"
#include "Black_Slon.h"


namespace Chess {
	// переменные для перемущения
	constexpr int _Cursor = 1;
	constexpr int _Kon = 2;
	constexpr int _Korol = 3;
	constexpr int _Koroleva = 4;
	constexpr int _Ladya = 5;
	constexpr int _Peshka = 6;
	constexpr int _Pole = 7;
	constexpr int _Slon = 8;
	constexpr int _Black_Kon = 9;
	constexpr int _Black_Korol = 10;
	constexpr int _Black_Koroleva = 11;
	constexpr int _Black_Ladya = 12;
	constexpr int _Black_Peshka = 13;
	constexpr int _Black_Slon = 14;
	constexpr int _Delete = 15;

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для Chess_board
	/// </summary>
	public ref class Chess_board : public System::Windows::Forms::Form
	{
	public:
		Chess_board(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
			maxpictureBox1Height = pictureBox1->Height;
			maxpictureBox1Width = pictureBox1->Width;
			isDown = false;

			Bitmap^ bitmap = gcnew Bitmap(pictureBox1->Size.Width, pictureBox1->Size.Height);
			Graphics^ g = Graphics::FromImage(bitmap);
			g->FillRectangle(gcnew SolidBrush(Color::White), 0, 0, pictureBox1->Width, pictureBox1->Height);
			pictureBox1->Image = bitmap;

			draw();

			cursorType = _Cursor;

		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~Chess_board()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button11;

	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::Button^ button13;
	private: System::Windows::Forms::Button^ button14;
	private: System::Windows::Forms::Button^ button15;
	private: System::Windows::Forms::Button^ button16;
	private: System::Windows::Forms::Button^ button17;

	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->button17 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(36, 11);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(1030, 596);
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &Chess_board::pictureBox1_Click_1);
			this->pictureBox1->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &Chess_board::pictureBox1_MouseDown);
			this->pictureBox1->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &Chess_board::pictureBox1_MouseMove);
			this->pictureBox1->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &Chess_board::pictureBox1_MouseUp);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(1271, 36);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(93, 50);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Курсор";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Chess_board::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(1172, 93);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(93, 50);
			this->button2->TabIndex = 2;
			this->button2->Text = L"Сохранить";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Chess_board::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(1172, 36);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(93, 50);
			this->button3->TabIndex = 3;
			this->button3->Text = L"Удалить";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Chess_board::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(1271, 93);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(93, 50);
			this->button4->TabIndex = 4;
			this->button4->Text = L"Удалить все";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Chess_board::button4_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(1202, 183);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(163, 41);
			this->button5->TabIndex = 5;
			this->button5->Text = L"Шахматная доска";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &Chess_board::button5_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(1202, 230);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(79, 44);
			this->button6->TabIndex = 6;
			this->button6->Text = L"Пешка";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &Chess_board::button6_Click);
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(1286, 230);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(78, 44);
			this->button7->TabIndex = 7;
			this->button7->Text = L"Ладья";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &Chess_board::button7_Click);
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(1201, 280);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(79, 44);
			this->button8->TabIndex = 8;
			this->button8->Text = L"Слон";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &Chess_board::button8_Click);
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(1286, 280);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(79, 44);
			this->button9->TabIndex = 9;
			this->button9->Text = L"Конь";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &Chess_board::button9_Click);
			// 
			// button10
			// 
			this->button10->Location = System::Drawing::Point(1203, 331);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(79, 44);
			this->button10->TabIndex = 10;
			this->button10->Text = L"Король";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &Chess_board::button10_Click);
			// 
			// button11
			// 
			this->button11->Location = System::Drawing::Point(1286, 331);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(79, 44);
			this->button11->TabIndex = 11;
			this->button11->Text = L"Королева";
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &Chess_board::button11_Click);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(1203, 158);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(162, 20);
			this->textBox2->TabIndex = 13;
			this->textBox2->Text = L"Элементы";
			this->textBox2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(1182, 11);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(183, 20);
			this->textBox3->TabIndex = 14;
			this->textBox3->Text = L"Кнопки управления";
			this->textBox3->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// button12
			// 
			this->button12->Location = System::Drawing::Point(1118, 230);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(79, 44);
			this->button12->TabIndex = 15;
			this->button12->Text = L"Black_Пешка";
			this->button12->UseVisualStyleBackColor = true;
			this->button12->Click += gcnew System::EventHandler(this, &Chess_board::button12_Click);
			// 
			// button13
			// 
			this->button13->Location = System::Drawing::Point(1118, 280);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(78, 44);
			this->button13->TabIndex = 16;
			this->button13->Text = L"Black_Ладья";
			this->button13->UseVisualStyleBackColor = true;
			this->button13->Click += gcnew System::EventHandler(this, &Chess_board::button13_Click);
			// 
			// button14
			// 
			this->button14->Location = System::Drawing::Point(1118, 331);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(79, 44);
			this->button14->TabIndex = 17;
			this->button14->Text = L"Black_Слон";
			this->button14->UseVisualStyleBackColor = true;
			this->button14->Click += gcnew System::EventHandler(this, &Chess_board::button14_Click);
			// 
			// button15
			// 
			this->button15->Location = System::Drawing::Point(1118, 381);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(79, 44);
			this->button15->TabIndex = 18;
			this->button15->Text = L"Black_Конь";
			this->button15->UseVisualStyleBackColor = true;
			this->button15->Click += gcnew System::EventHandler(this, &Chess_board::button15_Click);
			// 
			// button16
			// 
			this->button16->Location = System::Drawing::Point(1203, 381);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(79, 44);
			this->button16->TabIndex = 19;
			this->button16->Text = L"Black_Король";
			this->button16->UseVisualStyleBackColor = true;
			this->button16->Click += gcnew System::EventHandler(this, &Chess_board::button16_Click);
			// 
			// button17
			// 
			this->button17->Location = System::Drawing::Point(1288, 381);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(79, 44);
			this->button17->TabIndex = 20;
			this->button17->Text = L"Black_Королева";
			this->button17->UseVisualStyleBackColor = true;
			this->button17->Click += gcnew System::EventHandler(this, &Chess_board::button17_Click);
			// 
			// Chess_board
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1416, 610);
			this->Controls->Add(this->button17);
			this->Controls->Add(this->button16);
			this->Controls->Add(this->button15);
			this->Controls->Add(this->button14);
			this->Controls->Add(this->button13);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->pictureBox1);
			this->Name = L"Chess_board";
			this->Text = L"Chess_board";
			this->Load += gcnew System::EventHandler(this, &Chess_board::Chess_board_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: Point DownPosition;
	private: Point CurrentPosition;
	private: Point PrevPosition;
	private: DrawingField drawingField;
	private: int maxpictureBox1Height;
	private: int maxpictureBox1Width;
	private: int cursorType;


	private: Kon^ newKon;
	private: Korol^ newKorol;
	private: Koroleva^ newKoroleva;
	private: Ladya^ newLadya;
	private: Peshka^ newPeshka;
	private: Pole^ newPole;
	private: Slon^ newSlon;

	private: Black_Kon^ newBlack_Kon;
	private: Black_Korol^ newBlack_Korol;
	private: Black_Koroleva^ newBlack_Koroleva;
	private: Black_Ladya^ newBlack_Ladya;
	private: Black_Peshka^ newBlack_Peshka;
	private: Black_Slon^ newBlack_Slon;

	private: Element^ movingElement;
	private: bool isDown;
	private: Element^ deletingElement;


	private: System::Void Chess_board_Load(System::Object^ sender, System::EventArgs^ e) {
	}

	private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {
		cursorType = _Korol;
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		cursorType = _Delete;
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		cursorType = _Cursor;
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		SaveFileDialog^ save = gcnew SaveFileDialog();
		save->Title = "Сохранить";
		save->Filter = "png files (*.png)|*.png|All files (*.*)|*.*";
		if (save->ShowDialog() == Windows::Forms::DialogResult::OK)
		{
			pictureBox1->Image->Save(save->FileName);
		}
	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		drawingField.clear();
		draw();
	}
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
		cursorType = _Pole;
	}
	private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
		cursorType = _Peshka;
	}
	private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
		cursorType = _Ladya;
	}
	private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
		cursorType = _Slon;
	}
	private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
		cursorType = _Kon;
	}
	private: System::Void button11_Click(System::Object^ sender, System::EventArgs^ e) {
		cursorType = _Koroleva;
	}

		   //Прорисовка элемента в области 
	private: System::Void draw() {
		Graphics^ g = Graphics::FromImage(pictureBox1->Image);
		g->FillRectangle(gcnew SolidBrush(Color::White), 0, 0, pictureBox1->Width, pictureBox1->Height);
		drawingField.drawElement(g);
		pictureBox1->Invalidate();
	}
		   //ввод курсора 
	private: System::Void pictureBox1_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		isDown = true;
		DownPosition = Point(e->X, e->Y);
		PrevPosition = Point(e->X, e->Y);
		draw();

		switch (cursorType)
		{
		case _Cursor:
			movingElement = drawingField.findElement(e->X, e->Y);
			if (movingElement != nullptr)
			{
				switch (movingElement->type)
				{
				case _Kon:
					movingElement = (Kon^)movingElement;
					break;
				case _Korol:
					movingElement = (Korol^)movingElement;
					break;
				case _Koroleva:
					movingElement = (Koroleva^)movingElement;
					break;
				case _Ladya:
					movingElement = (Ladya^)movingElement;
					break;
				case _Peshka:
					movingElement = (Peshka^)movingElement;
					break;
				case _Pole:
					movingElement = (Pole^)movingElement;
					break;
				case _Slon:
					movingElement = (Slon^)movingElement;
					break;
				case _Black_Kon:
					movingElement = (Black_Kon^)movingElement;
					break;
				case _Black_Korol:
					movingElement = (Black_Korol^)movingElement;
					break;
				case _Black_Koroleva:
					movingElement = (Black_Koroleva^)movingElement;
					break;
				case _Black_Ladya:
					movingElement = (Black_Ladya^)movingElement;
					break;
				case _Black_Peshka:
					movingElement = (Black_Peshka^)movingElement;
					break;
				case _Black_Slon:
					movingElement = (Black_Slon^)movingElement;
					break;
				}
			}
			break;

		case _Delete:
			deletingElement = drawingField.findElement(e->X, e->Y);
			if (deletingElement != nullptr)
				drawingField.deleteElement(deletingElement);
			deletingElement = nullptr;
			break;
		case _Kon:
			newKon = gcnew Kon(DownPosition);
			newKon->draw(Graphics::FromImage(pictureBox1->Image));
			break;
		case _Korol:
			newKorol = gcnew Korol(DownPosition);
			newKorol->draw(Graphics::FromImage(pictureBox1->Image));
			break;
		case _Koroleva:
			newKoroleva = gcnew Koroleva(DownPosition);
			newKoroleva->draw(Graphics::FromImage(pictureBox1->Image));
			break;
		case _Ladya:
			newLadya = gcnew Ladya(DownPosition);
			newLadya->draw(Graphics::FromImage(pictureBox1->Image));
			break;
		case _Peshka:
			newPeshka = gcnew Peshka(DownPosition);
			newPeshka->draw(Graphics::FromImage(pictureBox1->Image));
			break;
		case _Pole:
			newPole = gcnew Pole(DownPosition);
			newPole->draw(Graphics::FromImage(pictureBox1->Image));
			break;
		case _Slon:
			newSlon = gcnew Slon(DownPosition);
			newSlon->draw(Graphics::FromImage(pictureBox1->Image));
			break;
		case _Black_Kon:
			newBlack_Kon = gcnew Black_Kon(DownPosition);
			newBlack_Kon->draw(Graphics::FromImage(pictureBox1->Image));
			break;
		case _Black_Korol:
			newBlack_Korol = gcnew Black_Korol(DownPosition);
			newBlack_Korol->draw(Graphics::FromImage(pictureBox1->Image));
			break;
		case _Black_Koroleva:
			newBlack_Koroleva = gcnew Black_Koroleva(DownPosition);
			newBlack_Koroleva->draw(Graphics::FromImage(pictureBox1->Image));
			break;
		case _Black_Ladya:
			newBlack_Ladya = gcnew Black_Ladya(DownPosition);
			newBlack_Ladya->draw(Graphics::FromImage(pictureBox1->Image));
			break;
		case _Black_Peshka:
			newBlack_Peshka = gcnew Black_Peshka(DownPosition);
			newBlack_Peshka->draw(Graphics::FromImage(pictureBox1->Image));
			break;
		case _Black_Slon:
			newBlack_Slon = gcnew Black_Slon(DownPosition);
			newBlack_Slon->draw(Graphics::FromImage(pictureBox1->Image));
			break;
		}
		pictureBox1->Invalidate();
	}
		   //Пермещение в Box
	private: System::Void pictureBox1_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		if (isDown)
		{
			CurrentPosition = Point(e->X, e->Y);
			if (movingElement == nullptr) {
				draw();
				switch (cursorType)
				{
				case _Cursor:
					break;
				case _Kon:
					newKon = gcnew Kon(DownPosition);
					newKon->draw(Graphics::FromImage(pictureBox1->Image));
					break;
				case _Korol:
					newKorol = gcnew Korol(DownPosition);
					newKorol->draw(Graphics::FromImage(pictureBox1->Image));
					break;
				case _Koroleva:
					newKoroleva = gcnew Koroleva(DownPosition);
					newKoroleva->draw(Graphics::FromImage(pictureBox1->Image));
					break;
				case _Ladya:
					newLadya = gcnew Ladya(DownPosition);
					newLadya->draw(Graphics::FromImage(pictureBox1->Image));
					break;
				case _Peshka:
					newPeshka = gcnew Peshka(DownPosition);
					newPeshka->draw(Graphics::FromImage(pictureBox1->Image));
					break;
				case _Pole:
					newPole = gcnew Pole(DownPosition);
					newPole->draw(Graphics::FromImage(pictureBox1->Image));
					break;
				case _Slon:
					newSlon = gcnew Slon(DownPosition);
					newSlon->draw(Graphics::FromImage(pictureBox1->Image));
					break;
				case _Black_Kon:
					newBlack_Kon = gcnew Black_Kon(DownPosition);
					newBlack_Kon->draw(Graphics::FromImage(pictureBox1->Image));
					break;
				case _Black_Korol:
					newBlack_Korol = gcnew Black_Korol(DownPosition);
					newBlack_Korol->draw(Graphics::FromImage(pictureBox1->Image));
					break;
				case _Black_Koroleva:
					newBlack_Koroleva = gcnew Black_Koroleva(DownPosition);
					newBlack_Koroleva->draw(Graphics::FromImage(pictureBox1->Image));
					break;
				case _Black_Ladya:
					newBlack_Ladya = gcnew Black_Ladya(DownPosition);
					newBlack_Ladya->draw(Graphics::FromImage(pictureBox1->Image));
					break;
				case _Black_Peshka:
					newBlack_Peshka = gcnew Black_Peshka(DownPosition);
					newBlack_Peshka->draw(Graphics::FromImage(pictureBox1->Image));
					break;
				case _Black_Slon:
					newBlack_Slon = gcnew Black_Slon(DownPosition);
					newBlack_Slon->draw(Graphics::FromImage(pictureBox1->Image));
					break;
				}
			}
			else
			{
				changemovingElementPosition();
				draw();
				movingElement->draw(Graphics::FromImage(pictureBox1->Image));
				PrevPosition = CurrentPosition;
			}
			pictureBox1->Invalidate();
		}
	}
		   //Вывод из области
	private: System::Void pictureBox1_MouseUp(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		isDown = false;
		switch (cursorType)
		{
		case _Cursor:
			if (movingElement != nullptr) {
				drawingField.addElement(movingElement);
				movingElement = nullptr;
			}
			break;
		case _Kon:
			drawingField.addElement(newKon);
			break;
		case _Korol:
			drawingField.addElement(newKorol);
			break;
		case _Koroleva:
			drawingField.addElement(newKoroleva);
			break;
		case _Ladya:
			drawingField.addElement(newLadya);
			break;
		case _Peshka:
			drawingField.addElement(newPeshka);
			break;
		case _Pole:
			drawingField.addElement(newPole);
			break;
		case _Slon:
			drawingField.addElement(newSlon);
			break;
		case _Black_Kon:
			drawingField.addElement(newBlack_Kon);
			break;
		case _Black_Korol:
			drawingField.addElement(newBlack_Korol);
			break;
		case _Black_Koroleva:
			drawingField.addElement(newBlack_Koroleva);
			break;
		case _Black_Ladya:
			drawingField.addElement(newBlack_Ladya);
			break;
		case _Black_Peshka:
			drawingField.addElement(newBlack_Peshka);
			break;
		case _Black_Slon:
			drawingField.addElement(newBlack_Slon);
			break;
		}
		draw();
	}
		   //Смена местоположения
	private: System::Void changemovingElementPosition()
	{
		Point p1;
		Point p2;
		int dX = CurrentPosition.X - PrevPosition.X;
		int dY = CurrentPosition.Y - PrevPosition.Y;
		switch (movingElement->type)
		{

		case _Kon:
			p1 = ((Kon^)movingElement)->getKon();
			if (p1.X + dX < 0 || p1.X + dX > pictureBox1->Width || p1.Y + dY < 0 || p1.Y + dY > pictureBox1->Height)
				return;
			p1.X = p1.X + dX;
			p1.Y = p1.Y + dY;
			((Kon^)movingElement)->setKon(p1);
			break;
		case _Korol:
			p1 = ((Korol^)movingElement)->getKorol();
			if (p1.X + dX < 0 || p1.X + dX > pictureBox1->Width || p1.Y + dY < 0 || p1.Y + dY > pictureBox1->Height)
				return;
			p1.X = p1.X + dX;
			p1.Y = p1.Y + dY;
			((Korol^)movingElement)->setKorol(p1);
			break;
		case _Koroleva:
			p1 = ((Koroleva^)movingElement)->getKoroleva();
			if (p1.X + dX < 0 || p1.X + dX > pictureBox1->Width || p1.Y + dY < 0 || p1.Y + dY > pictureBox1->Height)
				return;
			p1.X = p1.X + dX;
			p1.Y = p1.Y + dY;
			((Koroleva^)movingElement)->setKoroleva(p1);
			break;
		case _Ladya:
			p1 = ((Ladya^)movingElement)->getLadya();
			if (p1.X + dX < 0 || p1.X + dX > pictureBox1->Width || p1.Y + dY < 0 || p1.Y + dY > pictureBox1->Height)
				return;
			p1.X = p1.X + dX;
			p1.Y = p1.Y + dY;
			((Ladya^)movingElement)->setLadya(p1);
			break;
		case _Peshka:
			p1 = ((Peshka^)movingElement)->getPeshka();
			if (p1.X + dX < 0 || p1.X + dX > pictureBox1->Width || p1.Y + dY < 0 || p1.Y + dY > pictureBox1->Height)
				return;
			p1.X = p1.X + dX;
			p1.Y = p1.Y + dY;
			((Peshka^)movingElement)->setPeshka(p1);
			break;
		case _Pole:
			p1 = ((Pole^)movingElement)->getPole();
			if (p1.X + dX < 0 || p1.X + dX > pictureBox1->Width || p1.Y + dY < 0 || p1.Y + dY > pictureBox1->Height)
				return;
			p1.X = p1.X + dX;
			p1.Y = p1.Y + dY;
			((Pole^)movingElement)->setPole(p1);
			break;
		case _Slon:
			p1 = ((Slon^)movingElement)->getSlon();
			if (p1.X + dX < 0 || p1.X + dX > pictureBox1->Width || p1.Y + dY < 0 || p1.Y + dY > pictureBox1->Height)
				return;
			p1.X = p1.X + dX;
			p1.Y = p1.Y + dY;
			((Slon^)movingElement)->setSlon(p1);
			break;
		case _Black_Kon:
			p1 = ((Black_Kon^)movingElement)->getBlack_Kon();
			if (p1.X + dX < 0 || p1.X + dX > pictureBox1->Width || p1.Y + dY < 0 || p1.Y + dY > pictureBox1->Height)
				return;
			p1.X = p1.X + dX;
			p1.Y = p1.Y + dY;
			((Black_Kon^)movingElement)->setBlack_Kon(p1);
			break;
		case _Black_Korol:
			p1 = ((Black_Korol^)movingElement)->getBlack_Korol();
			if (p1.X + dX < 0 || p1.X + dX > pictureBox1->Width || p1.Y + dY < 0 || p1.Y + dY > pictureBox1->Height)
				return;
			p1.X = p1.X + dX;
			p1.Y = p1.Y + dY;
			((Black_Korol^)movingElement)->setBlack_Korol(p1);
			break;
		case _Black_Koroleva:
			p1 = ((Black_Koroleva^)movingElement)->getBlack_Koroleva();
			if (p1.X + dX < 0 || p1.X + dX > pictureBox1->Width || p1.Y + dY < 0 || p1.Y + dY > pictureBox1->Height)
				return;
			p1.X = p1.X + dX;
			p1.Y = p1.Y + dY;
			((Black_Koroleva^)movingElement)->setBlack_Koroleva(p1);
			break;
		case _Black_Ladya:
			p1 = ((Black_Ladya^)movingElement)->getBlack_Ladya();
			if (p1.X + dX < 0 || p1.X + dX > pictureBox1->Width || p1.Y + dY < 0 || p1.Y + dY > pictureBox1->Height)
				return;
			p1.X = p1.X + dX;
			p1.Y = p1.Y + dY;
			((Black_Ladya^)movingElement)->setBlack_Ladya(p1);
			break;
		case _Black_Peshka:
			p1 = ((Black_Peshka^)movingElement)->getBlack_Peshka();
			if (p1.X + dX < 0 || p1.X + dX > pictureBox1->Width || p1.Y + dY < 0 || p1.Y + dY > pictureBox1->Height)
				return;
			p1.X = p1.X + dX;
			p1.Y = p1.Y + dY;
			((Black_Peshka^)movingElement)->setBlack_Peshka(p1);
			break;
		case _Black_Slon:
			p1 = ((Black_Slon^)movingElement)->getBlack_Slon();
			if (p1.X + dX < 0 || p1.X + dX > pictureBox1->Width || p1.Y + dY < 0 || p1.Y + dY > pictureBox1->Height)
				return;
			p1.X = p1.X + dX;
			p1.Y = p1.Y + dY;
			((Black_Slon^)movingElement)->setBlack_Slon(p1);
			break;
			break;
		}
	}
	private: System::Void pictureBox1_Click_1(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void pictureBox2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button12_Click(System::Object^ sender, System::EventArgs^ e) {
		cursorType = _Black_Peshka;
	}
	private: System::Void button13_Click(System::Object^ sender, System::EventArgs^ e) {
		cursorType = _Black_Ladya;
	}
	private: System::Void button14_Click(System::Object^ sender, System::EventArgs^ e) {
		cursorType = _Black_Slon;
	}
	private: System::Void button15_Click(System::Object^ sender, System::EventArgs^ e) {
		cursorType = _Black_Kon;
	}
	private: System::Void button16_Click(System::Object^ sender, System::EventArgs^ e) {
		cursorType = _Black_Korol;
	}
	private: System::Void button17_Click(System::Object^ sender, System::EventArgs^ e) {
		cursorType = _Black_Koroleva;
	}
	};
}
