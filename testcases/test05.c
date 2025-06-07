// kim.y에서 함수 정의, 지역 변수, while문, return문 인식 여부를 시험
int factorial(int n) {
    int result = 1;
    while (n > 1) {
        result = result * n;
        n--;
    }
    return result;
}
