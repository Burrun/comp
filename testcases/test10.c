// kim.y에서 함수 선언, 함수 포인터 선언 및 대입 인식 여부를 시험
int add(int, int);
int (*funcPtr)(int, int) = add;


int (*(*complexFunc(int a))[10])(char *);


int (*(*funcArr[5])(float))[4];
