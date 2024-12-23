vector<int> solution(vector<int> &A, int K) {
	int n = A.size();
	int last = 0;
    if(K < n && n > 0){
		while (K > 0) {
			last = A[n - 1];
			for (int i = n - 1; i > 0; i--) {
				A[i] = A[i - 1];
			}
			A[0] = last;
			K--;
		}
	}
	else if(K > n && n > 0){
		K %= n;
		while (K > 0) {
			last = A[n - 1];
			for (int i = n - 1; i > 0; i--) {
				A[i] = A[i - 1];
			}
			A[0] = last;
			K--;
		}
	}

	return A;
}
