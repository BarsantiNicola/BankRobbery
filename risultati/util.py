# -*- coding: utf-8 -*-
"""
Created on Sun May 31 20:47:30 2020

@author: Barsanti Nicola
"""
from matplotlib import pyplot as plt

def getDatas( filename , varname ):
    
    f= open(filename,"r")
    fl = f.readlines()
    values = []
    for x in fl :
        if x.find(varname,15,40) != -1:
            values.append(x.split(","));
    f.close();
    return values;
    
def simplePlot(datas , linecolor):
    times = []
    vals = []
    low = []
    up = []
    for x in datas:
        times.append(float(x[3]))
        vals.append(float(x[5]))
        low.append(float(x[5])-float(x[7]))
        up.append(float(x[5])+float(x[7]))
    
    plt.plot(times,vals)
    plt.plot(times,low, color=linecolor)
    plt.plot(times,up, color=linecolor)


def getSimAvailableVars():
    return ["control_alarms", "control_cameras","security_routines","safe_access",
              "money","back_door","system_access","user_credentials","dir_credentials",
              "safe_combination"]     
              
def showSimAvailableVara():
    var = getSimAvailableVars()
    for x in var:
        print(x)
        
def getMinTime( value , data ):
    for x in range(0,len(data)):
        if float(data[x][5]) > 0.1:
            return data[x-1][4];
