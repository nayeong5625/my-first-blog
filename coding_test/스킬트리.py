#!/usr/bin/env python
# coding: utf-8

# In[ ]:


def solution(skill, skill_trees):
    answer = 0
    for i in range(len(skill_trees)):
        pre = ''
        for j in range(len(skill_trees[i])):
            if (skill_trees[i])[j] in skill:
                if (skill_trees[i])[j] not in pre:
                    if (skill_trees[i])[j] == skill[len(pre)]:
                        pre += skill[len(pre)]
                    else:
                        break
            if j == len(skill_trees[i])-1:
                answer += 1
    return answer

