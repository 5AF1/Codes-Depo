# -*- coding: utf-8 -*-
"""
Created on Sat Mar 30 13:17:16 2019

@author: Safi
"""
a, b = map(int, input().split())
if b%a!=0:
    print(-1)
else:
    b=b/a
    c=0
    while b%2==0:
        b=b/2
        c+=1
    while b%3==0:
        b=b/3
        c+=1
    if b == 1:
        print(c)
    else:
        print(-1)
