1.java的jvm会自动初始化变量值。
int num; 自动初始化为0；
char a; 自动初始化为null;

## java计算机基础
### 1.进制and转换

|type    |describe  |characteristic  | 
| --- | --- | --- |
|二进制  |由0，1组成  |以0b开头  |
|  八进制|由0,1...7组成  |以0开头  |
|  十进制|由0,1...9组成  |默认整数就是10进制  |
|  十六进制|由0,1...9,a,b,c,d,e,f组成  |以0x开头  |
(0x,a,b...f大小写均可)
##### 转换 
* [*进制]转十进制
任意进制转10进制是，数字乘以进制的下标次方之和。
**数字成以进制的下标次方。**

|  |  |  |
| --- | --- | --- |
| 二进制 0b1011 |1\*2^3+0\*2^2+1\*2^1+1\*2^0  |  |
|  八进制 0123|1\*8^2+2\*8^1+3\*8^0  |  |
| 十六进制0x38c | 3\*16^2+8\*16^1+c\*16^0 | a:10 b:11 c:12 d:13 e:14 f:15 |

* 十进制转[*进制]
**[原理]** :十进制转[*进制]就是除以其他进制，直到商为0，得到的余数从低向上斜。
```
十进制52  转:
    转2进制:    52/2=26.....0
                   26/2=13......0
                   13/2=6........1
                   6/2=3..........0
                   3/2=1..........1
                   1/2=0.........1
                  所以二进制是: 0b110100
     转八进制:  
     转16进制:
                    52/16=3.......4
                    3/16=0.......3
                    所以16进制是: 0x34
```
[技巧:] 
.........
#### 2.有符号数据的表示方法
计算机进行计算的时候都是采用数据的二进制的补码进行计算的。
最左边是最高位，也就是开头的位置。
```
最高位是0的为正数:  原码，反码，补码都相同。
最高位是1的为负数:  反码是原码的数值位取反，补码是反码加1。

eg:
+7 0(符号位)000111(数值位) 
-7 1(符号位)000111(数值位)
```

## 注释
javadoc工具将程序注释解析成一个说明文档。
```java
// 单行注释，可以嵌套使用。
/* ...... */ 多行注释，不可以嵌套使用。
/**
*
*   用于生成文档的注释
*/
```
## java概念
1. 关键字
2. 标识符
3. 
* 类的组成：
    成员变量
    构造方法(可以多个构造方法并存)
    成员方法
##### 1.成员变量。
[1.]成员变量在类中方法外，在堆内存。
[2.]随着对象的创建而存在，随着对象的消失而消失。
[3.]有默认初始值。int num;这种可以存在。
##### 2.局部变量。
[1.]方法定义中，方法声明上。在栈内存。
[2.]随着方法的调用而存在，随着方法调用完毕而消失。
[3.]没有默认初始值。必须定义赋值，才能使用。
int num2; 这就不能存在。 
```
class Variable{
    public static void main(String[] args){
    
        int num = 10;  //成员变量。默认初始值为0.
        public void show(){
            int num2 = 20;  //局部变量。没有默认初始值。
        }
    
    } 
}
```
##### 3.方法的定义
```java
class Demo{
    public static void main(){
            
            show();  //调用无参方法
            printName("tony");  //调用有参方法
    
    }
    public static void show(){
        System.out.println("this is show method");
    }
    public static void printName(String name){
        System.out.println("name is :"+name);
    }
}
```
#####  private 
**可以修饰成员变量和成员方法，被private修饰的成员只能在本类中访问。**
private关键字天生就是为了被public修饰的方法进行调用的
* 对象不能调用成员变量和成员方法。  
* 作用：**实现了给成员变量赋值必须通过我们定义的校验方法进行赋值。**
   解决了给成员变量赋值非法数据的问题，如年龄赋值一个负数。 
```
class Student{
    private String name;  
    private void show(){
        System.out.println("name:"+name);
    }
    public void getShow(){
        show();
    }
}
class StudentDemo{
    public static void main(String[] args){
        Student s = new Student();
         s.getShow();
    }
}
```
##### .this关键字
指的是访问类中的成员变量，用来区分成员变量和局部变量（重名问题）
this是当前类的对象引用，调用这个方法的对象就是类中的this。
```
class Student{
    private int age;
    public void segAge(int a){
        this.age = a;
    }
    public void getAget(){
        return age;  //隐藏了this。 return this.age
    }
}
class StudentDemo{
    public static void main(String[] args){
           Studnet s = new Student();
           s.setAge(22);  //赋值
           int age = s.getAget();  //取值
    }
}
```
#### super关键字

##### static关键字
静态变量，类变量
针对多个对象有同样的成员变量值的时候，java提供了一个关键字static，也就是说如果某个成员变量是被所有对象共享的时候，那么它就应该定义为静态。
* 静态修饰成员变量和成员方法。
[1].**随着类的加载而加载。**优先于对象存在。
[2].被类的所有对象共享。
[3].**可以通过类名调用**。不推荐通过对象名进行调用。
* 静态注意事项： 
[1]静态方法中没有this关键字。(静态随着类的加载而加载，this随着对象的创建而存在，所以static比this先存在)
[2]**静态只能访问静态**。(静态方法只能访问静态成员变量和静态成员方法)
#### 运算符
```
++ 自增；  --自减
+= ，-= ，*=，/=   左右相加然后再赋值
== ，!= , >= , <=, <, >
& 
|
^
!
```
##### 构造方法
构造方法是为了给对象的数据进行初始化。
1.方法名与类名相同
2.没有返回值类型(没有具体的返回值)
当我们没有给出构造方法的时候，系统默认提供一个无参构造方法；
当我们给出了构造方法的时候，系统将不再提供任何构造方法。
【无人为干预时，系统提供；有人为干预时，不再提供。】
* 给成员变量赋值有两种方法:
```
A.setxxx()
B:构造方法。
```

```
class Student{
    .....
}
class StudentDemo{
    public static void main(String[] args){
        Student s = new Student();   //系统jdk提供的默认无参构造方法
    }
}
```
```
class Student{
    public Student(){
        System.out.println("自己给出的无参构造方法");
    }
}
class StudentDemo{
    Student s = new Student();   //使用自己给出的无参构造方法。
}
```
```
class Student{
    private int age;
    public Student(int a){
        System.out.println("这是自己给出的有参构造方法"+a);
        this.age = a;   //初始化成员变量
    }
}
class StudentDemo{
    public static void main(String[] args){
        Student s = new Student(22);  //自己给出的有参构造方法
    }
}
```
#### 继承
提供了代码的复用性和维护性，让类与类之间产生了关系，是多态的前提。
支持单继承，不支持多继承，但支持多层基础。
1.子类只能继承父类的所有非私有成员(成员变量和成员方法)
2.子类不能继承父类的构造方法，但是可以通过super关键字去访问父类的构造方法。
```
class Father{
.....
}
class Son extends Father{
......
}
class SonDemo{
    public static void main(String[] args){
        Son s = new Son();
    }
}
```

* 方法重写：
子类中出现了和父类中方法声明一模一样的方法。 【方法名一样，参数列表一样。】 为了拓展父类的功能。
```
class Phone{
    public void call(String n){
        System.out.println("call "+n+"phone..");
    }
}
```

方法重载：本类中出现的方法名一样，参数列表不同的方法。与返回值无关。【方法名一样，参数列表不同。】
* 继承中成员方法的调用
1.子类中的方法和父类中的方法声明不一样时，各调各的。
2.子类中的方法和父类中的方法声明一样时，默认就近原则。
     使用super关键字打破就近原则，调用符类方法。super.show();


