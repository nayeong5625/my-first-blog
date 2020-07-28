#!/usr/bin/env python
# coding: utf-8

# In[ ]:


def solution(board, moves):
    answer = 0
    li = []
    for i in range(len(moves)):
        for j in range(len(board)):
            if board[j][moves[i]-1] != 0:
                li.append(board[j][moves[i]-1])
                (board[j][moves[i]-1]) = 0
                if len(li) >= 2:
                    if li[len(li)-1] == li[len(li)-2]:
                        answer += 2
                        del li[len(li)-1]
                        del li[len(li)-1]
                break    
    return answer

