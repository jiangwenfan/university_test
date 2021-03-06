#插入排序
def insert_sort(li):
    for i in range(1,len(li)): #
        tmp = li[i]
        j = i - 1 #手里的牌的下标
        #当手里的牌li[j]大于磨出来的牌，那么手里的牌向右移动，同时手里牌的下标向左移动。
        #当手里的牌的下标0的时候，还没有找到比摸出来的牌小的牌，那么下一次手里的牌的下标就是-1了,此时表示手里的牌都比摸出来的牌大
        #所以此时退出循环，不在移动，进行赋值。
        while j >= 0  and li[j] > tmp:
            li[j+1] = li[j] #手里的牌向右移动，也就是用手里的牌li[j]覆盖了磨出来的牌。li[i].
            #由于手里的牌要向右移动，所以手里的牌的下标要加1.也就是把当前手里的牌li[j]向前移动一位到li[j+1]上。
            j -= 1 #同时手里牌的下标要想做移动一位。
        #这个就是当磨出来的牌大于手里的牌的时候，那么就将磨出来的牌插入到当前这个手里的小牌的后面，即将tmp放到j+1的位置上。
        li[j+1] = tmp 
        #print(li)
        
li = [9,2,8,1,4,5,3,7,6,2]
print(li)
insert_sort(li)
print(li)

#插入排序的核心思想
[9,8,7,6,5,4,3,2,1]

4,2,3,5

4  2，3，5
2,4 第一堂
2,3,4 二
2,3,4,5 三

[4,7,6,2,3,1,5,9,8]
插入排序的基本思想流程:
摸牌场景:手里有一张牌4,桌上有剩下的牌。首先从桌子上拿起一张牌7,7比4大，所以手里的牌的顺序是4,7；
然后再从桌子上拿起一张牌6，6比7小并且6比4大，所以6在4和7的中间，所以手里的牌的顺序是4,6,7;
然后再从桌子上拿起一张牌2,2比7小，2比6小，2比4小，所以手里的牌的顺序是2,4,6,7;
然后再从桌子上拿起一张牌3，3比7小，3比6小，3别4小，3比2大，所以手里的牌的顺序是2,3,4,6,7;
.....
最后经过n-1次拿牌插入，列表排序成功。

每次从桌子上拿起牌，和手里的牌进行比较。先把拿起来的牌存储到临时变量中,然后和前面的手里的牌进行比较，如果手里的牌大于拿起来的牌，
那么手里的牌向后移动以下，然后在和前面的比较，如果还是大于拿起来的牌，则继续向后移动，直到遇到一个数小于拿起来的牌，
那么就把拿起来的牌插入到这个数的后面。或者如果手里的牌都大于拿起来的牌，那么就插入到最前面。

插入排序核心:
需要n-1趟，因为手里已经有一个数字了。
每一趟都会拿出一个数字出来，和手里的数字进行比较；每一趟手里的数字都是，拿出来的这个数字的前一个。
每一趟拿出来的数字都会和手里的数字进行比较，然后手里的数字会向右移动，手里数字的下标向左移动。
当下标小于0时或者由于磨出来的牌时，手里牌的下标不在进行移动，将磨出来的牌放到这个下标加1的位置。

n-1个数，既可以是0,n-1,可以是1,n 

