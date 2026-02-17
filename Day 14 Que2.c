void rotate(int** matrix, int matrixSize, int* matrixColSize) {
    int left=0,right,temp;
    for(int i=0;i<matrixSize;i++){
        for(int j=i+1;j<matrixSize;j++){
            int temp=matrix[i][j];
            matrix[i][j]=matrix[j][i];
            matrix[j][i]=temp;
        }
    }
    for(int i=0;i<matrixSize;i++){
        left=0, right=matrixSize-1;
        while(left<right){
            temp=matrix[i][left];
            matrix[i][left]=matrix[i][right];
            matrix[i][right]=temp;
            left++; right--;
        }
    }  } 
