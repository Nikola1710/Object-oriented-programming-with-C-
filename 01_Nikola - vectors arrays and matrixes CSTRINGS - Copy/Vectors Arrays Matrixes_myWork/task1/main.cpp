#include <iostream>	
#include <string>
#include <sstream>
#include <cassert>
#include <vector>
using namespace std;

//-----Constants-----
const int a = 2;
const int b = 2;
//-------------------


//--------Arrays and Vectors------//


//Read arr[][] and write arr[][] in the cout 
void ReadArr( int arr[][b] , int row , int col)
{
	//assert(row <= a , col <= b);
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			cout << "[" << i << "]" << "[" << j << "]";
			cin >> arr[i][j];
			cout << arr[i][j];
		}
	}
}


// Determinat of a matrix 
inline double detOfAMatrix(const int arr[][b])
{
	return arr[0][0] * arr[1][1] - arr[0][1] * arr[1][0];
}


// Vectors 
void readNum(vector<int>& vectorOfNums , int& vectorSize , int& vectorInput)
{
	for (int i = 0; i < vectorSize; i++)
	{
		cin >> vectorInput;
		vectorOfNums.push_back(vectorInput);
		
	}
}
void writeNum(vector<int>& vectorOfNums , int& vectorSize )
{
	for (int i = 0; i < vectorSize; i++)
	{
		cout << vectorOfNums[i] << endl;
	}
}


//3D vectors / Matrix
void readVector(vector<vector<int>> &matr)
{
	for (int i = 0; i < matr.size(); i++)
	{
		for (int j = 0; j < matr.size(); j++)
		{
			cin >> matr[i][j];
		}
	}
}
void writeVector(vector<vector<int>>& matr)
{
	for (int i = 0; i < matr.size(); i++)
	{
		for (int j = 0; j < matr.size(); j++)
		{
			cout <<"The copy:"<< matr[i][j] << endl;
		}
	}
}

//------------------END--------------//



int main()
{

//-------Arrays , Vectors and Matrixes ---------

			//Arrays and marix of arrays
			int arr[a][b]; //init the arr[][]

			ReadArr(arr, 2, 2);  // Reads and writes from the standard input  // really important to watch the 2nd and 3rd argument to be less than the a and b vars or assert fail will happen
			cout << detOfAMatrix(arr); // prints the determinant of the matrix 

		
			//Vectors
			vector<int> vectorOfNums; //init the vector 

			int vectorSize; // a size var 
			cout << "Enter a vector size" << endl;
			cin >> vectorSize;

			cout << "Enter real numbers into the vector :" << endl; // input numbers into vector 
			int vectorInput;
			readNum(vectorOfNums, vectorSize, vectorInput);
			writeNum(vectorOfNums, vectorSize);

	
			//Matrix of vectors
			int row;
			int col;
			cout << "Enter values for row:" << endl;
			cin >> row;

			cout << "Enter values for col:" << endl;
			cin >> col;

			vector<vector<int>> matr(row, vector<int>(col)); //2d vector
			readVector(matr);
			writeVector(matr);

	//----------------- Till here ----------------------------//
	return 0;
}