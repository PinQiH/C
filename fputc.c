
//p245
//fputc.c
#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fptr;
    char ch;
    
    if ((fptr = fopen("character.dat", "w"))== NULL) {
        printf("開檔失敗\n");
        exit(1);
    }
    printf("讀取字元並寫入檔案中...\n");
    while ((ch = getchar()) != '\n') {
        putchar(ch);
        fputc(ch, fptr);
    }
    fputc('\0', fptr);
    fclose(fptr);
    
    getchar();
    return 0;
}


//p427
// fgetc.c
#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fptr;
    char ch;
    
    if ((fptr = fopen("character.dat", "r"))== NULL) {
        printf("開檔失敗\n");
        exit(1);
    }
    
    printf("從檔案中讀取資料...\n");
    ch = fgetc(fptr);
    printf("%c", ch);
    while ((ch = fgetc(fptr)) != EOF) {
        putchar(ch);
    }
    fclose(fptr);
    
    getchar();
    return 0;
}


//p428
// fputs.c
#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fptr;
    char str[81];;
    int i = 1;
    
    if ((fptr = fopen("string.dat", "w"))== NULL) {
        printf("開檔失敗\n");
        exit(1);
    }
    printf("讀取字串並寫入檔案中...\n");
    while (i <= 5) {
        printf("#%d: ", i);
        scanf("%s", str);
        fputs(str, fptr);
        fputs("...", fptr);
        i++;
    }
    fclose(fptr);
    
    getchar();
    return 0;
}


//p429
// fgets.c
#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fptr;
    char str[81];
    
    if ((fptr = fopen("string.dat", "r"))== NULL) {
        printf("開檔失敗\n");
        exit(1);
    }
    printf("從檔案中讀取字串...\n");
    if (fgets(str, 81, fptr) != NULL) {
        printf("%s ", str);
    }
    fclose(fptr);
    
    getchar();
    return 0;
}


//p431
// fprintf.c
#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fptr;
    char name[81];
    int score;
    
    if ((fptr = fopen("students.dat", "w"))== NULL) {
        printf("開檔失敗\n");
        exit(1);
    }
    
    printf("請輸入姓名: ");
    scanf("%s", name);
    printf("請輸入分數: ");
    scanf("%d", &score);
    
    printf("讀取資料並寫入檔案中...\n");
    fprintf(fptr, "%s %d", name, score);
    fclose(fptr);
    
    getchar();
    return 0;
}


//p432
// fscanf.c
#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fptr;
    char name[81];
    int score;
    
    if ((fptr = fopen("students.dat", "r"))== NULL) {
        printf("開檔失敗\n");
        exit(1);
    }

    printf("從檔案中讀取資料...\n");
    fscanf(fptr, "%s %d", name, &score);
    printf("%s: %d", name, score);
    fclose(fptr);
    
    getchar();
    return 0;
}


//p433
/* fileFwrite.c */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fptr;
    struct Student {
        long int id;
        char name[20];
        double score;
    };
    struct Student s1 = {10010, "John", 89.78};
    if ((fptr = fopen("student.dat", "wb")) == NULL) {
        printf("開啟 student.dat 檔案失敗");
        exit(1);
    };
    printf("寫入檔案中...\n");
    fwrite(&s1, sizeof(struct Student), 1, fptr);
    printf("寫入完成\n");
    fclose(fptr);
    
    getchar();
    return 0;
}



//p434
/* fileFread.c */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fptr;
    struct Student {
        long int id;
        char name[20];
        double score;
    };
    struct Student s2;
    
    if ((fptr = fopen("student.dat", "rb")) == NULL) {
        printf("開啟 student.dat 檔案失敗");
        exit(1);
    };
    printf("檔案讀取中...\n");
    fread(&s2, sizeof(struct Student), 1, fptr);
    printf("讀取完成\n");
    printf("ID: %ld\n", s2.id);
    printf("name: %s\n", s2.name);
    printf("score: %.2f\n", s2.score);
    fclose(fptr);
    
    getchar();
    return 0;
}


//p435
// fwriteArray.c
#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fptr;
    int arr[] = {10, 20, 30, 40, 50};

    if ((fptr = fopen("array.dat", "wb")) == NULL) {
        printf("開啟 array.dat 檔案失敗");
        exit(1);
    };
    
    printf("寫入檔案中...\n");
    fwrite(&arr, sizeof(arr), 1, fptr);
    printf("寫入完成\n");
    fclose(fptr);
    
    getchar();
    return 0;
}


//p436
// freadArray.c
#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fptr;
    int arr[5];
    
    if ((fptr = fopen("array.dat", "rb")) == NULL) {
        printf("開啟 array.dat 檔案失敗");
        exit(1);
    };
    
    printf("檔案讀取中...\n");
    fread(&arr, sizeof(arr), 1, fptr);
    printf("讀取完成\n");
    for (int i=0; i<5; i++) {
        printf("arr[%d] = %d\n", i, arr[i]);    
    }

    fclose(fptr);
    getchar();
    return 0;
}


//p437
/* linkedListAndFile.c */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* 函式的原型宣告 */
void insert();
void del();
void modify();
void display();
void saveToFile();
void readFromFile();
void processing();

/* 宣告一個結構的模版 */
struct Node {
    long int id;
    char name[10];
    double score;
    struct Node *next;
};
/* 定義以下的結構全域變數 */
struct Node *head, *pNode, *current, *prev, temp;

/* 定義一指向 FILE 的指標 */
FILE *fptr;

int main()
{
    head = malloc(sizeof(struct Node));
    head->next = NULL;
    
    /* 呼叫 readFromFile() 讀取資料 */
    readFromFile();
    
    /* 呼叫 display() 列印目前鏈結串列的資料 */
    printf("目前鏈結串列的資料如下:\n\n");
    display();
    
    /* 利用一選單讓使用選擇功能項目 */
    int choice;
    do {
        printf("鏈結串列的運作選單\n");
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
                saveToFile();
                exit(0);
            default:
                printf("輸入號碼不正確，請重新輸入\n");                
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
        if (head->next != current && current->score > prev->score) {
            printf("此節點的分數大於前面節點的分數\n");
            /* 將 current 指向的節點重新調整其位置 */
            tmp = current->next;
            current->next = NULL;
            adjustNode = current;
            prev->next = tmp;
            
            /* 重新指定 prev 與 current 指標的指向 */
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
        printf("\n");
    }
    /* 若是空的，則輸出鏈結串列是空的 */
    else {
        printf("鏈結串列是空的\n\n");
    }
}

/* 將鏈結串列的資料儲存於檔案 student.dat 中 */
void saveToFile()
{
    /* 開啟檔案 */
    if ((fptr = fopen("student.dat", "wb")) == NULL) {
        printf("開啟 student.dat 檔案失敗");
        exit(1);
    };
    
    /* 檢視有無資料，則返回 */
    if (head->next == NULL) {
        return;
    }
    
    /* 開始儲存*/
    current = head->next;
    while (current != NULL) {
        fwrite(current, sizeof(struct Node), 1, fptr);
        current = current->next;
    }
    fclose(fptr);
}

/* 從檔案 student.dat 讀取資料並置放於 temp 結構中 */
void readFromFile()
{

    /* 開啟檔案 */
    if ((fptr = fopen("student.dat", "rb")) == NULL) {
        printf("開啟 student.dat 檔案失敗");
        exit(1);
    }
    /* 讀取資料，並建立一鏈結串列 */
    else {
        while (fread(&temp, sizeof(struct Node), 1, fptr) == 1 ) {
            processing();
        }
    }
    fclose(fptr);
}

/* 加入節點資料於鏈結串列 */
void processing()
{
    /* 利用 malloc() 函式配置記憶體給 n1 */
    pNode = malloc(sizeof(struct Node));
    pNode->id = temp.id;
    strcpy(pNode->name, temp.name);
    pNode->score = temp.score;
   
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




