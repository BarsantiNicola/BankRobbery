#ifndef _VARIABLES_PVS_
#define _VARIABLES_PVS_
#include <math.h>
#include "Cpp/Performance_Variables/PerformanceVariableNode.hpp"
#include "Atomic/AttackModel/AttackModelADVISE.h"
#include "Cpp/Performance_Variables/InstantOfTime.hpp"


class variablesPV0Worker:public InstantOfTime
{
 public:
  AttackModelADVISE *AttackModel;
  
  variablesPV0Worker();
  ~variablesPV0Worker();
  double Reward_Function();
};

class variablesPV0:public PerformanceVariableNode
{
 public:
  AttackModelADVISE *TheAttackModelADVISE;

  variablesPV0Worker *variablesPV0WorkerList;

  variablesPV0(int timeindex=0);
  ~variablesPV0();
  void CreateWorkerList(void);
};

class variablesPV1Worker:public InstantOfTime
{
 public:
  AttackModelADVISE *AttackModel;
  
  variablesPV1Worker();
  ~variablesPV1Worker();
  double Reward_Function();
};

class variablesPV1:public PerformanceVariableNode
{
 public:
  AttackModelADVISE *TheAttackModelADVISE;

  variablesPV1Worker *variablesPV1WorkerList;

  variablesPV1(int timeindex=0);
  ~variablesPV1();
  void CreateWorkerList(void);
};

class variablesPV2Worker:public InstantOfTime
{
 public:
  AttackModelADVISE *AttackModel;
  
  variablesPV2Worker();
  ~variablesPV2Worker();
  double Reward_Function();
};

class variablesPV2:public PerformanceVariableNode
{
 public:
  AttackModelADVISE *TheAttackModelADVISE;

  variablesPV2Worker *variablesPV2WorkerList;

  variablesPV2(int timeindex=0);
  ~variablesPV2();
  void CreateWorkerList(void);
};

class variablesPV3Worker:public InstantOfTime
{
 public:
  AttackModelADVISE *AttackModel;
  
  variablesPV3Worker();
  ~variablesPV3Worker();
  double Reward_Function();
};

class variablesPV3:public PerformanceVariableNode
{
 public:
  AttackModelADVISE *TheAttackModelADVISE;

  variablesPV3Worker *variablesPV3WorkerList;

  variablesPV3(int timeindex=0);
  ~variablesPV3();
  void CreateWorkerList(void);
};

class variablesPV4Worker:public InstantOfTime
{
 public:
  AttackModelADVISE *AttackModel;
  
  variablesPV4Worker();
  ~variablesPV4Worker();
  double Reward_Function();
};

class variablesPV4:public PerformanceVariableNode
{
 public:
  AttackModelADVISE *TheAttackModelADVISE;

  variablesPV4Worker *variablesPV4WorkerList;

  variablesPV4(int timeindex=0);
  ~variablesPV4();
  void CreateWorkerList(void);
};

class variablesPV5Worker:public InstantOfTime
{
 public:
  AttackModelADVISE *AttackModel;
  
  variablesPV5Worker();
  ~variablesPV5Worker();
  double Reward_Function();
};

class variablesPV5:public PerformanceVariableNode
{
 public:
  AttackModelADVISE *TheAttackModelADVISE;

  variablesPV5Worker *variablesPV5WorkerList;

  variablesPV5(int timeindex=0);
  ~variablesPV5();
  void CreateWorkerList(void);
};

class variablesPV6Worker:public InstantOfTime
{
 public:
  AttackModelADVISE *AttackModel;
  
  variablesPV6Worker();
  ~variablesPV6Worker();
  double Reward_Function();
};

class variablesPV6:public PerformanceVariableNode
{
 public:
  AttackModelADVISE *TheAttackModelADVISE;

  variablesPV6Worker *variablesPV6WorkerList;

  variablesPV6(int timeindex=0);
  ~variablesPV6();
  void CreateWorkerList(void);
};

class variablesPV7Worker:public InstantOfTime
{
 public:
  AttackModelADVISE *AttackModel;
  
  variablesPV7Worker();
  ~variablesPV7Worker();
  double Reward_Function();
};

class variablesPV7:public PerformanceVariableNode
{
 public:
  AttackModelADVISE *TheAttackModelADVISE;

  variablesPV7Worker *variablesPV7WorkerList;

  variablesPV7(int timeindex=0);
  ~variablesPV7();
  void CreateWorkerList(void);
};

class variablesPV8Worker:public InstantOfTime
{
 public:
  AttackModelADVISE *AttackModel;
  
  variablesPV8Worker();
  ~variablesPV8Worker();
  double Reward_Function();
};

class variablesPV8:public PerformanceVariableNode
{
 public:
  AttackModelADVISE *TheAttackModelADVISE;

  variablesPV8Worker *variablesPV8WorkerList;

  variablesPV8(int timeindex=0);
  ~variablesPV8();
  void CreateWorkerList(void);
};

class variablesPV9Worker:public InstantOfTime
{
 public:
  AttackModelADVISE *AttackModel;
  
  variablesPV9Worker();
  ~variablesPV9Worker();
  double Reward_Function();
};

class variablesPV9:public PerformanceVariableNode
{
 public:
  AttackModelADVISE *TheAttackModelADVISE;

  variablesPV9Worker *variablesPV9WorkerList;

  variablesPV9(int timeindex=0);
  ~variablesPV9();
  void CreateWorkerList(void);
};

#endif
