#!/usr/bin/env python
# coding: utf-8

# In[ ]:


def solution(answers):
    answer = []
    ans1 = 0
    ans2 = 0
    ans3 = 0
    for i in range(len(answers)):
        if i % 5 == 0 and answers[i] == 1:
            ans1 += 1
        elif i % 5 == 1 and answers[i] == 2:
            ans1 += 1
        elif i % 5 == 2 and answers[i] == 3:
            ans1 += 1
        elif i % 5 == 3 and answers[i] == 4:
            ans1 += 1
        elif i % 5 == 4 and answers[i] == 5:
            ans1 += 1
        
        if i % 2 == 0 and answers[i] == 2:
            ans2 += 1
        elif i % 8 == 1 and answers[i] == 1:
            ans2 += 1
        elif i % 8 == 3 and answers[i] == 3:
            ans2 += 1
        elif i % 8 == 5 and answers[i] == 4:
            ans2 += 1
        elif i % 8 == 7 and answers[i] == 5:
            ans2 += 1
        
        if (i % 10 == 0 or i % 10 == 1) and answers[i] == 3:
            ans3 += 1
        elif (i % 10 == 2 or i % 10 == 3) and answers[i] == 1:
            ans3 += 1
        elif (i % 10 == 4 or i % 10 == 5) and answers[i] == 2:
            ans3 += 1
        elif (i % 10 == 6 or i % 10 == 7) and answers[i] == 4:
            ans3 += 1
        elif (i % 10 == 8 or i % 10 == 9) and answers[i] == 5:
            ans3 += 1
    
    li = [ans1, ans2, ans3]
    a = max(li)
    if a == ans1:
        answer.append(1)
        if ans1 == ans2:
            answer.append(2)
            if ans2 == ans3:
                answer.append(3)
        elif ans1 == ans3:
            answer.append(3)
    elif a == ans2:
        answer.append(2)
        if ans2 == ans3:
            answer.append(3)
    elif a == ans3:
        answer.append(3)
        
    return answer

