//读取班级名单文件，随机选择一个同学
#include <stdio.h>

int main()
{

    char nameList[200];
    FILE* fp=fopen("./a.txt");
    if(fp==NULL)
    {
        printf("文件读取失败!");
        return -1;
    }
    
    int i = 0;
    while(fp != NULL)
    {
        char buf[1024];
        fgets(buf,1024,fp);
        nameList[i]=buf;
        i++;
    }
}