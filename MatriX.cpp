#include "MatriX.h"

/*************************************************************************************************************************************************
le ficher MatriX.cpp Contiante les implimontation des méthodes pour la créeation et la manipulation et les calculs matriciels.
Code de la version : 0.1
Auteur : Aidi Mohammed
Date de créeation : le 5 - 7 - 2020
Lieu : Dnas Ma Chambre : ) à Oujda - Maroc
Adresse Email = myster.oujda.48@gmail.com
*************************************************************************************************************************************************/

MatriX::MatriX(const size_t NombreDeLigne, const size_t NombreDeColonne, std::vector<std::string> ListeLablesColonnes, std::string NomMatrice, int ValueInit)
{
	if (NombreDeLigne == 0 || NombreDeColonne == 0)
		std::cout << "Imposible de creer une matric avec une taille de 0" << std::endl;
	else
	{
		for (size_t Ligne = 0; Ligne < NombreDeLigne; Ligne++)
			M_MatriX.push_back(std::vector<int>(NombreDeColonne, ValueInit));

		M_InfoMArice.NameMatrice = NomMatrice;
		M_InfoMArice.NombreDeColonne = NombreDeColonne;
		M_InfoMArice.NombreDeLigne = NombreDeLigne;
		M_InfoMArice.ListColonnes = ListeLablesColonnes;
		
	}
}

MatriX::MatriX(const size_t NombreDeLigne, const size_t NombreDeColonne, std::vector<std::string> ListeLablesColonnes, std::string NomMatrice)
{
	if (NombreDeLigne == 0 || NombreDeColonne == 0)
		std::cout << "Imposible de creer une matric avec une taille de 0" << std::endl;
	else
	{
		for (size_t Ligne = 0; Ligne < NombreDeLigne; Ligne++)
			M_MatriX.push_back(std::vector<int>(NombreDeColonne));

		M_InfoMArice.NameMatrice = NomMatrice;
		M_InfoMArice.NombreDeColonne = NombreDeColonne;
		M_InfoMArice.NombreDeLigne = NombreDeLigne;
		M_InfoMArice.ListColonnes = ListeLablesColonnes;
	}
}

MatriX::MatriX(const size_t NombreDeLigne, const size_t NombreDeColonne, std::vector<std::string> ListeLablesColonnes, int ValueInit)
{
	if (NombreDeLigne == 0 || NombreDeColonne == 0)
		std::cout << "Imposible de creer une matric avec une taille de 0" << std::endl;
	else
	{
		for (size_t Ligne = 0; Ligne < NombreDeLigne; Ligne++)
			M_MatriX.push_back(std::vector<int>(NombreDeColonne, ValueInit));

		M_InfoMArice.NombreDeColonne = NombreDeColonne;
		M_InfoMArice.NombreDeLigne = NombreDeLigne;
		M_InfoMArice.ListColonnes = ListeLablesColonnes;
	}
}

MatriX::MatriX(const size_t NombreDeLigne, const size_t NombreDeColonne, std::vector<std::string> ListeLablesColonnes)
{
	if (NombreDeLigne == 0 || NombreDeColonne == 0)
		std::cout << "Imposible de creer une matric avec une taille de 0" << std::endl;
	else
	{
		for (size_t Ligne = 0; Ligne < NombreDeLigne; Ligne++)
			M_MatriX.push_back(std::vector<int>(NombreDeColonne, 0));

		M_InfoMArice.NombreDeColonne = NombreDeColonne;
		M_InfoMArice.NombreDeLigne = NombreDeLigne;
		M_InfoMArice.ListColonnes = ListeLablesColonnes;
	}
}

MatriX::MatriX(const size_t NombreDeLigne, const size_t NombreDeColonne, std::string NomMatrice, int valueInit)
{
	if (NombreDeLigne == 0 || NombreDeColonne == 0)
		std::cout << "Imposible de creer une matric avec une taille de 0" << std::endl;
	else
	{
		for (size_t Ligne = 0; Ligne < NombreDeLigne; Ligne++)
			M_MatriX.push_back(std::vector<int>(NombreDeColonne,valueInit));

		M_InfoMArice.NameMatrice = NomMatrice;
		M_InfoMArice.NombreDeColonne = NombreDeColonne;
		M_InfoMArice.NombreDeLigne = NombreDeLigne;
	}
}

MatriX::MatriX(const size_t NombreDeLigne, const size_t NombreDeColonne, std::string NomMatrice)
{
	if (NombreDeLigne == 0 || NombreDeColonne == 0)
		std::cout << "Imposible de creer une matric avec une taille de 0" << std::endl;
	else
	{
		for (size_t Ligne = 0; Ligne < NombreDeLigne; Ligne++)
			M_MatriX.push_back(std::vector<int>(NombreDeColonne));

		M_InfoMArice.NameMatrice = NomMatrice;
		M_InfoMArice.NombreDeColonne = NombreDeColonne;
		M_InfoMArice.NombreDeLigne = NombreDeLigne;
	}
}

MatriX::MatriX(const size_t NombreDeLigne, const size_t NombreDeColonne, int ValueInit)
{
	if (NombreDeLigne == 0 || NombreDeColonne == 0)
		std::cout << "Imposible de creer une matric avec une taille de 0" << std::endl;
	else
	{
		for (size_t Ligne = 0; Ligne < NombreDeLigne; Ligne++)
			M_MatriX.push_back(std::vector<int>(NombreDeColonne,ValueInit));

		M_InfoMArice.NombreDeColonne = NombreDeColonne;
		M_InfoMArice.NombreDeLigne = NombreDeLigne;
	}
}

MatriX::MatriX(const size_t NombreDeLigne, const size_t NombreDeColonne)
{
	if (NombreDeLigne == 0 || NombreDeColonne == 0)
		std::cout << "Imposible de creer une matric avec une taille de 0" << std::endl;
	else
	{
		for (size_t Ligne = 0; Ligne < NombreDeLigne; Ligne++)
			M_MatriX.push_back(std::vector<int>(NombreDeColonne,0));

		M_InfoMArice.NombreDeColonne = NombreDeColonne;
		M_InfoMArice.NombreDeLigne = NombreDeLigne;
	}
}

MatriX::MatriX()
{

}

void MatriX::AfficherMatrix()
{
	std::cout << std::endl;

	if (MatrixVide())
		std::cout << "Matrice Vide" << std::endl;
	else
	{
		std::cout << "Matrice de Taille ( " << this->M_InfoMArice.NombreDeLigne << " x " << this->M_InfoMArice.NombreDeColonne << " )" << std::endl;
		for (size_t Ligne = 0; Ligne < M_InfoMArice.NombreDeLigne; Ligne++)
		{
			for (size_t Colonne = 0; Colonne < M_InfoMArice.NombreDeColonne; Colonne++)
				std::cout << "[ " << this->M_MatriX.at(Ligne).at(Colonne) << " ]";

			std::cout << std::endl;
		}
	}
}

void MatriX::Clear()
{
	this->M_InfoMArice.NameMatrice.clear();
	this->M_InfoMArice.NombreDeColonne = 0;
	this->M_InfoMArice.NombreDeLigne = 0;

	this->M_MatriX.clear();
}

void MatriX::SetDataToPosition(const size_t Ligne,const size_t Colonne ,const int Data)
{
	if (Ligne > this->M_InfoMArice.NombreDeLigne || Colonne > this->M_InfoMArice.NombreDeColonne)
	{
		if (Ligne > this->M_InfoMArice.NombreDeLigne)
			throw std::out_of_range("Ligne Index out of range");
		else if (Colonne > this->M_InfoMArice.NombreDeColonne)
			throw std::out_of_range("Colonne Index out ofrange");
	}
	else
		this->M_MatriX.at(Ligne - 1).at(Colonne - 1) = Data;
}

int MatriX::GetDataFromPosition(const size_t Ligne, const size_t Colonne)
{
	if (Ligne > this->M_InfoMArice.NombreDeLigne || Colonne > this->M_InfoMArice.NombreDeColonne)
	{
		if (Ligne > this->M_InfoMArice.NombreDeLigne)
			throw std::out_of_range("Ligne Index out of range");
		else if (Colonne > this->M_InfoMArice.NombreDeColonne)
			throw std::out_of_range("Colonne Index out ofrange");
	}
	else
		return this->M_MatriX.at(Ligne - 1).at(Colonne - 1);
}

void MatriX::SetDataToPosition(const PositionsData PData, const int Data)
{
	if (PData.PosistionLigne > this->M_InfoMArice.NombreDeLigne || PData.PosistionColonne > this->M_InfoMArice.NombreDeColonne)
	{
		if (PData.PosistionLigne > this->M_InfoMArice.NombreDeLigne)
			throw std::out_of_range("Ligne Index out of range");
		else if (PData.PosistionColonne > this->M_InfoMArice.NombreDeColonne)
			throw std::out_of_range("Colonne Index out ofrange");
	}
	else
		this->M_MatriX.at(PData.PosistionLigne - 1).at(PData.PosistionColonne - 1) = Data;
}

int MatriX::GetDataFromPosition(const PositionsData PData)
{
	if (PData.PosistionLigne > this->M_InfoMArice.NombreDeLigne || PData.PosistionColonne > this->M_InfoMArice.NombreDeColonne)
	{
		if (PData.PosistionLigne > this->M_InfoMArice.NombreDeLigne)
			throw std::out_of_range("Ligne Index out of range");
		else if (PData.PosistionColonne > this->M_InfoMArice.NombreDeColonne)
			throw std::out_of_range("Colonne Index out ofrange");
	}
	else
		return this->M_MatriX.at(PData.PosistionLigne - 1).at(PData.PosistionColonne - 1);

}

infoMAtrice MatriX::GetinfoMatrix()
{
	infoMAtrice strucinfomatrice;

	strucinfomatrice.NameMatrice = this->M_InfoMArice.NameMatrice;
	strucinfomatrice.NombreDeColonne = this->M_InfoMArice.NombreDeColonne;
	strucinfomatrice.NombreDeLigne = this->M_InfoMArice.NombreDeLigne;

	return strucinfomatrice;
}

bool MatriX::MatrixDaigo(const size_t NombreDeLigne, const size_t NombreDeColonne, const int valueDiago)
{
	if (NombreDeLigne == NombreDeColonne && valueDiago != 0)
	{
		int SautColonne = 0;

		this->M_MatriX.clear();

		this->M_InfoMArice.NombreDeColonne = NombreDeColonne;
		this->M_InfoMArice.NombreDeLigne = NombreDeLigne;
		
		for (size_t Ligne = 0; Ligne < NombreDeLigne; Ligne++)
			M_MatriX.push_back(std::vector<int>(NombreDeColonne, 0));
		
		for (size_t Ligne = 0; Ligne < NombreDeLigne; Ligne++)
		{
			for (size_t Colonne = 0; Colonne < NombreDeColonne; Colonne++)
				if (Colonne == SautColonne)
					this->M_MatriX.at(Ligne).at(Colonne) = valueDiago;
			SautColonne++;
		}
		return true;
	}
	else
	{
		std::cout << "Imposible de creer une Matrice diagonal merci de consulter la documentation" << std::endl;
		return false;
	}
}

bool MatriX::MatrixCarre(unsigned int &NumDordre)
{
	if (this->M_InfoMArice.NombreDeColonne != this->M_InfoMArice.NombreDeLigne)
		return false;
	else
	{
		NumDordre = this->M_InfoMArice.NombreDeColonne;
		return true;
	}
}

bool MatriX::MatrixVide()
{
	if (this->M_InfoMArice.NombreDeColonne == 0 && this->M_InfoMArice.NombreDeLigne == 0)
		return true;
	else
		return false;
}

bool MatriX::MatrixEgale(MatriX A)
{
	if(A.MatrixVide() || this->MatrixVide())
		return false;
	else
	{
		infoMAtrice infoA;
		
		infoA = A.GetinfoMatrix();

		if (infoA.NombreDeLigne != this->M_InfoMArice.NombreDeLigne)
			return false;
		else if (infoA.NombreDeColonne != this->M_InfoMArice.NombreDeColonne)
			return false;
		else
		{
			for (size_t Ligne = 0; Ligne < this->M_InfoMArice.NombreDeLigne; Ligne++)
				for (size_t Colonne = 0; Colonne < this->M_InfoMArice.NombreDeColonne; Colonne++)
					if (this->M_MatriX.at(Ligne).at(Colonne) != A.M_MatriX.at(Ligne).at(Colonne))
						return false;
			return true;
		}
	}
}

bool MatriX::GetDataFromAFile(std::string NameFaile)
{
	//vérifier la taille des colonnes des auters lignes
	//ajouter les labels des collnnes dans les infoMatrice
	//vérifier le Nom de Ficher

	std::fstream File(NameFaile);
	std::string labelsColonnes;
	std::string LigneFaile;
	std::vector<int> ListDataLigne;

	int NumLignneFile = 0;
	size_t NombreDeColonnesLigne0 = 0;

	if (File.is_open())
	{
		while (std::getline(File, LigneFaile))
		{
			LigneFaile.push_back(',');
			if (NumLignneFile == 0)
			{
				labelsColonnes.clear();
				labelsColonnes = LigneFaile;
			}
			else if (NumLignneFile == 1)
			{
				size_t incchar = 0;
				std::string strData;
				while (LigneFaile[incchar] != '\0')
				{
					if (LigneFaile[incchar] == ',')
					{
						int Dataint;
						NombreDeColonnesLigne0++;//pour vérifier la tailles des colonnes des autres lignes
						Dataint = std::stoi(strData);
						ListDataLigne.push_back(Dataint);
						strData.clear();
					}
					else
						strData.push_back(LigneFaile.at(incchar));

					incchar++;
				}
				this->M_MatriX.push_back(ListDataLigne);
			}
			else
			{
				size_t incchar = 0;
				std::string strData;
				while (LigneFaile[incchar] != '\0')
				{
					if (LigneFaile[incchar] == ',')
					{
						int Dataint;
						NombreDeColonnesLigne0++;//pour vérifier la tailles des colonnes des autres lignes (pas encore terminé)
						Dataint = std::stoi(strData);
						ListDataLigne.push_back(Dataint);
						strData.clear();
					}
					else
						strData.push_back(LigneFaile.at(incchar));

					incchar++;
				}
				this->M_MatriX.push_back(ListDataLigne);
			}
			ListDataLigne.clear();
			NumLignneFile++;
		}
		this->M_InfoMArice.NombreDeLigne = NumLignneFile-1;
		this->M_InfoMArice.NombreDeColonne = this->M_MatriX.at(0).size();
		//this->M_InfoMArice.listeLabelsColonnes = labelsColonnes;//vérefication

		File.close();
		return true;
	}
	else
	return false;
}

bool MatriX::SetDataToFaile(std::string NameFaile)
{
	//i\\je doit vérifier le nom et extention de fichier il doit étre de format mtx
	if (!this->MatrixVide())
	{
		std::string labelscolonnes = "Taille,Age,Boid";
		std::fstream File;

		File.open(NameFaile, 2);

		if (File.is_open())
		{
			for (size_t Ligne = 0; Ligne < this->M_InfoMArice.NombreDeLigne + 1; Ligne++)
			{
				if (Ligne == 0)
				{
					for (size_t ColonneLabels = 0; ColonneLabels < this->M_InfoMArice.NombreDeColonne; ColonneLabels++)
					{
						if (this->M_InfoMArice.ListColonnes.empty())
						{
							File << "X" << ColonneLabels + 1;
							if (ColonneLabels < this->M_InfoMArice.NombreDeColonne - 1)
								File << ',';
						}
						else
						{
							if (this->M_InfoMArice.ListColonnes.size() == 1 && this->M_InfoMArice.NombreDeColonne > 1)
							{
								File << this->M_InfoMArice.ListColonnes.at(0) << ColonneLabels + 1;
								if (ColonneLabels < this->M_InfoMArice.NombreDeColonne - 1)
									File << ',';
							}
							//i\\faire le test pour La Vérification des List Colonnes entré  
							else//si ilya des Liste de Colnne Dans La Matrice
							{
								File << this->M_InfoMArice.ListColonnes.at(ColonneLabels);
								if (ColonneLabels < this->M_InfoMArice.NombreDeColonne - 1)
									File << ',';
							}
						}
					}
					File << std::endl;
				}
				else
				{
					for (size_t Colonne = 0; Colonne < this->M_InfoMArice.NombreDeColonne; Colonne++)
					{
						File << this->M_MatriX.at(Ligne - 1).at(Colonne);
						if (Colonne < this->M_InfoMArice.NombreDeColonne - 1)//pour éviter d'ajouter ',' de trop
							File << ",";
					}
					if (Ligne-1 < this->M_InfoMArice.NombreDeLigne - 1)//pour éviter le retour à la ligne dans le fichier
						File << std::endl;
				}
			}
			File.close();
			return true;
		}
		else
		{
			std::cout << "Imposible d'ouvrire le faile " << NameFaile << std::endl;
			return false;
		}
	}
}

int MatriX::MatrixSymetrique()
{
	unsigned int NumDordre = 0;

	if (!this->MatrixCarre(NumDordre))
		return -1;
	else
	{
		MatriX MatriceTanspos;
		MatriX ThisMatrice;

		MatriceTanspos = this->MatrixTranspose();

		ThisMatrice.M_InfoMArice.NombreDeLigne = this->M_InfoMArice.NombreDeLigne;
		ThisMatrice.M_InfoMArice.NombreDeColonne = this->M_InfoMArice.NombreDeColonne;

		for (size_t Ligne = 0; Ligne < this->M_InfoMArice.NombreDeLigne; Ligne++)
			for (size_t Colonne = 0; Colonne < this->M_InfoMArice.NombreDeColonne; Colonne++)
				ThisMatrice.M_MatriX.push_back(std::vector<int>(this->M_InfoMArice.NombreDeColonne, 0));

		for (size_t Ligne = 0; Ligne < this->M_InfoMArice.NombreDeLigne; Ligne++)
			for (size_t Colonne = 0; Colonne < this->M_InfoMArice.NombreDeColonne; Colonne++)
				ThisMatrice.M_MatriX.at(Ligne).at(Colonne) = this->M_MatriX.at(Ligne).at(Colonne);

		if (MatriceTanspos == ThisMatrice)
			return true;
		else
			return false;
	}
}

MatriX MatriX::MatrixTranspose()
{
	MatriX Res;

	Res.Clear();

	Res.M_InfoMArice.NombreDeColonne = this->M_InfoMArice.NombreDeLigne;
	Res.M_InfoMArice.NombreDeLigne = this->M_InfoMArice.NombreDeColonne;

	for (size_t Ligne = 0; Ligne < Res.M_InfoMArice.NombreDeLigne; Ligne++)
		for (size_t Colonne = 0; Colonne < Res.M_InfoMArice.NombreDeColonne; Colonne++)
			Res.M_MatriX.push_back(std::vector<int>(Res.M_InfoMArice.NombreDeColonne, 0));

	for (size_t Ligne = 0; Ligne < Res.M_InfoMArice.NombreDeLigne; Ligne++)
		for (size_t Colonne = 0; Colonne < Res.M_InfoMArice.NombreDeColonne; Colonne++)
			Res.M_MatriX.at(Ligne).at(Colonne) = this->M_MatriX.at(Colonne).at(Ligne);

	return Res;
}

MatriX MatriX::operator+(MatriX MatricAdd)
{
	MatriX Res;

	if (MatricAdd.M_InfoMArice.NombreDeColonne != this->M_InfoMArice.NombreDeColonne || MatricAdd.M_InfoMArice.NombreDeLigne != this->M_InfoMArice.NombreDeLigne)
		return Res;

	Res.M_InfoMArice.NombreDeColonne = this->M_InfoMArice.NombreDeColonne;
	Res.M_InfoMArice.NombreDeLigne = this->M_InfoMArice.NombreDeLigne;

	for (size_t Ligne = 0; Ligne < Res.M_InfoMArice.NombreDeLigne; Ligne++)
		for (size_t Colonne = 0; Colonne < Res.M_InfoMArice.NombreDeColonne; Colonne++)
			Res.M_MatriX.push_back(std::vector<int>(this->M_InfoMArice.NombreDeColonne, 0));

	for (size_t Ligne = 0; Ligne < this->M_InfoMArice.NombreDeLigne; Ligne++)
		for (size_t Colonne = 0; Colonne < this->M_InfoMArice.NombreDeColonne; Colonne++)
			Res.M_MatriX.at(Ligne).at(Colonne) = this->M_MatriX.at(Ligne).at(Colonne) + MatricAdd.M_MatriX.at(Ligne).at(Colonne);

	return Res;
}

MatriX MatriX::operator+(int Add)
{
	MatriX Res;

	Res.M_InfoMArice.NombreDeColonne = this->M_InfoMArice.NombreDeColonne;
	Res.M_InfoMArice.NombreDeLigne = this->M_InfoMArice.NombreDeLigne;

	for (size_t Ligne = 0; Ligne < Res.M_InfoMArice.NombreDeLigne; Ligne++)
		for (size_t Colonne = 0; Colonne < Res.M_InfoMArice.NombreDeColonne; Colonne++)
			Res.M_MatriX.push_back(std::vector<int>(this->M_InfoMArice.NombreDeColonne, 0));

	for (size_t Ligne = 0; Ligne < this->M_InfoMArice.NombreDeLigne; Ligne++)
		for (size_t Colonne = 0; Colonne < this->M_InfoMArice.NombreDeColonne; Colonne++)
			Res.M_MatriX.at(Ligne).at(Colonne) = this->M_MatriX.at(Ligne).at(Colonne) + Add;

	return Res;
}

MatriX MatriX::operator-(MatriX Matrice)
{
	MatriX Res;//Res = Resulta

	if (Matrice.M_InfoMArice.NombreDeColonne != this->M_InfoMArice.NombreDeColonne || Matrice.M_InfoMArice.NombreDeLigne != this->M_InfoMArice.NombreDeLigne)
		return Res;
	else
	{
		Res = Matrice;

		for (size_t Ligne = 0; Ligne < this->M_InfoMArice.NombreDeLigne; Ligne++)
			for (size_t Colonne = 0; Colonne < this->M_InfoMArice.NombreDeColonne; Colonne++)
				Res.M_MatriX.at(Ligne).at(Colonne) = this->M_MatriX.at(Ligne).at(Colonne) - Matrice.M_MatriX.at(Ligne).at(Colonne);

		return Res;
	}
}

MatriX MatriX::operator-(int Int)
{
	MatriX Res;//Res = Resulta

	Res.M_InfoMArice.NombreDeLigne = this->M_InfoMArice.NombreDeLigne;
	Res.M_InfoMArice.NombreDeColonne = this->M_InfoMArice.NombreDeColonne;


	for (size_t Ligne = 0; Ligne < this->M_InfoMArice.NombreDeLigne; Ligne++)
		for (size_t Colnne = 0; Colnne < this->M_InfoMArice.NombreDeColonne; Colnne++)
			Res.M_MatriX.push_back(std::vector<int>(this->M_InfoMArice.NombreDeColonne, 0));

	for (size_t Ligne = 0; Ligne < this->M_InfoMArice.NombreDeLigne; Ligne++)
		for (size_t Colonne = 0; Colonne < this->M_InfoMArice.NombreDeColonne; Colonne++)
			Res.M_MatriX.at(Ligne).at(Colonne) = this->M_MatriX.at(Ligne).at(Colonne) - Int;

	return Res;

}

MatriX MatriX::operator*(int Multi)
{
	MatriX Res;//Res = Resulta

	Res.M_InfoMArice.NombreDeLigne = this->M_InfoMArice.NombreDeLigne;
	Res.M_InfoMArice.NombreDeColonne = this->M_InfoMArice.NombreDeColonne;


	for (size_t Ligne = 0; Ligne < this->M_InfoMArice.NombreDeLigne; Ligne++)
		for (size_t Colnne = 0; Colnne < this->M_InfoMArice.NombreDeColonne; Colnne++)
			Res.M_MatriX.push_back(std::vector<int>(this->M_InfoMArice.NombreDeColonne, 0));

	for (size_t Ligne = 0; Ligne < this->M_InfoMArice.NombreDeLigne; Ligne++)
		for (size_t Colonne = 0; Colonne < this->M_InfoMArice.NombreDeColonne; Colonne++)
			Res.M_MatriX.at(Ligne).at(Colonne) = this->M_MatriX.at(Ligne).at(Colonne) * Multi;

	return Res;
}

MatriX MatriX::operator*(MatriX const MatriceMuli)
{
	MatriX Res;
	if (this->M_InfoMArice.NombreDeColonne != MatriceMuli.M_InfoMArice.NombreDeLigne)
	{
		std::cout << "nombre de colonne de Matrice (A) et != de nombre de ligne de Matrice (B) " << std::endl;
		Res.M_MatriX.clear();
		return Res;
	}
	else
	{
		Res.M_InfoMArice.NombreDeLigne = this->M_InfoMArice.NombreDeLigne;
		Res.M_InfoMArice.NombreDeColonne = MatriceMuli.M_InfoMArice.NombreDeColonne;

		for (size_t Ligne = 0; Ligne < Res.M_InfoMArice.NombreDeLigne; Ligne++)
			for (size_t Colonne = 0; Colonne < Res.M_InfoMArice.NombreDeColonne; Colonne++)
				Res.M_MatriX.push_back(std::vector<int>(Res.M_InfoMArice.NombreDeColonne, 0));
		int ResSumMulti = 0;
		
		for (size_t LigneRes = 0; LigneRes < Res.M_InfoMArice.NombreDeLigne; LigneRes++)
			for (size_t ColonneRes = 0; ColonneRes < Res.M_InfoMArice.NombreDeColonne; ColonneRes++)
			{
				for (size_t LigneA = 0; LigneA < this->M_InfoMArice.NombreDeColonne; LigneA++)
				{
					ResSumMulti += this->M_MatriX.at(LigneRes).at(LigneA) * MatriceMuli.M_MatriX.at(LigneA).at(ColonneRes);
					if (LigneA == this->M_InfoMArice.NombreDeColonne-1)
						Res.M_MatriX.at(LigneRes).at(ColonneRes) = ResSumMulti;
				}
				ResSumMulti = 0;
			}
		return Res;
	}
}

void MatriX::operator=(const std::vector<std::vector<int>> ListeData)
{
	size_t nombreDeColonne = 0;
	nombreDeColonne = ListeData.at(0).size();
	for (size_t Ligne = 0; Ligne < ListeData.size(); Ligne++)
		for (size_t Colonne = 0; Colonne < ListeData.at(Ligne).size(); Colonne++)
			if (ListeData.at(Ligne).size() != nombreDeColonne)
				throw std::runtime_error("taille de matrice et incorrecte");
			
	this->M_InfoMArice.NombreDeLigne = ListeData.size();
	this->M_InfoMArice.NombreDeColonne = ListeData.at(0).size();
	this->M_MatriX = ListeData;
}

bool MatriX::operator==(MatriX A)
{
	if (A.MatrixVide() || this->MatrixVide())
		return false;
	else
	{
		infoMAtrice infoA;

		infoA = A.GetinfoMatrix();

		if (infoA.NombreDeLigne != this->M_InfoMArice.NombreDeLigne)
			return false;
		else if (infoA.NombreDeColonne != this->M_InfoMArice.NombreDeColonne)
			return false;
		else
		{
			for (size_t Ligne = 0; Ligne < this->M_InfoMArice.NombreDeLigne; Ligne++)
				for (size_t Colonne = 0; Colonne < this->M_InfoMArice.NombreDeColonne; Colonne++)
					if (this->M_MatriX.at(Ligne).at(Colonne) != A.M_MatriX.at(Ligne).at(Colonne))
						return false;
			return true;
		}
	}
}

bool MatriX::operator==(int Int)
{
	int AcumElment = 0;

	for (size_t Ligne = 0; Ligne < this->M_InfoMArice.NombreDeLigne; Ligne++)
		for (size_t Colonne = 0; Colonne < this->M_InfoMArice.NombreDeColonne; Colonne++)
			AcumElment += this->M_MatriX.at(Ligne).at(Colonne);

	if (AcumElment != Int)
		return false;
	else
		return true;
}

bool MatriX::operator<(MatriX Matrice)
{
	int SumMatricA = 0;
	int SumMatricB = 0;

	for (size_t Ligne = 0; Ligne < this->M_InfoMArice.NombreDeLigne; Ligne++)
		for (size_t Colonne = 0; Colonne < this->M_InfoMArice.NombreDeColonne; Colonne++)
			SumMatricA += this->M_MatriX.at(Ligne).at(Colonne);

	for (size_t Ligne = 0; Ligne < Matrice.M_InfoMArice.NombreDeLigne; Ligne++)
		for (size_t Colonne = 0; Colonne < Matrice.M_InfoMArice.NombreDeColonne; Colonne++)
			SumMatricB += Matrice.M_MatriX.at(Ligne).at(Colonne);

	if (SumMatricA < SumMatricB)
		return true;
	else
		return false;
}

bool MatriX::operator<(int Int)
{
	int SumMatricA = 0;

	for (size_t Ligne = 0; Ligne < this->M_InfoMArice.NombreDeLigne; Ligne++)
		for (size_t Colonne = 0; Colonne < this->M_InfoMArice.NombreDeColonne; Colonne++)
			SumMatricA += this->M_MatriX.at(Ligne).at(Colonne);

	if (SumMatricA < Int)
		return true;
	else
		return false;
}

bool MatriX::operator<=(MatriX Matrice)
{
	int SumMatricA = 0;
	int SumMatricB = 0;

	for (size_t Ligne = 0; Ligne < this->M_InfoMArice.NombreDeLigne; Ligne++)
		for (size_t Colonne = 0; Colonne < this->M_InfoMArice.NombreDeColonne; Colonne++)
			SumMatricA += this->M_MatriX.at(Ligne).at(Colonne);

	for (size_t Ligne = 0; Ligne < Matrice.M_InfoMArice.NombreDeLigne; Ligne++)
		for (size_t Colonne = 0; Colonne < Matrice.M_InfoMArice.NombreDeColonne; Colonne++)
			SumMatricB += Matrice.M_MatriX.at(Ligne).at(Colonne);

	if (SumMatricA <= SumMatricB)
		return true;
	else
		return false;
}

bool MatriX::operator<=(int Int)
{
	int SumMatricA = 0;

	for (size_t Ligne = 0; Ligne < this->M_InfoMArice.NombreDeLigne; Ligne++)
		for (size_t Colonne = 0; Colonne < this->M_InfoMArice.NombreDeColonne; Colonne++)
			SumMatricA += this->M_MatriX.at(Ligne).at(Colonne);

	if (SumMatricA <= Int)
		return true;
	else
		return false;
}

bool MatriX::operator>(MatriX Matrice)
{
	int SumMatricA = 0;
	int SumMatricB = 0;

	for (size_t Ligne = 0; Ligne < this->M_InfoMArice.NombreDeLigne; Ligne++)
		for (size_t Colonne = 0; Colonne < this->M_InfoMArice.NombreDeColonne; Colonne++)
			SumMatricA += this->M_MatriX.at(Ligne).at(Colonne);

	for (size_t Ligne = 0; Ligne < Matrice.M_InfoMArice.NombreDeLigne; Ligne++)
		for (size_t Colonne = 0; Colonne < Matrice.M_InfoMArice.NombreDeColonne; Colonne++)
			SumMatricB += Matrice.M_MatriX.at(Ligne).at(Colonne);

	if (SumMatricA > SumMatricB)
		return true;
	else
		return false;
}

bool MatriX::operator>(int Int)
{
	int SumMatricA = 0;

	for (size_t Ligne = 0; Ligne < this->M_InfoMArice.NombreDeLigne; Ligne++)
		for (size_t Colonne = 0; Colonne < this->M_InfoMArice.NombreDeColonne; Colonne++)
			SumMatricA += this->M_MatriX.at(Ligne).at(Colonne);

	if (SumMatricA > Int)
		return true;
	else
		return false;
}

bool MatriX::operator>=(MatriX Matrice)
{
	int SumMatricA = 0;
	int SumMatricB = 0;

	for (size_t Ligne = 0; Ligne < this->M_InfoMArice.NombreDeLigne; Ligne++)
		for (size_t Colonne = 0; Colonne < this->M_InfoMArice.NombreDeColonne; Colonne++)
			SumMatricA += this->M_MatriX.at(Ligne).at(Colonne);

	for (size_t Ligne = 0; Ligne < Matrice.M_InfoMArice.NombreDeLigne; Ligne++)
		for (size_t Colonne = 0; Colonne < Matrice.M_InfoMArice.NombreDeColonne; Colonne++)
			SumMatricB += Matrice.M_MatriX.at(Ligne).at(Colonne);

	if (SumMatricA >= SumMatricB)
		return true;
	else
		return false;
}

bool MatriX::operator>=(int Int)
{
	int SumMatricA = 0;

	for (size_t Ligne = 0; Ligne < this->M_InfoMArice.NombreDeLigne; Ligne++)
		for (size_t Colonne = 0; Colonne < this->M_InfoMArice.NombreDeColonne; Colonne++)
			SumMatricA += this->M_MatriX.at(Ligne).at(Colonne);

	if (SumMatricA >= Int)
		return true;
	else
		return false;
}

MatriX::~MatriX()
{
}

std::ostream & operator<<(std::ostream & os, const infoMAtrice infMat)
{
	std::string strNombreDeLigne = std::to_string(infMat.NombreDeLigne);
	std::string strNombreDeColonne = std::to_string(infMat.NombreDeColonne);

	
	os << "--------------- Info Matrice ---------------" << std::endl
	   << "-- nombre De Ligne = " << infMat.NombreDeLigne;
				
	for (size_t i = 0; i < 20 - strNombreDeLigne.size(); i++)
		os << " ";
	os << "---" << std::endl;
	os << "-- nombre De Colonne = " << infMat.NombreDeColonne; 
	for (size_t i = 0; i < 18 - strNombreDeColonne.size(); i++)
		os << " ";
	os << "---" << std::endl;
	os << "-- Name Matrice = " << infMat.NameMatrice;
	for (size_t i = 0; i < 23 - infMat.NameMatrice.size(); i++)
		os << " ";
	os << "---" << std::endl;
	os << "--------------------------------------------" << std::endl;

	return os;
}