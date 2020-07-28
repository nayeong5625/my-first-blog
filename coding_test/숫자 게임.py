#!/usr/bin/env python
# coding: utf-8

# In[ ]:


def solution(A, B):
    answer = 0
    A.sort()
    B.sort()
    i = 0
    j = 0
    while(j < len(A)):
        if A[i] < B[j]:
            i += 1
            j += 1
            answer += 1
        else:
            j += 1
    return answer

