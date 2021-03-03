#插入排序
def insert_sort(li):
    for i in range(1,len(li)):
        tmp = li[i]
        j = i - 1
        while j >= 0  and li[j] > tmp:
            li[j+1] = li[j]
            j -= 1
        li[j+1] = tmp 
        #print(li)
        
li = [9,2,8,1,4,5,3,7,6,2]
print(li)
insert_sort(li)
print(li)

#插入排序的核心思想
[9,8,7,6,5,4,3,2,1]
假定列表的第一个