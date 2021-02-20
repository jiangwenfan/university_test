class Student   //基本类
{
    String name;   //null
    int age;    //0
    public void study()
    {
        System.out.println("good study!");
    }
}
class StudentDemo  //测试类
{
    public static void main(String[] args)
    {
        Student s = new Student();  //创建对象s
        System.out.println(s.name+"-----");  //使用成员变量
        s.name="腾斋飞鸟";  //给成员变量赋值
        s.study(); //使用成员方法
    }
}