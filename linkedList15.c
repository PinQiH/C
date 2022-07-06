/* linkedList15.c */
#include <stdio.h>
#include <stdlib.h>
void insert();
void del();
void display();

struct Node {
    long int id;
    char name[10];
    double score;
    struct Node *next;
};
struct Node *head, *pNode, *current;

int main()
{
    head = malloc(sizeof(struct Node));
    head->next = NULL;    
    int choice;
    do {
        printf("1. 加入一節點\n");
        printf("2. 刪除一節點\n");
        printf("4. 顯示所有節點\n");
        printf("5. 結束\n");
        printf("請選擇: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                insert();
                break;
            case 2:
                del();
                break;
            case 4:
                display();
                break;
            case 5:
                exit(0);
            default:
                printf("輸入號碼不正確，請重新輸入");                
        }
        printf("\n");
    } while(choice != 5);
    getchar();
    return 0;
}

/* 加入一節點於鏈結串列的前端 */
void insert()
{
    /* 利用 malloc() 函式配置記憶體給 n1 */
    pNode = malloc(sizeof(struct Node));
    printf("請輸入ID: ");
    scanf("%ld", &pNode->id);
    printf("請輸入姓名: ");
    scanf("%s", pNode->name);
    printf("請輸入分數: ");
    scanf("%lf", &pNode->score);
    
    /* 加入一節點於鏈結串列的前端 */
    pNode->next = head->next;
    head->next = pNode;    
}

/* 刪除前端節點*/
void del()
{
    /* 將 current 指標指向 head 的下一個節點 */
    current = head->next;
    
    /* 檢視 current 指向的節點若不是空的，則加以刪除 */
    if (current != NULL) {
        head->next = current->next;
        current->next = NULL;
        free(current);
    }
    /* 若是空的，則輸出鏈結串列是空的訊息 */
    else {
        printf("鏈結串列是空的");
    }
}

void display()
{
    /* 印出鏈結串列所有節點的資料 */
    current = head->next;
    
    /* 檢視鏈結串列是否為空 */
    if (current != NULL) {
        printf("%6s %10s %8s\n", "ID", "Name", "Score");
        while (current != NULL) {
            printf("%6ld %10s %8.1f\n", current->id, current->name, current->score);
            /* 將指標移到下一個節點 */
            current = current->next;
        }
    }
    /* 若是空的，則輸出鏈結串列是空的 */
    else {
        printf("鏈結串列是空的\n");
    }
}

//p400
/* linkedList15.c */
#include <stdio.h>
#include <stdlib.h>
void insert();
void del();
void display();

struct Node {
    long int id;
    char name[10];
    double score;
    struct Node *next;};

struct Node *head, *pNode, *current, *prev;

int main()
{
    head = malloc(sizeof(struct Node));
    head->next = NULL;    
    int choice;
    do {
        printf("1. 加入一節點\n");
        printf("2. 刪除一節點\n");
        printf("4. 顯示所有節點\n");
        printf("5. 結束\n");
        printf("請選擇: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                insert();
                break;
            case 2:
                del();
                break;
            case 4:
                display();
                break;
            case 5:
                exit(0);
            default:
                printf("輸入號碼不正確，請重新輸入");                
        }
        printf("\n");
    } while(choice != 5);
    getchar();
    return 0;
}

/* 加入一節點於鏈結串列的前端 */
void insert()
{
    /* 利用 malloc() 函式配置記憶體給 n1 */
    pNode = malloc(sizeof(struct Node));
    printf("請輸入ID: ");
    scanf("%ld", &pNode->id);
    printf("請輸入姓名: ");
    scanf("%s", pNode->name);
    printf("請輸入分數: ");
    scanf("%lf", &pNode->score);
    
    /* 加入一節點於鏈結串列的前端 */
    pNode->next = head->next;
    head->next = pNode;    
}

/* 刪除尾端節點*/
void del()
{
    /* 將 current 指標指向 head 的下一個節點 */
    current = head->next;
    prev = head;
    
    if (current != NULL) {
        /* 找尋鏈結串列的尾端 */
        while (current->next != NULL) {
            prev = current;
            current = current->next;
        }
        /* 將它刪除 */
        prev->next = NULL;
        free(current);
    }
    /* 若是空的，則輸出鏈結串列是空的訊息 */
    else {
        printf("鏈結串列是空的");
    }
}

void display()
{
    /* 印出鏈結串列所有節點的資料 */
    current = head->next;
    
    /* 檢視鏈結串列是否為空 */
    if (current != NULL) {
        printf("%6s %10s %8s\n", "ID", "Name", "Score");
        while (current != NULL) {
            printf("%6ld %10s %8.1f\n", current->id, current->name, current->score);                
            /* 將指標移到下一個節點 */
            current = current->next;
        }
    }
    /* 若是空的，則輸出鏈結串列是空的 */
    else {
        printf("鏈結串列是空的\n");
    }
}

/* linkedList25.c */
#include <stdio.h>
#include <stdlib.h>
void insert();
void del();
void modify();
void display();

struct Node {
    long int id;
    char name[10];
    double score;
    struct Node *next;
};
struct Node *head, *pNode, *current, *prev;

int main()
{
    head = malloc(sizeof(struct Node));
    head->next = NULL;
    
    int choice;
    do {
        printf("1. 加入一節點\n");
        printf("2. 刪除一節點\n");
        printf("3. 修改一節點\n");
        printf("4. 顯示所有節點\n");
        printf("5. 結束\n");
        printf("請選擇: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                insert();
                break;
            case 2:
                del();
                break;
            case 3:
                modify();
                break;
            case 4:
                display();
                break;
            case 5:
                exit(0);
            default:
                printf("輸入號碼不正確，請重新輸入");
                
        }
        printf("\n");
    } while(choice != 5);
    getchar();
    return 0;
}

/* 加入一節點於鏈結串列的前端 */
void insert()
{
    /* 利用 malloc() 函式配置記憶體給 n1 */
    pNode = malloc(sizeof(struct Node));
    printf("請輸入ID: ");
    scanf("%ld", &pNode->id);
    printf("請輸入姓名: ");
    scanf("%s", pNode->name);
    printf("請輸入分數: ");
    scanf("%lf", &pNode->score);
    
    /* 加入一節點於鏈結串列的前端 */
    pNode->next = head->next;
    head->next = pNode;
}

/* 刪除尾端節點*/
void del()
{
    /* 將 current 指標指向 head 的下一個節點 */
    current = head->next;
    prev = head;
    
    if (current != NULL) {
        /* 找尋鏈結串列的尾端 */
        while (current->next != NULL) {
            prev = current;
            current = current->next;
        }
        /* 將它刪除 */
        prev->next = NULL;
        free(current);
    }
    /* 若是空的，則輸出鏈結串列是空的訊息 */
    else {
        printf("鏈結串列是空的");
    }
}

/* 修改某一節點 */
void modify()
{
    long int modifyID;
    double modifyScore;
    int flag = 0;
    printf("請輸入欲修改節點的 ID: ");
    scanf("%ld", &modifyID);
    current = head->next;
    
    /* 找尋欲修改的節點 */
    while (current != NULL) {
        if (current->id == modifyID) {
            printf("目前欲修改節點的資料如下\n");
            printf("%6ld %10s %8.1f\n\n", current->id, 
                        current->name, current->score);
            printf("請輸入欲修改的分數: ");
            scanf("%lf", &modifyScore);
            current->score = modifyScore;
            flag = 1;
            break;
        }
        else {
            current = current->next;
        }
    }
    if (flag == 0) {
        printf("找不到欲修改的節點\n");
    }
}

void display()
{
    /* 印出鏈結串列所有節點的資料 */
    current = head->next;
    
    /* 檢視鏈結串列是否為空 */
    if (current != NULL) {
        printf("%6s %10s %8s\n", "ID", "Name", "Score");
        while (current != NULL) {
            printf("%6ld %10s %8.1f\n", current->id, 
                           current->name, current->score);
            /* 將指標移到下一個節點 */
            current = current->next;
        }
    }
    /* 若是空的，則輸出鏈結串列是空的 */
    else {
        printf("鏈結串列是空的\n");
    }
}


/* linkedList30.c */
#include <stdio.h>
#include <stdlib.h>
void insert();
void del();
void modify();
void display();

struct Node {
    long int id;
    char name[10];
    double score;
    struct Node *next;
};
struct Node *head, *pNode, *current, *prev;

int main()
{
    head = malloc(sizeof(struct Node));
    head->next = NULL;
    
    int choice;
    do {
        printf("1. 加入一節點\n");
        printf("2. 刪除一節點\n");
        printf("3. 修改一節點\n");
        printf("4. 顯示所有節點\n");
        printf("5. 結束\n");
        printf("請選擇: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                insert();
                break;
            case 2:
                del();
                break;
            case 3:
                modify();
                break;
            case 4:
                display();
                break;
            case 5:
                exit(0);
            default:
                printf("輸入號碼不正確，請重新輸入");
                
        }
        printf("\n");
    } while(choice != 5);
    getchar();
    return 0;
}

/* 按照分數由大至小加入一節點於鏈結串列 */
void insert()
{
    /* 利用 malloc() 函式配置記憶體給 n1 */
    pNode = malloc(sizeof(struct Node));
    printf("請輸入ID: ");
    scanf("%ld", &pNode->id);
    printf("請輸入姓名: ");
    scanf("%s", pNode->name);
    printf("請輸入分數: ");
    scanf("%lf", &pNode->score);
    
    /* 加入一節點於鏈結串列 */
    current = head->next;
    prev = head;
    /* 先判斷鏈結串列是否為空 */
    if (current == NULL) {
        head->next = pNode;
        pNode->next = NULL;
    }
    /* 若不是空的，則找適當的位置加入於鏈結串列 */
    else {
        while ((current != NULL) && (pNode->score < current->score)) {
            prev = current;
            current = current->next;
        }
        prev->next = pNode;
        pNode->next = current;
    }
}

/* 刪除某一節點*/
void del()
{
    long int deleteID;
    /* 將 current 指標指向 head 的下一個節點 */
    current = head->next;
    prev = head;
    /* 先判斷鏈結串列是否為空 */
    if (current != NULL) {
        /* 若不是空的，則找尋欲刪除的節點 */
        printf("請輸入欲刪除的 ID: ");
        scanf("%ld", &deleteID);
        /* 找尋欲刪除的節點 */
        while ((current != NULL) && (current->id != deleteID)) 
        {
            prev = current;
            current = current->next;
        }
        /* 若找到，則將它刪除 */
        if (current != NULL) {
            prev->next = current->next;
            current->next = NULL;
            printf("ID: %ld 已刪除\n", current->id);
            free(current);
        }
        /* 若沒有找到，則輸出找不到欲刪除節點的訊息*/
        else {
            printf("找不到欲刪除的節點\n");
        }
    }
    /* 若是空的，則輸出鏈結串列是空的訊息 */
    else {
        printf("鏈結串列是空的\n");
    }
}

/* 修改某一節點 */
void modify()
{
    struct Node *tmp, *adjustNode;
    long int modifyID;
    double modifyScore;
    int flag = 0;
    printf("請輸入欲修改節點的 ID: ");
    scanf("%ld", &modifyID);
    current = head->next;
    prev = head;
    
    /* 找尋欲修改的節點 */
    while (current != NULL) {
        if (current->id == modifyID) {
            printf("目前欲修改節點的資料如下\n");
            printf("%6ld %10s %8.1f\n\n", current->id, current->name, current->score);
            printf("請輸入欲修改的分數: ");
            scanf("%lf", &modifyScore);
            current->score = modifyScore;
            flag = 1;
            break;
        }
        else {
            prev = current;
            current = current->next;
        }
    }
    /* 判斷是否有找到欲修改的節點 */
    if (flag != 0) {
        /* 判斷是否要重新排序 */
        /* 若修改節點的分數大於前一節點的分數 */
        if (head->next != current && current->score >  prev->score) {
            printf("此節點的分數大於前面節點的分數\n"); 
            /* 將 current 指向的節點重新調整其位置 */              
            tmp = current->next;
            current->next = NULL;
            adjustNode = current;
            prev->next = tmp;
            prev = head;
            current = head->next; 
           
            /* 找尋適當的位置加入 */
            while(current != tmp && adjustNode->score < current->score) {
                prev = current;
                current = current->next;
            }
            adjustNode->next = current;
            prev->next = adjustNode;
        }
        else {
            /* 若修改節點的分數小於它的後一個節點 */
            if (current->next != NULL && current->score < current->next->score) {
                printf("此節點的分數小於後面節點的分數\n");
                /* 將 current 指向的節點重新調整其位置 */
                adjustNode = current;
                prev->next = current->next;
                current = current->next;

                /* 找尋適當的位置加入 */
                while(current != NULL && adjustNode->score < current->score) {
                    prev = current;
                    current = current->next;
                }
                adjustNode->next = current;
                prev->next = adjustNode;
            }
        }
    }
    else {
        printf("找不到欲修改的節點\n");
    }   
}

/* 顯示鏈結串列的所有節點資料 */
void display()
{
    /* 印出鏈結串列所有節點的資料 */
    current = head->next;
    
    /* 檢視鏈結串列是否為空 */
    if (current != NULL) {
        printf("%6s %10s %8s\n", "ID", "Name", "Score");
        while (current != NULL) {
            printf("%6ld %10s %8.1f\n", current->id, current->name, current->score);
            /* 將指標移到下一個節點 */
            current = current->next;
        }
    }
    /* 若是空的，則輸出鏈結串列是空的 */
    else {
        printf("鏈結串列是空的\n");
    }
}







