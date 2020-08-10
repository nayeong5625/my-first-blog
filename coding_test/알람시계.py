#!/usr/bin/env python
# coding: utf-8

# In[23]:


time = input()
time = time.split()
h = list(range(0, 24))
m = list(range(0, 60))
if int(time[1]) > 44:
    a = int(time[0])
    b = m[(int(time[1])) - 45]
else:
    a = h[(int(time[0])) - 1]
    b = m[(int(time[1])) - 45]
print(a, b)

