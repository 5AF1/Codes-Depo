# -*- coding: utf-8 -*-
"""
Created on Sat Mar 30 14:30:02 2019

@author: Safi
"""

c=0
n=int(input())
num=input()
for i in range(n):
    if(int(num[i])%2==0):
        c+=(i+1)
print(c)