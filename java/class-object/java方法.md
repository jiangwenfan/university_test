方法是完成特定功能的代码，相当于其他语言的函数。
方法不调用，不执行；main方法由java虚拟机自动调用。
```
修饰符 返回值类型 方法名(参数类型 形参1，参数类型 新参2 ...){
    方法体语句
    return 返回值
}
```
修饰符：目前只用public static
返回值类型: 返回结果的数据类型
形参：方法定义上的参数，用来占位。
return : 结束方法
### 1.方法的形参类型：
形参：用来暂时替要传入的参数占位置的。
##### 1.1方法形参是基本类型。
基本类型的形参：形参的改变【不影响】实际参数。
```
class Student{
    public int sum(int a,int b){  
        return a+b;
    }
}
class StudentDemo{
    public static void main(String[] args){
        Student s = new Student();
        int result = s.sum(10,20)
    }
}
```
##### 1.2方法形参是引用类型。
引用类型的形参：形参的改变直接【影响】实际参数。
```
class Test{
    public void show(){
        System.out.println("hello");
    }
}
class Student{
    public void method(Student a){  
         s1.show();
    }
}
class StudentDemo{
    public static void main(String[] args){
          Test t = new Test();
          Student s = new Student();
          s.method(t)
    }
}
``` 

* * *

**表面看起来都是自己的类创建了自己的对象，自己的对象调用了类中的方法，只是一个传入的是基本数据类型，另一个传入的是引用数据类型(其他类的对象)。
实际上造成的结果是，传入基本数据类型的是对功能的实现的封装，其作用相当于书中的每个单元；传入引用数据类型的是对功能实现的更高级封装，其作用相当于书中的目录。**
### 2.方法的返回值类型：
##### 2.1 无返回值 ，void类型
```
class Demo{
    public static void main(String[] args){
            Hello();
    }
    public static void  Hello(){
           System.out.println("hello");
    }
}
```
##### 2.2 有返回值， int类型
```
class Demo{
    public static void main(String[] args){
            int result  = sum(10,20);
            System.out.println(result);
    }
    public static int sum(int a,int b){
            return a+b;
    }
}
```
