/* 

* defining structure:

struct structure_tagname{
    data_type member1;
    data_type member2;
    datat_ype member3;
    ...............
    ...............
    .............
    data_type memeberN;
};
eg:
struct student{
    char name[20];
    int rol_no;
    float marks;
}stu1,stu2,st3;
        or
    struct {
    char name[20];
    int rol_no;
    float marks;
}stu1,stu2,st3;

here:tagename is optional

*DECLARING STRUCTURE VARIABLES
1.WITH STRUCTURE DEFINITION
2.USING STRUCTUR TAG:

1.WITH STRUCTURE DEFINITION
struct student{
    char name[20];
    int rol_no;
    float marks;
}stu1,stu2,stu3;


2.USING STRUCTURE TAG:   
struct student{
    char name[20];
    int rol_no;
    float marks;
};
struct student stu1,stu2;
struct student stu3;


// *initialization of structure variables
struct student{
    char name[20];
    int rol_no;
    float marks;
}stu1={"kundan",93,476};
struct student stu2={"thakur",93,437};
struct student stu2={"thakur",0,0};


// invalid
struct student{
    char name[20];
    int rol_no;
    float marks=493;
}stu1={"kundan",93,476};
struct student stu2={"thakur",93,437};
*/


// program to display the values of structure members
/*#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct student
{
    char name[20];
    int roll_no;
    float marks;
};
int main()
{
    struct student stu1={"kundan",93,476};
    struct student stu2,stu3;
    strcpy(stu2.name,"thakur");
    stu2.roll_no=96;
    stu2.marks=437;
    printf("enter the name,roll,marks of student 3 \n");
    scanf("%s%d%2.f",stu3.name,&stu3.roll_no,&stu3.marks);

        printf("%s\t%d\t%.2f\n",stu1.name,stu1.roll_no,stu1.marks);
        printf("%s\t%d\t%.2f\n",stu2.name,stu2.roll_no,stu2.marks);
        printf("%s\t%d\t%.2f\n",stu3.name,stu3.roll_no,stu3.marks);

}
*/

// assignment of structure variables
/*#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct student
{
    char name[20];
    int roll_no;
    float marks;
};
int main()
{
    struct student stu1={"kundan",93,476};
    struct student stu2;
    // strcpy(stu2.name,"thakur");
    // stu2.roll_no=96;
    // stu2.marks=437;
    stu2=stu1;
    // printf("enter the name,roll,marks of student 3 \n");
    // scanf("%s%d%2.f",stu3.name,&stu3.roll_no,&stu3.marks);

        printf("%s\t%d\t%.2f\n",stu1.name,stu1.roll_no,stu1.marks);
        printf("%s\t%d\t%.2f\n",stu2.name,stu2.roll_no,stu2.marks);
        // printf("%s\t%d\t%.2f\n",stu3.name,stu3.roll_no,stu3.marks);

}*/
/*....................storage of structure in memory.....................*/
/*#include<stdio.h>
struct student{
    char name[20];
    int roll;
    float marks;

};
int main()
{
    struct student stu;
    printf("address of name=%u\n",stu.name);
    printf("address of roll=%u\n",&stu.roll);
    printf("address of marks=%u\n",&stu.marks);
      printf("sizeof(struct student)=%u\n",sizeof(struct student));

     printf("sizeof( stu)=%u",sizeof( stu));
    

}*/

/*....................array of structures .....................*/
/*#include<stdio.h>
struct student {
    char name[20];
    int roll;
    float marks;
};
int main()
{
    struct student stuarr[5];
    for(int i=0;i<5;i++)
    {
        printf("enter NAME:ENTER ROLL:ENTER MARKS:\n");
        scanf("%s%d%.2f",stuarr[i].name,&stuarr[i].roll,&stuarr[i].marks);
    }
    for(int i=0;i<10;i++)
    {
         printf("%s\t%d\t%.2f\n",stuarr[i].name,stuarr[i].roll,stuarr[i].marks);
    }


}*/


/*program to understand array within structure*/
/*#include<stdio.h>
struct student {
    char name[20];
    int roll;
    int marks[4];
};
int main()
{
struct student stu[2];
for(int i=0;i<2;i++)
{
    printf("enter data for student %d\n ",i+1);
    printf("enter the NAME:\n");
    scanf("%s",stu[i].name);
    printf("enter the roll number:\n");
    scanf("%d",&stu[i].roll);  
   
    for(int j=0;j<4;j++)    
    {
    printf("enter the marks for subkect %d:",j+1);
    scanf("%d",&stu[i].marks[j]);
    
    }
 }
   printf("---------------------------------------------------------------\n");
 int total=0;
 float percentage;
 char grade;
 int t;
 for(int i=0;i<2;i++)
{
    printf("data of student %d\n",i+1);
    printf("NAME:%s\n ROLL NUMBER:%d\n",stu[i].name,stu[i].roll);
    for(int j=0;j<4;j++)    
    {
          printf("subject %d:%d\n",j+1,stu[i].marks[j]);
       
          printf("\n");
}
}

 for(int i=0;i<1;i++)
{
    for(int j=0;j<4;j++)    
    {
    
      total=total+stu[i].marks[j];
    
      
}
}
}*/

/*NESTED STRUCTURE (STRUCTURE WITHIN STRUCTURE)
syntax:
struct tagname1{
    datatype member1;
    datatype member2;
    ................
    ................
    ................
     datatype member N;
    struct tagname2{
    datatype member1;
    datatype member2;
     ................
    ................
    ................
    datatype member M;
    }var1;
}var2;


#include<stdio.h>
struct student {
    char name[20];
    int roll;
    int marks;
    struct student2{
        char name1[20];
    int roll1;
    int marks1;

    }stu1;
}stu2;
int main()
{
    struct student stu1={"kundan",93,65};
    struct student stu2={"thakur",93,65};
     printf("%s%d%d",stu2.stu1.name1,stu2.stu1.roll1,stu2.stu1.marks1);
    // printf("%s%d%d",stu1.name,stu.stu1.roll1,stu.stu1.marks1);
       

}*/


/*........................pointerto structures...........................
struct  tagname{
    char name[20;
    int roll;
    float marks;

};
struct tagename tag ,*ptr;

**1 for accessing:
 (*ptr).name;
 (*ptr).roll;
 (*ptr).marks;

**2 for accessing:
ptr->name;
ptr->roll;
ptr->marks;
*/

/*program to understand pointer to structre */
/*#include<stdio.h>
struct student{
    char name[20];
    int roll;
    float marks;
};
int main()
{
    struct student stu,*ptr;
    ptr=&stu;
    printf("enter the name roll marks\n  ");
    scanf("%s%d%.2f",stu.name,&stu.roll,&stu.marks);
    printf("NAME:%s\n",ptr->name);
       printf("roll:%d\n",ptr->roll);
          printf("marks:%f\n",ptr->marks);

}*/





/*structure and function*/
// 1.passing struct member as arguments
// 2.passing struct variable as arguments
// 3.passing pointer to structure  as arguments
// 4.returning a structure variable from function
// 5.passing array of structure  as arguments
// 6. self referential structures

// 1.passing struct member as arguments
/*program to understand how structure member are sent to a function*/
/*#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct student {
    char name[20];
    int roll;
    int marks;

};
void display(char name[],int roll,int marks);
int main()
{
struct student stu1={"kundan",93,476};
struct student stu2;
strcpy(stu2.name,"thakur");
stu2.roll=99;
stu2.marks=965;
display(stu1.name,stu1.roll,stu1.marks);
display(stu2.name,stu2.roll,stu2.marks);
}
void display(char name[],int roll,int marks)
{
printf("%s\t",name);
printf("%d\t",roll);
printf("%d\t",marks);
}


#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct student {
    char name[20];
    int roll;
    int marks;

};
void display(char name[],int roll,int marks);
int main()
{
    struct student stu1={"kundan",93,476};
    struct student stu2;
    strcpy(stu2.name,"thakur");
     stu2.roll=96;
     stu2.marks=437;
    display(stu1.name,stu1.roll,stu1.marks);
      display(stu2.name,stu2.roll,stu2.marks);
}
void display(char name[],int roll,int marks){
    printf("%s\n",name);
    printf("%d\n",roll);
    printf("%d\n",marks);
}*/


// 2.passing struct variable as arguments
// e.g:
/*
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct student {
    char name[20];
    int roll;
    int marks;
};
void display(struct student);
int main()
{
    struct student stu1={"kundan",93,476};
    struct student stu2={"thakue",96,745};
    display(stu1);
    display(stu2);
}
void display(struct student stu){
    printf("%s\n",stu.name);
    printf("%d\n",stu.roll);
    printf("%d\n",stu.marks);

}*/



// 3.passing pointer to structure  as arguments
/*
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct student {
    char name[20];
    int roll;
    int marks;
};
void display(struct student *);
void inc_marks(struct student *);
int main()
{
    struct student stu1={"kundan",93,476};
    struct student stu2={"thakur",96,437};
    display(&stu1);
    display(&stu2);
    inc_marks(&stu1);
    inc_marks(&stu2);
}
void display(struct student *ptr){
    printf("%s\n",ptr->name);
    printf("%d\n",ptr->roll);
    printf("%d\n",ptr->marks);
}
void inc_marks(struct student *ptr)

{
(ptr->marks)++;
}*/


// 4.returning a structure variable from function
/*#include<stdio.h>
#include<stdlib.h>

struct student {
    char name[20];
    int roll;
    int marks;
};
void  display(struct student);
struct student change(struct student stu);
int main()
{
struct student stu1={"kundan",96,476};
struct student stu2={"thakue",93,437};
stu1=change(stu1);
stu2=change(stu2);
display(stu1);
display(stu2);
}
struct student change(struct student stu){

    stu.marks=stu.marks+5;
    stu.roll=stu.roll-10;
    return stu;

}
void  display(struct student stu)
{
    printf("%s",stu.name);
    printf("%d",stu.roll);
    printf("%d",stu.marks);
}
*/
// 4.returning a structure variable from function
/*#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct student {
    char name[20];
    int roll;
    int marks;
};
void display(struct student *);
struct student;
struct student*ptr;
int main()
{
    struct student *stuptr;
    stuptr=func();
    display(stuptr);
    free(stuptr);


}
struct student *func()
{
    ptr=(struct student *)malloc(sizeof(struct student));
    strcpy(ptr->name,"kundan");
    ptr->roll=93;
    ptr->marks=476;
    return ptr;
}
void display(struct student *stuptr){
    printf("%s",stuptr->name);
    printf("%d",stuptr->roll);
    printf("%d",stuptr->marks);
}*/
// 5.passing array of structure  as arguments
#include<stdio.h>
struct student
{
   char name[20];
   int roll;
   int marks;

};
void display(struct student );
void dec_marks(struct student stuarr[]);
int main()
{
    int i;
    struct student stuarr[3]={
                            {"kundan",96,476},
                            {"thakur",93,436},
                            {"boss",101,437}
    };
    dec_marks(stuarr);
    for(i=0;i<3;i++)
    {
    display(stuarr[i]);
    }
    void dec_marks(struct student stuarr[])
    {
        int i;
        for(i=0;i<3;i++)
        {
        stuarr[i].marks=stuarr[i].marks-10;
        }
    }
    void display(struct student stu){

printf("%s\n",stu.name);
printf("%d",stu.roll);
printf("%d",stu.marks);
    }
}
