#include "variablesPVNodes.h"

variablesPV0Worker::variablesPV0Worker()
{
  NumModels = 1;
  TheModelPtr = new BaseModelClass**[NumModels];
  TheModelPtr[0] = (BaseModelClass**)(&AttackModel);
}

variablesPV0Worker::~variablesPV0Worker() {
  delete [] TheModelPtr;
}

double variablesPV0Worker::Reward_Function(void) {

return AttackModel->CamerasControl->Mark();

return (0);



}

variablesPV0::variablesPV0(int timeindex) {
  TheModelPtr = (BaseModelClass**)(&TheAttackModelADVISE);
  double startpts[21]={0.0, 500.0, 1000.0, 1500.0, 2000.0, 2500.0, 3000.0, 3500.0, 4000.0, 4500.0, 5000.0, 5500.0, 6000.0, 6500.0, 7000.0, 7500.0, 8000.0, 8500.0, 9000.0, 9500.0, 10000.0};
  double stoppts[21]={0.0, 500.0, 1000.0, 1500.0, 2000.0, 2500.0, 3000.0, 3500.0, 4000.0, 4500.0, 5000.0, 5500.0, 6000.0, 6500.0, 7000.0, 7500.0, 8000.0, 8500.0, 9000.0, 9500.0, 10000.0};
  Initialize("control_cameras",(RewardType)0,21, startpts, stoppts, timeindex, 0,1, 1);
  AddVariableDependency("CamerasControl","AttackModel");
}

variablesPV0::~variablesPV0() {
  for(int i = 0; i < NumberOfWorkers; i++) {
    delete[] WorkerList[i]->Name;
    delete WorkerList[i];
  }
}

void variablesPV0::CreateWorkerList(void) {
  for(int i = 0; i < NumberOfWorkers; i++)
    WorkerList[i] = new variablesPV0Worker;
}
variablesPV1Worker::variablesPV1Worker()
{
  NumModels = 1;
  TheModelPtr = new BaseModelClass**[NumModels];
  TheModelPtr[0] = (BaseModelClass**)(&AttackModel);
}

variablesPV1Worker::~variablesPV1Worker() {
  delete [] TheModelPtr;
}

double variablesPV1Worker::Reward_Function(void) {

return AttackModel->AlarmsControl->Mark();

return (0);



}

variablesPV1::variablesPV1(int timeindex) {
  TheModelPtr = (BaseModelClass**)(&TheAttackModelADVISE);
  double startpts[21]={0.0, 500.0, 1000.0, 1500.0, 2000.0, 2500.0, 3000.0, 3500.0, 4000.0, 4500.0, 5000.0, 5500.0, 6000.0, 6500.0, 7000.0, 7500.0, 8000.0, 8500.0, 9000.0, 9500.0, 10000.0};
  double stoppts[21]={0.0, 500.0, 1000.0, 1500.0, 2000.0, 2500.0, 3000.0, 3500.0, 4000.0, 4500.0, 5000.0, 5500.0, 6000.0, 6500.0, 7000.0, 7500.0, 8000.0, 8500.0, 9000.0, 9500.0, 10000.0};
  Initialize("control_alarms",(RewardType)0,21, startpts, stoppts, timeindex, 0,1, 1);
  AddVariableDependency("AlarmsControl","AttackModel");
}

variablesPV1::~variablesPV1() {
  for(int i = 0; i < NumberOfWorkers; i++) {
    delete[] WorkerList[i]->Name;
    delete WorkerList[i];
  }
}

void variablesPV1::CreateWorkerList(void) {
  for(int i = 0; i < NumberOfWorkers; i++)
    WorkerList[i] = new variablesPV1Worker;
}
variablesPV2Worker::variablesPV2Worker()
{
  NumModels = 1;
  TheModelPtr = new BaseModelClass**[NumModels];
  TheModelPtr[0] = (BaseModelClass**)(&AttackModel);
}

variablesPV2Worker::~variablesPV2Worker() {
  delete [] TheModelPtr;
}

double variablesPV2Worker::Reward_Function(void) {

return AttackModel->SecurityRoutines->Mark();

return (0);



}

variablesPV2::variablesPV2(int timeindex) {
  TheModelPtr = (BaseModelClass**)(&TheAttackModelADVISE);
  double startpts[21]={0.0, 500.0, 1000.0, 1500.0, 2000.0, 2500.0, 3000.0, 3500.0, 4000.0, 4500.0, 5000.0, 5500.0, 6000.0, 6500.0, 7000.0, 7500.0, 8000.0, 8500.0, 9000.0, 9500.0, 10000.0};
  double stoppts[21]={0.0, 500.0, 1000.0, 1500.0, 2000.0, 2500.0, 3000.0, 3500.0, 4000.0, 4500.0, 5000.0, 5500.0, 6000.0, 6500.0, 7000.0, 7500.0, 8000.0, 8500.0, 9000.0, 9500.0, 10000.0};
  Initialize("security_routines",(RewardType)0,21, startpts, stoppts, timeindex, 0,1, 1);
  AddVariableDependency("SecurityRoutines","AttackModel");
}

variablesPV2::~variablesPV2() {
  for(int i = 0; i < NumberOfWorkers; i++) {
    delete[] WorkerList[i]->Name;
    delete WorkerList[i];
  }
}

void variablesPV2::CreateWorkerList(void) {
  for(int i = 0; i < NumberOfWorkers; i++)
    WorkerList[i] = new variablesPV2Worker;
}
variablesPV3Worker::variablesPV3Worker()
{
  NumModels = 1;
  TheModelPtr = new BaseModelClass**[NumModels];
  TheModelPtr[0] = (BaseModelClass**)(&AttackModel);
}

variablesPV3Worker::~variablesPV3Worker() {
  delete [] TheModelPtr;
}

double variablesPV3Worker::Reward_Function(void) {

return AttackModel->SecurePath->Mark();

return (0);



}

variablesPV3::variablesPV3(int timeindex) {
  TheModelPtr = (BaseModelClass**)(&TheAttackModelADVISE);
  double startpts[21]={0.0, 500.0, 1000.0, 1500.0, 2000.0, 2500.0, 3000.0, 3500.0, 4000.0, 4500.0, 5000.0, 5500.0, 6000.0, 6500.0, 7000.0, 7500.0, 8000.0, 8500.0, 9000.0, 9500.0, 10000.0};
  double stoppts[21]={0.0, 500.0, 1000.0, 1500.0, 2000.0, 2500.0, 3000.0, 3500.0, 4000.0, 4500.0, 5000.0, 5500.0, 6000.0, 6500.0, 7000.0, 7500.0, 8000.0, 8500.0, 9000.0, 9500.0, 10000.0};
  Initialize("safe_access",(RewardType)0,21, startpts, stoppts, timeindex, 0,1, 1);
  AddVariableDependency("SecurePath","AttackModel");
}

variablesPV3::~variablesPV3() {
  for(int i = 0; i < NumberOfWorkers; i++) {
    delete[] WorkerList[i]->Name;
    delete WorkerList[i];
  }
}

void variablesPV3::CreateWorkerList(void) {
  for(int i = 0; i < NumberOfWorkers; i++)
    WorkerList[i] = new variablesPV3Worker;
}
variablesPV4Worker::variablesPV4Worker()
{
  NumModels = 1;
  TheModelPtr = new BaseModelClass**[NumModels];
  TheModelPtr[0] = (BaseModelClass**)(&AttackModel);
}

variablesPV4Worker::~variablesPV4Worker() {
  delete [] TheModelPtr;
}

double variablesPV4Worker::Reward_Function(void) {

return AttackModel->Money->Mark();

return (0);



}

variablesPV4::variablesPV4(int timeindex) {
  TheModelPtr = (BaseModelClass**)(&TheAttackModelADVISE);
  double startpts[21]={0.0, 500.0, 1000.0, 1500.0, 2000.0, 2500.0, 3000.0, 3500.0, 4000.0, 4500.0, 5000.0, 5500.0, 6000.0, 6500.0, 7000.0, 7500.0, 8000.0, 8500.0, 9000.0, 9500.0, 10000.0};
  double stoppts[21]={0.0, 500.0, 1000.0, 1500.0, 2000.0, 2500.0, 3000.0, 3500.0, 4000.0, 4500.0, 5000.0, 5500.0, 6000.0, 6500.0, 7000.0, 7500.0, 8000.0, 8500.0, 9000.0, 9500.0, 10000.0};
  Initialize("big_money",(RewardType)0,21, startpts, stoppts, timeindex, 0,1, 1);
  AddVariableDependency("Money","AttackModel");
}

variablesPV4::~variablesPV4() {
  for(int i = 0; i < NumberOfWorkers; i++) {
    delete[] WorkerList[i]->Name;
    delete WorkerList[i];
  }
}

void variablesPV4::CreateWorkerList(void) {
  for(int i = 0; i < NumberOfWorkers; i++)
    WorkerList[i] = new variablesPV4Worker;
}
variablesPV5Worker::variablesPV5Worker()
{
  NumModels = 1;
  TheModelPtr = new BaseModelClass**[NumModels];
  TheModelPtr[0] = (BaseModelClass**)(&AttackModel);
}

variablesPV5Worker::~variablesPV5Worker() {
  delete [] TheModelPtr;
}

double variablesPV5Worker::Reward_Function(void) {

return AttackModel->BackDoor->Mark();

return (0);



}

variablesPV5::variablesPV5(int timeindex) {
  TheModelPtr = (BaseModelClass**)(&TheAttackModelADVISE);
  double startpts[21]={0.0, 500.0, 1000.0, 1500.0, 2000.0, 2500.0, 3000.0, 3500.0, 4000.0, 4500.0, 5000.0, 5500.0, 6000.0, 6500.0, 7000.0, 7500.0, 8000.0, 8500.0, 9000.0, 9500.0, 10000.0};
  double stoppts[21]={0.0, 500.0, 1000.0, 1500.0, 2000.0, 2500.0, 3000.0, 3500.0, 4000.0, 4500.0, 5000.0, 5500.0, 6000.0, 6500.0, 7000.0, 7500.0, 8000.0, 8500.0, 9000.0, 9500.0, 10000.0};
  Initialize("back_door",(RewardType)0,21, startpts, stoppts, timeindex, 0,1, 1);
  AddVariableDependency("BackDoor","AttackModel");
}

variablesPV5::~variablesPV5() {
  for(int i = 0; i < NumberOfWorkers; i++) {
    delete[] WorkerList[i]->Name;
    delete WorkerList[i];
  }
}

void variablesPV5::CreateWorkerList(void) {
  for(int i = 0; i < NumberOfWorkers; i++)
    WorkerList[i] = new variablesPV5Worker;
}
variablesPV6Worker::variablesPV6Worker()
{
  NumModels = 1;
  TheModelPtr = new BaseModelClass**[NumModels];
  TheModelPtr[0] = (BaseModelClass**)(&AttackModel);
}

variablesPV6Worker::~variablesPV6Worker() {
  delete [] TheModelPtr;
}

double variablesPV6Worker::Reward_Function(void) {

return AttackModel->SystemAccess->Mark();

return (0);



}

variablesPV6::variablesPV6(int timeindex) {
  TheModelPtr = (BaseModelClass**)(&TheAttackModelADVISE);
  double startpts[21]={0.0, 500.0, 1000.0, 1500.0, 2000.0, 2500.0, 3000.0, 3500.0, 4000.0, 4500.0, 5000.0, 5500.0, 6000.0, 6500.0, 7000.0, 7500.0, 8000.0, 8500.0, 9000.0, 9500.0, 10000.0};
  double stoppts[21]={0.0, 500.0, 1000.0, 1500.0, 2000.0, 2500.0, 3000.0, 3500.0, 4000.0, 4500.0, 5000.0, 5500.0, 6000.0, 6500.0, 7000.0, 7500.0, 8000.0, 8500.0, 9000.0, 9500.0, 10000.0};
  Initialize("system_access",(RewardType)0,21, startpts, stoppts, timeindex, 0,1, 1);
  AddVariableDependency("SystemAccess","AttackModel");
}

variablesPV6::~variablesPV6() {
  for(int i = 0; i < NumberOfWorkers; i++) {
    delete[] WorkerList[i]->Name;
    delete WorkerList[i];
  }
}

void variablesPV6::CreateWorkerList(void) {
  for(int i = 0; i < NumberOfWorkers; i++)
    WorkerList[i] = new variablesPV6Worker;
}
variablesPV7Worker::variablesPV7Worker()
{
  NumModels = 1;
  TheModelPtr = new BaseModelClass**[NumModels];
  TheModelPtr[0] = (BaseModelClass**)(&AttackModel);
}

variablesPV7Worker::~variablesPV7Worker() {
  delete [] TheModelPtr;
}

double variablesPV7Worker::Reward_Function(void) {

return AttackModel->UserCredentials->Mark();

return (0);



}

variablesPV7::variablesPV7(int timeindex) {
  TheModelPtr = (BaseModelClass**)(&TheAttackModelADVISE);
  double startpts[21]={0.0, 500.0, 1000.0, 1500.0, 2000.0, 2500.0, 3000.0, 3500.0, 4000.0, 4500.0, 5000.0, 5500.0, 6000.0, 6500.0, 7000.0, 7500.0, 8000.0, 8500.0, 9000.0, 9500.0, 10000.0};
  double stoppts[21]={0.0, 500.0, 1000.0, 1500.0, 2000.0, 2500.0, 3000.0, 3500.0, 4000.0, 4500.0, 5000.0, 5500.0, 6000.0, 6500.0, 7000.0, 7500.0, 8000.0, 8500.0, 9000.0, 9500.0, 10000.0};
  Initialize("user_credentials",(RewardType)0,21, startpts, stoppts, timeindex, 0,1, 1);
  AddVariableDependency("UserCredentials","AttackModel");
}

variablesPV7::~variablesPV7() {
  for(int i = 0; i < NumberOfWorkers; i++) {
    delete[] WorkerList[i]->Name;
    delete WorkerList[i];
  }
}

void variablesPV7::CreateWorkerList(void) {
  for(int i = 0; i < NumberOfWorkers; i++)
    WorkerList[i] = new variablesPV7Worker;
}
variablesPV8Worker::variablesPV8Worker()
{
  NumModels = 1;
  TheModelPtr = new BaseModelClass**[NumModels];
  TheModelPtr[0] = (BaseModelClass**)(&AttackModel);
}

variablesPV8Worker::~variablesPV8Worker() {
  delete [] TheModelPtr;
}

double variablesPV8Worker::Reward_Function(void) {

return AttackModel->DirectorCredentials->Mark();

return (0);



}

variablesPV8::variablesPV8(int timeindex) {
  TheModelPtr = (BaseModelClass**)(&TheAttackModelADVISE);
  double startpts[21]={0.0, 500.0, 1000.0, 1500.0, 2000.0, 2500.0, 3000.0, 3500.0, 4000.0, 4500.0, 5000.0, 5500.0, 6000.0, 6500.0, 7000.0, 7500.0, 8000.0, 8500.0, 9000.0, 9500.0, 10000.0};
  double stoppts[21]={0.0, 500.0, 1000.0, 1500.0, 2000.0, 2500.0, 3000.0, 3500.0, 4000.0, 4500.0, 5000.0, 5500.0, 6000.0, 6500.0, 7000.0, 7500.0, 8000.0, 8500.0, 9000.0, 9500.0, 10000.0};
  Initialize("dir_credentials",(RewardType)0,21, startpts, stoppts, timeindex, 0,1, 1);
  AddVariableDependency("DirectorCredentials","AttackModel");
}

variablesPV8::~variablesPV8() {
  for(int i = 0; i < NumberOfWorkers; i++) {
    delete[] WorkerList[i]->Name;
    delete WorkerList[i];
  }
}

void variablesPV8::CreateWorkerList(void) {
  for(int i = 0; i < NumberOfWorkers; i++)
    WorkerList[i] = new variablesPV8Worker;
}
variablesPV9Worker::variablesPV9Worker()
{
  NumModels = 1;
  TheModelPtr = new BaseModelClass**[NumModels];
  TheModelPtr[0] = (BaseModelClass**)(&AttackModel);
}

variablesPV9Worker::~variablesPV9Worker() {
  delete [] TheModelPtr;
}

double variablesPV9Worker::Reward_Function(void) {

return AttackModel->SafeCombination->Mark();

return (0);



}

variablesPV9::variablesPV9(int timeindex) {
  TheModelPtr = (BaseModelClass**)(&TheAttackModelADVISE);
  double startpts[21]={0.0, 500.0, 1000.0, 1500.0, 2000.0, 2500.0, 3000.0, 3500.0, 4000.0, 4500.0, 5000.0, 5500.0, 6000.0, 6500.0, 7000.0, 7500.0, 8000.0, 8500.0, 9000.0, 9500.0, 10000.0};
  double stoppts[21]={0.0, 500.0, 1000.0, 1500.0, 2000.0, 2500.0, 3000.0, 3500.0, 4000.0, 4500.0, 5000.0, 5500.0, 6000.0, 6500.0, 7000.0, 7500.0, 8000.0, 8500.0, 9000.0, 9500.0, 10000.0};
  Initialize("safe_combination",(RewardType)0,21, startpts, stoppts, timeindex, 0,1, 1);
  AddVariableDependency("SafeCombination","AttackModel");
}

variablesPV9::~variablesPV9() {
  for(int i = 0; i < NumberOfWorkers; i++) {
    delete[] WorkerList[i]->Name;
    delete WorkerList[i];
  }
}

void variablesPV9::CreateWorkerList(void) {
  for(int i = 0; i < NumberOfWorkers; i++)
    WorkerList[i] = new variablesPV9Worker;
}
variablesPV10Worker::variablesPV10Worker()
{
  NumModels = 1;
  TheModelPtr = new BaseModelClass**[NumModels];
  TheModelPtr[0] = (BaseModelClass**)(&AttackModel);
}

variablesPV10Worker::~variablesPV10Worker() {
  delete [] TheModelPtr;
}

double variablesPV10Worker::Reward_Function(void) {

return AttackModel->DigitalMoney->Mark();

return (0);



}

variablesPV10::variablesPV10(int timeindex) {
  TheModelPtr = (BaseModelClass**)(&TheAttackModelADVISE);
  double startpts[21]={0.0, 500.0, 1000.0, 1500.0, 2000.0, 2500.0, 3000.0, 3500.0, 4000.0, 4500.0, 5000.0, 5500.0, 6000.0, 6500.0, 7000.0, 7500.0, 8000.0, 8500.0, 9000.0, 9500.0, 10000.0};
  double stoppts[21]={0.0, 500.0, 1000.0, 1500.0, 2000.0, 2500.0, 3000.0, 3500.0, 4000.0, 4500.0, 5000.0, 5500.0, 6000.0, 6500.0, 7000.0, 7500.0, 8000.0, 8500.0, 9000.0, 9500.0, 10000.0};
  Initialize("small_money",(RewardType)0,21, startpts, stoppts, timeindex, 0,1, 1);
  AddVariableDependency("DigitalMoney","AttackModel");
}

variablesPV10::~variablesPV10() {
  for(int i = 0; i < NumberOfWorkers; i++) {
    delete[] WorkerList[i]->Name;
    delete WorkerList[i];
  }
}

void variablesPV10::CreateWorkerList(void) {
  for(int i = 0; i < NumberOfWorkers; i++)
    WorkerList[i] = new variablesPV10Worker;
}
variablesPV11Worker::variablesPV11Worker()
{
  NumModels = 1;
  TheModelPtr = new BaseModelClass**[NumModels];
  TheModelPtr[0] = (BaseModelClass**)(&AttackModel);
}

variablesPV11Worker::~variablesPV11Worker() {
  delete [] TheModelPtr;
}

double variablesPV11Worker::Reward_Function(void) {

return AttackModel->Money->Mark() || AttackModel->DigitalMoney->Mark();

return (0);



}

variablesPV11::variablesPV11(int timeindex) {
  TheModelPtr = (BaseModelClass**)(&TheAttackModelADVISE);
  double startpts[21]={0.0, 500.0, 1000.0, 1500.0, 2000.0, 2500.0, 3000.0, 3500.0, 4000.0, 4500.0, 5000.0, 5500.0, 6000.0, 6500.0, 7000.0, 7500.0, 8000.0, 8500.0, 9000.0, 9500.0, 10000.0};
  double stoppts[21]={0.0, 500.0, 1000.0, 1500.0, 2000.0, 2500.0, 3000.0, 3500.0, 4000.0, 4500.0, 5000.0, 5500.0, 6000.0, 6500.0, 7000.0, 7500.0, 8000.0, 8500.0, 9000.0, 9500.0, 10000.0};
  Initialize("money",(RewardType)0,21, startpts, stoppts, timeindex, 0,2, 2);
  AddVariableDependency("Money","AttackModel");
  AddVariableDependency("DigitalMoney","AttackModel");
}

variablesPV11::~variablesPV11() {
  for(int i = 0; i < NumberOfWorkers; i++) {
    delete[] WorkerList[i]->Name;
    delete WorkerList[i];
  }
}

void variablesPV11::CreateWorkerList(void) {
  for(int i = 0; i < NumberOfWorkers; i++)
    WorkerList[i] = new variablesPV11Worker;
}
