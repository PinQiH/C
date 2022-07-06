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
        printf("   1. 加入\n");
        printf("   2. 刪除\n");
        printf("   3. 修改\n");
        printf("   4. 列印\n");
        printf("   5. 結束\n");
        printf("*******************\n");
        printf("請選擇任一選項 (1-5): ");
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
                printf("錯誤選項，請重新選擇\n");
        }
    }
}

/* 加入是以分數的高低加以排序 */
void insert_func(void)
{
    ptr = (struct student *) malloc(sizeof(struct student));
    printf("姓名: ");
    scanf("%s", ptr->name);
    flashBuffer();
    
    printf("分數: ");
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

/* 刪除是以姓名為鍵值*/
void delete_func(void)
{
    char del_name[20], ans;
    printf("欲刪除姓名: ");
    scanf("%s", del_name);
    flashBuffer();
    
    prev = head;
    current = head->next;
    while ((current != NULL) && (strcmp(current->name , del_name) != 0)) {
        prev = current;
        current = current->next;
    }
    if (current != NULL) {
        /* 確認是否要刪除 */
        printf("您確定要刪除嗎(y/n)? ");
        ans = getchar();
        flashBuffer();

        if (ans == 'Y' || ans == 'y') {
            prev->next = current->next;
            free(current);
            printf("%s 已被刪除\n", del_name);
        }
    }
    else
        printf("無此筆資料\n");
}

void modify_func(void)
{
    char modify_name[20];
    int modify_score;
    printf("欲修改資料的姓名: ");
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
        printf("原來的分數: %d\n",current->score);
        printf("**************************\n");
        printf("新的分數為: ");
        scanf("%d", &modify_score);
        flashBuffer();
        current->score = modify_score;
        printf("已被修改\n");
    }
    else {
        printf("無此筆資料\n");
        return;
    }

    // 執行以下三個步驟
    // 1、指定 current 節點資料給 newNode
    modifyNode = (struct student *) malloc(sizeof(struct student));
    strcpy(modifyNode->name, current->name);
    modifyNode->score = current->score;
    
    // 2、刪除 current 節點
    prev->next = current->next;
    free(current);
    
    // 3、再重新排序
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
        printf("串列是空的\n");
    }
    else {
        printf("\n");
        printf("  姓名        分數\n");
        printf(" ----------------\n");
        current=head->next;
        while(current != NULL) {
            printf("  %-10s %3d\n", current->name,
            current->score);
            count++;
            current=current->next;
        }
        printf(" ----------------\n");
        printf(" 總共有 %d 筆記錄\n", count);
    }
}

void flashBuffer(void)
{
    while (getchar() != '\n') {
        continue;
    }
}


