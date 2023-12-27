#include <iostream>
#include <vector>



using namespace std;


class Info{

  public:
      vector<vector<int>> matrix;
      void createMatrix(int sizeM){
        int i,j,k;
        for(i = 0; i < sizeM; i++){
         vector<int> temp;
         for(j = 0; j < sizeM; j++){
           cin >> k;
            temp.push_back(k);

        }

matrix.push_back(temp);

}
     return;

      }


      void showMatrix(){

      for(int i = 0; i < matrix.size(); i++){

         for(int j = 0; j < matrix[i].size(); j++){
            cout << matrix[i][j];
         }
       cout << "\n";
      }
      return;
      }

};

class Determinant : public Info{



 public:

     Info newMatrix;
     double calculateDet(){

     newMatrix.createMatrix(3);

     return (newMatrix.matrix[0][0] * (calculateDetOfPieceMatrix(0,0))) - (newMatrix.matrix[1][0] * (calculateDetOfPieceMatrix(1,0))) + (newMatrix.matrix[2][0] * (calculateDetOfPieceMatrix(2,0)));

     }

     double calculateDetOfPieceMatrix(int indexRow,int indexColumn){

     int i,j;
     vector<vector<int>> pieceMatrix;
     for(i = 0; i < newMatrix.matrix.size(); i++){

        vector<int> temp;
        if(i == indexRow) continue;
        for(j = 0; j < newMatrix.matrix[i].size(); j++){

                if(j != indexColumn){
                temp.push_back(newMatrix.matrix[i][j]);

                }
                else{
                    continue;
                }




        }


        pieceMatrix.push_back(temp);

     }
     return (pieceMatrix[0][0] * pieceMatrix[1][1]) - (pieceMatrix[1][0] * pieceMatrix[0][1]);


     }






};

int main(){

Determinant matrix;
double determinant = matrix.calculateDet();
cout << "Det:" <<  determinant;

return 0;

}
