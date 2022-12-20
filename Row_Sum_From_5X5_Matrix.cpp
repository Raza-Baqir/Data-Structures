#include<iostream>
#include<fstream>

using namespace std;

int main()
{   
    int row = 5;
    int col = 5;
    int sum=0;
    
    int myArray[row][col];
    int ResultArray[col];
    ifstream inputfile("filename.txt");
    
    if (!inputfile.is_open()) 
    cout<<"Error opening file" ;

    
    for (int r = 0; r < row; r++) //Outer loop for rows
    {
        for (int c = 0; c < col; c++) //inner loop for columns
        {
          inputfile >> myArray[r][c]; 
        }
    }
    cout<<"The Data Read from the txt file "<<endl;
    for (int r = 0; r < row; r++)
    {
        cout<<"[";
        for (int c = 0; c < col; c++)
        {
            cout << myArray[r][c] << "\t";
        }
        cout<<"]"<<endl;
    }
    cout<<"---------------------"<<endl;
    for (int r = 0; r < row; r++)
    {
      sum = 0;
        for (int c = 0; c < col; c++)
        {
            sum = sum + myArray[r][c];
            ResultArray[col] =  sum; 
        }
    }
    cout<<"Sum of Each row is from 5*5 metrix "<<endl;
    for (int r = 0; r < row; r++)
    {
        cout<<"[";
        for (int c = 0; c < col; c++)
        {
            cout << myArray[r][c] << "\t";
        }
        cout<<"]";
        cout<<"["<<ResultArray[col]<<"]"<<endl;
    }
    return 0;
}