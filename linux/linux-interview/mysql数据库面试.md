### 1.请解释关系型数据库概念及主要特点?

关系型数据库模型是把复杂的数据

### 2.说出关系型数据库的典型产品、特点及应用场景？

* mysql 互联网企业常用
* oracle 大型传统企业应用软件





### 41.如何批量更改数据库字符集？

通过mysqldump命令备份出一个sql文件,在使用sed命令替换。sed -i 's/GBK/UTF-8/g'

### 42.网站打开慢，请给出排查方法，如是数据库慢导致，如何排查解决？请分析并举例？

+ 可以使用top,free命令分析系统性能等方面的问题

+ 如是数据库原因造成的，就需要查看慢查询日志去查找并分析问题所在

  

