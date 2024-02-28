// Move from 1 to A-->C
// Move from 2 to A-->B
// Move from 1 to C-->B
// Move from 3 to A-->C
// Move from 1 to B-->A
// Move from 2 to B-->C
// Move from 1 to A-->C
// Move from 4 to A-->B
// Move from 1 to C-->B
// Move from 2 to C-->A
// Move from 1 to B-->A
// Move from 3 to C-->B
// Move from 1 to A-->C
// Move from 2 to A-->B
// Move from 1 to C-->B
// Move from 5 to A-->C
// Move from 1 to B-->A
// Move from 2 to B-->C
// Move from 1 to A-->C
// Move from 3 to B-->A
// Move from 1 to C-->B
// Move from 2 to C-->A
// Move from 1 to B-->A
// Move from 4 to B-->C
// Move from 1 to A-->C
// Move from 2 to A-->B
// Move from 1 to C-->B
// Move from 3 to A-->C
// Move from 1 to B-->A
// Move from 2 to B-->C
// Move from 1 to A-->C32
#include<stdio.h>
void TowerOfHanoi(int ndisk,char source,char temp,char dest);
int main()
{
char source='A',temp='B',dest='C';
int nDisk;
printf("enter the number of disk\n");
scanf("%d",&nDisk);
TowerOfHanoi(nDisk,source,temp,dest);
}
void TowerOfHanoi(int ndisk,char source,char temp,char dest)
{
    if(ndisk==1)
    {
        printf("Move from %d to %c-->%c\n",ndisk,source,dest);
        return;
    }
    TowerOfHanoi(ndisk-1,source, dest,temp);
     printf("Move from %d to %c-->%c\n",ndisk,source,dest);
        TowerOfHanoi(ndisk-1,temp,source, dest);
}
