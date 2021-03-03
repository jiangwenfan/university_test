#!/usr/local/python3
#根据需要筛选出指定长度的单词
import os
#import cv3 




path = "./CET4.txt" #原始文件. 根据要求修改
length = 4 #希望要找出单词的长度
scope = "<=" #希望要找出单词长度的条件
targetFile = "newtest2.txt" #输出的新文件


#clear target file
try:
    os.remove(targetFile)
except FileNotFoundError as e:
    print("The target file does not exists,skip deleting "+str(e))

# write content to new file
def writeTxt(content):
    with open(targetFile,'a') as f:
        f.write(content)

#read file 
def readTxt(path):
    with open(path,'r') as f:
        for i in f:
            i = i.rstrip("\n") #remove every line "\n"
            if len(i) > 0:  #remove blank line
                if len(i) > 1: #remove single letter
                    wordInfo = i.split(" ")
                    word = wordInfo[0]
                    if scope == "<=" or scope == "=<":
                        if len(word) <= length:
                            writeTxt(i+"\n")
                        else:
                            #writeTxt("no"+str(len(word))+"\n")
                            pass
                    if scope == "==" or scope == "=":
                        if len(word) == length:
                            writeTxt(i+"\n")
                    if scope == ">=" or scope == "=>":
                        if len(word) >= length:
                            writeTxt(i+"\n")
                else:
                    #print("single letter:- "+i)
                    pass
            else:
                #print("blank line---:"+str(len(i)))
                pass

def words2image():
    """
        waste
        把单词添加到纯色背景图片中，做壁纸。pip install opencv-python
    """
    #加载背景图片
    bk_img = cv2.imread("chun1080.jpg")
    #在图片上添加文字信息.(x,y) x表示距离左边是100，y表示距离top是1000
    cv2.putText(bk_img,"Hello World", (1670,50), cv2.FONT_HERSHEY_SIMPLEX, 0.7,(255,255,255), 1, cv2.LINE_AA)
    #显示图片
    cv2.imshow("add_text",bk_img)
    cv2.waitKey()
    #保存图片
    cv2.imwrite("add_text3.jpg",bk_img)



if __name__ == '__main__':
    readTxt(path)
