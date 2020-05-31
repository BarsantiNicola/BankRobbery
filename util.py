# -*- coding: utf-8 -*-
"""
Created on Sun May 31 20:47:30 2020

@author: Barsanti Nicola
"""
from matplotlib import pyplot as plt

def getDatas( filename ):
    
    f= open(filename,"r")
    fl = f.readlines()
    values = []
    for x in fl :
        if x.find("money",18,25) != -1:
            values.append(x.split(","));
    f.close();
    return values;
    
def simplePlot(datas):
    times = []
    vals = []
    low = []
    up = []
    for x in datas:
        times.append(float(x[3]))
        vals.append(float(x[5]))
        low.append(float(x[5])-float(x[7]))
        up.append(float(x[5])+float(x[7]))
    plt.plot(times,low)
    plt.plot(times,up)
    plt.plot(times,vals,color='red')
        