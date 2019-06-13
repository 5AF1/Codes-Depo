# -*- coding: utf-8 -*-
"""
Created on Sat Mar 30 21:23:47 2019

@author: Safi
"""

n, k = map(int, input().split())
for i in range(k):
    if(n%10==0):
        n=n/10
    else:
        n-=1
print(int(n))