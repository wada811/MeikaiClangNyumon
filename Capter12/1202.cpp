/*
    ���K12-2:�g�̉������n���āA�\���̂ŕ\���ł�����̂������āA������v���O�����Ƃ��Ď�������B
*/

#include <stdio.h>

typedef struct{
    char name[20];
    int age;
    int birthday;
}info;

int main(void){
    info wada = {"wada", 22, 811};
    
    printf("wada�̌l��񂪒m�肽���ȁB\n");
    printf("���O�́H�F%s\n", wada.name);
    printf("�N��́H�F%d\n��", wada.age);
    printf("�a�����́H�F%d��%d��\n", wada.birthday/100, wada.birthday%100);
    
    past15years(&wada);
    
    printf("wada�̌l��񂪒m�肽���ȁB\n");
    printf("���O�́H�F%s\n", wada.name);
    printf("�N��́H�F%d\n��", wada.age);
    printf("�a�����́H�F%d��%d��\n", wada.birthday/100, wada.birthday%100);

    return 0;
}

void past15years(info *wada){
    printf("\n������15�N�̌������߂����c�B\n\n");
    wada->age = (*wada).age + 15;
}