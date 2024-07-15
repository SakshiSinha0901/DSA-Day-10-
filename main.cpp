// COLUMN WISE
// int main(){
//     int arr[3][2] =
//     // intialise 
//     {
//         {1, 2,},
//         {5, 6,},
//         {9, 10,}
//     };
//     int rowSize = 3;
//     int colSize = 2;

//     for(int c=0; c<colSize; c++){
//         for (int r=0; r<rowSize; r++){
//             cout<<arr[r][c]<<" ";
//         }
//         cout<<endl;
//     }
// }

//DIAGONAL PRINT (ONLY IN SQUARE MATRIX)
// int main(){
//     int arr[3][3] =
//     // intialise 
//     {
//         {1, 2,3},
//         {5, 6,7},
//         {9, 10,1}
//     };
//     int rowSize = 3;
//     int colSize = 3;

//     // for(int r=0; r<rowSize; r++){
//     //     for (int c=0; c<colSize; c++){
//     //         if (r==c){
//     //         cout<<arr[r][c]<<" ";
//     //         }
//     //     }
//     //     cout<<endl;
//     // }
//     //OR
//     for(int i=0; i<rowSize; i++){
//         cout<< arr[i][i] <<" ";  
//     }
// }

// TAKING INPUT IN 2D ARRAYS
//ROW-WISE
// int main(){
//     int arr[2][3];

//     int rowSize = 2;
//     int colSize = 3;

//     for(int r=0; r<rowSize; r++ ){
//         for(int c=0;c<colSize; c++){
//             cout<< "Enter the values for (" << r<< " , "<< c<<") :";
//             cin >>arr[r][c];
//         }
//     }

//     for (int rowIndex=0; rowIndex<rowSize; rowIndex++){
//         for (int colIndex=0; colIndex < colSize; colIndex++){
//             cout<< arr[rowIndex][colIndex]<< " ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }
//COLUMN WISE
int main(){
    int arr[2][3];
    int colSize = 3;
    int rowSize = 2;

    for(int c=0;c<colSize; c++ ){
        for(int r=0; r<rowSize; r++){
            cout<< "Enter the values for (" << r<< " , "<< c<<") :";
            cin >>arr[r][c];
        }
    }

    for (int rowIndex=0; rowIndex<rowSize; rowIndex++){
        for (int colIndex=0; colIndex < colSize; colIndex++){
            cout<< arr[rowIndex][colIndex]<< " ";
        }
        cout<<endl;
    }
    return 0;
}
