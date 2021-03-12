#这是一个调整函数,用于将最大的堆顶元素拿掉之后，找到第二大的元素做堆顶的过程。
#拿下来的堆顶元素，放到堆的最后一个元素的位置，然后将堆的最后一个元素临时替换到堆顶。
#随后在堆顶进行向下调整，找到真正的堆顶元素用来替换刚才这个临时堆顶元素。
def sift(li,low,high):
    #li表示列表。low表示堆顶的根元素，high表示堆的最后一个元素。
    #i 表示堆的父节点这一层
    #j 表示堆的子节点这一层
    i = low #父节点i最开始指向堆的根元素。
    j = 2 * i +1 #此时子节点j表示的就是堆的根元素的左孩子节点。
    tmp = li[low] #将堆顶元素进行临时存储起来
    #这个表示左子节点的的下标小于或等于堆的最后一个元素的时候，进行下面操作。
    while j <= high:
        #li[j+1]表示右子节点的元素，li[j]表示左自节点的元素。当右子节点的元素值大于左子节点的元素值时，执行下面操作。
        #并且j+1也就是右孩子的下标小于等于堆的最后一个元素时，才成立。
        if j+1 <= high and li[j+1] > li[j]:
            j = j+1 #子节点的下标，指向了右孩子。
        #如果右边元素的值大于堆顶
        if li[j] > tmp:
        
    
    #否则就表示，左子节点的的下标大于了堆的最后一个元素，那么就将堆顶放到。。
    else:
        li[i] = tmp #把堆顶的元素放到