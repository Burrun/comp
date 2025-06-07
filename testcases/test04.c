// kim.y에서 함수 정의, 매개변수, return문 인식 여부를 시험
int add(int a, int b) {
    return a + b;
}


// //errors
// int badParam(int float param);  

// int badParam(int param); 

// int clash(int);
// float  clash(float x) { return 0; }

// int clash1(int ) { return 0; }

// int clash2(int)(double x);

