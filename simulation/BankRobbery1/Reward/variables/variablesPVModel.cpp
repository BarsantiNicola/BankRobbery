#include "variablesPVModel.h"

variablesPVModel::variablesPVModel(bool expandTimeArrays) {
  TheModel=new AttackModelADVISE();
  DefineName("variablesPVModel");
  CreatePVList(7, expandTimeArrays);
  Initialize();
}



PerformanceVariableNode* variablesPVModel::createPVNode(int pvindex, int timeindex) {
  switch(pvindex) {
  case 0:
    return new variablesPV0(timeindex);
    break;
  case 1:
    return new variablesPV1(timeindex);
    break;
  case 2:
    return new variablesPV2(timeindex);
    break;
  case 3:
    return new variablesPV3(timeindex);
    break;
  case 4:
    return new variablesPV4(timeindex);
    break;
  case 5:
    return new variablesPV5(timeindex);
    break;
  case 6:
    return new variablesPV6(timeindex);
    break;
  }
  return NULL;
}
