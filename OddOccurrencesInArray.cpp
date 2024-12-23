int solution(vector<int> &A) {
    // Implement your solution here
    int n = A.size();
    std::sort(A.begin(), A.end());
    for(int i = 0; i < n; i++){
        int nn = A.size();
        if(A[nn-1] == A[nn-2]){
            A.pop_back();
            A.pop_back();
        }
        else {
            return A[nn-1];
        }
    }

    return 0;

}
