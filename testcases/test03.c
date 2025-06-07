// kim.y에서 typedef, 구조체, 포인터 선언 및 변수 선언 인식 여부를 시험
typedef struct Node { int data; struct Node *next; } Node;
Node *head = 0;

 typedef enum  {CT_RED} Color;
 Color paint = CT_RED;

struct StateMachine {
    enum State { S_INIT } state;

    union  {
        int id;
        char name[20];
    } data;
};
