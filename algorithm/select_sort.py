num = [5,7,3,1,4,2,6,9,8]
li=[]
for i in range(len(num)-1):
    val = min(num) #每趟都会找到列表中最小的数
    li.append(val) #将这个被找到的数添加到新的列表中
    num.remove(val) #然后删除这个已经被找到的数


#第二种原地排序
def select_sort(li):
    for i in range(len(li)-1): # i是第几趟
        min_loc = i
        for j in range(i+1, len(li)):
            if li[j] < li[min_loc]:
                min_loc = j
        li[i], li[min_loc] = li[min_loc], li[i]
        print(li)

#选择排序思想流程:
每次遍历一遍找到最小的数字，然后遍历n-1便。