[toc]
### 程序执行过程:
存储在硬盘上的可执行程序exe(编译的时候就已经切切割为代码区，数据区，…)，通过双击执行，唤醒到内存中也是分开存的(内存有四区：代码区，数据区，栈区，堆区),，，CPU里面有控制器，运算器，寄存器。

### 查找程序所依赖的动态库：
Linux:
Ldd hello  //ldd 可执行程序 .so结尾的是静态代码库
Windwos:
Dependency程序  //一个C语言的库，一个windows的库

File a.exe  //查看ubuntu32位 
#### 1.编译工具使用
gcc编译器：
```
gcc  he.c   -o  test     //编译输出test
gcc  he.c   -o  test    -g  //加上-g参数表示可以gdb调试

file test   //查看文件属性。
```
#### 2.字符和字符串
```
char str[100]="hello";  //定义一个字符串的长度
printf("字符是:%s",str);
```
#### 常量
```c
const int a = 10;  //把变量a变成常量a
//const是一种不安全的常量定义方式，可以通过指针修改常量的内容。

#define A 10  //define是在编译期间进行替换的，所以不能有;号。
//printf("%d",A);
#define name "张三"  //printf(name)
```
应用:
```c
//1. 编程语言汉化
#define 主函数 main
#define 整型返回值 int
整型返回值 主函数(){
	printf("hello,world!");
	return 0;
}

//
```
#### 3.数组：
一维数组：
```
int number[1000];   //定义数组
int num[4] = {1,2,3,4};  //初始化数组
int n1  = num[0];    //访问数组
```
二维数组:
```
int number[3][4];   //定义数组。3行4列。
int num[3][4] = {{0,1,2,3},{4,5,6,7},{8,9,10,11}};  //初始化数组
int n = num[3][2];  //访问数组。3行2列。
```
#### 4.函数:
```
int sum(int n1,int n2);  //函数声明
int main(){
    .........
    int a = sum(3,4);   //函数调用
}
//函数定义
int sum(int n1,int n2){
        return n1+n2; 
}
```
#### 5.流程控制
**if语句**
```
if(a>b){
	printf("a大")
}else{
	printf("b大")
}

if(a>b){
	pass
}else if(b>c){
	pass
}
else{
	pass 
}
```
**switch语句**
```
char grade = 'c';
switch(grade){
   case 'A' :
      printf("很棒！\n" );
      break;
   case 'B' :
   case 'C' :
      printf("做得好\n" );
      break;
   case 'D' :
      printf("您通过了\n" );
      break;
   case 'F' :
      printf("最好再试一下\n" );
      break;
   default :
      printf("无效的成绩\n" );
}
   printf("您的成绩是 %c\n", grade );
```
#### 循环语句
**while循环**
```
while(a<10){
	printf("a");
}
```
**for循环**
```
for(int a=10;a<20;a++){
	printf("aa");
}
```
**do,while语句**
```
   int a = 10;
   do
   {
       printf("a 的值： %d\n", a); //10......19
       a = a + 1;
   }while( a < 20 );
```
## 
##### fgetc读取单个字符
ch = fgetc(fp);
##### fgets读取字符串,文件行读写
看到"\n"就停止读取。






#### 写文件
##### fputc写入单个字符

##### fputs写入字符串
```c

```

#### 标准输入和输出
输入:
```c
char a;
char name[20];
int age;
float weight;

//可以输入任意数据类型,但输入不允许含有空格;可以定义输入的格式。
scanf("%s",&a);  //字符
scanf("%s",name); //字符串
// scanf("%[^\n]",name);  可以输入含有空格的字符串
scanf("%d",&age);  //整型
scanf("%f",&weight);   //浮点型
scanf("ni:%s",name);  //控制字符中的内容需要输入。ni:tony

//只能输入字符和字符串类型，输入可以含有空格。
gets(&a);  //获取一个字符
gets(name);  //获取一个字符串，可以含有空格。
//gets(&age); 不能获取其他数据类型
```
输出:
```c
char a='a';  //字符类型
char name[20]='hello';  //字符串类型
int age=23;
float weight=45.34;

//puts输出
puts("hello world!");
puts(name);  //输出一个字符串，并自动换行。
puts(&a);	//输出一个字符，并自动换行。
//puts("hello,%s",name);  不能进行格式化输出。
//puts(&weight);  只能输出字符和字符串类型，不能输出int类型和float类型。
```
#### 变量的作用范围
* 全局和局部变量
test.c
```c
int a2 = 1001; //全局变量。
```

hello.c
```c
int a1 = 100; //全局变量。
extern a2;  //全局变量。
extern a3;   //全局变量

void fun01(int b1);  
void fun02(int c1,int c2,int c3);
int main()
{
	printf("%d\n",a1);  //100
	printf("%d\n",a2); //1001
	printf("%d\n",a3);  //1002
	
	int a = 10;   //局部变量。
	printf("%d\n",a);  //10
	????????????是局部变量a先创建，还是全局变量a1,a2,a3先创建????????

	fun02(1,2,3);
}
void fun01(int b1)   //形参b1，随着函数的创建而创建，随着函数的消失而消失。
{
	int b = b1;
}
void fun02(int c1,int c2,int c3)  //形参的创建顺序是c3-->c2--->c1
{
	printf("%p\n",&c1);   //24
	printf("%p\n",&c2);   //28
	printf("%p\n",&c3);   //2c
	/*
	函数创建的变量是在栈在存储的，栈是从高到底存储的，所以是2c-->28-->24，所以看的
	出来形参创建顺序是c3-->c2-->c1
	*/
}
int a3 = 1002;  //全局变量
```
全局变量作用范围是整个项目。
局部变量从变量的创建开始到所在函数结束。
```c
int a1;  //变量的声明，不会分配内存空间。 extern a2;
a1 = 10; //变量的定义，分配内存空间。 int a1 = 100;
```
* 静态全局和局部变量
