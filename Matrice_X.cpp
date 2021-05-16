#include <iostream>
#include "MatriX.h"

using namespace std;

int main()
{
	MatriX A(2, 3, "matrice", 2);
	MatriX B;
	MatriX C;
	MatriX D;
	MatriX E(2, 3, { {"age"},{"taille"},{"poid"} }, "Matrice");
	MatriX F;
	E = { {30,1.85,85},
	      {25,1.75,75}};

	infoMAtrice InfoE;

	InfoE = E.GetinfoMatrix();
	
	E.SetDataToFaile("TestSetDataToFail.mtx");
	B.GetDataFromAFile("Liste.mtx");
	C.GetDataFromAFile("Liste2.mtx");
	B.AfficherMatrix();
	C.AfficherMatrix();

	D = B * C;
	D.AfficherMatrix();
	MatriX TranD = D.MatrixTranspose();
	TranD.AfficherMatrix();

	A.Clear();
	A.AfficherMatrix();
	A = {{30,25,30},
		 {25,10,55},
		 {35,17,20}};

	A.SetDataToFaile("Test.mtx");
	F.GetDataFromAFile("TestSetDataToFail.mtx");
	F.AfficherMatrix();
	cout << InfoE;
}