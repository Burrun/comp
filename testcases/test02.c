// kim.y에서 구조체, 공용체, 열거형 선언 및 변수 선언 인식 여부를 시험
struct Point { int x; int y; } p = {1, 2};
union Data { int i; float f; char str[20]; } data;
enum Color { RED, GREEN = 3, BLUE } c = BLUE;

int main() {
    p.x = 10;
    p.y = 20;
    return 0;
}
