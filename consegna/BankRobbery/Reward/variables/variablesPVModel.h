#ifndef _VARIABLES_PVMODEL_
#define _VARIABLES_PVMODEL_
#include "variablesPVNodes.h"
#include "Cpp/Performance_Variables/PVModel.hpp"
#include "Atomic/AttackModel/AttackModelADVISE.h"
class variablesPVModel:public PVModel {
 protected:
  PerformanceVariableNode *createPVNode(int pvindex, int timeindex);
 public:
  variablesPVModel(bool expandtimepoints);
};

#endif
