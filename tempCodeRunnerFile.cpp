void findLocalMax(const double A[N][N], bool B[N][N]){
	for(int i=0;i<N;i++){
		for(int j=0;j<N;j++){
			if(i==0||j==0){
				B[i][j]=0;
			}else if(i==N-1||j==N-1){
				B[i][j]=0;
			}else if(A[i][j]>=A[i][j-1]&&A[i][j]>=A[i-1][j]&&A[i][j]>=A[i][j+1]&&A[i][j]>=A[i+1][j]){
				B[i][j]=1;
			}
		}
	}
}
