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
        if x.find(varname,18,50) == 18:
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
    
def phisicalPlot():
    parameters = getPhisicalVars()
    var_values = []
    vals = []
    mean = []
    up = []
    down = []
    all_data = []
    time = []
    for param in parameters:
        vals = getDatas("PhisicalAttack_results.csv",param)
        for x in vals:
            time.append(float(x[3]))
            mean.append(float(x[5]))
            down.append(float(x[5])-float(x[7]))
            up.append(float(x[5])+float(x[7]))
        all_data.append(time)
        all_data.append(mean)
        all_data.append(up)
        all_data.append(down)
        var_values.append(all_data)
        time = []
        mean = []
        up = []
        down = []
        all_data = []
    for i in range(0,len(var_values)):
        #plt.plot(var_values[i][0],var_values[i][1], label=parameters[i])
        plt.plot(var_values[i][0],var_values[i][2] , label=parameters[i])
        #plt.plot(var_values[i][0],var_values[i][3])
    plt.legend()
    plt.savefig("PhisicalPlot", quality=95, dpi=1000, facecolor='w', edgecolor='w',
        orientation='portrait', papertype=None, format=None,
        transparent=False, bbox_inches=None, pad_inches=0.1,
        frameon=None, metadata=None)
    
    
def cyberPlot():
    parameters = getCyberVars()
    var_values = []
    vals = []
    mean = []
    up = []
    down = []
    all_data = []
    time = []
    for param in parameters:
        vals = getDatas("CyberAttack_results.csv",param)
        for x in vals:
            time.append(float(x[3]))
            mean.append(float(x[5]))
            down.append(float(x[5])-float(x[7]))
            up.append(float(x[5])+float(x[7]))
        all_data.append(time)
        all_data.append(mean)
        all_data.append(up)
        all_data.append(down)
        var_values.append(all_data)
        time = []
        mean = []
        up = []
        down = []
        all_data = []
    for i in range(0,len(var_values)):
        #plt.plot(var_values[i][0],var_values[i][1], label=parameters[i])
        plt.plot(var_values[i][0],var_values[i][2] , label=parameters[i])
        #plt.plot(var_values[i][0],var_values[i][3])
    plt.legend()
    plt.savefig("CyberPlot", quality=95, dpi=1000, facecolor='w', edgecolor='w',
        orientation='portrait', papertype=None, format=None,
        transparent=False, bbox_inches=None, pad_inches=0.1,
        frameon=None, metadata=None)
    
def generalPlot():
    parameters = getAllVars()
    var_values = []
    vals = []
    mean = []
    up = []
    down = []
    all_data = []
    time = []
    for param in parameters:
        vals = getDatas("GeneralAttack_results.csv",param)
        for x in vals:
            time.append(float(x[3]))
            mean.append(float(x[5]))
            down.append(float(x[5])-float(x[7]))
            up.append(float(x[5])+float(x[7]))
        all_data.append(time)
        all_data.append(mean)
        all_data.append(up)
        all_data.append(down)
        var_values.append(all_data)
        time = []
        mean = []
        up = []
        down = []
        all_data = []
    for i in range(0,len(var_values)):
        #plt.plot(var_values[i][0],var_values[i][1], label=parameters[i])
        plt.plot(var_values[i][0],var_values[i][2] , label=parameters[i])
        #plt.plot(var_values[i][0],var_values[i][3])
    plt.legend(loc='center left', bbox_to_anchor=(1, 0.5))
    plt.savefig("GeneralPlot", bbox_inches = 'tight', quality=95, dpi=1000, facecolor='w', edgecolor='w',
        orientation='portrait', papertype=None, format=None,
        transparent=False, pad_inches=0.1,
        frameon=None, metadata=None)

def getAllVars():
    return ["control_alarms", "control_cameras","security_routines","safe_access",
              "money","small_money","big_money" , "back_door","system_access","user_credentials","dir_credentials",
              "safe_combination"]   
def getPhisicalVars():
    return ["control_alarms", "control_cameras","security_routines","safe_access",
              "money"] 
    
def getCyberVars():
    return ["money","back_door","system_access","user_credentials","dir_credentials",
              "safe_combination"]   
              
def showSimAvailableVara():
    var = getAllVars()
    for x in var:
        print(x)
        
def getMinTime( value , data ):
    for x in range(0,len(data)):
        if float(data[x][5]) > 0.1:
            return data[x-1][4];
