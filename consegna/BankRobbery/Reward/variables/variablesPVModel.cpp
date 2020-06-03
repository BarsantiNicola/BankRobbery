#include "variablesPVModel.h"

variablesPVModel::variablesPVModel(bool expandTimeArrays) {
  TheModel=new AttackModelADVISE();
  DefineName("variablesPVModel");
  CreatePVList(12, expandTimeArrays);
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
  case 7:
    return new variablesPV7(timeindex);
    break;
  case 8:
    return new variablesPV8(timeindex);
    break;
  case 9:
    return new variablesPV9(timeindex);
    break;
  case 10:
    return new variablesPV10(timeindex);
    break;
  case 11:
    return new variablesPV11(timeindex);
    break;
  }
  return NULL;
}
