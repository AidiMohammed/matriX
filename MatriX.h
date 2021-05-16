#pragma once

#include <iostream>
#include <fstream>
#include <vector>
#include <string>
//#include <stdexcept>

struct infoMAtrice
{
	size_t NombreDeLigne;
	size_t NombreDeColonne;

	std::string NameMatrice;
	std::vector<std::string> ListColonnes;
};

struct PositionsData
{
	size_t PosistionLigne;
	size_t PosistionColonne;
};

class MatriX
{
	/*
	***créer une methode pour Cleair une Matrix.***

	*créer une méthode pour importer une matrice. extontion de file et .mtx*
	*créer une méthode pour exporter une matrice.*

	créer une méthode pour inversion d'une matrice.

	***ajouter au constrcteur une string pour liste des noms de colonnes***

	ajouter operatur = (int)

	***{{3,25,3,25},
	  {25,8,4,65},
	  {23,58,48,12}***
	*/
	public:
		MatriX(const size_t NombreDeLigne, const size_t NombreDeColonne, std::vector<std::string> ListeLablesColonnes, std::string NomMatrice, int ValueInit);
		MatriX(const size_t NombreDeLigne, const size_t NombreDeColonne, std::vector<std::string> ListeLablesColonnes, std::string NomMatrice);
		MatriX(const size_t NombreDeLigne, const size_t NombreDeColonne, std::vector<std::string> ListeLablesColonnes, int ValueInit);
		MatriX(const size_t NombreDeLigne, const size_t NombreDeColonne, std::vector<std::string> ListeLablesColonnes);
		MatriX(const size_t NombreDeLigne, const size_t NombreDeColonne, std::string NomMatrice, int ValueInit);
		MatriX(const size_t NombreDeLigne, const size_t NombreDeColonne, std::string NomMatrice);
		MatriX(const size_t NombreDeLigne, const size_t NombreDeColonne, const int ValueInit);
		MatriX(const size_t NombreDeLigne, const size_t NombreDeColonne);
		MatriX();

		bool MatrixCarre(unsigned int &NumDordre);
		bool MatrixVide();
		bool MatrixEgale(const MatriX A);//operator
		bool MatrixDaigo(const size_t NombreDeLigne, const size_t NombeDeColonne, const int valueDiago);
		bool GetDataFromAFile(std::string NameFaile);
		bool SetDataToFaile(std::string NameFaile);

		void AfficherMatrix();//operator
		void Clear();
		void SetDataToPosition(const size_t Ligne, const size_t Colonne,const int Data);
		void SetDataToPosition(const PositionsData PData, const int Data);

		int GetDataFromPosition(const size_t Ligne, const size_t Colonne);
		int GetDataFromPosition(const PositionsData PData);
		int MatrixSymetrique();

		infoMAtrice GetinfoMatrix();
		MatriX MatrixTranspose();
		MatriX operator+(const MatriX Matrice);
		MatriX operator+(const int Add);
		MatriX operator-(const MatriX Matrice);
		MatriX operator-(const int Sous);
		MatriX operator*(const MatriX Matrice);
		MatriX operator*(const int Multi);
		void operator=(const std::vector<std::vector<int>> ListeData);

		bool operator==(const MatriX Matrice);
		bool operator==(const int Int);
		bool operator<(const MatriX Martice);
		bool operator<(const int Int);
		bool operator<=(const MatriX Matrice);
		bool operator<=(const int Int);
		bool operator>(const MatriX Matrice);
		bool operator>(const int Int);
		bool operator>=(const MatriX Matrice);
		bool operator>=(const int Int);

		~MatriX();
	private:

		std::vector<std::vector<int>> M_MatriX;
		infoMAtrice M_InfoMArice;
};

std::ostream & operator<<(std::ostream &os, const infoMAtrice infMat);
