
//p245
//fputc.c
#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fptr;
    char ch;
    
    if ((fptr = fopen("character.dat", "w"))== NULL) {
        printf("�}�ɥ���\n");
        exit(1);
    }
    printf("Ū���r���üg�J�ɮפ�...\n");
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
        printf("�}�ɥ���\n");
        exit(1);
    }
    
    printf("�q�ɮפ�Ū�����...\n");
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
        printf("�}�ɥ���\n");
        exit(1);
    }
    printf("Ū���r��üg�J�ɮפ�...\n");
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
        printf("�}�ɥ���\n");
        exit(1);
    }
    printf("�q�ɮפ�Ū���r��...\n");
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
        printf("�}�ɥ���\n");
        exit(1);
    }
    
    printf("�п�J�m�W: ");
    scanf("%s", name);
    printf("�п�J����: ");
    scanf("%d", &score);
    
    printf("Ū����ƨüg�J�ɮפ�...\n");
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
        printf("�}�ɥ���\n");
        exit(1);
    }

    printf("�q�ɮפ�Ū�����...\n");
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
        printf("�}�� student.dat �ɮץ���");
        exit(1);
    };
    printf("�g�J�ɮפ�...\n");
    fwrite(&s1, sizeof(struct Student), 1, fptr);
    printf("�g�J����\n");
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
        printf("�}�� student.dat �ɮץ���");
        exit(1);
    };
    printf("�ɮ�Ū����...\n");
    fread(&s2, sizeof(struct Student), 1, fptr);
    printf("Ū������\n");
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
        printf("�}�� array.dat �ɮץ���");
        exit(1);
    };
    
    printf("�g�J�ɮפ�...\n");
    fwrite(&arr, sizeof(arr), 1, fptr);
    printf("�g�J����\n");
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
        printf("�}�� array.dat �ɮץ���");
        exit(1);
    };
    
    printf("�ɮ�Ū����...\n");
    fread(&arr, sizeof(arr), 1, fptr);
    printf("Ū������\n");
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

/* �禡���쫬�ŧi */
void insert();
void del();
void modify();
void display();
void saveToFile();
void readFromFile();
void processing();

/* �ŧi�@�ӵ��c���Ҫ� */
struct Node {
    long int id;
    char name[10];
    double score;
    struct Node *next;
};
/* �w�q�H�U�����c�����ܼ� */
struct Node *head, *pNode, *current, *prev, temp;

/* �w�q�@���V FILE ������ */
FILE *fptr;

int main()
{
    head = malloc(sizeof(struct Node));
    head->next = NULL;
    
    /* �I�s readFromFile() Ū����� */
    readFromFile();
    
    /* �I�s display() �C�L�ثe�쵲��C����� */
    printf("�ثe�쵲��C����Ʀp�U:\n\n");
    display();
    
    /* �Q�Τ@������ϥο�ܥ\�ඵ�� */
    int choice;
    do {
        printf("�쵲��C���B�@���\n");
        printf("1. �[�J�@�`�I\n");
        printf("2. �R���@�`�I\n");
        printf("3. �ק�@�`�I\n");
        printf("4. ��ܩҦ��`�I\n");
        printf("5. ����\n");
        printf("�п��: ");
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
                printf("��J���X�����T�A�Э��s��J\n");                
        }
        printf("\n");
    } while(choice != 5);
    getchar();
    return 0;
}

/* ���Ӥ��ƥѤj�ܤp�[�J�@�`�I���쵲��C */
void insert()
{
    /* �Q�� malloc() �禡�t�m�O���鵹 n1 */
    pNode = malloc(sizeof(struct Node));
    printf("�п�JID: ");
    scanf("%ld", &pNode->id);
    printf("�п�J�m�W: ");
    scanf("%s", pNode->name);
    printf("�п�J����: ");
    scanf("%lf", &pNode->score);
    
    /* �[�J�@�`�I���쵲��C */
    current = head->next;
    prev = head;
    /* ���P�_�쵲��C�O�_���� */
    if (current == NULL) {
        head->next = pNode;
        pNode->next = NULL;
    }
    /* �Y���O�Ū��A�h��A����m�[�J���쵲��C */
    else {
        while ((current != NULL) && (pNode->score < current->score)) {
            prev = current;
            current = current->next;
        }
        prev->next = pNode;
        pNode->next = current;
    }
}

/* �R���Y�@�`�I*/
void del()
{
    long int deleteID;
    /* �N current ���Ы��V head ���U�@�Ӹ`�I */
    current = head->next;
    prev = head;
    /* ���P�_�쵲��C�O�_���� */
    if (current != NULL) {
        /* �Y���O�Ū��A�h��M���R�����`�I */
        printf("�п�J���R���� ID: ");
        scanf("%ld", &deleteID);
        /* ��M���R�����`�I */
        while ((current != NULL) && (current->id != deleteID)) 
        {
            prev = current;
            current = current->next;
        }
        /* �Y���A�h�N���R�� */
        if (current != NULL) {
            prev->next = current->next;
            current->next = NULL;
            printf("ID: %ld �w�R��\n", current->id);
            free(current);
        }
        /* �Y�S�����A�h��X�䤣����R���`�I���T��*/
        else {
            printf("�䤣����R�����`�I\n");
        }
    }
    /* �Y�O�Ū��A�h��X�쵲��C�O�Ū��T�� */
    else {
        printf("�쵲��C�O�Ū�\n");
    }
}

/* �ק�Y�@�`�I */
void modify()
{
    struct Node *tmp, *adjustNode;
    long int modifyID;
    double modifyScore;
    int flag = 0;
    printf("�п�J���ק�`�I�� ID: ");
    scanf("%ld", &modifyID);
    current = head->next;
    prev = head;
    
    /* ��M���ק諸�`�I */
    while (current != NULL) {
        if (current->id == modifyID) {
            printf("�ثe���ק�`�I����Ʀp�U\n");
            printf("%6ld %10s %8.1f\n\n", current->id, current->name, current->score);
            printf("�п�J���ק諸����: ");
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
    /* �P�_�O�_�������ק諸�`�I */
    if (flag != 0) {
        /* �P�_�O�_�n���s�Ƨ� */
        /* �Y�ק�`�I�����Ƥj��e�@�`�I������ */
        if (head->next != current && current->score > prev->score) {
            printf("���`�I�����Ƥj��e���`�I������\n");
            /* �N current ���V���`�I���s�վ���m */
            tmp = current->next;
            current->next = NULL;
            adjustNode = current;
            prev->next = tmp;
            
            /* ���s���w prev �P current ���Ъ����V */
            prev = head;
            current = head->next;
            
            /* ��M�A����m�[�J */
            while(current != tmp && adjustNode->score < current->score) {
                prev = current;
                current = current->next;
            }
            adjustNode->next = current;
            prev->next = adjustNode;
        }
        else {
            /* �Y�ק�`�I�����Ƥp�󥦪���@�Ӹ`�I */
            if (current->next != NULL && current->score < current->next->score) {
                printf("���`�I�����Ƥp��᭱�`�I������\n");
                /* �N current ���V���`�I���s�վ���m */
                adjustNode = current;
                prev->next = current->next;
                current = current->next;
                
                /* ��M�A����m�[�J */
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
        printf("�䤣����ק諸�`�I\n");
    }
}

/* ����쵲��C���Ҧ��`�I��� */
void display()
{
    /* �L�X�쵲��C�Ҧ��`�I����� */
    current = head->next;
    
    /* �˵��쵲��C�O�_���� */
    if (current != NULL) {
        printf("%6s %10s %8s\n", "ID", "Name", "Score");
        while (current != NULL) {
            printf("%6ld %10s %8.1f\n", current->id, current->name, current->score);
            /* �N���в���U�@�Ӹ`�I */
            current = current->next;
        }
        printf("\n");
    }
    /* �Y�O�Ū��A�h��X�쵲��C�O�Ū� */
    else {
        printf("�쵲��C�O�Ū�\n\n");
    }
}

/* �N�쵲��C������x�s���ɮ� student.dat �� */
void saveToFile()
{
    /* �}���ɮ� */
    if ((fptr = fopen("student.dat", "wb")) == NULL) {
        printf("�}�� student.dat �ɮץ���");
        exit(1);
    };
    
    /* �˵����L��ơA�h��^ */
    if (head->next == NULL) {
        return;
    }
    
    /* �}�l�x�s*/
    current = head->next;
    while (current != NULL) {
        fwrite(current, sizeof(struct Node), 1, fptr);
        current = current->next;
    }
    fclose(fptr);
}

/* �q�ɮ� student.dat Ū����ƨøm��� temp ���c�� */
void readFromFile()
{

    /* �}���ɮ� */
    if ((fptr = fopen("student.dat", "rb")) == NULL) {
        printf("�}�� student.dat �ɮץ���");
        exit(1);
    }
    /* Ū����ơA�ëإߤ@�쵲��C */
    else {
        while (fread(&temp, sizeof(struct Node), 1, fptr) == 1 ) {
            processing();
        }
    }
    fclose(fptr);
}

/* �[�J�`�I��Ʃ��쵲��C */
void processing()
{
    /* �Q�� malloc() �禡�t�m�O���鵹 n1 */
    pNode = malloc(sizeof(struct Node));
    pNode->id = temp.id;
    strcpy(pNode->name, temp.name);
    pNode->score = temp.score;
   
    /* �[�J�@�`�I���쵲��C */
    current = head->next;
    prev = head;
    /* ���P�_�쵲��C�O�_���� */
    if (current == NULL) {
        head->next = pNode;
        pNode->next = NULL;
    }
    /* �Y���O�Ū��A�h��A����m�[�J���쵲��C */
    else {
        while ((current != NULL) && (pNode->score < current->score)) {
            prev = current;
            current = current->next;
        }
        prev->next = pNode;
        pNode->next = current;
    }
}




