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
        printf("1. �[�J�@�`�I\n");
        printf("2. �R���@�`�I\n");
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
            case 4:
                display();
                break;
            case 5:
                exit(0);
            default:
                printf("��J���X�����T�A�Э��s��J");                
        }
        printf("\n");
    } while(choice != 5);
    getchar();
    return 0;
}

/* �[�J�@�`�I���쵲��C���e�� */
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
    
    /* �[�J�@�`�I���쵲��C���e�� */
    pNode->next = head->next;
    head->next = pNode;    
}

/* �R���e�ݸ`�I*/
void del()
{
    /* �N current ���Ы��V head ���U�@�Ӹ`�I */
    current = head->next;
    
    /* �˵� current ���V���`�I�Y���O�Ū��A�h�[�H�R�� */
    if (current != NULL) {
        head->next = current->next;
        current->next = NULL;
        free(current);
    }
    /* �Y�O�Ū��A�h��X�쵲��C�O�Ū��T�� */
    else {
        printf("�쵲��C�O�Ū�");
    }
}

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
    }
    /* �Y�O�Ū��A�h��X�쵲��C�O�Ū� */
    else {
        printf("�쵲��C�O�Ū�\n");
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
        printf("1. �[�J�@�`�I\n");
        printf("2. �R���@�`�I\n");
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
            case 4:
                display();
                break;
            case 5:
                exit(0);
            default:
                printf("��J���X�����T�A�Э��s��J");                
        }
        printf("\n");
    } while(choice != 5);
    getchar();
    return 0;
}

/* �[�J�@�`�I���쵲��C���e�� */
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
    
    /* �[�J�@�`�I���쵲��C���e�� */
    pNode->next = head->next;
    head->next = pNode;    
}

/* �R�����ݸ`�I*/
void del()
{
    /* �N current ���Ы��V head ���U�@�Ӹ`�I */
    current = head->next;
    prev = head;
    
    if (current != NULL) {
        /* ��M�쵲��C������ */
        while (current->next != NULL) {
            prev = current;
            current = current->next;
        }
        /* �N���R�� */
        prev->next = NULL;
        free(current);
    }
    /* �Y�O�Ū��A�h��X�쵲��C�O�Ū��T�� */
    else {
        printf("�쵲��C�O�Ū�");
    }
}

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
    }
    /* �Y�O�Ū��A�h��X�쵲��C�O�Ū� */
    else {
        printf("�쵲��C�O�Ū�\n");
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
                exit(0);
            default:
                printf("��J���X�����T�A�Э��s��J");
                
        }
        printf("\n");
    } while(choice != 5);
    getchar();
    return 0;
}

/* �[�J�@�`�I���쵲��C���e�� */
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
    
    /* �[�J�@�`�I���쵲��C���e�� */
    pNode->next = head->next;
    head->next = pNode;
}

/* �R�����ݸ`�I*/
void del()
{
    /* �N current ���Ы��V head ���U�@�Ӹ`�I */
    current = head->next;
    prev = head;
    
    if (current != NULL) {
        /* ��M�쵲��C������ */
        while (current->next != NULL) {
            prev = current;
            current = current->next;
        }
        /* �N���R�� */
        prev->next = NULL;
        free(current);
    }
    /* �Y�O�Ū��A�h��X�쵲��C�O�Ū��T�� */
    else {
        printf("�쵲��C�O�Ū�");
    }
}

/* �ק�Y�@�`�I */
void modify()
{
    long int modifyID;
    double modifyScore;
    int flag = 0;
    printf("�п�J���ק�`�I�� ID: ");
    scanf("%ld", &modifyID);
    current = head->next;
    
    /* ��M���ק諸�`�I */
    while (current != NULL) {
        if (current->id == modifyID) {
            printf("�ثe���ק�`�I����Ʀp�U\n");
            printf("%6ld %10s %8.1f\n\n", current->id, 
                        current->name, current->score);
            printf("�п�J���ק諸����: ");
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
        printf("�䤣����ק諸�`�I\n");
    }
}

void display()
{
    /* �L�X�쵲��C�Ҧ��`�I����� */
    current = head->next;
    
    /* �˵��쵲��C�O�_���� */
    if (current != NULL) {
        printf("%6s %10s %8s\n", "ID", "Name", "Score");
        while (current != NULL) {
            printf("%6ld %10s %8.1f\n", current->id, 
                           current->name, current->score);
            /* �N���в���U�@�Ӹ`�I */
            current = current->next;
        }
    }
    /* �Y�O�Ū��A�h��X�쵲��C�O�Ū� */
    else {
        printf("�쵲��C�O�Ū�\n");
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
                exit(0);
            default:
                printf("��J���X�����T�A�Э��s��J");
                
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
        if (head->next != current && current->score >  prev->score) {
            printf("���`�I�����Ƥj��e���`�I������\n"); 
            /* �N current ���V���`�I���s�վ���m */              
            tmp = current->next;
            current->next = NULL;
            adjustNode = current;
            prev->next = tmp;
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
    }
    /* �Y�O�Ū��A�h��X�쵲��C�O�Ū� */
    else {
        printf("�쵲��C�O�Ū�\n");
    }
}







