/* File name: singleListUsingC.c */
/* Copyright by Bright 11-26-2016 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// function prototype
void insert_func(void);
void sort_func(void);
void delete_func(void);
void display_func(void);
void modify_func(void);
void flashBuffer(void);

struct student {
    char name[20];
    int score;
    struct student *next;
};
struct student *ptr, *head, *current, *prev, *modifyNode;

int main()
{
    char option1;
    head = (struct student *) malloc(sizeof(struct student));
    head->next = NULL;
    while(1) {
        printf("\n");
        printf("******************\n");
        printf("   1. �[�J\n");
        printf("   2. �R��\n");
        printf("   3. �ק�\n");
        printf("   4. �C�L\n");
        printf("   5. ����\n");
        printf("*******************\n");
        printf("�п�ܥ��@�ﶵ (1-5): ");
        option1 = getchar();
        flashBuffer();

        switch(option1) {
            case '1':
                insert_func();
                break;
            case '2':
                delete_func();
                break;
            case '3':
                modify_func();
                break;
            case '4':
                display_func();
                break;
            case '5':
                printf("\n");
                return 0;
            default:
                printf("���~�ﶵ�A�Э��s���\n");
        }
    }
}

/* �[�J�O�H���ƪ����C�[�H�Ƨ� */
void insert_func(void)
{
    ptr = (struct student *) malloc(sizeof(struct student));
    printf("�m�W: ");
    scanf("%s", ptr->name);
    flashBuffer();
    
    printf("����: ");
    scanf("%d", &ptr->score);
    flashBuffer();
    
    prev = head;
    current = head->next;
     while ((current != NULL) && (current->score > ptr->score)) {
        prev = current;
        current = current->next;
    }
    ptr->next = current;
    prev->next = ptr;
}

/* �R���O�H�m�W�����*/
void delete_func(void)
{
    char del_name[20], ans;
    printf("���R���m�W: ");
    scanf("%s", del_name);
    flashBuffer();
    
    prev = head;
    current = head->next;
    while ((current != NULL) && (strcmp(current->name , del_name) != 0)) {
        prev = current;
        current = current->next;
    }
    if (current != NULL) {
        /* �T�{�O�_�n�R�� */
        printf("�z�T�w�n�R����(y/n)? ");
        ans = getchar();
        flashBuffer();

        if (ans == 'Y' || ans == 'y') {
            prev->next = current->next;
            free(current);
            printf("%s �w�Q�R��\n", del_name);
        }
    }
    else
        printf("�L�������\n");
}

void modify_func(void)
{
    char modify_name[20];
    int modify_score;
    printf("���ק��ƪ��m�W: ");
    scanf("%s", modify_name);
    flashBuffer();
    
    current=head->next;
    while((current!=NULL) && (strcmp(current->name, modify_name)!=0))
    {
        prev = current;
        current = current->next;
    }
    if (current != NULL) {
        printf("**************************\n");
        printf("��Ӫ�����: %d\n",current->score);
        printf("**************************\n");
        printf("�s�����Ƭ�: ");
        scanf("%d", &modify_score);
        flashBuffer();
        current->score = modify_score;
        printf("�w�Q�ק�\n");
    }
    else {
        printf("�L�������\n");
        return;
    }

    // ����H�U�T�ӨB�J
    // 1�B���w current �`�I��Ƶ� newNode
    modifyNode = (struct student *) malloc(sizeof(struct student));
    strcpy(modifyNode->name, current->name);
    modifyNode->score = current->score;
    
    // 2�B�R�� current �`�I
    prev->next = current->next;
    free(current);
    
    // 3�B�A���s�Ƨ�
    prev = head;
    current = head->next;
    while ((current != NULL) && (current->score > modifyNode->score))
    {
        prev = current;
        current = current->next;
    }
    modifyNode->next = current;
    prev->next = modifyNode;
    
}

void display_func(void)
{
    int count=0;
    
    if(head->next == NULL) {
        printf("��C�O�Ū�\n");
    }
    else {
        printf("\n");
        printf("  �m�W        ����\n");
        printf(" ----------------\n");
        current=head->next;
        while(current != NULL) {
            printf("  %-10s %3d\n", current->name,
            current->score);
            count++;
            current=current->next;
        }
        printf(" ----------------\n");
        printf(" �`�@�� %d ���O��\n", count);
    }
}

void flashBuffer(void)
{
    while (getchar() != '\n') {
        continue;
    }
}


