// kim.y에서 switch, case, default, return문 인식 여부를 시험
int classify(int x) {
    switch (x) {
        case 0: return 0;
        case 1:
        case 2: return 1;
        default: return -1;
    }
}
