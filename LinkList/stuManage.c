//
//  stuManage.c
//  LinkList
//
//  Created by Scarecrow on 15/7/21.
//  Copyright (c) 2015年 ksfly. All rights reserved.
//

#include "stuManage.h"
#include <stdlib.h>
#include <string.h>
LNode *HEAD;

LNode* initStuTable()
{
    LNode *L = (LNode *)malloc(sizeof(LNode));
    L->next = NULL;
    HEAD = L;
    return L;
}
void displayStuTable()
{
    LNode *p = HEAD->next;
    while (p) {
        printf("the studentNum is %s\n",p->stu.stuID);
        printf("the mathScore is %.2f\n",p->stu.mathScore);
        printf("the englishScore is %.2f\n",p->stu.englishScore);
        printf("\n");

        p = p->next;
    }
}

void addStu(const Student stu)
{
    LNode *p = (LNode *)malloc(sizeof(LNode));
    p->stu = stu;
    p->next = HEAD->next;
    HEAD->next = p;
}

void deleteStu(const Student stu)
{
    LNode *p = HEAD;
    while (p->next) {
        if (strcmp(p->next->stu.stuID,stu.stuID)==0) {
            LNode *q = p->next;
            p->next = q->next;
            free(q);
            break;
        }
        p = p->next;
    }
}

void alterStu(Student oldStu,Student newStu)
{
    //searchStu后修改
}

LNode* searchStu(const char *stuID)
{
    LNode *p = HEAD;
    while (p->next) {
        if (strcmp(p->next->stu.stuID,stuID)==0) {
            LNode *q = p->next;
            return q;
        }
        p = p->next;
    }
    return NULL;
}

LNode* reverseList(LNode *head)
{
    LNode *p = head->next;
    LNode *q = p->next;
    LNode *r = NULL;
    head->next = NULL;
    p->next = NULL;
    while (q) {
        r = q->next;
        q->next = p;
        p = q;
        q = r;
    }
    
    head->next = p;
    HEAD = head;
    return head;
}