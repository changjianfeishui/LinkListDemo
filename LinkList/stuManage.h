//
//  stuManage.h
//  LinkList
//
//  Created by Scarecrow on 15/7/21.
//  Copyright (c) 2015年 ksfly. All rights reserved.
//

#ifndef __LinkList__stuManage__
#define __LinkList__stuManage__

#include <stdio.h>
typedef enum {
    initFalse = 0,
    initSuccess
}State;
typedef  struct Student{
    char stuID[10];
    char stuName[10];
    float mathScore;
    float englishScore;
}Student;

typedef struct LNode{
    Student stu;
    struct LNode *next;
}LNode;

/**
    初始化
 */
LNode* initStuTable();

//增
void addStu(const Student stu);
//删
void deleteStu(const Student stu);
//改
void alterStu(Student oldStu,Student newStu);
//查
LNode* searchStu(const char *stuID);
//逆序
LNode* reverseList(LNode *head);


void displayStuTable();
#endif /* defined(__LinkList__stuManage__) */
