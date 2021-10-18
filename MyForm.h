#pragma once
#include "Pila.h"
#include "Cole.h"

int size = 0;
int sizecola = 0;
int sizecola1 = 0;
char VectDesc[12] = { '-','d','e','s','c','o','n','o','c','i','d','o' };

namespace Proyecto1FranciscoPuga1183819 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	Pila* pila1 = new Pila();
	Cole* cola1 = new Cole();
	Cole* cola2 = new Cole();

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
	private: System::Windows::Forms::RichTextBox^ rtbPlaylist;
	protected:
	private: System::Windows::Forms::RichTextBox^ rtbCola;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ btnImplay;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ labRepro;

	private: System::Windows::Forms::OpenFileDialog^ OpenFile;
	private: System::Windows::Forms::ComboBox^ cbxActions;
	private: System::Windows::Forms::Label^ labAct;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ btnNext;
	private: System::Windows::Forms::Label^ lblIndice;
	private: System::Windows::Forms::TextBox^ tbxCola;
	private: System::Windows::Forms::Button^ btnCola;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->rtbPlaylist = (gcnew System::Windows::Forms::RichTextBox());
			this->rtbCola = (gcnew System::Windows::Forms::RichTextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->btnImplay = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->labRepro = (gcnew System::Windows::Forms::Label());
			this->OpenFile = (gcnew System::Windows::Forms::OpenFileDialog());
			this->cbxActions = (gcnew System::Windows::Forms::ComboBox());
			this->labAct = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->btnNext = (gcnew System::Windows::Forms::Button());
			this->lblIndice = (gcnew System::Windows::Forms::Label());
			this->tbxCola = (gcnew System::Windows::Forms::TextBox());
			this->btnCola = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// rtbPlaylist
			// 
			this->rtbPlaylist->Location = System::Drawing::Point(189, 205);
			this->rtbPlaylist->Name = L"rtbPlaylist";
			this->rtbPlaylist->Size = System::Drawing::Size(271, 297);
			this->rtbPlaylist->TabIndex = 2;
			this->rtbPlaylist->Text = L"";
			this->rtbPlaylist->Visible = false;
			// 
			// rtbCola
			// 
			this->rtbCola->Location = System::Drawing::Point(693, 205);
			this->rtbCola->Name = L"rtbCola";
			this->rtbCola->Size = System::Drawing::Size(238, 297);
			this->rtbCola->TabIndex = 5;
			this->rtbCola->Text = L"";
			this->rtbCola->Visible = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::LimeGreen;
			this->label1->Location = System::Drawing::Point(12, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(473, 13);
			this->label1->TabIndex = 6;
			this->label1->Text = L"Si no puede escuchar la musica, es debido a reclamaciones por violacion de los de"
				L"rechos de autor";
			this->label1->Visible = false;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::LimeGreen;
			this->label2->Font = (gcnew System::Drawing::Font(L"Neuropol", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(755, 164);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(110, 38);
			this->label2->TabIndex = 7;
			this->label2->Text = L"Cola";
			this->label2->Visible = false;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::LimeGreen;
			this->label3->Font = (gcnew System::Drawing::Font(L"Neuropol", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(239, 164);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(168, 38);
			this->label3->TabIndex = 8;
			this->label3->Text = L"Playlist";
			this->label3->Visible = false;
			// 
			// btnImplay
			// 
			this->btnImplay->BackColor = System::Drawing::Color::LimeGreen;
			this->btnImplay->Font = (gcnew System::Drawing::Font(L"Neuropol", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnImplay->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->btnImplay->Location = System::Drawing::Point(505, 78);
			this->btnImplay->Name = L"btnImplay";
			this->btnImplay->Size = System::Drawing::Size(143, 77);
			this->btnImplay->TabIndex = 9;
			this->btnImplay->Text = L"Importar Playlist";
			this->btnImplay->UseVisualStyleBackColor = false;
			this->btnImplay->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Impact", 24, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::LimeGreen;
			this->label4->Location = System::Drawing::Point(483, 215);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(178, 39);
			this->label4->TabIndex = 10;
			this->label4->Text = L"---------------->";
			this->label4->Visible = false;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"Impact", 24, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::LimeGreen;
			this->label5->Location = System::Drawing::Point(483, 463);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(178, 39);
			this->label5->TabIndex = 11;
			this->label5->Text = L"---------------->";
			this->label5->Visible = false;
			// 
			// labRepro
			// 
			this->labRepro->AutoSize = true;
			this->labRepro->BackColor = System::Drawing::Color::Transparent;
			this->labRepro->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labRepro->ForeColor = System::Drawing::Color::LimeGreen;
			this->labRepro->Location = System::Drawing::Point(219, 560);
			this->labRepro->Name = L"labRepro";
			this->labRepro->Size = System::Drawing::Size(275, 39);
			this->labRepro->TabIndex = 12;
			this->labRepro->Text = L"Reproduciendo:";
			this->labRepro->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->labRepro->Visible = false;
			// 
			// OpenFile
			// 
			this->OpenFile->FileName = L"openFileDialog1";
			this->OpenFile->Filter = L"Archivos csv(*.csv)|*.csv";
			this->OpenFile->FileOk += gcnew System::ComponentModel::CancelEventHandler(this, &MyForm::OpenFile_FileOk);
			// 
			// cbxActions
			// 
			this->cbxActions->FormattingEnabled = true;
			this->cbxActions->Items->AddRange(gcnew cli::array< System::Object^  >(6) {
				L"Cambiar de cancion", L"Agregar a cola", L"Ordenar por Artista",
					L"Ordenar por Canción", L"Exportar", L"Eliminar de la cola"
			});
			this->cbxActions->Location = System::Drawing::Point(246, 631);
			this->cbxActions->Name = L"cbxActions";
			this->cbxActions->Size = System::Drawing::Size(121, 21);
			this->cbxActions->TabIndex = 13;
			this->cbxActions->Visible = false;
			// 
			// labAct
			// 
			this->labAct->AutoSize = true;
			this->labAct->BackColor = System::Drawing::Color::Transparent;
			this->labAct->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labAct->ForeColor = System::Drawing::Color::LimeGreen;
			this->labAct->Location = System::Drawing::Point(125, 628);
			this->labAct->Name = L"labAct";
			this->labAct->Size = System::Drawing::Size(115, 25);
			this->labAct->TabIndex = 14;
			this->labAct->Text = L"Acciones:";
			this->labAct->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->labAct->Visible = false;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::LimeGreen;
			this->button1->Location = System::Drawing::Point(1114, 699);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 15;
			this->button1->Text = L"Salir";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click_1);
			// 
			// btnNext
			// 
			this->btnNext->BackColor = System::Drawing::Color::LimeGreen;
			this->btnNext->Location = System::Drawing::Point(846, 632);
			this->btnNext->Name = L"btnNext";
			this->btnNext->Size = System::Drawing::Size(131, 23);
			this->btnNext->TabIndex = 16;
			this->btnNext->Text = L"Siguiente canción";
			this->btnNext->UseVisualStyleBackColor = false;
			this->btnNext->Visible = false;
			this->btnNext->Click += gcnew System::EventHandler(this, &MyForm::btnNext_Click);
			// 
			// lblIndice
			// 
			this->lblIndice->AutoSize = true;
			this->lblIndice->BackColor = System::Drawing::Color::LimeGreen;
			this->lblIndice->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblIndice->Location = System::Drawing::Point(659, 635);
			this->lblIndice->Name = L"lblIndice";
			this->lblIndice->Size = System::Drawing::Size(49, 18);
			this->lblIndice->TabIndex = 18;
			this->lblIndice->Text = L"Índice";
			this->lblIndice->Visible = false;
			// 
			// tbxCola
			// 
			this->tbxCola->Location = System::Drawing::Point(711, 635);
			this->tbxCola->Name = L"tbxCola";
			this->tbxCola->Size = System::Drawing::Size(116, 20);
			this->tbxCola->TabIndex = 17;
			this->tbxCola->Text = L" ";
			this->tbxCola->Visible = false;
			this->tbxCola->WordWrap = false;
			// 
			// btnCola
			// 
			this->btnCola->BackColor = System::Drawing::Color::LimeGreen;
			this->btnCola->Location = System::Drawing::Point(932, 591);
			this->btnCola->Name = L"btnCola";
			this->btnCola->Size = System::Drawing::Size(133, 23);
			this->btnCola->TabIndex = 19;
			this->btnCola->Text = L"Agregar a cola";
			this->btnCola->UseVisualStyleBackColor = false;
			this->btnCola->Visible = false;
			this->btnCola->Click += gcnew System::EventHandler(this, &MyForm::btnCola_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Green;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1201, 734);
			this->Controls->Add(this->btnCola);
			this->Controls->Add(this->lblIndice);
			this->Controls->Add(this->tbxCola);
			this->Controls->Add(this->btnNext);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->labAct);
			this->Controls->Add(this->cbxActions);
			this->Controls->Add(this->labRepro);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->btnImplay);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->rtbCola);
			this->Controls->Add(this->rtbPlaylist);
			this->Name = L"MyForm";
			this->Text = L"SNOTIFY";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		void StatusPile() {
			rtbPlaylist->Text = " ";
			labRepro->Text = "Reproduciendo: ";
			for (int h = 0; h < 100; h++)
			{

				if (pila1->songTop(pila1, h, 0) != 46)
				{
					labRepro->Text += ConvAsc(Convert::ToInt32(pila1->songTop(pila1, h, 0))); 
				}




			}
			for (int i = 0; i < 100; i++)
			{
				if (pila1->artistTop(pila1, i, 0) != 46)
				{
					labRepro->Text += ConvAsc(Convert::ToInt32(pila1->artistTop(pila1, i, 0)));
				}

			}

			for (int j = 0; j < size; j++)
			{
				rtbPlaylist->Text += (j + 1) + "-";
				for (int h = 0; h < 100; h++)
				{

					if (pila1->songTop(pila1, h, j) != 46)
					{
						rtbPlaylist->Text += ConvAsc(Convert::ToInt32(pila1->songTop(pila1, h, j)));
					}




				}
				for (int i = 0; i < 100; i++)
				{
					if (pila1->artistTop(pila1, i, j) != 46)
					{
						rtbPlaylist->Text += ConvAsc(Convert::ToInt32(pila1->artistTop(pila1, i, j)));
					}

				}
				rtbPlaylist->Text += "\n";
			}
	    }

		void ApplyCol()
		{
			char song[100];
			char artist[100];

			for (int i = 0; i < 100; i++)
			{
				song[i] = Convert::ToChar(pila1->songTop(pila1, i, 0));
				artist[i] = Convert::ToChar(pila1->artistTop(pila1, i, 0));
			}

			cola1 = cola1->AddTop(cola1, song, artist);

		}

		void ApplyPila()
		{
			char song[100];
			char artist[100];
			for (int j = 0; j < sizecola; j++)
			{
				for (int i = 0; i < 100; i++)
				{
					song[i] = Convert::ToChar(cola1->songTop(cola1, i, 0));
					artist[i] = Convert::ToChar(cola1->artistTop(cola1, i, 0));
				}

				pila1 = pila1->Apilar(pila1, song, artist);
				cola1 = cola1->DelTop(cola1);
				size++;

			}
			sizecola = 0;

		}

		void StatusCola1()
		{
			rtbPlaylist->Text += "\n\n\n***Canciones ya reproducidas***\n ";

			for (int j = 0; j < sizecola; j++)
			{
				rtbPlaylist->Text += (j + 1) + "-";
				for (int h = 0; h < 100; h++)
				{

					if (cola1->songTop(cola1, h, j) != 46)
					{
						rtbPlaylist->Text += ConvAsc(Convert::ToInt32(cola1->songTop(cola1, h, j)));
					}


				}
				for (int i = 0; i < 100; i++)
				{
					if (cola1->artistTop(cola1, i, j) != 46)
					{
						rtbPlaylist->Text += ConvAsc(Convert::ToInt32(cola1->artistTop(cola1, i, j)));
					}

				}
				rtbPlaylist->Text += "\n";
			}
		}

		void StatusCola2()
		{
			rtbCola->Text = " ";

			for (int j = 0; j < sizecola1; j++)
			{
				rtbCola->Text += (j + 1) + "-";
				for (int h = 0; h < 100; h++)
				{

					if (cola2->songTop(cola2, h, j) != 46)
					{
						rtbCola->Text += ConvAsc(Convert::ToInt32(cola2->songTop(cola2, h, j))); 
					}


				}
				for (int i = 0; i < 100; i++)
				{
					if (cola2->artistTop(cola2, i, j) != 46)
					{
						rtbCola->Text += ConvAsc(Convert::ToInt32(cola2->artistTop(cola2, i, j)));
					}

				}
				rtbCola->Text += "\n";
			}
		}

	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		if (OpenFile->ShowDialog() == System::Windows::Forms::DialogResult::OK) {

			String^ files;
			String^ words;

			files = OpenFile->FileName;
			array<String^>^ lines = File::ReadAllLines(files);

			for (int i = 0; i < lines->Length; i++) {

				array<String^>^ read = lines[i]->Split(',');
				size += read->Length;
				char wordsong[100];
				char artistn[100];

				for (int j = 0; j < read->Length; j++) {
					for (int y = 0; y < 100; y++) {
						wordsong[100] = ',';
						artistn[100] = ',';
					}

					int aux = 0;
					int vart = 0;
					words = read[j];

					for (int l = 0; l < words->Length; l++) {
						if (words[l].ToString() == "-" && aux == 0)
						{
							aux = 1;
						}

						if (aux == 1) {
							artistn[vart] = Convert::ToChar(words[l]);
							vart++;
						}
						else {
							wordsong[l] = Convert::ToChar(words[l]);
						}

					}

					if (artistn[0] != 46) {

					}
					else {
						for (int x = 0; x < 12; x++) {
							artistn[x] = VectDesc[x];
						}
					}

					pila1 = pila1->Apilar(pila1, wordsong, artistn);

				}
			}

			StatusPile();
			btnImplay->Hide();
			labRepro->Show();
			cbxActions->Show();
			labAct->Show();
			rtbCola->Show();
			rtbPlaylist->Show();
			label5->Show();
			label4->Show();
			label3->Show();
			label2->Show();
			label1->Show();


		}
		else {
			MessageBox::Show("Documento no seleccionado");
		}
		

	}
private: System::Void OpenFile_FileOk(System::Object^ sender, System::ComponentModel::CancelEventArgs^ e) {
	OpenFile->Filter = "Archivos csv(*.csv)|*.csv";
}
private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) {
	System::Environment::Exit(0);
}
	   Char ConvAsc(int vect)
	   {



		   switch (vect)
		   {
		   case 65:
		   {
			   return 'A';
			   break;
		   }
		   case 66:
		   {
			   return 'B';
			   break;
		   }
		   case 67:
		   {
			   return 'C';
			   break;
		   }
		   case 68:
		   {
			   return 'D';
			   break;
		   }
		   case 69:
		   {
			   return 'E';
			   break;
		   }
		   case 70:
		   {
			   return 'F';
			   break;
		   }
		   case 71:
		   {
			   return 'G';
			   break;
		   }
		   case 72:
		   {
			   return 'H';
			   break;
		   }
		   case 73:
		   {
			   return 'I';
			   break;
		   }
		   case 74:
		   {
			   return 'J';
			   break;
		   }
		   case 75:
		   {
			   return 'K';
			   break;
		   }
		   case 76:
		   {
			   return 'L';
			   break;
		   }
		   case 77:
		   {
			   return 'M';
			   break;
		   }
		   case 78:
		   {
			   return 'N';
			   break;
		   }
		   case 79:
		   {
			   return 'O';
			   break;
		   }
		   case 80:
		   {
			   return 'P';
			   break;
		   }
		   case 81:
		   {
			   return 'Q';
			   break;
		   }
		   case 82:
		   {
			   return 'R';
			   break;
		   }
		   case 83:
		   {
			   return 'S';
			   break;
		   }
		   case 84:
		   {
			   return 'T';
			   break;
		   }
		   case 85:
		   {
			   return 'U';
			   break;
		   }
		   case 86:
		   {
			   return 'V';
			   break;
		   }
		   case 87:
		   {
			   return 'W';
			   break;
		   }
		   case 88:
		   {
			   return 'X';
			   break;
		   }
		   case 89:
		   {
			   return 'Y';
			   break;
		   }
		   case 90:
		   {
			   return 'Z';
			   break;
		   }
		   case 45:
		   {
			   return '-';
			   break;
		   }
		   case 97:
		   {
			   return 'a';
			   break;
		   }
		   case 98:
		   {
			   return 'b';
			   break;
		   }
		   case 99:
		   {
			   return 'c';
			   break;
		   }
		   case 100:
		   {
			   return 'd';
			   break;
		   }
		   case 101:
		   {
			   return 'e';
			   break;
		   }
		   case 102:
		   {
			   return 'f';
			   break;
		   }
		   case 103:
		   {
			   return 'g';
			   break;
		   }
		   case 104:
		   {
			   return 'h';
			   break;
		   }
		   case 105:
		   {
			   return 'i';
			   break;
		   }
		   case 106:
		   {
			   return 'j';
			   break;
		   }
		   case 107:
		   {
			   return 'k';
			   break;
		   }
		   case 108:
		   {
			   return 'l';
			   break;
		   }
		   case 109:
		   {
			   return 'm';
			   break;
		   }
		   case 110:
		   {
			   return 'n';
			   break;
		   }
		   case 111:
		   {
			   return 'o';
			   break;
		   }
		   case 112:
		   {
			   return 'p';
			   break;
		   }
		   case 113:
		   {
			   return 'q';
			   break;
		   }
		   case 114:
		   {
			   return 'r';
			   break;
		   }
		   case 115:
		   {
			   return 's';
			   break;
		   }
		   case 116:
		   {
			   return 't';
			   break;
		   }
		   case 117:
		   {
			   return 'u';
			   break;
		   }
		   case 118:
		   {
			   return 'v';
			   break;
		   }
		   case 119:
		   {
			   return 'w';
			   break;
		   }
		   case 120:
		   {
			   return 'x';
			   break;
		   }
		   case 121:
		   {
			   return 'y';
			   break;
		   }
		   case 122:
		   {
			   return 'z';
			   break;
		   }
		   case 160:
		   {
			   return 'á';
			   break;
		   }
		   case 130:
		   {
			   return 'é';
			   break;
		   }
		   case 161:
		   {
			   return 'í';
			   break;
		   }
		   case 162:
		   {
			   return 'ó';
			   break;
		   }
		   case 163:
		   {
			   return 'ú';
			   break;
		   }
		   case 181:
		   {
			   return 'Á';
			   break;
		   }
		   case 144:
		   {
			   return 'É';
			   break;
		   }
		   case 214:
		   {
			   return 'Í';
			   break;
		   }
		   case 224:
		   {
			   return 'Ó';
			   break;
		   }
		   case 233:
		   {
			   return 'Ú';
			   break;
		   }
		   case 32:
		   {
			   return ' ';
			   break;
		   }
		   case 10:
		   {
			   return '\n';
			   break;
		   }
		   case 48:
		   {
			   return '0';
			   break;
		   }
		   case 49:
		   {
			   return '1';
			   break;
		   }
		   case 50:
		   {
			   return '2';
			   break;
		   }
		   case 51:
		   {
			   return '3';
			   break;

		   }
		   case 52:
		   {
			   return '4';
			   break;
		   }
		   case 53:
		   {
			   return '5';
			   break;
		   }
		   case 54:
		   {
			   return '6';
			   break;
		   }
		   case 55:
		   {
			   return '7';
			   break;
		   }
		   case 56:
		   {
			   return '8';
			   break;
		   }
		   case 57:
		   {
			   return '9';
			   break;
		   }
		   default:
			   return ' ';
			   break;
		   }

	   }

private: System::Void btnNext_Click(System::Object^ sender, System::EventArgs^ e) {
	labRepro->Text = "Reproduciendo: ";
	if (sizecola1 != 0){
		for (int h = 0; h < 100; h++) {

			if (cola2->songTop(cola2, h, 0) != 46) {
				labRepro->Text += ConvAsc(Convert::ToInt32(cola2->songTop(cola2, h, 0))); 
			}


		}
		for (int i = 0; i < 100; i++) {
			if (cola2->artistTop(cola2, i, 0) != 46){
				labRepro->Text += ConvAsc(Convert::ToInt32(cola2->artistTop(cola2, i, 0)));
			}

		}

		cola2 = cola2->DelTop(cola2);
		sizecola1--;
		StatusCola1();
	}
	else {
		if (size == 0) {
			rtbPlaylist->Text = "No hay cancioned en la cola.\n Se reiniciará";
			ApplyPila();
			StatusPile();


		}
		else {
			rtbPlaylist->Clear();
			size--;
			sizecola++;
			ApplyCol();

			pila1 = pila1->Desapilar(pila1);

			StatusPile();

		StatusCola1();
		}

	}
}
private: System::Void btnCola_Click(System::Object^ sender, System::EventArgs^ e) {
	char song[100];
	char artist[100];
	int indice;

	indice = Convert::ToInt32(tbxCola->Text);



	if (indice > size) {
		MessageBox::Show("El indice ingresado no se encuentra.");
	}
	else {
		for (int i = 0; i < 100; i++) {
			song[i] = pila1->songTop(pila1, i, indice - 1);
			artist[i] = pila1->artistTop(pila1, i, indice - 1);
		}

		cola2 = cola2->AddTop(cola2, song, artist);
		sizecola1++;
		StatusCola2();
	}
}
};
}
