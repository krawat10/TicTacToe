#pragma once

namespace TicTacToe {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Game
	/// </summary>
	public ref class Game : public System::Windows::Forms::Form
	{
		bool win = false;
		bool clicked = true;
		int xScore = 0;
		int oScore = 0;
		String^ winner;
	public:
		Game(void)
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
		~Game()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  labelX;
	protected:
	private: System::Windows::Forms::Label^  labelY;
	private: System::Windows::Forms::Label^  labelXpoint;
	private: System::Windows::Forms::Label^  labelOpoint;

	private: System::Windows::Forms::Button^  buttonReset;
	private: System::Windows::Forms::Button^  buttonStart;
	private: System::Windows::Forms::PictureBox^  A1;
	private: System::Windows::Forms::PictureBox^  B1;
	private: System::Windows::Forms::PictureBox^  C1;
	private: System::Windows::Forms::PictureBox^  C2;




	private: System::Windows::Forms::PictureBox^  B2;

	private: System::Windows::Forms::PictureBox^  A2;
	private: System::Windows::Forms::PictureBox^  C3;


	private: System::Windows::Forms::PictureBox^  B3;

	private: System::Windows::Forms::PictureBox^  A3;

	private: System::Windows::Forms::ImageList^  imageList1;
	private: System::ComponentModel::IContainer^  components;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Game::typeid));
			this->labelX = (gcnew System::Windows::Forms::Label());
			this->labelY = (gcnew System::Windows::Forms::Label());
			this->labelXpoint = (gcnew System::Windows::Forms::Label());
			this->labelOpoint = (gcnew System::Windows::Forms::Label());
			this->buttonReset = (gcnew System::Windows::Forms::Button());
			this->buttonStart = (gcnew System::Windows::Forms::Button());
			this->A1 = (gcnew System::Windows::Forms::PictureBox());
			this->B1 = (gcnew System::Windows::Forms::PictureBox());
			this->C1 = (gcnew System::Windows::Forms::PictureBox());
			this->C2 = (gcnew System::Windows::Forms::PictureBox());
			this->B2 = (gcnew System::Windows::Forms::PictureBox());
			this->A2 = (gcnew System::Windows::Forms::PictureBox());
			this->C3 = (gcnew System::Windows::Forms::PictureBox());
			this->B3 = (gcnew System::Windows::Forms::PictureBox());
			this->A3 = (gcnew System::Windows::Forms::PictureBox());
			this->imageList1 = (gcnew System::Windows::Forms::ImageList(this->components));
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->C1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->C2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->C3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A3))->BeginInit();
			this->SuspendLayout();
			// 
			// labelX
			// 
			this->labelX->AutoSize = true;
			this->labelX->Location = System::Drawing::Point(13, 13);
			this->labelX->Name = L"labelX";
			this->labelX->Size = System::Drawing::Size(63, 13);
			this->labelX->TabIndex = 0;
			this->labelX->Text = L"Wygrane X:";
			// 
			// labelY
			// 
			this->labelY->AutoSize = true;
			this->labelY->Location = System::Drawing::Point(209, 13);
			this->labelY->Name = L"labelY";
			this->labelY->Size = System::Drawing::Size(63, 13);
			this->labelY->TabIndex = 1;
			this->labelY->Text = L"Wygrane Y:";
			// 
			// labelXpoint
			// 
			this->labelXpoint->AutoSize = true;
			this->labelXpoint->Location = System::Drawing::Point(16, 30);
			this->labelXpoint->Name = L"labelXpoint";
			this->labelXpoint->Size = System::Drawing::Size(13, 13);
			this->labelXpoint->TabIndex = 2;
			this->labelXpoint->Text = L"0";
			// 
			// labelOpoint
			// 
			this->labelOpoint->AutoSize = true;
			this->labelOpoint->Location = System::Drawing::Point(212, 30);
			this->labelOpoint->Name = L"labelOpoint";
			this->labelOpoint->Size = System::Drawing::Size(13, 13);
			this->labelOpoint->TabIndex = 3;
			this->labelOpoint->Text = L"0";
			// 
			// buttonReset
			// 
			this->buttonReset->Location = System::Drawing::Point(19, 376);
			this->buttonReset->Name = L"buttonReset";
			this->buttonReset->Size = System::Drawing::Size(75, 23);
			this->buttonReset->TabIndex = 4;
			this->buttonReset->Text = L"Reset";
			this->buttonReset->UseVisualStyleBackColor = true;
			this->buttonReset->Click += gcnew System::EventHandler(this, &Game::buttonReset_Click);
			// 
			// buttonStart
			// 
			this->buttonStart->Location = System::Drawing::Point(197, 376);
			this->buttonStart->Name = L"buttonStart";
			this->buttonStart->Size = System::Drawing::Size(75, 23);
			this->buttonStart->TabIndex = 5;
			this->buttonStart->Text = L"Start";
			this->buttonStart->UseVisualStyleBackColor = true;
			this->buttonStart->Click += gcnew System::EventHandler(this, &Game::buttonStart_Click);
			// 
			// A1
			// 
			this->A1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"A1.Image")));
			this->A1->Location = System::Drawing::Point(19, 71);
			this->A1->Name = L"A1";
			this->A1->Size = System::Drawing::Size(48, 60);
			this->A1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->A1->TabIndex = 6;
			this->A1->TabStop = false;
			this->A1->Tag = L"\?";
			this->A1->Click += gcnew System::EventHandler(this, &Game::Play);
			// 
			// B1
			// 
			this->B1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"B1.Image")));
			this->B1->Location = System::Drawing::Point(111, 61);
			this->B1->Name = L"B1";
			this->B1->Size = System::Drawing::Size(48, 60);
			this->B1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->B1->TabIndex = 7;
			this->B1->TabStop = false;
			this->B1->Tag = L"\?";
			this->B1->Click += gcnew System::EventHandler(this, &Game::Play);
			// 
			// C1
			// 
			this->C1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"C1.Image")));
			this->C1->Location = System::Drawing::Point(197, 61);
			this->C1->Name = L"C1";
			this->C1->Size = System::Drawing::Size(48, 60);
			this->C1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->C1->TabIndex = 8;
			this->C1->TabStop = false;
			this->C1->Tag = L"\?";
			this->C1->Click += gcnew System::EventHandler(this, &Game::Play);
			// 
			// C2
			// 
			this->C2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"C2.Image")));
			this->C2->Location = System::Drawing::Point(197, 157);
			this->C2->Name = L"C2";
			this->C2->Size = System::Drawing::Size(48, 60);
			this->C2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->C2->TabIndex = 11;
			this->C2->TabStop = false;
			this->C2->Tag = L"\?";
			this->C2->Click += gcnew System::EventHandler(this, &Game::Play);
			// 
			// B2
			// 
			this->B2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"B2.Image")));
			this->B2->Location = System::Drawing::Point(111, 157);
			this->B2->Name = L"B2";
			this->B2->Size = System::Drawing::Size(48, 60);
			this->B2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->B2->TabIndex = 10;
			this->B2->TabStop = false;
			this->B2->Tag = L"\?";
			this->B2->Click += gcnew System::EventHandler(this, &Game::Play);
			// 
			// A2
			// 
			this->A2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"A2.Image")));
			this->A2->Location = System::Drawing::Point(19, 167);
			this->A2->Name = L"A2";
			this->A2->Size = System::Drawing::Size(48, 60);
			this->A2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->A2->TabIndex = 9;
			this->A2->TabStop = false;
			this->A2->Tag = L"\?";
			this->A2->Click += gcnew System::EventHandler(this, &Game::Play);
			// 
			// C3
			// 
			this->C3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"C3.Image")));
			this->C3->Location = System::Drawing::Point(197, 255);
			this->C3->Name = L"C3";
			this->C3->Size = System::Drawing::Size(48, 60);
			this->C3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->C3->TabIndex = 14;
			this->C3->TabStop = false;
			this->C3->Tag = L"\?";
			this->C3->Click += gcnew System::EventHandler(this, &Game::Play);
			// 
			// B3
			// 
			this->B3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"B3.Image")));
			this->B3->Location = System::Drawing::Point(111, 255);
			this->B3->Name = L"B3";
			this->B3->Size = System::Drawing::Size(48, 60);
			this->B3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->B3->TabIndex = 13;
			this->B3->TabStop = false;
			this->B3->Tag = L"\?";
			this->B3->Click += gcnew System::EventHandler(this, &Game::Play);
			// 
			// A3
			// 
			this->A3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"A3.Image")));
			this->A3->Location = System::Drawing::Point(19, 265);
			this->A3->Name = L"A3";
			this->A3->Size = System::Drawing::Size(48, 60);
			this->A3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->A3->TabIndex = 12;
			this->A3->TabStop = false;
			this->A3->Tag = L"\?";
			this->A3->Click += gcnew System::EventHandler(this, &Game::Play);
			// 
			// imageList1
			// 
			this->imageList1->ImageStream = (cli::safe_cast<System::Windows::Forms::ImageListStreamer^>(resources->GetObject(L"imageList1.ImageStream")));
			this->imageList1->TransparentColor = System::Drawing::Color::Transparent;
			this->imageList1->Images->SetKeyName(0, L"kolko.png");
			this->imageList1->Images->SetKeyName(1, L"krzyzyk.png");
			this->imageList1->Images->SetKeyName(2, L"pytajnik.png");
			// 
			// Game
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(284, 411);
			this->Controls->Add(this->C3);
			this->Controls->Add(this->B3);
			this->Controls->Add(this->A3);
			this->Controls->Add(this->C2);
			this->Controls->Add(this->B2);
			this->Controls->Add(this->A2);
			this->Controls->Add(this->C1);
			this->Controls->Add(this->B1);
			this->Controls->Add(this->A1);
			this->Controls->Add(this->buttonStart);
			this->Controls->Add(this->buttonReset);
			this->Controls->Add(this->labelOpoint);
			this->Controls->Add(this->labelXpoint);
			this->Controls->Add(this->labelY);
			this->Controls->Add(this->labelX);
			this->Name = L"Game";
			this->Text = L"Game";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->C1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->C2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->C3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A3))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Play(System::Object^  sender, System::EventArgs^  e)
	{
		PictureBox^ picture = (PictureBox^)sender;
		if (clicked)
		{
			picture->Image = imageList1->Images[1];
			picture->Tag = "X";
		}
		else
		{
			picture->Image = imageList1->Images[0];
			picture->Tag = "O";
		}
		picture->Enabled = false;
		clicked = !clicked;
		wygrana();
	}
	private: Void wygrana()
	{
		//Win horizontal
		if ((A1->Tag == B1->Tag) && (B1->Tag == C1->Tag) && A1->Tag != "?") win = true;
		if ((A2->Tag == B2->Tag) && (B2->Tag == C2->Tag) && A2->Tag != "?") win = true;
		if ((A3->Tag == B3->Tag) && (B3->Tag == C3->Tag) && A3->Tag != "?") win = true;

		//Win vertical
		if ((A1->Tag == A2->Tag) && (A2->Tag == A3->Tag) && A1->Tag != "?") win = true;
		if ((B1->Tag == B2->Tag) && (B2->Tag == B3->Tag) && B1->Tag != "?") win = true;
		if ((C1->Tag == C2->Tag) && (C2->Tag == C3->Tag) && C1->Tag != "?") win = true;

		//Win X
		if ((A1->Tag == B2->Tag) && (B2->Tag == C3->Tag) && A1->Tag != "?") win = true;
		if ((A3->Tag == B2->Tag) && (B2->Tag == C1->Tag) && A3->Tag != "?") win = true;

		if (win)
		{
			for each (Control^ element in this->Controls)
			{
				if (element->GetType() == PictureBox::typeid)
				{
					element->Enabled = false;
				}
			}
			if (clicked)
			{
				oScore++;
				labelOpoint->Text = Convert::ToString(oScore);
				winner = "o";
			}
			else
			{
				xScore++;
				labelXpoint->Text = Convert::ToString(xScore);
				winner = "x";
			}
			MessageBox::Show("Wygrana " + winner, "Kó³ko i krzy¿yk", MessageBoxButtons::OK, MessageBoxIcon::Information);
			win = false;
		}
	}
	private: Void CleanFields()
	{
		for each (Control^ element in this->Controls)
		{
			try
			{
				PictureBox^ image = (PictureBox^)element;
				image->Enabled = true;
				image->Tag = "?";
				image->Image = imageList1->Images[2];
			}
			catch (...)
			{

			}
		}
	}
	private: System::Void buttonStart_Click(System::Object^  sender, System::EventArgs^  e)
	{
		CleanFields();
	}
	private: System::Void buttonReset_Click(System::Object^  sender, System::EventArgs^  e)
	{
		
			CleanFields();
			oScore = 0;
			xScore = 0;
			win = false;
			labelXpoint->Text = Convert::ToString(xScore);
			labelOpoint->Text = Convert::ToString(oScore);
		
	}
	};
}
