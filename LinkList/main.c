//
//  main.c
//  LinkList
//
//  Created by Scarecrow on 15/7/21.
//  Copyright (c) 2015年 ksfly. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>
#include "stuManage.h"
int main(int argc, const char * argv[]) {
    // insert code here...
    LNode *head = initStuTable();
    srand((unsigned)time(NULL)); /*随机种子*/
    for (int i = 0; i < 2; ++i) {
        Student stu;
        sprintf(stu.stuID, "%s%d","no",i);
        stu.mathScore = rand()%99;
        stu.englishScore= rand()%99;
        addStu(stu);
        
    }
    
    Student stu;
    sprintf(stu.stuID, "%s%d","no",111);
    stu.mathScore = 111;
    stu.englishScore= 111;
    addStu(stu);
    printf("after add :\n");
    displayStuTable();
//
//    displayStuTable();

    
    LNode *result = searchStu("no111");
  
    
    reverseList(head);
    
    displayStuTable();
//
//    
//    
//    
//    printf("after add :\n");
//
//    displayStuTable();
//    deleteStu(stu);
//
//    printf("after delete :\n");
//    
//    
//    displayStuTable();
    
    
    
    
    return 0;
}
