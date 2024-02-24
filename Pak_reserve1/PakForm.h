#pragma once

#using <mscorlib.dll>
#include <string>
#include <iostream>
#include <fstream>
#include <vector>
namespace Pakreserve1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;


	using namespace System::IO;




	/// <summary>
	/// Summary for PakForm
	/// </summary>


	public ref class PakForm : public System::Windows::Forms::Form
	{
	public:
		PakForm(void)
		{
			InitializeComponent();
			label1->Hide();
			label3->Hide();
			button1->Hide();

			A1Table2PGreen->Hide();
			A2Table2PGreen->Hide();
			A3Table2PGreen->Hide();
			B1Table2PGreen->Hide();
			B2Table4PGreen->Hide();
			B3Table4PGreen->Hide();
			B4Table4PGreen->Hide();
			C1Table2PGreen->Hide();
			C2Table2PGreen->Hide();
			C3Table2PGreen->Hide();
			D1Table4PGreen->Hide();
			D2Table4PGreen->Hide();
			D3Table4PGreen->Hide();
			E1Table2PGreen->Hide();
			E2Table2PGreen->Hide();
			E3Table2PGreen->Hide();
			F1Table4PGreen->Hide();
			F2Table4PGreen->Hide();
			F3Table4PGreen->Hide();
			G1Table2PGreen->Hide();
			G2Table2PGreen->Hide();
			G3Table2PGreen->Hide();
			H1Table1PGreen->Hide();
			H2Table1PGreen->Hide();
			H3Table1PGreen->Hide();
			H4Table1PGreen->Hide();
			H5Table1PGreen->Hide();
			H6Table1PGreen->Hide();
			H7Table1PGreen->Hide();

			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~PakForm()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::PictureBox^ ConfirmTableNo1;


	private: System::Windows::Forms::PictureBox^ A1Table2P;
	private: System::Windows::Forms::PictureBox^ A1Table2PGreen;
	private: System::Windows::Forms::PictureBox^ A2Table2PGreen;
	private: System::Windows::Forms::PictureBox^ A2Table2P;

	private: System::Windows::Forms::PictureBox^ A3Table2P;
	private: System::Windows::Forms::PictureBox^ A3Table2PGreen;
	private: System::Windows::Forms::PictureBox^ B1Table2PGreen;

	private: System::Windows::Forms::PictureBox^ B1Table2P;
	private: System::Windows::Forms::PictureBox^ B2Table4P;
	private: System::Windows::Forms::PictureBox^ B2Table4PGreen;
	private: System::Windows::Forms::PictureBox^ B3Table4PGreen;

	private: System::Windows::Forms::PictureBox^ B3Table4P;
	private: System::Windows::Forms::PictureBox^ B4Table4PGreen;
	private: System::Windows::Forms::PictureBox^ B4Table4P;
	private: System::Windows::Forms::PictureBox^ C1Table2PGreen;

	private: System::Windows::Forms::PictureBox^ C1Table2P;
	private: System::Windows::Forms::PictureBox^ C2Table2PGreen;
	private: System::Windows::Forms::PictureBox^ C2Table2P;
	private: System::Windows::Forms::PictureBox^ C3Table2PGreen;
	private: System::Windows::Forms::PictureBox^ C3Table2P;
	private: System::Windows::Forms::PictureBox^ D1Table4PGreen;


	private: System::Windows::Forms::PictureBox^ D1Table4P;
	private: System::Windows::Forms::PictureBox^ D2Table4PGreen;
	private: System::Windows::Forms::PictureBox^ D2Table4P;
	private: System::Windows::Forms::PictureBox^ D3Table4PGreen;
	private: System::Windows::Forms::PictureBox^ D3Table4P;
	private: System::Windows::Forms::PictureBox^ E1Table2PGreen;
	private: System::Windows::Forms::PictureBox^ E1Table2P;
	private: System::Windows::Forms::PictureBox^ E2Table2PGreen;
	private: System::Windows::Forms::PictureBox^ E2Table2P;
	private: System::Windows::Forms::PictureBox^ E3Table2PGreen;
	private: System::Windows::Forms::PictureBox^ E3Table2P;
	private: System::Windows::Forms::PictureBox^ F1Table4PGreen;
	private: System::Windows::Forms::PictureBox^ F1Table4P;
	private: System::Windows::Forms::PictureBox^ F2Table4PGreen;
	private: System::Windows::Forms::PictureBox^ F2Table4P;
	private: System::Windows::Forms::PictureBox^ F3Table4PGreen;
	private: System::Windows::Forms::PictureBox^ F3Table4P;
	private: System::Windows::Forms::PictureBox^ G1Table2PGreen;
	private: System::Windows::Forms::PictureBox^ G1Table2P;
	private: System::Windows::Forms::PictureBox^ G2Table2PGreen;
	private: System::Windows::Forms::PictureBox^ G2Table2P;
	private: System::Windows::Forms::PictureBox^ G3Table2PGreen;
	private: System::Windows::Forms::PictureBox^ G3Table2P;
	private: System::Windows::Forms::PictureBox^ H1Table1P;
	private: System::Windows::Forms::PictureBox^ H1Table1PGreen;
	private: System::Windows::Forms::PictureBox^ H2Table1PGreen;
	private: System::Windows::Forms::PictureBox^ H2Table1P;
private: System::Windows::Forms::PictureBox^ H3Table1PGreen;
private: System::Windows::Forms::PictureBox^ H3Table1P;
private: System::Windows::Forms::PictureBox^ H4Table1PGreen;
private: System::Windows::Forms::PictureBox^ H4Table1P;
private: System::Windows::Forms::PictureBox^ H5Table1PGreen;
private: System::Windows::Forms::PictureBox^ H5Table1P;
private: System::Windows::Forms::PictureBox^ H6Table1PGreen;
private: System::Windows::Forms::PictureBox^ H6Table1P;
private: System::Windows::Forms::PictureBox^ H7Table1PGreen;
private: System::Windows::Forms::PictureBox^ H7Table1P;
private: System::Windows::Forms::Label^ label1;
private: System::Windows::Forms::Label^ label3;
private: System::Windows::Forms::Button^ button1;


























	protected:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(PakForm::typeid));
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->ConfirmTableNo1 = (gcnew System::Windows::Forms::PictureBox());
			this->A1Table2P = (gcnew System::Windows::Forms::PictureBox());
			this->A1Table2PGreen = (gcnew System::Windows::Forms::PictureBox());
			this->A2Table2PGreen = (gcnew System::Windows::Forms::PictureBox());
			this->A2Table2P = (gcnew System::Windows::Forms::PictureBox());
			this->A3Table2P = (gcnew System::Windows::Forms::PictureBox());
			this->A3Table2PGreen = (gcnew System::Windows::Forms::PictureBox());
			this->B1Table2PGreen = (gcnew System::Windows::Forms::PictureBox());
			this->B1Table2P = (gcnew System::Windows::Forms::PictureBox());
			this->B2Table4P = (gcnew System::Windows::Forms::PictureBox());
			this->B2Table4PGreen = (gcnew System::Windows::Forms::PictureBox());
			this->B3Table4PGreen = (gcnew System::Windows::Forms::PictureBox());
			this->B3Table4P = (gcnew System::Windows::Forms::PictureBox());
			this->B4Table4PGreen = (gcnew System::Windows::Forms::PictureBox());
			this->B4Table4P = (gcnew System::Windows::Forms::PictureBox());
			this->C1Table2PGreen = (gcnew System::Windows::Forms::PictureBox());
			this->C1Table2P = (gcnew System::Windows::Forms::PictureBox());
			this->C2Table2PGreen = (gcnew System::Windows::Forms::PictureBox());
			this->C2Table2P = (gcnew System::Windows::Forms::PictureBox());
			this->C3Table2PGreen = (gcnew System::Windows::Forms::PictureBox());
			this->C3Table2P = (gcnew System::Windows::Forms::PictureBox());
			this->D1Table4PGreen = (gcnew System::Windows::Forms::PictureBox());
			this->D1Table4P = (gcnew System::Windows::Forms::PictureBox());
			this->D2Table4PGreen = (gcnew System::Windows::Forms::PictureBox());
			this->D2Table4P = (gcnew System::Windows::Forms::PictureBox());
			this->D3Table4PGreen = (gcnew System::Windows::Forms::PictureBox());
			this->D3Table4P = (gcnew System::Windows::Forms::PictureBox());
			this->E1Table2PGreen = (gcnew System::Windows::Forms::PictureBox());
			this->E1Table2P = (gcnew System::Windows::Forms::PictureBox());
			this->E2Table2PGreen = (gcnew System::Windows::Forms::PictureBox());
			this->E2Table2P = (gcnew System::Windows::Forms::PictureBox());
			this->E3Table2PGreen = (gcnew System::Windows::Forms::PictureBox());
			this->E3Table2P = (gcnew System::Windows::Forms::PictureBox());
			this->F1Table4PGreen = (gcnew System::Windows::Forms::PictureBox());
			this->F1Table4P = (gcnew System::Windows::Forms::PictureBox());
			this->F2Table4PGreen = (gcnew System::Windows::Forms::PictureBox());
			this->F2Table4P = (gcnew System::Windows::Forms::PictureBox());
			this->F3Table4PGreen = (gcnew System::Windows::Forms::PictureBox());
			this->F3Table4P = (gcnew System::Windows::Forms::PictureBox());
			this->G1Table2PGreen = (gcnew System::Windows::Forms::PictureBox());
			this->G1Table2P = (gcnew System::Windows::Forms::PictureBox());
			this->G2Table2PGreen = (gcnew System::Windows::Forms::PictureBox());
			this->G2Table2P = (gcnew System::Windows::Forms::PictureBox());
			this->G3Table2PGreen = (gcnew System::Windows::Forms::PictureBox());
			this->G3Table2P = (gcnew System::Windows::Forms::PictureBox());
			this->H1Table1P = (gcnew System::Windows::Forms::PictureBox());
			this->H1Table1PGreen = (gcnew System::Windows::Forms::PictureBox());
			this->H2Table1PGreen = (gcnew System::Windows::Forms::PictureBox());
			this->H2Table1P = (gcnew System::Windows::Forms::PictureBox());
			this->H3Table1PGreen = (gcnew System::Windows::Forms::PictureBox());
			this->H3Table1P = (gcnew System::Windows::Forms::PictureBox());
			this->H4Table1PGreen = (gcnew System::Windows::Forms::PictureBox());
			this->H4Table1P = (gcnew System::Windows::Forms::PictureBox());
			this->H5Table1PGreen = (gcnew System::Windows::Forms::PictureBox());
			this->H5Table1P = (gcnew System::Windows::Forms::PictureBox());
			this->H6Table1PGreen = (gcnew System::Windows::Forms::PictureBox());
			this->H6Table1P = (gcnew System::Windows::Forms::PictureBox());
			this->H7Table1PGreen = (gcnew System::Windows::Forms::PictureBox());
			this->H7Table1P = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ConfirmTableNo1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A1Table2P))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A1Table2PGreen))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A2Table2PGreen))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A2Table2P))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A3Table2P))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A3Table2PGreen))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B1Table2PGreen))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B1Table2P))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B2Table4P))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B2Table4PGreen))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B3Table4PGreen))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B3Table4P))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B4Table4PGreen))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B4Table4P))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->C1Table2PGreen))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->C1Table2P))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->C2Table2PGreen))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->C2Table2P))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->C3Table2PGreen))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->C3Table2P))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->D1Table4PGreen))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->D1Table4P))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->D2Table4PGreen))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->D2Table4P))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->D3Table4PGreen))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->D3Table4P))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->E1Table2PGreen))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->E1Table2P))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->E2Table2PGreen))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->E2Table2P))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->E3Table2PGreen))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->E3Table2P))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->F1Table4PGreen))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->F1Table4P))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->F2Table4PGreen))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->F2Table4P))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->F3Table4PGreen))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->F3Table4P))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->G1Table2PGreen))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->G1Table2P))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->G2Table2PGreen))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->G2Table2P))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->G3Table2PGreen))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->G3Table2P))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->H1Table1P))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->H1Table1PGreen))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->H2Table1PGreen))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->H2Table1P))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->H3Table1PGreen))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->H3Table1P))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->H4Table1PGreen))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->H4Table1P))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->H5Table1PGreen))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->H5Table1P))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->H6Table1PGreen))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->H6Table1P))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->H7Table1PGreen))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->H7Table1P))->BeginInit();
			this->SuspendLayout();
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(144, 167);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(0, 16);
			this->label2->TabIndex = 1;
			// 
			// ConfirmTableNo1
			// 
			this->ConfirmTableNo1->BackColor = System::Drawing::Color::Transparent;
			this->ConfirmTableNo1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ConfirmTableNo1.BackgroundImage")));
			this->ConfirmTableNo1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->ConfirmTableNo1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->ConfirmTableNo1->Location = System::Drawing::Point(36, 594);
			this->ConfirmTableNo1->Name = L"ConfirmTableNo1";
			this->ConfirmTableNo1->Size = System::Drawing::Size(267, 66);
			this->ConfirmTableNo1->TabIndex = 2;
			this->ConfirmTableNo1->TabStop = false;
			this->ConfirmTableNo1->Click += gcnew System::EventHandler(this, &PakForm::ConfirmTableNo1_Click);
			// 
			// A1Table2P
			// 
			this->A1Table2P->BackColor = System::Drawing::Color::Transparent;
			this->A1Table2P->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"A1Table2P.BackgroundImage")));
			this->A1Table2P->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->A1Table2P->Cursor = System::Windows::Forms::Cursors::Hand;
			this->A1Table2P->Location = System::Drawing::Point(496, 157);
			this->A1Table2P->Name = L"A1Table2P";
			this->A1Table2P->Size = System::Drawing::Size(33, 75);
			this->A1Table2P->TabIndex = 3;
			this->A1Table2P->TabStop = false;
			this->A1Table2P->Click += gcnew System::EventHandler(this, &PakForm::A1Table2P_Click);
			// 
			// A1Table2PGreen
			// 
			this->A1Table2PGreen->BackColor = System::Drawing::Color::Transparent;
			this->A1Table2PGreen->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"A1Table2PGreen.BackgroundImage")));
			this->A1Table2PGreen->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->A1Table2PGreen->Cursor = System::Windows::Forms::Cursors::Hand;
			this->A1Table2PGreen->Location = System::Drawing::Point(496, 157);
			this->A1Table2PGreen->Name = L"A1Table2PGreen";
			this->A1Table2PGreen->Size = System::Drawing::Size(33, 75);
			this->A1Table2PGreen->TabIndex = 4;
			this->A1Table2PGreen->TabStop = false;
			this->A1Table2PGreen->Click += gcnew System::EventHandler(this, &PakForm::A1Table2PGreen_Click);
			// 
			// A2Table2PGreen
			// 
			this->A2Table2PGreen->BackColor = System::Drawing::Color::Transparent;
			this->A2Table2PGreen->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"A2Table2PGreen.BackgroundImage")));
			this->A2Table2PGreen->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->A2Table2PGreen->Cursor = System::Windows::Forms::Cursors::Hand;
			this->A2Table2PGreen->Location = System::Drawing::Point(665, 157);
			this->A2Table2PGreen->Name = L"A2Table2PGreen";
			this->A2Table2PGreen->Size = System::Drawing::Size(33, 75);
			this->A2Table2PGreen->TabIndex = 5;
			this->A2Table2PGreen->TabStop = false;
			this->A2Table2PGreen->Click += gcnew System::EventHandler(this, &PakForm::A2Table2PGreen_Click);
			// 
			// A2Table2P
			// 
			this->A2Table2P->BackColor = System::Drawing::Color::Transparent;
			this->A2Table2P->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"A2Table2P.BackgroundImage")));
			this->A2Table2P->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->A2Table2P->Cursor = System::Windows::Forms::Cursors::Hand;
			this->A2Table2P->Location = System::Drawing::Point(665, 157);
			this->A2Table2P->Name = L"A2Table2P";
			this->A2Table2P->Size = System::Drawing::Size(33, 75);
			this->A2Table2P->TabIndex = 6;
			this->A2Table2P->TabStop = false;
			this->A2Table2P->Click += gcnew System::EventHandler(this, &PakForm::A2Table2P_Click);
			// 
			// A3Table2P
			// 
			this->A3Table2P->BackColor = System::Drawing::Color::Transparent;
			this->A3Table2P->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"A3Table2P.BackgroundImage")));
			this->A3Table2P->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->A3Table2P->Cursor = System::Windows::Forms::Cursors::Hand;
			this->A3Table2P->Location = System::Drawing::Point(834, 157);
			this->A3Table2P->Name = L"A3Table2P";
			this->A3Table2P->Size = System::Drawing::Size(33, 75);
			this->A3Table2P->TabIndex = 8;
			this->A3Table2P->TabStop = false;
			this->A3Table2P->Click += gcnew System::EventHandler(this, &PakForm::A3Table2P_Click);
			// 
			// A3Table2PGreen
			// 
			this->A3Table2PGreen->BackColor = System::Drawing::Color::Transparent;
			this->A3Table2PGreen->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"A3Table2PGreen.BackgroundImage")));
			this->A3Table2PGreen->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->A3Table2PGreen->Cursor = System::Windows::Forms::Cursors::Hand;
			this->A3Table2PGreen->Location = System::Drawing::Point(834, 157);
			this->A3Table2PGreen->Name = L"A3Table2PGreen";
			this->A3Table2PGreen->Size = System::Drawing::Size(33, 75);
			this->A3Table2PGreen->TabIndex = 9;
			this->A3Table2PGreen->TabStop = false;
			this->A3Table2PGreen->Click += gcnew System::EventHandler(this, &PakForm::A3Table2PGreen_Click);
			// 
			// B1Table2PGreen
			// 
			this->B1Table2PGreen->BackColor = System::Drawing::Color::Transparent;
			this->B1Table2PGreen->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"B1Table2PGreen.BackgroundImage")));
			this->B1Table2PGreen->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->B1Table2PGreen->Cursor = System::Windows::Forms::Cursors::Hand;
			this->B1Table2PGreen->Location = System::Drawing::Point(432, 224);
			this->B1Table2PGreen->Name = L"B1Table2PGreen";
			this->B1Table2PGreen->Size = System::Drawing::Size(33, 75);
			this->B1Table2PGreen->TabIndex = 11;
			this->B1Table2PGreen->TabStop = false;
			this->B1Table2PGreen->Click += gcnew System::EventHandler(this, &PakForm::B1Table2PGreen_Click);
			// 
			// B1Table2P
			// 
			this->B1Table2P->BackColor = System::Drawing::Color::Transparent;
			this->B1Table2P->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"B1Table2P.BackgroundImage")));
			this->B1Table2P->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->B1Table2P->Cursor = System::Windows::Forms::Cursors::Hand;
			this->B1Table2P->Location = System::Drawing::Point(432, 224);
			this->B1Table2P->Name = L"B1Table2P";
			this->B1Table2P->Size = System::Drawing::Size(33, 75);
			this->B1Table2P->TabIndex = 10;
			this->B1Table2P->TabStop = false;
			this->B1Table2P->Click += gcnew System::EventHandler(this, &PakForm::B1Table2P_Click);
			// 
			// B2Table4P
			// 
			this->B2Table4P->BackColor = System::Drawing::Color::Transparent;
			this->B2Table4P->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"B2Table4P.BackgroundImage")));
			this->B2Table4P->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->B2Table4P->Cursor = System::Windows::Forms::Cursors::Hand;
			this->B2Table4P->Location = System::Drawing::Point(559, 224);
			this->B2Table4P->Name = L"B2Table4P";
			this->B2Table4P->Size = System::Drawing::Size(75, 75);
			this->B2Table4P->TabIndex = 12;
			this->B2Table4P->TabStop = false;
			this->B2Table4P->Click += gcnew System::EventHandler(this, &PakForm::B2Table4P_Click);
			// 
			// B2Table4PGreen
			// 
			this->B2Table4PGreen->BackColor = System::Drawing::Color::Transparent;
			this->B2Table4PGreen->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"B2Table4PGreen.BackgroundImage")));
			this->B2Table4PGreen->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->B2Table4PGreen->Cursor = System::Windows::Forms::Cursors::Hand;
			this->B2Table4PGreen->Location = System::Drawing::Point(559, 224);
			this->B2Table4PGreen->Name = L"B2Table4PGreen";
			this->B2Table4PGreen->Size = System::Drawing::Size(75, 75);
			this->B2Table4PGreen->TabIndex = 13;
			this->B2Table4PGreen->TabStop = false;
			this->B2Table4PGreen->Click += gcnew System::EventHandler(this, &PakForm::B2Table4PGreen_Click);
			// 
			// B3Table4PGreen
			// 
			this->B3Table4PGreen->BackColor = System::Drawing::Color::Transparent;
			this->B3Table4PGreen->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"B3Table4PGreen.BackgroundImage")));
			this->B3Table4PGreen->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->B3Table4PGreen->Cursor = System::Windows::Forms::Cursors::Hand;
			this->B3Table4PGreen->Location = System::Drawing::Point(729, 224);
			this->B3Table4PGreen->Name = L"B3Table4PGreen";
			this->B3Table4PGreen->Size = System::Drawing::Size(75, 75);
			this->B3Table4PGreen->TabIndex = 15;
			this->B3Table4PGreen->TabStop = false;
			this->B3Table4PGreen->Click += gcnew System::EventHandler(this, &PakForm::B3Table4PGreen_Click);
			// 
			// B3Table4P
			// 
			this->B3Table4P->BackColor = System::Drawing::Color::Transparent;
			this->B3Table4P->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"B3Table4P.BackgroundImage")));
			this->B3Table4P->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->B3Table4P->Cursor = System::Windows::Forms::Cursors::Hand;
			this->B3Table4P->Location = System::Drawing::Point(729, 224);
			this->B3Table4P->Name = L"B3Table4P";
			this->B3Table4P->Size = System::Drawing::Size(75, 75);
			this->B3Table4P->TabIndex = 14;
			this->B3Table4P->TabStop = false;
			this->B3Table4P->Click += gcnew System::EventHandler(this, &PakForm::B3Table4P_Click);
			// 
			// B4Table4PGreen
			// 
			this->B4Table4PGreen->BackColor = System::Drawing::Color::Transparent;
			this->B4Table4PGreen->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"B4Table4PGreen.BackgroundImage")));
			this->B4Table4PGreen->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->B4Table4PGreen->Cursor = System::Windows::Forms::Cursors::Hand;
			this->B4Table4PGreen->Location = System::Drawing::Point(897, 224);
			this->B4Table4PGreen->Name = L"B4Table4PGreen";
			this->B4Table4PGreen->Size = System::Drawing::Size(75, 75);
			this->B4Table4PGreen->TabIndex = 17;
			this->B4Table4PGreen->TabStop = false;
			this->B4Table4PGreen->Click += gcnew System::EventHandler(this, &PakForm::B4Table4PGreen_Click);
			// 
			// B4Table4P
			// 
			this->B4Table4P->BackColor = System::Drawing::Color::Transparent;
			this->B4Table4P->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"B4Table4P.BackgroundImage")));
			this->B4Table4P->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->B4Table4P->Cursor = System::Windows::Forms::Cursors::Hand;
			this->B4Table4P->Location = System::Drawing::Point(897, 224);
			this->B4Table4P->Name = L"B4Table4P";
			this->B4Table4P->Size = System::Drawing::Size(75, 75);
			this->B4Table4P->TabIndex = 16;
			this->B4Table4P->TabStop = false;
			this->B4Table4P->Click += gcnew System::EventHandler(this, &PakForm::B4Table4P_Click);
			// 
			// C1Table2PGreen
			// 
			this->C1Table2PGreen->BackColor = System::Drawing::Color::Transparent;
			this->C1Table2PGreen->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"C1Table2PGreen.BackgroundImage")));
			this->C1Table2PGreen->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->C1Table2PGreen->Cursor = System::Windows::Forms::Cursors::Hand;
			this->C1Table2PGreen->Location = System::Drawing::Point(496, 292);
			this->C1Table2PGreen->Name = L"C1Table2PGreen";
			this->C1Table2PGreen->Size = System::Drawing::Size(33, 75);
			this->C1Table2PGreen->TabIndex = 19;
			this->C1Table2PGreen->TabStop = false;
			this->C1Table2PGreen->Click += gcnew System::EventHandler(this, &PakForm::C1Table2PGreen_Click);
			// 
			// C1Table2P
			// 
			this->C1Table2P->BackColor = System::Drawing::Color::Transparent;
			this->C1Table2P->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"C1Table2P.BackgroundImage")));
			this->C1Table2P->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->C1Table2P->Cursor = System::Windows::Forms::Cursors::Hand;
			this->C1Table2P->Location = System::Drawing::Point(496, 292);
			this->C1Table2P->Name = L"C1Table2P";
			this->C1Table2P->Size = System::Drawing::Size(33, 75);
			this->C1Table2P->TabIndex = 18;
			this->C1Table2P->TabStop = false;
			this->C1Table2P->Click += gcnew System::EventHandler(this, &PakForm::C1Table2P_Click);
			// 
			// C2Table2PGreen
			// 
			this->C2Table2PGreen->BackColor = System::Drawing::Color::Transparent;
			this->C2Table2PGreen->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"C2Table2PGreen.BackgroundImage")));
			this->C2Table2PGreen->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->C2Table2PGreen->Cursor = System::Windows::Forms::Cursors::Hand;
			this->C2Table2PGreen->Location = System::Drawing::Point(665, 292);
			this->C2Table2PGreen->Name = L"C2Table2PGreen";
			this->C2Table2PGreen->Size = System::Drawing::Size(33, 75);
			this->C2Table2PGreen->TabIndex = 21;
			this->C2Table2PGreen->TabStop = false;
			this->C2Table2PGreen->Click += gcnew System::EventHandler(this, &PakForm::C2Table2PGreen_Click);
			// 
			// C2Table2P
			// 
			this->C2Table2P->BackColor = System::Drawing::Color::Transparent;
			this->C2Table2P->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"C2Table2P.BackgroundImage")));
			this->C2Table2P->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->C2Table2P->Cursor = System::Windows::Forms::Cursors::Hand;
			this->C2Table2P->Location = System::Drawing::Point(665, 292);
			this->C2Table2P->Name = L"C2Table2P";
			this->C2Table2P->Size = System::Drawing::Size(33, 75);
			this->C2Table2P->TabIndex = 20;
			this->C2Table2P->TabStop = false;
			this->C2Table2P->Click += gcnew System::EventHandler(this, &PakForm::C2Table2P_Click);
			// 
			// C3Table2PGreen
			// 
			this->C3Table2PGreen->BackColor = System::Drawing::Color::Transparent;
			this->C3Table2PGreen->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"C3Table2PGreen.BackgroundImage")));
			this->C3Table2PGreen->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->C3Table2PGreen->Cursor = System::Windows::Forms::Cursors::Hand;
			this->C3Table2PGreen->Location = System::Drawing::Point(834, 292);
			this->C3Table2PGreen->Name = L"C3Table2PGreen";
			this->C3Table2PGreen->Size = System::Drawing::Size(33, 75);
			this->C3Table2PGreen->TabIndex = 23;
			this->C3Table2PGreen->TabStop = false;
			this->C3Table2PGreen->Click += gcnew System::EventHandler(this, &PakForm::C3Table2PGreen_Click);
			// 
			// C3Table2P
			// 
			this->C3Table2P->BackColor = System::Drawing::Color::Transparent;
			this->C3Table2P->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"C3Table2P.BackgroundImage")));
			this->C3Table2P->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->C3Table2P->Cursor = System::Windows::Forms::Cursors::Hand;
			this->C3Table2P->Location = System::Drawing::Point(834, 292);
			this->C3Table2P->Name = L"C3Table2P";
			this->C3Table2P->Size = System::Drawing::Size(33, 75);
			this->C3Table2P->TabIndex = 22;
			this->C3Table2P->TabStop = false;
			this->C3Table2P->Click += gcnew System::EventHandler(this, &PakForm::C3Table2P_Click);
			// 
			// D1Table4PGreen
			// 
			this->D1Table4PGreen->BackColor = System::Drawing::Color::Transparent;
			this->D1Table4PGreen->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"D1Table4PGreen.BackgroundImage")));
			this->D1Table4PGreen->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->D1Table4PGreen->Cursor = System::Windows::Forms::Cursors::Hand;
			this->D1Table4PGreen->Location = System::Drawing::Point(559, 359);
			this->D1Table4PGreen->Name = L"D1Table4PGreen";
			this->D1Table4PGreen->Size = System::Drawing::Size(75, 75);
			this->D1Table4PGreen->TabIndex = 25;
			this->D1Table4PGreen->TabStop = false;
			this->D1Table4PGreen->Click += gcnew System::EventHandler(this, &PakForm::D1Table4PGreen_Click);
			// 
			// D1Table4P
			// 
			this->D1Table4P->BackColor = System::Drawing::Color::Transparent;
			this->D1Table4P->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"D1Table4P.BackgroundImage")));
			this->D1Table4P->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->D1Table4P->Cursor = System::Windows::Forms::Cursors::Hand;
			this->D1Table4P->Location = System::Drawing::Point(559, 359);
			this->D1Table4P->Name = L"D1Table4P";
			this->D1Table4P->Size = System::Drawing::Size(75, 75);
			this->D1Table4P->TabIndex = 24;
			this->D1Table4P->TabStop = false;
			this->D1Table4P->Click += gcnew System::EventHandler(this, &PakForm::D1Table4P_Click);
			// 
			// D2Table4PGreen
			// 
			this->D2Table4PGreen->BackColor = System::Drawing::Color::Transparent;
			this->D2Table4PGreen->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"D2Table4PGreen.BackgroundImage")));
			this->D2Table4PGreen->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->D2Table4PGreen->Cursor = System::Windows::Forms::Cursors::Hand;
			this->D2Table4PGreen->Location = System::Drawing::Point(729, 359);
			this->D2Table4PGreen->Name = L"D2Table4PGreen";
			this->D2Table4PGreen->Size = System::Drawing::Size(75, 75);
			this->D2Table4PGreen->TabIndex = 27;
			this->D2Table4PGreen->TabStop = false;
			this->D2Table4PGreen->Click += gcnew System::EventHandler(this, &PakForm::D2Table4PGreen_Click);
			// 
			// D2Table4P
			// 
			this->D2Table4P->BackColor = System::Drawing::Color::Transparent;
			this->D2Table4P->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"D2Table4P.BackgroundImage")));
			this->D2Table4P->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->D2Table4P->Cursor = System::Windows::Forms::Cursors::Hand;
			this->D2Table4P->Location = System::Drawing::Point(729, 359);
			this->D2Table4P->Name = L"D2Table4P";
			this->D2Table4P->Size = System::Drawing::Size(75, 75);
			this->D2Table4P->TabIndex = 26;
			this->D2Table4P->TabStop = false;
			this->D2Table4P->Click += gcnew System::EventHandler(this, &PakForm::D2Table4P_Click);
			// 
			// D3Table4PGreen
			// 
			this->D3Table4PGreen->BackColor = System::Drawing::Color::Transparent;
			this->D3Table4PGreen->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"D3Table4PGreen.BackgroundImage")));
			this->D3Table4PGreen->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->D3Table4PGreen->Cursor = System::Windows::Forms::Cursors::Hand;
			this->D3Table4PGreen->Location = System::Drawing::Point(897, 359);
			this->D3Table4PGreen->Name = L"D3Table4PGreen";
			this->D3Table4PGreen->Size = System::Drawing::Size(75, 75);
			this->D3Table4PGreen->TabIndex = 29;
			this->D3Table4PGreen->TabStop = false;
			this->D3Table4PGreen->Click += gcnew System::EventHandler(this, &PakForm::D3Table4PGreen_Click);
			// 
			// D3Table4P
			// 
			this->D3Table4P->BackColor = System::Drawing::Color::Transparent;
			this->D3Table4P->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"D3Table4P.BackgroundImage")));
			this->D3Table4P->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->D3Table4P->Cursor = System::Windows::Forms::Cursors::Hand;
			this->D3Table4P->Location = System::Drawing::Point(897, 359);
			this->D3Table4P->Name = L"D3Table4P";
			this->D3Table4P->Size = System::Drawing::Size(75, 75);
			this->D3Table4P->TabIndex = 28;
			this->D3Table4P->TabStop = false;
			this->D3Table4P->Click += gcnew System::EventHandler(this, &PakForm::D3Table4P_Click);
			// 
			// E1Table2PGreen
			// 
			this->E1Table2PGreen->BackColor = System::Drawing::Color::Transparent;
			this->E1Table2PGreen->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"E1Table2PGreen.BackgroundImage")));
			this->E1Table2PGreen->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->E1Table2PGreen->Cursor = System::Windows::Forms::Cursors::Hand;
			this->E1Table2PGreen->Location = System::Drawing::Point(496, 426);
			this->E1Table2PGreen->Name = L"E1Table2PGreen";
			this->E1Table2PGreen->Size = System::Drawing::Size(33, 75);
			this->E1Table2PGreen->TabIndex = 31;
			this->E1Table2PGreen->TabStop = false;
			this->E1Table2PGreen->Click += gcnew System::EventHandler(this, &PakForm::E1Table2PGreen_Click);
			// 
			// E1Table2P
			// 
			this->E1Table2P->BackColor = System::Drawing::Color::Transparent;
			this->E1Table2P->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"E1Table2P.BackgroundImage")));
			this->E1Table2P->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->E1Table2P->Cursor = System::Windows::Forms::Cursors::Hand;
			this->E1Table2P->Location = System::Drawing::Point(496, 426);
			this->E1Table2P->Name = L"E1Table2P";
			this->E1Table2P->Size = System::Drawing::Size(33, 75);
			this->E1Table2P->TabIndex = 30;
			this->E1Table2P->TabStop = false;
			this->E1Table2P->Click += gcnew System::EventHandler(this, &PakForm::E1Table2P_Click);
			// 
			// E2Table2PGreen
			// 
			this->E2Table2PGreen->BackColor = System::Drawing::Color::Transparent;
			this->E2Table2PGreen->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"E2Table2PGreen.BackgroundImage")));
			this->E2Table2PGreen->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->E2Table2PGreen->Cursor = System::Windows::Forms::Cursors::Hand;
			this->E2Table2PGreen->Location = System::Drawing::Point(665, 426);
			this->E2Table2PGreen->Name = L"E2Table2PGreen";
			this->E2Table2PGreen->Size = System::Drawing::Size(33, 75);
			this->E2Table2PGreen->TabIndex = 33;
			this->E2Table2PGreen->TabStop = false;
			this->E2Table2PGreen->Click += gcnew System::EventHandler(this, &PakForm::E2Table2PGreen_Click);
			// 
			// E2Table2P
			// 
			this->E2Table2P->BackColor = System::Drawing::Color::Transparent;
			this->E2Table2P->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"E2Table2P.BackgroundImage")));
			this->E2Table2P->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->E2Table2P->Cursor = System::Windows::Forms::Cursors::Hand;
			this->E2Table2P->Location = System::Drawing::Point(665, 426);
			this->E2Table2P->Name = L"E2Table2P";
			this->E2Table2P->Size = System::Drawing::Size(33, 75);
			this->E2Table2P->TabIndex = 32;
			this->E2Table2P->TabStop = false;
			this->E2Table2P->Click += gcnew System::EventHandler(this, &PakForm::E2Table2P_Click);
			// 
			// E3Table2PGreen
			// 
			this->E3Table2PGreen->BackColor = System::Drawing::Color::Transparent;
			this->E3Table2PGreen->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"E3Table2PGreen.BackgroundImage")));
			this->E3Table2PGreen->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->E3Table2PGreen->Cursor = System::Windows::Forms::Cursors::Hand;
			this->E3Table2PGreen->Location = System::Drawing::Point(834, 426);
			this->E3Table2PGreen->Name = L"E3Table2PGreen";
			this->E3Table2PGreen->Size = System::Drawing::Size(33, 75);
			this->E3Table2PGreen->TabIndex = 35;
			this->E3Table2PGreen->TabStop = false;
			this->E3Table2PGreen->Click += gcnew System::EventHandler(this, &PakForm::E3Table2PGreen_Click);
			// 
			// E3Table2P
			// 
			this->E3Table2P->BackColor = System::Drawing::Color::Transparent;
			this->E3Table2P->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"E3Table2P.BackgroundImage")));
			this->E3Table2P->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->E3Table2P->Cursor = System::Windows::Forms::Cursors::Hand;
			this->E3Table2P->Location = System::Drawing::Point(834, 426);
			this->E3Table2P->Name = L"E3Table2P";
			this->E3Table2P->Size = System::Drawing::Size(33, 75);
			this->E3Table2P->TabIndex = 34;
			this->E3Table2P->TabStop = false;
			this->E3Table2P->Click += gcnew System::EventHandler(this, &PakForm::E3Table2P_Click);
			// 
			// F1Table4PGreen
			// 
			this->F1Table4PGreen->BackColor = System::Drawing::Color::Transparent;
			this->F1Table4PGreen->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"F1Table4PGreen.BackgroundImage")));
			this->F1Table4PGreen->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->F1Table4PGreen->Cursor = System::Windows::Forms::Cursors::Hand;
			this->F1Table4PGreen->Location = System::Drawing::Point(559, 494);
			this->F1Table4PGreen->Name = L"F1Table4PGreen";
			this->F1Table4PGreen->Size = System::Drawing::Size(75, 75);
			this->F1Table4PGreen->TabIndex = 37;
			this->F1Table4PGreen->TabStop = false;
			this->F1Table4PGreen->Click += gcnew System::EventHandler(this, &PakForm::F1Table4PGreen_Click);
			// 
			// F1Table4P
			// 
			this->F1Table4P->BackColor = System::Drawing::Color::Transparent;
			this->F1Table4P->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"F1Table4P.BackgroundImage")));
			this->F1Table4P->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->F1Table4P->Cursor = System::Windows::Forms::Cursors::Hand;
			this->F1Table4P->Location = System::Drawing::Point(559, 494);
			this->F1Table4P->Name = L"F1Table4P";
			this->F1Table4P->Size = System::Drawing::Size(75, 75);
			this->F1Table4P->TabIndex = 36;
			this->F1Table4P->TabStop = false;
			this->F1Table4P->Click += gcnew System::EventHandler(this, &PakForm::F1Table4P_Click);
			// 
			// F2Table4PGreen
			// 
			this->F2Table4PGreen->BackColor = System::Drawing::Color::Transparent;
			this->F2Table4PGreen->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"F2Table4PGreen.BackgroundImage")));
			this->F2Table4PGreen->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->F2Table4PGreen->Cursor = System::Windows::Forms::Cursors::Hand;
			this->F2Table4PGreen->Location = System::Drawing::Point(729, 494);
			this->F2Table4PGreen->Name = L"F2Table4PGreen";
			this->F2Table4PGreen->Size = System::Drawing::Size(75, 75);
			this->F2Table4PGreen->TabIndex = 39;
			this->F2Table4PGreen->TabStop = false;
			this->F2Table4PGreen->Click += gcnew System::EventHandler(this, &PakForm::F2Table4PGreen_Click);
			// 
			// F2Table4P
			// 
			this->F2Table4P->BackColor = System::Drawing::Color::Transparent;
			this->F2Table4P->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"F2Table4P.BackgroundImage")));
			this->F2Table4P->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->F2Table4P->Cursor = System::Windows::Forms::Cursors::Hand;
			this->F2Table4P->Location = System::Drawing::Point(729, 494);
			this->F2Table4P->Name = L"F2Table4P";
			this->F2Table4P->Size = System::Drawing::Size(75, 75);
			this->F2Table4P->TabIndex = 38;
			this->F2Table4P->TabStop = false;
			this->F2Table4P->Click += gcnew System::EventHandler(this, &PakForm::F2Table4P_Click);
			// 
			// F3Table4PGreen
			// 
			this->F3Table4PGreen->BackColor = System::Drawing::Color::Transparent;
			this->F3Table4PGreen->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"F3Table4PGreen.BackgroundImage")));
			this->F3Table4PGreen->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->F3Table4PGreen->Cursor = System::Windows::Forms::Cursors::Hand;
			this->F3Table4PGreen->Location = System::Drawing::Point(897, 494);
			this->F3Table4PGreen->Name = L"F3Table4PGreen";
			this->F3Table4PGreen->Size = System::Drawing::Size(75, 75);
			this->F3Table4PGreen->TabIndex = 41;
			this->F3Table4PGreen->TabStop = false;
			this->F3Table4PGreen->Click += gcnew System::EventHandler(this, &PakForm::F3Table4PGreen_Click);
			// 
			// F3Table4P
			// 
			this->F3Table4P->BackColor = System::Drawing::Color::Transparent;
			this->F3Table4P->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"F3Table4P.BackgroundImage")));
			this->F3Table4P->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->F3Table4P->Cursor = System::Windows::Forms::Cursors::Hand;
			this->F3Table4P->Location = System::Drawing::Point(897, 494);
			this->F3Table4P->Name = L"F3Table4P";
			this->F3Table4P->Size = System::Drawing::Size(75, 75);
			this->F3Table4P->TabIndex = 40;
			this->F3Table4P->TabStop = false;
			this->F3Table4P->Click += gcnew System::EventHandler(this, &PakForm::F3Table4P_Click);
			// 
			// G1Table2PGreen
			// 
			this->G1Table2PGreen->BackColor = System::Drawing::Color::Transparent;
			this->G1Table2PGreen->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"G1Table2PGreen.BackgroundImage")));
			this->G1Table2PGreen->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->G1Table2PGreen->Cursor = System::Windows::Forms::Cursors::Hand;
			this->G1Table2PGreen->Location = System::Drawing::Point(496, 561);
			this->G1Table2PGreen->Name = L"G1Table2PGreen";
			this->G1Table2PGreen->Size = System::Drawing::Size(33, 75);
			this->G1Table2PGreen->TabIndex = 43;
			this->G1Table2PGreen->TabStop = false;
			this->G1Table2PGreen->Click += gcnew System::EventHandler(this, &PakForm::G1Table2PGreen_Click);
			// 
			// G1Table2P
			// 
			this->G1Table2P->BackColor = System::Drawing::Color::Transparent;
			this->G1Table2P->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"G1Table2P.BackgroundImage")));
			this->G1Table2P->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->G1Table2P->Cursor = System::Windows::Forms::Cursors::Hand;
			this->G1Table2P->Location = System::Drawing::Point(496, 561);
			this->G1Table2P->Name = L"G1Table2P";
			this->G1Table2P->Size = System::Drawing::Size(33, 75);
			this->G1Table2P->TabIndex = 42;
			this->G1Table2P->TabStop = false;
			this->G1Table2P->Click += gcnew System::EventHandler(this, &PakForm::G1Table2P_Click);
			// 
			// G2Table2PGreen
			// 
			this->G2Table2PGreen->BackColor = System::Drawing::Color::Transparent;
			this->G2Table2PGreen->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"G2Table2PGreen.BackgroundImage")));
			this->G2Table2PGreen->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->G2Table2PGreen->Cursor = System::Windows::Forms::Cursors::Hand;
			this->G2Table2PGreen->Location = System::Drawing::Point(665, 561);
			this->G2Table2PGreen->Name = L"G2Table2PGreen";
			this->G2Table2PGreen->Size = System::Drawing::Size(33, 75);
			this->G2Table2PGreen->TabIndex = 45;
			this->G2Table2PGreen->TabStop = false;
			this->G2Table2PGreen->Click += gcnew System::EventHandler(this, &PakForm::G2Table2PGreen_Click);
			// 
			// G2Table2P
			// 
			this->G2Table2P->BackColor = System::Drawing::Color::Transparent;
			this->G2Table2P->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"G2Table2P.BackgroundImage")));
			this->G2Table2P->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->G2Table2P->Cursor = System::Windows::Forms::Cursors::Hand;
			this->G2Table2P->Location = System::Drawing::Point(665, 561);
			this->G2Table2P->Name = L"G2Table2P";
			this->G2Table2P->Size = System::Drawing::Size(33, 75);
			this->G2Table2P->TabIndex = 44;
			this->G2Table2P->TabStop = false;
			this->G2Table2P->Click += gcnew System::EventHandler(this, &PakForm::G2Table2P_Click);
			// 
			// G3Table2PGreen
			// 
			this->G3Table2PGreen->BackColor = System::Drawing::Color::Transparent;
			this->G3Table2PGreen->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"G3Table2PGreen.BackgroundImage")));
			this->G3Table2PGreen->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->G3Table2PGreen->Cursor = System::Windows::Forms::Cursors::Hand;
			this->G3Table2PGreen->Location = System::Drawing::Point(834, 561);
			this->G3Table2PGreen->Name = L"G3Table2PGreen";
			this->G3Table2PGreen->Size = System::Drawing::Size(33, 75);
			this->G3Table2PGreen->TabIndex = 47;
			this->G3Table2PGreen->TabStop = false;
			this->G3Table2PGreen->Click += gcnew System::EventHandler(this, &PakForm::G3Table2PGreen_Click);
			// 
			// G3Table2P
			// 
			this->G3Table2P->BackColor = System::Drawing::Color::Transparent;
			this->G3Table2P->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"G3Table2P.BackgroundImage")));
			this->G3Table2P->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->G3Table2P->Cursor = System::Windows::Forms::Cursors::Hand;
			this->G3Table2P->Location = System::Drawing::Point(834, 561);
			this->G3Table2P->Name = L"G3Table2P";
			this->G3Table2P->Size = System::Drawing::Size(33, 75);
			this->G3Table2P->TabIndex = 46;
			this->G3Table2P->TabStop = false;
			this->G3Table2P->Click += gcnew System::EventHandler(this, &PakForm::G3Table2P_Click);
			// 
			// H1Table1P
			// 
			this->H1Table1P->BackColor = System::Drawing::Color::Transparent;
			this->H1Table1P->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"H1Table1P.BackgroundImage")));
			this->H1Table1P->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->H1Table1P->Cursor = System::Windows::Forms::Cursors::Hand;
			this->H1Table1P->Location = System::Drawing::Point(1081, 338);
			this->H1Table1P->Name = L"H1Table1P";
			this->H1Table1P->Size = System::Drawing::Size(27, 29);
			this->H1Table1P->TabIndex = 48;
			this->H1Table1P->TabStop = false;
			this->H1Table1P->Click += gcnew System::EventHandler(this, &PakForm::H1Table1P_Click);
			// 
			// H1Table1PGreen
			// 
			this->H1Table1PGreen->BackColor = System::Drawing::Color::Transparent;
			this->H1Table1PGreen->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"H1Table1PGreen.BackgroundImage")));
			this->H1Table1PGreen->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->H1Table1PGreen->Cursor = System::Windows::Forms::Cursors::Hand;
			this->H1Table1PGreen->Location = System::Drawing::Point(1081, 338);
			this->H1Table1PGreen->Name = L"H1Table1PGreen";
			this->H1Table1PGreen->Size = System::Drawing::Size(27, 29);
			this->H1Table1PGreen->TabIndex = 49;
			this->H1Table1PGreen->TabStop = false;
			this->H1Table1PGreen->Click += gcnew System::EventHandler(this, &PakForm::H1Table1PGreen_Click);
			// 
			// H2Table1PGreen
			// 
			this->H2Table1PGreen->BackColor = System::Drawing::Color::Transparent;
			this->H2Table1PGreen->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"H2Table1PGreen.BackgroundImage")));
			this->H2Table1PGreen->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->H2Table1PGreen->Cursor = System::Windows::Forms::Cursors::Hand;
			this->H2Table1PGreen->Location = System::Drawing::Point(1081, 365);
			this->H2Table1PGreen->Name = L"H2Table1PGreen";
			this->H2Table1PGreen->Size = System::Drawing::Size(27, 29);
			this->H2Table1PGreen->TabIndex = 51;
			this->H2Table1PGreen->TabStop = false;
			this->H2Table1PGreen->Click += gcnew System::EventHandler(this, &PakForm::H2Table1PGreen_Click);
			// 
			// H2Table1P
			// 
			this->H2Table1P->BackColor = System::Drawing::Color::Transparent;
			this->H2Table1P->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"H2Table1P.BackgroundImage")));
			this->H2Table1P->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->H2Table1P->Cursor = System::Windows::Forms::Cursors::Hand;
			this->H2Table1P->Location = System::Drawing::Point(1081, 365);
			this->H2Table1P->Name = L"H2Table1P";
			this->H2Table1P->Size = System::Drawing::Size(27, 29);
			this->H2Table1P->TabIndex = 50;
			this->H2Table1P->TabStop = false;
			this->H2Table1P->Click += gcnew System::EventHandler(this, &PakForm::H2Table1P_Click);
			// 
			// H3Table1PGreen
			// 
			this->H3Table1PGreen->BackColor = System::Drawing::Color::Transparent;
			this->H3Table1PGreen->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"H3Table1PGreen.BackgroundImage")));
			this->H3Table1PGreen->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->H3Table1PGreen->Cursor = System::Windows::Forms::Cursors::Hand;
			this->H3Table1PGreen->Location = System::Drawing::Point(1081, 393);
			this->H3Table1PGreen->Name = L"H3Table1PGreen";
			this->H3Table1PGreen->Size = System::Drawing::Size(27, 29);
			this->H3Table1PGreen->TabIndex = 53;
			this->H3Table1PGreen->TabStop = false;
			this->H3Table1PGreen->Click += gcnew System::EventHandler(this, &PakForm::H3Table1PGreen_Click);
			// 
			// H3Table1P
			// 
			this->H3Table1P->BackColor = System::Drawing::Color::Transparent;
			this->H3Table1P->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"H3Table1P.BackgroundImage")));
			this->H3Table1P->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->H3Table1P->Cursor = System::Windows::Forms::Cursors::Hand;
			this->H3Table1P->Location = System::Drawing::Point(1081, 393);
			this->H3Table1P->Name = L"H3Table1P";
			this->H3Table1P->Size = System::Drawing::Size(27, 29);
			this->H3Table1P->TabIndex = 52;
			this->H3Table1P->TabStop = false;
			this->H3Table1P->Click += gcnew System::EventHandler(this, &PakForm::H3Table1P_Click);
			// 
			// H4Table1PGreen
			// 
			this->H4Table1PGreen->BackColor = System::Drawing::Color::Transparent;
			this->H4Table1PGreen->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"H4Table1PGreen.BackgroundImage")));
			this->H4Table1PGreen->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->H4Table1PGreen->Cursor = System::Windows::Forms::Cursors::Hand;
			this->H4Table1PGreen->Location = System::Drawing::Point(1081, 421);
			this->H4Table1PGreen->Name = L"H4Table1PGreen";
			this->H4Table1PGreen->Size = System::Drawing::Size(27, 29);
			this->H4Table1PGreen->TabIndex = 55;
			this->H4Table1PGreen->TabStop = false;
			this->H4Table1PGreen->Click += gcnew System::EventHandler(this, &PakForm::H4Table1PGreen_Click);
			// 
			// H4Table1P
			// 
			this->H4Table1P->BackColor = System::Drawing::Color::Transparent;
			this->H4Table1P->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"H4Table1P.BackgroundImage")));
			this->H4Table1P->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->H4Table1P->Cursor = System::Windows::Forms::Cursors::Hand;
			this->H4Table1P->Location = System::Drawing::Point(1081, 421);
			this->H4Table1P->Name = L"H4Table1P";
			this->H4Table1P->Size = System::Drawing::Size(27, 29);
			this->H4Table1P->TabIndex = 54;
			this->H4Table1P->TabStop = false;
			this->H4Table1P->Click += gcnew System::EventHandler(this, &PakForm::H4Table1P_Click);
			// 
			// H5Table1PGreen
			// 
			this->H5Table1PGreen->BackColor = System::Drawing::Color::Transparent;
			this->H5Table1PGreen->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"H5Table1PGreen.BackgroundImage")));
			this->H5Table1PGreen->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->H5Table1PGreen->Cursor = System::Windows::Forms::Cursors::Hand;
			this->H5Table1PGreen->Location = System::Drawing::Point(1081, 449);
			this->H5Table1PGreen->Name = L"H5Table1PGreen";
			this->H5Table1PGreen->Size = System::Drawing::Size(27, 29);
			this->H5Table1PGreen->TabIndex = 57;
			this->H5Table1PGreen->TabStop = false;
			this->H5Table1PGreen->Click += gcnew System::EventHandler(this, &PakForm::H5Table1PGreen_Click);
			// 
			// H5Table1P
			// 
			this->H5Table1P->BackColor = System::Drawing::Color::Transparent;
			this->H5Table1P->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"H5Table1P.BackgroundImage")));
			this->H5Table1P->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->H5Table1P->Cursor = System::Windows::Forms::Cursors::Hand;
			this->H5Table1P->Location = System::Drawing::Point(1081, 449);
			this->H5Table1P->Name = L"H5Table1P";
			this->H5Table1P->Size = System::Drawing::Size(27, 29);
			this->H5Table1P->TabIndex = 56;
			this->H5Table1P->TabStop = false;
			this->H5Table1P->Click += gcnew System::EventHandler(this, &PakForm::H5Table1P_Click);
			// 
			// H6Table1PGreen
			// 
			this->H6Table1PGreen->BackColor = System::Drawing::Color::Transparent;
			this->H6Table1PGreen->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"H6Table1PGreen.BackgroundImage")));
			this->H6Table1PGreen->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->H6Table1PGreen->Cursor = System::Windows::Forms::Cursors::Hand;
			this->H6Table1PGreen->Location = System::Drawing::Point(1081, 477);
			this->H6Table1PGreen->Name = L"H6Table1PGreen";
			this->H6Table1PGreen->Size = System::Drawing::Size(27, 29);
			this->H6Table1PGreen->TabIndex = 59;
			this->H6Table1PGreen->TabStop = false;
			this->H6Table1PGreen->Click += gcnew System::EventHandler(this, &PakForm::H6Table1PGreen_Click);
			// 
			// H6Table1P
			// 
			this->H6Table1P->BackColor = System::Drawing::Color::Transparent;
			this->H6Table1P->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"H6Table1P.BackgroundImage")));
			this->H6Table1P->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->H6Table1P->Cursor = System::Windows::Forms::Cursors::Hand;
			this->H6Table1P->Location = System::Drawing::Point(1081, 477);
			this->H6Table1P->Name = L"H6Table1P";
			this->H6Table1P->Size = System::Drawing::Size(27, 29);
			this->H6Table1P->TabIndex = 58;
			this->H6Table1P->TabStop = false;
			this->H6Table1P->Click += gcnew System::EventHandler(this, &PakForm::H6Table1P_Click);
			// 
			// H7Table1PGreen
			// 
			this->H7Table1PGreen->BackColor = System::Drawing::Color::Transparent;
			this->H7Table1PGreen->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"H7Table1PGreen.BackgroundImage")));
			this->H7Table1PGreen->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->H7Table1PGreen->Cursor = System::Windows::Forms::Cursors::Hand;
			this->H7Table1PGreen->Location = System::Drawing::Point(1081, 505);
			this->H7Table1PGreen->Name = L"H7Table1PGreen";
			this->H7Table1PGreen->Size = System::Drawing::Size(27, 29);
			this->H7Table1PGreen->TabIndex = 61;
			this->H7Table1PGreen->TabStop = false;
			this->H7Table1PGreen->Click += gcnew System::EventHandler(this, &PakForm::H7Table1PGreen_Click);
			// 
			// H7Table1P
			// 
			this->H7Table1P->BackColor = System::Drawing::Color::Transparent;
			this->H7Table1P->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"H7Table1P.BackgroundImage")));
			this->H7Table1P->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->H7Table1P->Cursor = System::Windows::Forms::Cursors::Hand;
			this->H7Table1P->Location = System::Drawing::Point(1081, 505);
			this->H7Table1P->Name = L"H7Table1P";
			this->H7Table1P->Size = System::Drawing::Size(27, 29);
			this->H7Table1P->TabIndex = 60;
			this->H7Table1P->TabStop = false;
			this->H7Table1P->Click += gcnew System::EventHandler(this, &PakForm::H7Table1P_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(436, 117);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(44, 16);
			this->label1->TabIndex = 62;
			this->label1->Text = L"label1";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(996, 117);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(44, 16);
			this->label3->TabIndex = 64;
			this->label3->Text = L"label3";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(632, 60);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(298, 52);
			this->button1->TabIndex = 63;
			this->button1->Text = L"button1";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &PakForm::button1_Click);
			// 
			// PakForm
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1280, 720);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->H7Table1PGreen);
			this->Controls->Add(this->H7Table1P);
			this->Controls->Add(this->H6Table1PGreen);
			this->Controls->Add(this->H6Table1P);
			this->Controls->Add(this->H5Table1PGreen);
			this->Controls->Add(this->H5Table1P);
			this->Controls->Add(this->H4Table1PGreen);
			this->Controls->Add(this->H4Table1P);
			this->Controls->Add(this->H3Table1PGreen);
			this->Controls->Add(this->H3Table1P);
			this->Controls->Add(this->H2Table1PGreen);
			this->Controls->Add(this->H2Table1P);
			this->Controls->Add(this->H1Table1PGreen);
			this->Controls->Add(this->H1Table1P);
			this->Controls->Add(this->G3Table2PGreen);
			this->Controls->Add(this->G3Table2P);
			this->Controls->Add(this->G2Table2PGreen);
			this->Controls->Add(this->G2Table2P);
			this->Controls->Add(this->G1Table2PGreen);
			this->Controls->Add(this->G1Table2P);
			this->Controls->Add(this->F3Table4PGreen);
			this->Controls->Add(this->F3Table4P);
			this->Controls->Add(this->F2Table4PGreen);
			this->Controls->Add(this->F2Table4P);
			this->Controls->Add(this->F1Table4PGreen);
			this->Controls->Add(this->F1Table4P);
			this->Controls->Add(this->E3Table2PGreen);
			this->Controls->Add(this->E3Table2P);
			this->Controls->Add(this->E2Table2PGreen);
			this->Controls->Add(this->E2Table2P);
			this->Controls->Add(this->E1Table2PGreen);
			this->Controls->Add(this->E1Table2P);
			this->Controls->Add(this->D3Table4PGreen);
			this->Controls->Add(this->D3Table4P);
			this->Controls->Add(this->D2Table4PGreen);
			this->Controls->Add(this->D2Table4P);
			this->Controls->Add(this->D1Table4PGreen);
			this->Controls->Add(this->D1Table4P);
			this->Controls->Add(this->C3Table2PGreen);
			this->Controls->Add(this->C3Table2P);
			this->Controls->Add(this->C2Table2PGreen);
			this->Controls->Add(this->C2Table2P);
			this->Controls->Add(this->C1Table2PGreen);
			this->Controls->Add(this->C1Table2P);
			this->Controls->Add(this->B4Table4PGreen);
			this->Controls->Add(this->B4Table4P);
			this->Controls->Add(this->B3Table4PGreen);
			this->Controls->Add(this->B3Table4P);
			this->Controls->Add(this->B2Table4PGreen);
			this->Controls->Add(this->B2Table4P);
			this->Controls->Add(this->B1Table2PGreen);
			this->Controls->Add(this->B1Table2P);
			this->Controls->Add(this->A3Table2PGreen);
			this->Controls->Add(this->A3Table2P);
			this->Controls->Add(this->A2Table2PGreen);
			this->Controls->Add(this->A1Table2PGreen);
			this->Controls->Add(this->A1Table2P);
			this->Controls->Add(this->ConfirmTableNo1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->A2Table2P);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"PakForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"PakForm";
			this->Load += gcnew System::EventHandler(this, &PakForm::PakForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ConfirmTableNo1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A1Table2P))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A1Table2PGreen))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A2Table2PGreen))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A2Table2P))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A3Table2P))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A3Table2PGreen))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B1Table2PGreen))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B1Table2P))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B2Table4P))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B2Table4PGreen))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B3Table4PGreen))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B3Table4P))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B4Table4PGreen))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B4Table4P))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->C1Table2PGreen))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->C1Table2P))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->C2Table2PGreen))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->C2Table2P))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->C3Table2PGreen))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->C3Table2P))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->D1Table4PGreen))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->D1Table4P))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->D2Table4PGreen))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->D2Table4P))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->D3Table4PGreen))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->D3Table4P))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->E1Table2PGreen))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->E1Table2P))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->E2Table2PGreen))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->E2Table2P))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->E3Table2PGreen))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->E3Table2P))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->F1Table4PGreen))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->F1Table4P))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->F2Table4PGreen))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->F2Table4P))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->F3Table4PGreen))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->F3Table4P))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->G1Table2PGreen))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->G1Table2P))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->G2Table2PGreen))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->G2Table2P))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->G3Table2PGreen))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->G3Table2P))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->H1Table1P))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->H1Table1PGreen))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->H2Table1PGreen))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->H2Table1P))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->H3Table1PGreen))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->H3Table1P))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->H4Table1PGreen))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->H4Table1P))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->H5Table1PGreen))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->H5Table1P))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->H6Table1PGreen))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->H6Table1P))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->H7Table1PGreen))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->H7Table1P))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}

public:
	array<bool>^ dataTable;

	void MarshalString(String^ s, std::string& os) {
		using namespace Runtime::InteropServices;
		const char* chars =
			(const char*)(Marshal::StringToHGlobalAnsi(s)).ToPointer();
		os = chars;
		Marshal::FreeHGlobal(IntPtr((void*)chars));
	}

	void MarshalString(String^ s, std::wstring& os) {
		using namespace Runtime::InteropServices;
		const wchar_t* chars =
			(const wchar_t*)(Marshal::StringToHGlobalUni(s)).ToPointer();
		os = chars;
		Marshal::FreeHGlobal(IntPtr((void*)chars));
	}

#pragma endregion
		bool A1Table2PGreenCheck = true;
	private: System::Void PakForm_Load(System::Object^ sender, System::EventArgs^ e) {
		dataTable = gcnew array<bool>(29);
	}
	private: System::Void A1Table2P_Click(System::Object^ sender, System::EventArgs^ e) {
		A1Table2P->Hide();
		A1Table2PGreen->Show();
		A1Table2PGreenCheck = false;
		dataTable[0] = !dataTable[0];
	}
	private: System::Void A1Table2PGreen_Click(System::Object^ sender, System::EventArgs^ e) {
		A1Table2PGreen->Hide();
		A1Table2P->Show();
		A1Table2PGreenCheck = true;
		dataTable[0] = !dataTable[0];
}
	private: System::Void A2Table2P_Click(System::Object^ sender, System::EventArgs^ e) {
		A2Table2P->Hide();
		A2Table2PGreen->Show();
		dataTable[1] = !dataTable[1];
}
	private: System::Void A2Table2PGreen_Click(System::Object^ sender, System::EventArgs^ e) {
		A2Table2PGreen->Hide();
		A2Table2P->Show();
		dataTable[1] = !dataTable[1];
}
	private: System::Void A3Table2P_Click(System::Object^ sender, System::EventArgs^ e) {
		A3Table2P->Hide();
		A3Table2PGreen->Show();
		dataTable[2] = !dataTable[2];
}
	private: System::Void A3Table2PGreen_Click(System::Object^ sender, System::EventArgs^ e) {
		A3Table2PGreen->Hide();
		A3Table2P->Show();
		dataTable[2] = !dataTable[2];
}
	private: System::Void B1Table2P_Click(System::Object^ sender, System::EventArgs^ e) {
		B1Table2P->Hide();
		B1Table2PGreen->Show();
		dataTable[3] = !dataTable[3];
}
	private: System::Void B1Table2PGreen_Click(System::Object^ sender, System::EventArgs^ e) {
		B1Table2PGreen->Hide();
		B1Table2P->Show();
		dataTable[3] = !dataTable[3];
}
	private: System::Void B2Table4P_Click(System::Object^ sender, System::EventArgs^ e) {
		B2Table4P->Hide();
		B2Table4PGreen->Show();
		dataTable[4] = !dataTable[4];
}
	private: System::Void B2Table4PGreen_Click(System::Object^ sender, System::EventArgs^ e) {
		B2Table4PGreen->Hide();
		B2Table4P->Show();
		dataTable[4] = !dataTable[4];
}
	private: System::Void B3Table4P_Click(System::Object^ sender, System::EventArgs^ e) {
		B3Table4P->Hide();
		B3Table4PGreen->Show();
		dataTable[5] = !dataTable[5];
}
	private: System::Void B3Table4PGreen_Click(System::Object^ sender, System::EventArgs^ e) {
		B3Table4PGreen->Hide();
		B3Table4P->Show();
		dataTable[5] = !dataTable[5];
}
	private: System::Void B4Table4P_Click(System::Object^ sender, System::EventArgs^ e) {
		B4Table4P->Hide();
		B4Table4PGreen->Show();
		dataTable[6] = !dataTable[6];
}
	private: System::Void B4Table4PGreen_Click(System::Object^ sender, System::EventArgs^ e) {
		B4Table4PGreen->Hide();
		B4Table4P->Show();
		dataTable[6] = !dataTable[6];
}

	private: System::Void C1Table2P_Click(System::Object^ sender, System::EventArgs^ e) {
		C1Table2P->Hide();
		C1Table2PGreen->Show();
		dataTable[7] = !dataTable[7];
}
	private: System::Void C1Table2PGreen_Click(System::Object^ sender, System::EventArgs^ e) {
		C1Table2PGreen->Hide();
		C1Table2P->Show();
		dataTable[7] = !dataTable[7];
}
	private: System::Void C2Table2P_Click(System::Object^ sender, System::EventArgs^ e) {
		C2Table2P->Hide();
		C2Table2PGreen->Show();
		dataTable[8] = !dataTable[8];
}
	private: System::Void C2Table2PGreen_Click(System::Object^ sender, System::EventArgs^ e) {
		C2Table2PGreen->Hide();
		C2Table2P->Show();
		dataTable[8] = !dataTable[8];
}
	private: System::Void C3Table2P_Click(System::Object^ sender, System::EventArgs^ e) {
		C3Table2P->Hide();
		C3Table2PGreen->Show();
		dataTable[9] = !dataTable[9];
}
	private: System::Void C3Table2PGreen_Click(System::Object^ sender, System::EventArgs^ e) {
		C3Table2PGreen->Hide();
		C3Table2P->Show();
		dataTable[9] = !dataTable[9];
}
	private: System::Void D1Table4P_Click(System::Object^ sender, System::EventArgs^ e) {
		D1Table4P->Hide();
		D1Table4PGreen->Show();
		dataTable[10] = !dataTable[10];
}
	private: System::Void D1Table4PGreen_Click(System::Object^ sender, System::EventArgs^ e) {
		D1Table4PGreen->Hide();
		D1Table4P->Show();
		dataTable[10] = !dataTable[10];
}
	private: System::Void D2Table4P_Click(System::Object^ sender, System::EventArgs^ e) {
		D2Table4P->Hide();
		D2Table4PGreen->Show();
		dataTable[11] = !dataTable[11];
}
	private: System::Void D2Table4PGreen_Click(System::Object^ sender, System::EventArgs^ e) {
		D2Table4PGreen->Hide();
		D2Table4P->Show();
		dataTable[11] = !dataTable[11];
}
	private: System::Void D3Table4P_Click(System::Object^ sender, System::EventArgs^ e) {
		D3Table4P->Hide();
		D3Table4PGreen->Show();
		dataTable[12] = !dataTable[12];
}
	private: System::Void D3Table4PGreen_Click(System::Object^ sender, System::EventArgs^ e) {
		D3Table4PGreen->Hide();
		D3Table4P->Show();
		dataTable[12] = !dataTable[12];
}
	private: System::Void E1Table2P_Click(System::Object^ sender, System::EventArgs^ e) {
		E1Table2P->Hide();
		E1Table2PGreen->Show();
		dataTable[13] = !dataTable[13];
}
	private: System::Void E1Table2PGreen_Click(System::Object^ sender, System::EventArgs^ e) {
		E1Table2PGreen->Hide();
		E1Table2P->Show();
		dataTable[13] = !dataTable[13];
}
	private: System::Void E2Table2P_Click(System::Object^ sender, System::EventArgs^ e) {
		E2Table2P->Hide();
		E2Table2PGreen->Show();
		dataTable[14] = !dataTable[14];
}
	private: System::Void E2Table2PGreen_Click(System::Object^ sender, System::EventArgs^ e) {
		E2Table2PGreen->Hide();
		E2Table2P->Show();
		dataTable[14] = !dataTable[14];
}
	private: System::Void E3Table2P_Click(System::Object^ sender, System::EventArgs^ e) {
		E3Table2P->Hide();
		E3Table2PGreen->Show();
		dataTable[15] = !dataTable[15];
}
	private: System::Void E3Table2PGreen_Click(System::Object^ sender, System::EventArgs^ e) {
		E3Table2PGreen->Hide();
		E3Table2P->Show();
		dataTable[15] = !dataTable[15];
}
	private: System::Void F1Table4P_Click(System::Object^ sender, System::EventArgs^ e) {
		F1Table4P->Hide();
		F1Table4PGreen->Show();
		dataTable[16] = !dataTable[16];
}
	private: System::Void F1Table4PGreen_Click(System::Object^ sender, System::EventArgs^ e) {
		F1Table4PGreen->Hide();
		F1Table4P->Show();
		dataTable[16] = !dataTable[16];
}
	private: System::Void F2Table4P_Click(System::Object^ sender, System::EventArgs^ e) {
		F2Table4P->Hide();
		F2Table4PGreen->Show();
		dataTable[17] = !dataTable[17];
}
	private: System::Void F2Table4PGreen_Click(System::Object^ sender, System::EventArgs^ e) {
		F2Table4PGreen->Hide();
		F2Table4P->Show();
		dataTable[17] = !dataTable[17];
}
	private: System::Void F3Table4P_Click(System::Object^ sender, System::EventArgs^ e) {
		F3Table4P->Hide();
		F3Table4PGreen->Show();
		dataTable[18] = !dataTable[18];
}
	private: System::Void F3Table4PGreen_Click(System::Object^ sender, System::EventArgs^ e) {
		F3Table4PGreen->Hide();
		F3Table4P->Show();
		dataTable[18] = !dataTable[18];
}
	private: System::Void G1Table2P_Click(System::Object^ sender, System::EventArgs^ e) {
		G1Table2P->Hide();
		G1Table2PGreen->Show();
		dataTable[19] = !dataTable[19];
}
	private: System::Void G1Table2PGreen_Click(System::Object^ sender, System::EventArgs^ e) {
		G1Table2PGreen->Hide();
		G1Table2P->Show();
		dataTable[19] = !dataTable[19];
}
	private: System::Void G2Table2P_Click(System::Object^ sender, System::EventArgs^ e) {
		G2Table2P->Hide();
		G2Table2PGreen->Show();
		dataTable[20] = !dataTable[20];
}
	private: System::Void G2Table2PGreen_Click(System::Object^ sender, System::EventArgs^ e) {
		G2Table2PGreen->Hide();
		G2Table2P->Show();
		dataTable[20] = !dataTable[20];
}
	private: System::Void G3Table2P_Click(System::Object^ sender, System::EventArgs^ e) {
		G3Table2P->Hide();
		G3Table2PGreen->Show();
		dataTable[21] = !dataTable[21];
}
	private: System::Void G3Table2PGreen_Click(System::Object^ sender, System::EventArgs^ e) {
		G3Table2PGreen->Hide();
		G3Table2P->Show();
		dataTable[21] = !dataTable[21];
}
	private: System::Void H1Table1P_Click(System::Object^ sender, System::EventArgs^ e) {
		H1Table1P->Hide();
		H1Table1PGreen->Show();
		dataTable[22] = !dataTable[22];
}
	private: System::Void H1Table1PGreen_Click(System::Object^ sender, System::EventArgs^ e) {
		H1Table1PGreen->Hide();
		H1Table1P->Show();
		dataTable[22] = !dataTable[22];
}
	private: System::Void H2Table1P_Click(System::Object^ sender, System::EventArgs^ e) {
		H2Table1P->Hide();
		H2Table1PGreen->Show();
		dataTable[23] = !dataTable[23];
}
	private: System::Void H2Table1PGreen_Click(System::Object^ sender, System::EventArgs^ e) {
		H2Table1PGreen->Hide();
		H2Table1P->Show();
		dataTable[23] = !dataTable[23];
}
	private: System::Void H3Table1P_Click(System::Object^ sender, System::EventArgs^ e) {
		H3Table1P->Hide();
		H3Table1PGreen->Show();
		dataTable[24] = !dataTable[24];
}
	private: System::Void H3Table1PGreen_Click(System::Object^ sender, System::EventArgs^ e) {
		H3Table1PGreen->Hide();
		H3Table1P->Show();
		dataTable[24] = !dataTable[24];
}
	private: System::Void H4Table1P_Click(System::Object^ sender, System::EventArgs^ e) {
		H4Table1P->Hide();
		H4Table1PGreen->Show();
		dataTable[25] = !dataTable[25];
}
	private: System::Void H4Table1PGreen_Click(System::Object^ sender, System::EventArgs^ e) {
		H4Table1PGreen->Hide();
		H4Table1P->Show();
		dataTable[25] = !dataTable[25];
}
	private: System::Void H5Table1P_Click(System::Object^ sender, System::EventArgs^ e) {
		H5Table1P->Hide();
		H5Table1PGreen->Show();
		dataTable[26] = !dataTable[26];
}
	private: System::Void H5Table1PGreen_Click(System::Object^ sender, System::EventArgs^ e) {
		H5Table1PGreen->Hide();
		H5Table1P->Show();
		dataTable[26] = !dataTable[26];
}
	private: System::Void H6Table1P_Click(System::Object^ sender, System::EventArgs^ e) {
		H6Table1P->Hide();
		H6Table1PGreen->Show();
		dataTable[27] = !dataTable[27];
}
	private: System::Void H6Table1PGreen_Click(System::Object^ sender, System::EventArgs^ e) {
		H6Table1PGreen->Hide();
		H6Table1P->Show();
		dataTable[27] = !dataTable[27];
}
	private: System::Void H7Table1P_Click(System::Object^ sender, System::EventArgs^ e) {
		H7Table1P->Hide();
		H7Table1PGreen->Show();
		dataTable[28] = !dataTable[28];
}
	private: System::Void H7Table1PGreen_Click(System::Object^ sender, System::EventArgs^ e) {
		H7Table1PGreen->Hide();
		H7Table1P->Show();
		dataTable[28] = !dataTable[28];
}

public: bool switchToMP = false;
private: System::Void ConfirmTableNo1_Click(System::Object^ sender, System::EventArgs^ e) {
	using namespace std;
	
	System::String^ a ="";
	String^ temp = Application::StartupPath + "\\Data\\" + "Table.txt";
	string path,line;
	MarshalString(temp, path);

	ifstream fileIn(path);
	vector<string> lines;

	while (getline(fileIn, line)) {
		lines.push_back(line);
	}
	fileIn.close();

	for (int i = 0; i < 29; i++) {
		a += (dataTable[i] ? "1" : "0");
	}

	label1->Text = a;
	string newData;
	MarshalString(a,newData);
	switchToMP = true;
	int targetline = 1 ;
	if (lines.size() >= targetline) {
		lines[targetline - 1] = newData; 
	}

	ofstream fileOut(path);
	int i = 0;
	if (fileOut.is_open()) {
		label3->Text = "Successfully ReadFile";
	}
	for (const auto& modifiedLine : lines) {
		fileOut << modifiedLine << endl;
	}
	

	fileOut.close();

	//this->Close();
}
private: System::Void A1Table2PFull_Click(System::Object^ sender, System::EventArgs^ e) {
}

private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	using namespace std;

	String^ c = gcnew String("abcd");
	String^ temp = Application::StartupPath + "\\Data\\" + "Table.txt";
	string path;
	vector<string> lines;

	MarshalString(temp,path);
	ifstream fileIn(path);

	if (fileIn.is_open()) {
		label3->Text = "file Opened";
	}



}
};
}
