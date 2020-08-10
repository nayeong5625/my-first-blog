#!/usr/bin/env python
# coding: utf-8

# In[ ]:


def solution(n, words):
    answer = []
    li = []
    wans = ''
    fail = 0
    idx = 0
    idx2 = 0
    for i in range(len(words)):
        if words.count(words[i]) >= 2:
            fail += 1
            if wans != words[i]:
                fail = 1
            wans = words[i]
            if fail == 2:
                idx = i
                break
    
    for i in range(len(words)-1):
        if (words[i])[len(words[i])-1] != (words[i+1])[0]:
            idx2 = i+1
            break
    
    li.append(idx)
    li.append(idx2)
    
    if idx == 0 and idx2 == 0:
        sml = min(li)
    elif idx != 0 and idx2 != 0:
        sml = min(li)
    else:
        sml = max(li)
        
    if sml == 0:
        answer.append(0)
        answer.append(0)
    else:
        answer.append(sml % n + 1)
        answer.append((sml // n) + 1)
        
    return answer

