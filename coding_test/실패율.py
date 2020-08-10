#!/usr/bin/env python
# coding: utf-8

# In[ ]:


def solution(N, stages):
    answer = []
    li = []
    idx = len(stages)
    for i in range(1, N+1):
        if idx == 0:
            li.append(0)
        elif i == N:
            li.append(stages.count(N) / idx)
            break
        else:
            li.append(stages.count(i) / idx)
            idx -= stages.count(i)
    for i in range(len(li)):
        answer.append(li.index(max(li)) + 1)
        li[li.index(max(li))] = -1
    return answer

