# -*- coding: utf-8 -*-
"""
Created on Sat Mar 30 22:10:10 2019

@author: Safi
"""

n=int(input())
f=0
arr=list(map(int,input().split()))
for i in range(0,n):
    if arr[i]==1:
        f=1
        break
if f==0:
    print("EASY")
elif f==1:
    print("HARD")