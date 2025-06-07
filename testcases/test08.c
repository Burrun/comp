// kim.y에서 do-while문, if문, break, return문 인식 여부를 시험
int find_first_positive(int *arr, int n) {
    int i = 0;
    do {
        if (arr[i] > 0)
            return arr[i];
    } while (++i < n);
    return -1;
}
