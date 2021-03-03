
[9,8,7,6,5,4,3,2,1]

0,1,2,3
0,1
0

def partition(li,left,right):
    tmp = li[left]
    while left < right:
        while left < right and li[right] >= tmp: #从右面找比tmp小的数
            right -= 1      # 往左走一步
        li[left] = li[right] #把右边的值写到左边空位上
        # print(li, 'right')
        while left < right and li[left] <= tmp:
            left += 1
        li[right] = li[left] #把左边的值写到右边空位上
        # print(li, 'left')
    li[left] = tmp      # 把tmp归位
    
li = [9,8,7,6,5,4,3,2,1]
print(li)
partition(li,0,len(li)-1)
print(li)

