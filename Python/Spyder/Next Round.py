# -*- coding: utf-8 -*-
"""
Created on Sat Mar 30 10:16:48 2019

@author: Safi
"""

arr=[]
a=0
n, k = map(int, input().split())
arr=list(map(int,input().split()))
for num in range(0,n):
    if arr[num]>=arr[k-1] and arr[num]!=0:
        a+=1
        #print(f"{arr[num]} ",end='')
print(a)