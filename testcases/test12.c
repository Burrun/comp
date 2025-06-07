// sizeof , bitwise, malloc 실험

int main() {
    char *p1 = malloc(128);
    char **p2 = malloc(sizeof(char *) * 8);
    char ***p3 = malloc(sizeof(char **) * 4);
    if (!p1 || !p2 || !p3) return -1;
    p2[0] = p1;
    p3[0] = p2;
    return 0;
}
