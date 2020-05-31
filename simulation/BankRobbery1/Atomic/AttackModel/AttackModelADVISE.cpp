
#include "Atomic/AttackModel/AttackModelADVISE.h"
#include <stdlib.h>
#include <iostream>
#include <math.h>


AttackModelADVISE::AttackModelADVISE() {
  GetAccessToAlarmsAD.setParent(this);
  TransferCustomerMoneyAD.setParent(this);
  GetAccessToCamerasAD.setParent(this);
  DoNothingAD.setParent(this);
  TransferBankMoneyAD.setParent(this);
  PhishingAD.setParent(this);
  FindSecureAccessAD.setParent(this);
  GetDirectorCredentialsAD.setParent(this);
  StudySecurityRoutinesAD.setParent(this);
  GetSafeCombinationAD.setParent(this);
  InfectTheSystemAD.setParent(this);
  SafeBreakAD.setParent(this);
  CyberAttackAD.setParent(this);
  GetAccessToAlarmsFailure.setParent(this);
  GetAccessToAlarmsSuccessIWannaDiscredit.setParent(this);
  TransferCustomerMoneyFailure.setParent(this);
  TransferCustomerMoneySuccess.setParent(this);
  GetAccessToCamerasFailure.setParent(this);
  GetAccessToCamerasSuccess.setParent(this);
  DoNothingOutcome1.setParent(this);
  TransferBankMoneyFailure.setParent(this);
  TransferBankMoneySuccess.setParent(this);
  PhishingFailure.setParent(this);
  PhishingSuccess.setParent(this);
  FindSecureAccessFailure.setParent(this);
  FindSecureAccessSuccess.setParent(this);
  FindSecureAccessFailureCameraAccessFound.setParent(this);
  GetDirectorCredentialsFailure.setParent(this);
  GetDirectorCredentialsSuccess.setParent(this);
  StudySecurityRoutinesFailure.setParent(this);
  StudySecurityRoutinesSuccess.setParent(this);
  StudySecurityRoutinesFailureCameraAccessFound.setParent(this);
  GetSafeCombinationFailure.setParent(this);
  GetSafeCombinationSuccess.setParent(this);
  InfectTheSystemFailure.setParent(this);
  InfectTheSystemSuccess.setParent(this);
  SafeBreakFailure.setParent(this);
  SafeBreakSuccess.setParent(this);
  CyberAttackFailure.setParent(this);
  CyberAttackSuccess.setParent(this);
  GetAccessToAlarmsGroup.initialize(2, "GetAccessToAlarmsGroup");
  GetAccessToAlarmsGroup.appendGroup((BaseGroupClass*) &GetAccessToAlarmsFailure);
  GetAccessToAlarmsGroup.appendGroup((BaseGroupClass*) &GetAccessToAlarmsSuccessIWannaDiscredit);

  TransferCustomerMoneyGroup.initialize(2, "TransferCustomerMoneyGroup");
  TransferCustomerMoneyGroup.appendGroup((BaseGroupClass*) &TransferCustomerMoneyFailure);
  TransferCustomerMoneyGroup.appendGroup((BaseGroupClass*) &TransferCustomerMoneySuccess);

  GetAccessToCamerasGroup.initialize(2, "GetAccessToCamerasGroup");
  GetAccessToCamerasGroup.appendGroup((BaseGroupClass*) &GetAccessToCamerasFailure);
  GetAccessToCamerasGroup.appendGroup((BaseGroupClass*) &GetAccessToCamerasSuccess);

  TransferBankMoneyGroup.initialize(2, "TransferBankMoneyGroup");
  TransferBankMoneyGroup.appendGroup((BaseGroupClass*) &TransferBankMoneyFailure);
  TransferBankMoneyGroup.appendGroup((BaseGroupClass*) &TransferBankMoneySuccess);

  PhishingGroup.initialize(2, "PhishingGroup");
  PhishingGroup.appendGroup((BaseGroupClass*) &PhishingFailure);
  PhishingGroup.appendGroup((BaseGroupClass*) &PhishingSuccess);

  FindSecureAccessGroup.initialize(3, "FindSecureAccessGroup");
  FindSecureAccessGroup.appendGroup((BaseGroupClass*) &FindSecureAccessFailure);
  FindSecureAccessGroup.appendGroup((BaseGroupClass*) &FindSecureAccessSuccess);
  FindSecureAccessGroup.appendGroup((BaseGroupClass*) &FindSecureAccessFailureCameraAccessFound);

  GetDirectorCredentialsGroup.initialize(2, "GetDirectorCredentialsGroup");
  GetDirectorCredentialsGroup.appendGroup((BaseGroupClass*) &GetDirectorCredentialsFailure);
  GetDirectorCredentialsGroup.appendGroup((BaseGroupClass*) &GetDirectorCredentialsSuccess);

  StudySecurityRoutinesGroup.initialize(3, "StudySecurityRoutinesGroup");
  StudySecurityRoutinesGroup.appendGroup((BaseGroupClass*) &StudySecurityRoutinesFailure);
  StudySecurityRoutinesGroup.appendGroup((BaseGroupClass*) &StudySecurityRoutinesSuccess);
  StudySecurityRoutinesGroup.appendGroup((BaseGroupClass*) &StudySecurityRoutinesFailureCameraAccessFound);

  GetSafeCombinationGroup.initialize(2, "GetSafeCombinationGroup");
  GetSafeCombinationGroup.appendGroup((BaseGroupClass*) &GetSafeCombinationFailure);
  GetSafeCombinationGroup.appendGroup((BaseGroupClass*) &GetSafeCombinationSuccess);

  InfectTheSystemGroup.initialize(2, "InfectTheSystemGroup");
  InfectTheSystemGroup.appendGroup((BaseGroupClass*) &InfectTheSystemFailure);
  InfectTheSystemGroup.appendGroup((BaseGroupClass*) &InfectTheSystemSuccess);

  SafeBreakGroup.initialize(2, "SafeBreakGroup");
  SafeBreakGroup.appendGroup((BaseGroupClass*) &SafeBreakFailure);
  SafeBreakGroup.appendGroup((BaseGroupClass*) &SafeBreakSuccess);

  CyberAttackGroup.initialize(2, "CyberAttackGroup");
  CyberAttackGroup.appendGroup((BaseGroupClass*) &CyberAttackFailure);
  CyberAttackGroup.appendGroup((BaseGroupClass*) &CyberAttackSuccess);

  AdversaryDecisionGroup.initialize(13, "AdversaryDecisionGroup");
  AdversaryDecisionGroup.appendGroup((BaseGroupClass*) &GetAccessToAlarmsAD);
  AdversaryDecisionGroup.appendGroup((BaseGroupClass*) &TransferCustomerMoneyAD);
  AdversaryDecisionGroup.appendGroup((BaseGroupClass*) &GetAccessToCamerasAD);
  AdversaryDecisionGroup.appendGroup((BaseGroupClass*) &DoNothingAD);
  AdversaryDecisionGroup.appendGroup((BaseGroupClass*) &TransferBankMoneyAD);
  AdversaryDecisionGroup.appendGroup((BaseGroupClass*) &PhishingAD);
  AdversaryDecisionGroup.appendGroup((BaseGroupClass*) &FindSecureAccessAD);
  AdversaryDecisionGroup.appendGroup((BaseGroupClass*) &GetDirectorCredentialsAD);
  AdversaryDecisionGroup.appendGroup((BaseGroupClass*) &StudySecurityRoutinesAD);
  AdversaryDecisionGroup.appendGroup((BaseGroupClass*) &GetSafeCombinationAD);
  AdversaryDecisionGroup.appendGroup((BaseGroupClass*) &InfectTheSystemAD);
  AdversaryDecisionGroup.appendGroup((BaseGroupClass*) &SafeBreakAD);
  AdversaryDecisionGroup.appendGroup((BaseGroupClass*) &CyberAttackAD);

  BaseADVISEAction* InitialActions[40] = {
    &GetAccessToAlarmsAD, // 0
    &TransferCustomerMoneyAD, // 1
    &GetAccessToCamerasAD, // 2
    &DoNothingAD, // 3
    &TransferBankMoneyAD, // 4
    &PhishingAD, // 5
    &FindSecureAccessAD, // 6
    &GetDirectorCredentialsAD, // 7
    &StudySecurityRoutinesAD, // 8
    &GetSafeCombinationAD, // 9
    &InfectTheSystemAD, // 10
    &SafeBreakAD, // 11
    &CyberAttackAD, // 12
    &GetAccessToAlarmsFailure, // 13
    &GetAccessToAlarmsSuccessIWannaDiscredit, // 14
    &TransferCustomerMoneyFailure, // 15
    &TransferCustomerMoneySuccess, // 16
    &GetAccessToCamerasFailure, // 17
    &GetAccessToCamerasSuccess, // 18
    &DoNothingOutcome1, // 19
    &TransferBankMoneyFailure, // 20
    &TransferBankMoneySuccess, // 21
    &PhishingFailure, // 22
    &PhishingSuccess, // 23
    &FindSecureAccessFailure, // 24
    &FindSecureAccessSuccess, // 25
    &FindSecureAccessFailureCameraAccessFound, // 26
    &GetDirectorCredentialsFailure, // 27
    &GetDirectorCredentialsSuccess, // 28
    &StudySecurityRoutinesFailure, // 29
    &StudySecurityRoutinesSuccess, // 30
    &StudySecurityRoutinesFailureCameraAccessFound, // 31
    &GetSafeCombinationFailure, // 32
    &GetSafeCombinationSuccess, // 33
    &InfectTheSystemFailure, // 34
    &InfectTheSystemSuccess, // 35
    &SafeBreakFailure, // 36
    &SafeBreakSuccess, // 37
    &CyberAttackFailure, // 38
    &CyberAttackSuccess // 39
  };

  Step* InitialSteps[27] = {
      &GetAccessToAlarmsFailure,
      &GetAccessToAlarmsSuccessIWannaDiscredit,
      &TransferCustomerMoneyFailure,
      &TransferCustomerMoneySuccess,
      &GetAccessToCamerasFailure,
      &GetAccessToCamerasSuccess,
      &DoNothingOutcome1,
      &TransferBankMoneyFailure,
      &TransferBankMoneySuccess,
      &PhishingFailure,
      &PhishingSuccess,
      &FindSecureAccessFailure,
      &FindSecureAccessSuccess,
      &FindSecureAccessFailureCameraAccessFound,
      &GetDirectorCredentialsFailure,
      &GetDirectorCredentialsSuccess,
      &StudySecurityRoutinesFailure,
      &StudySecurityRoutinesSuccess,
      &StudySecurityRoutinesFailureCameraAccessFound,
      &GetSafeCombinationFailure,
      &GetSafeCombinationSuccess,
      &InfectTheSystemFailure,
      &InfectTheSystemSuccess,
      &SafeBreakFailure,
      &SafeBreakSuccess,
      &CyberAttackFailure,
      &CyberAttackSuccess
  };

  BaseGroupClass* InitialGroups[14] = {
    (BaseGroupClass*) &GetAccessToAlarmsGroup, // 0
    (BaseGroupClass*) &TransferCustomerMoneyGroup, // 1
    (BaseGroupClass*) &GetAccessToCamerasGroup, // 2
    (BaseGroupClass*) &DoNothingOutcome1, // 3
    (BaseGroupClass*) &TransferBankMoneyGroup, // 4
    (BaseGroupClass*) &PhishingGroup, // 5
    (BaseGroupClass*) &FindSecureAccessGroup, // 6
    (BaseGroupClass*) &GetDirectorCredentialsGroup, // 7
    (BaseGroupClass*) &StudySecurityRoutinesGroup, // 8
    (BaseGroupClass*) &GetSafeCombinationGroup, // 9
    (BaseGroupClass*) &InfectTheSystemGroup, // 10
    (BaseGroupClass*) &SafeBreakGroup, // 11
    (BaseGroupClass*) &CyberAttackGroup, // 12
    (BaseGroupClass*) &AdversaryDecisionGroup
  };

  CamerasControl = new Access("CamerasControl", 0);
  SystemAccess = new Access("SystemAccess", 0);
  SecurePath = new Access("SecurePath", 0);
  AlarmsControl = new Access("AlarmsControl", 0);
  PhisicalAccess = new Access("PhisicalAccess", securityComponentsAccess);
  BackDoor = new Access("BackDoor", 0);
  SecurityRoutines = new Knowledge("SecurityRoutines", 0);
  SafeCombination = new Knowledge("SafeCombination", 0);
  SecVulnerabilities = new Knowledge("SecVulnerabilities", secVulnerabilitiesKnowledge);
  CyberVulnerability = new Knowledge("CyberVulnerability", cyberVulnerabilitiesKnowledge);
  DirectorCredentials = new Knowledge("DirectorCredentials", 0);
  UserCredentials = new Knowledge("UserCredentials", 0);
  Hacker = new Skill("Hacker", hackerSkill);
  Breaker = new Skill("Breaker", breakerSkill);
  SocialEngineer = new Skill("SocialEngineer", socialEngineerSkill);
  Stealth = new Skill("Stealth", stealthSkill);
  Money = new Goal("Money", 0);
  Money->setPayoff(3000);
  MakeDecision = new BeginAdversaryDecision("MakeDecision", 0);
  GetAccessToAlarmsWeight = new StepWeight("GetAccessToAlarmsWeight", 0);
  GetAccessToAlarmsChosen = new StepChosen("GetAccessToAlarmsChosen", 0);
  TransferCustomerMoneyWeight = new StepWeight("TransferCustomerMoneyWeight", 0);
  TransferCustomerMoneyChosen = new StepChosen("TransferCustomerMoneyChosen", 0);
  GetAccessToCamerasWeight = new StepWeight("GetAccessToCamerasWeight", 0);
  GetAccessToCamerasChosen = new StepChosen("GetAccessToCamerasChosen", 0);
  DoNothingWeight = new StepWeight("DoNothingWeight", 0);
  DoNothingChosen = new StepChosen("DoNothingChosen", 0);
  TransferBankMoneyWeight = new StepWeight("TransferBankMoneyWeight", 0);
  TransferBankMoneyChosen = new StepChosen("TransferBankMoneyChosen", 0);
  PhishingWeight = new StepWeight("PhishingWeight", 0);
  PhishingChosen = new StepChosen("PhishingChosen", 0);
  FindSecureAccessWeight = new StepWeight("FindSecureAccessWeight", 0);
  FindSecureAccessChosen = new StepChosen("FindSecureAccessChosen", 0);
  GetDirectorCredentialsWeight = new StepWeight("GetDirectorCredentialsWeight", 0);
  GetDirectorCredentialsChosen = new StepChosen("GetDirectorCredentialsChosen", 0);
  StudySecurityRoutinesWeight = new StepWeight("StudySecurityRoutinesWeight", 0);
  StudySecurityRoutinesChosen = new StepChosen("StudySecurityRoutinesChosen", 0);
  GetSafeCombinationWeight = new StepWeight("GetSafeCombinationWeight", 0);
  GetSafeCombinationChosen = new StepChosen("GetSafeCombinationChosen", 0);
  InfectTheSystemWeight = new StepWeight("InfectTheSystemWeight", 0);
  InfectTheSystemChosen = new StepChosen("InfectTheSystemChosen", 0);
  SafeBreakWeight = new StepWeight("SafeBreakWeight", 0);
  SafeBreakChosen = new StepChosen("SafeBreakChosen", 0);
  CyberAttackWeight = new StepWeight("CyberAttackWeight", 0);
  CyberAttackChosen = new StepChosen("CyberAttackChosen", 0);

  Goal* InitialGoals[1] = {
      Money
  };

  ADVISEStateVariable* InitialSVs[44] = {
    CamerasControl, // 0
    SystemAccess, // 1
    SecurePath, // 2
    AlarmsControl, // 3
    PhisicalAccess, // 4
    BackDoor, // 5
    SecurityRoutines, // 6
    SafeCombination, // 7
    SecVulnerabilities, // 8
    CyberVulnerability, // 9
    DirectorCredentials, // 10
    UserCredentials, // 11
    Hacker, // 12
    Breaker, // 13
    SocialEngineer, // 14
    Stealth, // 15
    Money, // 16
    GetAccessToAlarmsChosen, // 17
    TransferCustomerMoneyChosen, // 18
    GetAccessToCamerasChosen, // 19
    DoNothingChosen, // 20
    TransferBankMoneyChosen, // 21
    PhishingChosen, // 22
    FindSecureAccessChosen, // 23
    GetDirectorCredentialsChosen, // 24
    StudySecurityRoutinesChosen, // 25
    GetSafeCombinationChosen, // 26
    InfectTheSystemChosen, // 27
    SafeBreakChosen, // 28
    CyberAttackChosen, // 29
    GetAccessToAlarmsWeight, // 30
    TransferCustomerMoneyWeight, // 31
    GetAccessToCamerasWeight, // 32
    DoNothingWeight, // 33
    TransferBankMoneyWeight, // 34
    PhishingWeight, // 35
    FindSecureAccessWeight, // 36
    GetDirectorCredentialsWeight, // 37
    StudySecurityRoutinesWeight, // 38
    GetSafeCombinationWeight, // 39
    InfectTheSystemWeight, // 40
    SafeBreakWeight, // 41
    CyberAttackWeight, // 42
    MakeDecision // 43
};

  int outCounts[13] = { 2, 2, 2, 1, 2, 2, 3, 2, 3, 2, 2, 2, 2 };

  commonInit("AttackModel", 44, InitialSVs, 40, InitialActions, 14, InitialGroups, 13, outCounts, InitialSteps, 1, InitialGoals);

  advCostPref = 0.1;
  advDetectPref = 0.1;
  advPayPref = 0.8;

  planningHorizon = 4;
  costDiscount = 0.1;
  detectionDiscount = 0.1;
  payoffDiscount = 0.8;

  assignSVsToAttackSteps();

  int AffectArcs[511][2] = {
    {43,0}, {17,0}, {30,0}, {43,1}, {18,1}, {31,1}, {43,2}, {19,2}, 
    {32,2}, {43,3}, {20,3}, {33,3}, {43,4}, {21,4}, {34,4}, {43,5}, 
    {22,5}, {35,5}, {43,6}, {23,6}, {36,6}, {43,7}, {24,7}, {37,7}, 
    {43,8}, {25,8}, {38,8}, {43,9}, {26,9}, {39,9}, {43,10}, {27,10}, 
    {40,10}, {43,11}, {28,11}, {41,11}, {43,12}, {29,12}, {42,12}, {43,13}, 
    {17,13}, {30,13}, {31,13}, {32,13}, {33,13}, {34,13}, {35,13}, {36,13}, 
    {37,13}, {38,13}, {39,13}, {40,13}, {41,13}, {42,13}, {3,13}, {8,13}, 
    {4,13}, {43,14}, {17,14}, {30,14}, {31,14}, {32,14}, {33,14}, {34,14}, 
    {35,14}, {36,14}, {37,14}, {38,14}, {39,14}, {40,14}, {41,14}, {42,14}, 
    {3,14}, {8,14}, {4,14}, {43,15}, {18,15}, {30,15}, {31,15}, {32,15}, 
    {33,15}, {34,15}, {35,15}, {36,15}, {37,15}, {38,15}, {39,15}, {40,15}, 
    {41,15}, {42,15}, {16,15}, {11,15}, {43,16}, {18,16}, {30,16}, {31,16}, 
    {32,16}, {33,16}, {34,16}, {35,16}, {36,16}, {37,16}, {38,16}, {39,16}, 
    {40,16}, {41,16}, {42,16}, {16,16}, {11,16}, {43,17}, {19,17}, {30,17}, 
    {31,17}, {32,17}, {33,17}, {34,17}, {35,17}, {36,17}, {37,17}, {38,17}, 
    {39,17}, {40,17}, {41,17}, {42,17}, {0,17}, {8,17}, {4,17}, {43,18}, 
    {19,18}, {30,18}, {31,18}, {32,18}, {33,18}, {34,18}, {35,18}, {36,18}, 
    {37,18}, {38,18}, {39,18}, {40,18}, {41,18}, {42,18}, {0,18}, {8,18}, 
    {4,18}, {43,19}, {20,19}, {30,19}, {31,19}, {32,19}, {33,19}, {34,19}, 
    {35,19}, {36,19}, {37,19}, {38,19}, {39,19}, {40,19}, {41,19}, {42,19}, 
    {43,20}, {21,20}, {30,20}, {31,20}, {32,20}, {33,20}, {34,20}, {35,20}, 
    {36,20}, {37,20}, {38,20}, {39,20}, {40,20}, {41,20}, {42,20}, {16,20}, 
    {1,20}, {10,20}, {43,21}, {21,21}, {30,21}, {31,21}, {32,21}, {33,21}, 
    {34,21}, {35,21}, {36,21}, {37,21}, {38,21}, {39,21}, {40,21}, {41,21}, 
    {42,21}, {16,21}, {1,21}, {10,21}, {43,22}, {22,22}, {30,22}, {31,22}, 
    {32,22}, {33,22}, {34,22}, {35,22}, {36,22}, {37,22}, {38,22}, {39,22}, 
    {40,22}, {41,22}, {42,22}, {11,22}, {43,23}, {22,23}, {30,23}, {31,23}, 
    {32,23}, {33,23}, {34,23}, {35,23}, {36,23}, {37,23}, {38,23}, {39,23}, 
    {40,23}, {41,23}, {42,23}, {11,23}, {43,24}, {23,24}, {30,24}, {31,24}, 
    {32,24}, {33,24}, {34,24}, {35,24}, {36,24}, {37,24}, {38,24}, {39,24}, 
    {40,24}, {41,24}, {42,24}, {2,24}, {6,24}, {0,24}, {43,25}, {23,25}, 
    {30,25}, {31,25}, {32,25}, {33,25}, {34,25}, {35,25}, {36,25}, {37,25}, 
    {38,25}, {39,25}, {40,25}, {41,25}, {42,25}, {2,25}, {6,25}, {0,25}, 
    {43,26}, {23,26}, {30,26}, {31,26}, {32,26}, {33,26}, {34,26}, {35,26}, 
    {36,26}, {37,26}, {38,26}, {39,26}, {40,26}, {41,26}, {42,26}, {2,26}, 
    {6,26}, {0,26}, {43,27}, {24,27}, {30,27}, {31,27}, {32,27}, {33,27}, 
    {34,27}, {35,27}, {36,27}, {37,27}, {38,27}, {39,27}, {40,27}, {41,27}, 
    {42,27}, {10,27}, {5,27}, {43,28}, {24,28}, {30,28}, {31,28}, {32,28}, 
    {33,28}, {34,28}, {35,28}, {36,28}, {37,28}, {38,28}, {39,28}, {40,28}, 
    {41,28}, {42,28}, {10,28}, {5,28}, {43,29}, {25,29}, {30,29}, {31,29}, 
    {32,29}, {33,29}, {34,29}, {35,29}, {36,29}, {37,29}, {38,29}, {39,29}, 
    {40,29}, {41,29}, {42,29}, {6,29}, {0,29}, {43,30}, {25,30}, {30,30}, 
    {31,30}, {32,30}, {33,30}, {34,30}, {35,30}, {36,30}, {37,30}, {38,30}, 
    {39,30}, {40,30}, {41,30}, {42,30}, {6,30}, {0,30}, {43,31}, {25,31}, 
    {30,31}, {31,31}, {32,31}, {33,31}, {34,31}, {35,31}, {36,31}, {37,31}, 
    {38,31}, {39,31}, {40,31}, {41,31}, {42,31}, {6,31}, {0,31}, {43,32}, 
    {26,32}, {30,32}, {31,32}, {32,32}, {33,32}, {34,32}, {35,32}, {36,32}, 
    {37,32}, {38,32}, {39,32}, {40,32}, {41,32}, {42,32}, {7,32}, {5,32}, 
    {43,33}, {26,33}, {30,33}, {31,33}, {32,33}, {33,33}, {34,33}, {35,33}, 
    {36,33}, {37,33}, {38,33}, {39,33}, {40,33}, {41,33}, {42,33}, {7,33}, 
    {5,33}, {43,34}, {27,34}, {30,34}, {31,34}, {32,34}, {33,34}, {34,34}, 
    {35,34}, {36,34}, {37,34}, {38,34}, {39,34}, {40,34}, {41,34}, {42,34}, 
    {1,34}, {5,34}, {43,35}, {27,35}, {30,35}, {31,35}, {32,35}, {33,35}, 
    {34,35}, {35,35}, {36,35}, {37,35}, {38,35}, {39,35}, {40,35}, {41,35}, 
    {42,35}, {1,35}, {5,35}, {43,36}, {28,36}, {30,36}, {31,36}, {32,36}, 
    {33,36}, {34,36}, {35,36}, {36,36}, {37,36}, {38,36}, {39,36}, {40,36}, 
    {41,36}, {42,36}, {16,36}, {2,36}, {0,36}, {3,36}, {7,36}, {6,36}, 
    {43,37}, {28,37}, {30,37}, {31,37}, {32,37}, {33,37}, {34,37}, {35,37}, 
    {36,37}, {37,37}, {38,37}, {39,37}, {40,37}, {41,37}, {42,37}, {16,37}, 
    {2,37}, {0,37}, {3,37}, {7,37}, {6,37}, {43,38}, {29,38}, {30,38}, 
    {31,38}, {32,38}, {33,38}, {34,38}, {35,38}, {36,38}, {37,38}, {38,38}, 
    {39,38}, {40,38}, {41,38}, {42,38}, {5,38}, {9,38}, {43,39}, {29,39}, 
    {30,39}, {31,39}, {32,39}, {33,39}, {34,39}, {35,39}, {36,39}, {37,39}, 
    {38,39}, {39,39}, {40,39}, {41,39}, {42,39}, {5,39}, {9,39}
};
  for(int n = 0; n < 511;n++)
    AddAffectArc(InitialSVs[AffectArcs[n][0]], InitialActions[AffectArcs[n][1]]);
  int EnableArcs[66][2] = {
    {43,0}, {43,1}, {43,2}, {43,3}, {43,4}, {43,5}, {43,6}, {43,7}, 
    {43,8}, {43,9}, {43,10}, {43,11}, {43,12}, {17,13}, {3,13}, {17,14}, 
    {3,14}, {18,15}, {16,15}, {18,16}, {16,16}, {19,17}, {0,17}, {19,18}, 
    {0,18}, {20,19}, {21,20}, {16,20}, {21,21}, {16,21}, {22,22}, {11,22}, 
    {22,23}, {11,23}, {23,24}, {2,24}, {23,25}, {2,25}, {23,26}, {2,26}, 
    {24,27}, {10,27}, {24,28}, {10,28}, {25,29}, {6,29}, {25,30}, {6,30}, 
    {25,31}, {6,31}, {26,32}, {7,32}, {26,33}, {7,33}, {27,34}, {1,34}, 
    {27,35}, {1,35}, {28,36}, {16,36}, {28,37}, {16,37}, {29,38}, {5,38}, 
    {29,39}, {5,39}
};
  for(int n = 0; n < 66;n++)
    AddEnableArc(InitialSVs[EnableArcs[n][0]], InitialActions[EnableArcs[n][1]]);
  for(int x = 0; x < 40; x++) {
    InitialActions[x]->LinkVariables();
  }

  customInitialization();

  recalculateAdversaryDecisionWeights();

}

AttackModelADVISE::~AttackModelADVISE() {
}

void AttackModelADVISE::assignSVsToAttackSteps() {
  GetAccessToAlarmsFailure.AlarmsControl = AlarmsControl;
  GetAccessToAlarmsFailure.SecVulnerabilities = SecVulnerabilities;
  GetAccessToAlarmsFailure.PhisicalAccess = PhisicalAccess;
  GetAccessToAlarmsFailure.Stealth = Stealth;
  GetAccessToAlarmsFailure.Hacker = Hacker;
  GetAccessToAlarmsFailure.GetAccessToAlarmsChosen = GetAccessToAlarmsChosen;
  GetAccessToAlarmsFailure.GetAccessToAlarmsWeight = GetAccessToAlarmsWeight;
  GetAccessToAlarmsFailure.TransferCustomerMoneyWeight = TransferCustomerMoneyWeight;
  GetAccessToAlarmsFailure.GetAccessToCamerasWeight = GetAccessToCamerasWeight;
  GetAccessToAlarmsFailure.DoNothingWeight = DoNothingWeight;
  GetAccessToAlarmsFailure.TransferBankMoneyWeight = TransferBankMoneyWeight;
  GetAccessToAlarmsFailure.PhishingWeight = PhishingWeight;
  GetAccessToAlarmsFailure.FindSecureAccessWeight = FindSecureAccessWeight;
  GetAccessToAlarmsFailure.GetDirectorCredentialsWeight = GetDirectorCredentialsWeight;
  GetAccessToAlarmsFailure.StudySecurityRoutinesWeight = StudySecurityRoutinesWeight;
  GetAccessToAlarmsFailure.GetSafeCombinationWeight = GetSafeCombinationWeight;
  GetAccessToAlarmsFailure.InfectTheSystemWeight = InfectTheSystemWeight;
  GetAccessToAlarmsFailure.SafeBreakWeight = SafeBreakWeight;
  GetAccessToAlarmsFailure.CyberAttackWeight = CyberAttackWeight;
  GetAccessToAlarmsFailure.MakeDecision = MakeDecision;
  GetAccessToAlarmsFailure.setSVs(GetAccessToAlarmsChosen, GetAccessToAlarmsWeight);
  GetAccessToAlarmsSuccessIWannaDiscredit.AlarmsControl = AlarmsControl;
  GetAccessToAlarmsSuccessIWannaDiscredit.SecVulnerabilities = SecVulnerabilities;
  GetAccessToAlarmsSuccessIWannaDiscredit.PhisicalAccess = PhisicalAccess;
  GetAccessToAlarmsSuccessIWannaDiscredit.Stealth = Stealth;
  GetAccessToAlarmsSuccessIWannaDiscredit.Hacker = Hacker;
  GetAccessToAlarmsSuccessIWannaDiscredit.GetAccessToAlarmsChosen = GetAccessToAlarmsChosen;
  GetAccessToAlarmsSuccessIWannaDiscredit.GetAccessToAlarmsWeight = GetAccessToAlarmsWeight;
  GetAccessToAlarmsSuccessIWannaDiscredit.TransferCustomerMoneyWeight = TransferCustomerMoneyWeight;
  GetAccessToAlarmsSuccessIWannaDiscredit.GetAccessToCamerasWeight = GetAccessToCamerasWeight;
  GetAccessToAlarmsSuccessIWannaDiscredit.DoNothingWeight = DoNothingWeight;
  GetAccessToAlarmsSuccessIWannaDiscredit.TransferBankMoneyWeight = TransferBankMoneyWeight;
  GetAccessToAlarmsSuccessIWannaDiscredit.PhishingWeight = PhishingWeight;
  GetAccessToAlarmsSuccessIWannaDiscredit.FindSecureAccessWeight = FindSecureAccessWeight;
  GetAccessToAlarmsSuccessIWannaDiscredit.GetDirectorCredentialsWeight = GetDirectorCredentialsWeight;
  GetAccessToAlarmsSuccessIWannaDiscredit.StudySecurityRoutinesWeight = StudySecurityRoutinesWeight;
  GetAccessToAlarmsSuccessIWannaDiscredit.GetSafeCombinationWeight = GetSafeCombinationWeight;
  GetAccessToAlarmsSuccessIWannaDiscredit.InfectTheSystemWeight = InfectTheSystemWeight;
  GetAccessToAlarmsSuccessIWannaDiscredit.SafeBreakWeight = SafeBreakWeight;
  GetAccessToAlarmsSuccessIWannaDiscredit.CyberAttackWeight = CyberAttackWeight;
  GetAccessToAlarmsSuccessIWannaDiscredit.MakeDecision = MakeDecision;
  GetAccessToAlarmsSuccessIWannaDiscredit.setSVs(GetAccessToAlarmsChosen, GetAccessToAlarmsWeight);
  TransferCustomerMoneyFailure.Money = Money;
  TransferCustomerMoneyFailure.UserCredentials = UserCredentials;
  TransferCustomerMoneyFailure.TransferCustomerMoneyChosen = TransferCustomerMoneyChosen;
  TransferCustomerMoneyFailure.GetAccessToAlarmsWeight = GetAccessToAlarmsWeight;
  TransferCustomerMoneyFailure.TransferCustomerMoneyWeight = TransferCustomerMoneyWeight;
  TransferCustomerMoneyFailure.GetAccessToCamerasWeight = GetAccessToCamerasWeight;
  TransferCustomerMoneyFailure.DoNothingWeight = DoNothingWeight;
  TransferCustomerMoneyFailure.TransferBankMoneyWeight = TransferBankMoneyWeight;
  TransferCustomerMoneyFailure.PhishingWeight = PhishingWeight;
  TransferCustomerMoneyFailure.FindSecureAccessWeight = FindSecureAccessWeight;
  TransferCustomerMoneyFailure.GetDirectorCredentialsWeight = GetDirectorCredentialsWeight;
  TransferCustomerMoneyFailure.StudySecurityRoutinesWeight = StudySecurityRoutinesWeight;
  TransferCustomerMoneyFailure.GetSafeCombinationWeight = GetSafeCombinationWeight;
  TransferCustomerMoneyFailure.InfectTheSystemWeight = InfectTheSystemWeight;
  TransferCustomerMoneyFailure.SafeBreakWeight = SafeBreakWeight;
  TransferCustomerMoneyFailure.CyberAttackWeight = CyberAttackWeight;
  TransferCustomerMoneyFailure.MakeDecision = MakeDecision;
  TransferCustomerMoneyFailure.setSVs(TransferCustomerMoneyChosen, TransferCustomerMoneyWeight);
  TransferCustomerMoneySuccess.Money = Money;
  TransferCustomerMoneySuccess.UserCredentials = UserCredentials;
  TransferCustomerMoneySuccess.TransferCustomerMoneyChosen = TransferCustomerMoneyChosen;
  TransferCustomerMoneySuccess.GetAccessToAlarmsWeight = GetAccessToAlarmsWeight;
  TransferCustomerMoneySuccess.TransferCustomerMoneyWeight = TransferCustomerMoneyWeight;
  TransferCustomerMoneySuccess.GetAccessToCamerasWeight = GetAccessToCamerasWeight;
  TransferCustomerMoneySuccess.DoNothingWeight = DoNothingWeight;
  TransferCustomerMoneySuccess.TransferBankMoneyWeight = TransferBankMoneyWeight;
  TransferCustomerMoneySuccess.PhishingWeight = PhishingWeight;
  TransferCustomerMoneySuccess.FindSecureAccessWeight = FindSecureAccessWeight;
  TransferCustomerMoneySuccess.GetDirectorCredentialsWeight = GetDirectorCredentialsWeight;
  TransferCustomerMoneySuccess.StudySecurityRoutinesWeight = StudySecurityRoutinesWeight;
  TransferCustomerMoneySuccess.GetSafeCombinationWeight = GetSafeCombinationWeight;
  TransferCustomerMoneySuccess.InfectTheSystemWeight = InfectTheSystemWeight;
  TransferCustomerMoneySuccess.SafeBreakWeight = SafeBreakWeight;
  TransferCustomerMoneySuccess.CyberAttackWeight = CyberAttackWeight;
  TransferCustomerMoneySuccess.MakeDecision = MakeDecision;
  TransferCustomerMoneySuccess.setSVs(TransferCustomerMoneyChosen, TransferCustomerMoneyWeight);
  GetAccessToCamerasFailure.CamerasControl = CamerasControl;
  GetAccessToCamerasFailure.SecVulnerabilities = SecVulnerabilities;
  GetAccessToCamerasFailure.PhisicalAccess = PhisicalAccess;
  GetAccessToCamerasFailure.Stealth = Stealth;
  GetAccessToCamerasFailure.Hacker = Hacker;
  GetAccessToCamerasFailure.GetAccessToCamerasChosen = GetAccessToCamerasChosen;
  GetAccessToCamerasFailure.GetAccessToAlarmsWeight = GetAccessToAlarmsWeight;
  GetAccessToCamerasFailure.TransferCustomerMoneyWeight = TransferCustomerMoneyWeight;
  GetAccessToCamerasFailure.GetAccessToCamerasWeight = GetAccessToCamerasWeight;
  GetAccessToCamerasFailure.DoNothingWeight = DoNothingWeight;
  GetAccessToCamerasFailure.TransferBankMoneyWeight = TransferBankMoneyWeight;
  GetAccessToCamerasFailure.PhishingWeight = PhishingWeight;
  GetAccessToCamerasFailure.FindSecureAccessWeight = FindSecureAccessWeight;
  GetAccessToCamerasFailure.GetDirectorCredentialsWeight = GetDirectorCredentialsWeight;
  GetAccessToCamerasFailure.StudySecurityRoutinesWeight = StudySecurityRoutinesWeight;
  GetAccessToCamerasFailure.GetSafeCombinationWeight = GetSafeCombinationWeight;
  GetAccessToCamerasFailure.InfectTheSystemWeight = InfectTheSystemWeight;
  GetAccessToCamerasFailure.SafeBreakWeight = SafeBreakWeight;
  GetAccessToCamerasFailure.CyberAttackWeight = CyberAttackWeight;
  GetAccessToCamerasFailure.MakeDecision = MakeDecision;
  GetAccessToCamerasFailure.setSVs(GetAccessToCamerasChosen, GetAccessToCamerasWeight);
  GetAccessToCamerasSuccess.CamerasControl = CamerasControl;
  GetAccessToCamerasSuccess.SecVulnerabilities = SecVulnerabilities;
  GetAccessToCamerasSuccess.PhisicalAccess = PhisicalAccess;
  GetAccessToCamerasSuccess.Stealth = Stealth;
  GetAccessToCamerasSuccess.Hacker = Hacker;
  GetAccessToCamerasSuccess.GetAccessToCamerasChosen = GetAccessToCamerasChosen;
  GetAccessToCamerasSuccess.GetAccessToAlarmsWeight = GetAccessToAlarmsWeight;
  GetAccessToCamerasSuccess.TransferCustomerMoneyWeight = TransferCustomerMoneyWeight;
  GetAccessToCamerasSuccess.GetAccessToCamerasWeight = GetAccessToCamerasWeight;
  GetAccessToCamerasSuccess.DoNothingWeight = DoNothingWeight;
  GetAccessToCamerasSuccess.TransferBankMoneyWeight = TransferBankMoneyWeight;
  GetAccessToCamerasSuccess.PhishingWeight = PhishingWeight;
  GetAccessToCamerasSuccess.FindSecureAccessWeight = FindSecureAccessWeight;
  GetAccessToCamerasSuccess.GetDirectorCredentialsWeight = GetDirectorCredentialsWeight;
  GetAccessToCamerasSuccess.StudySecurityRoutinesWeight = StudySecurityRoutinesWeight;
  GetAccessToCamerasSuccess.GetSafeCombinationWeight = GetSafeCombinationWeight;
  GetAccessToCamerasSuccess.InfectTheSystemWeight = InfectTheSystemWeight;
  GetAccessToCamerasSuccess.SafeBreakWeight = SafeBreakWeight;
  GetAccessToCamerasSuccess.CyberAttackWeight = CyberAttackWeight;
  GetAccessToCamerasSuccess.MakeDecision = MakeDecision;
  GetAccessToCamerasSuccess.setSVs(GetAccessToCamerasChosen, GetAccessToCamerasWeight);
  DoNothingOutcome1.DoNothingChosen = DoNothingChosen;
  DoNothingOutcome1.GetAccessToAlarmsWeight = GetAccessToAlarmsWeight;
  DoNothingOutcome1.TransferCustomerMoneyWeight = TransferCustomerMoneyWeight;
  DoNothingOutcome1.GetAccessToCamerasWeight = GetAccessToCamerasWeight;
  DoNothingOutcome1.DoNothingWeight = DoNothingWeight;
  DoNothingOutcome1.TransferBankMoneyWeight = TransferBankMoneyWeight;
  DoNothingOutcome1.PhishingWeight = PhishingWeight;
  DoNothingOutcome1.FindSecureAccessWeight = FindSecureAccessWeight;
  DoNothingOutcome1.GetDirectorCredentialsWeight = GetDirectorCredentialsWeight;
  DoNothingOutcome1.StudySecurityRoutinesWeight = StudySecurityRoutinesWeight;
  DoNothingOutcome1.GetSafeCombinationWeight = GetSafeCombinationWeight;
  DoNothingOutcome1.InfectTheSystemWeight = InfectTheSystemWeight;
  DoNothingOutcome1.SafeBreakWeight = SafeBreakWeight;
  DoNothingOutcome1.CyberAttackWeight = CyberAttackWeight;
  DoNothingOutcome1.MakeDecision = MakeDecision;
  DoNothingOutcome1.setSVs(DoNothingChosen, DoNothingWeight);
  TransferBankMoneyFailure.Money = Money;
  TransferBankMoneyFailure.SystemAccess = SystemAccess;
  TransferBankMoneyFailure.DirectorCredentials = DirectorCredentials;
  TransferBankMoneyFailure.TransferBankMoneyChosen = TransferBankMoneyChosen;
  TransferBankMoneyFailure.GetAccessToAlarmsWeight = GetAccessToAlarmsWeight;
  TransferBankMoneyFailure.TransferCustomerMoneyWeight = TransferCustomerMoneyWeight;
  TransferBankMoneyFailure.GetAccessToCamerasWeight = GetAccessToCamerasWeight;
  TransferBankMoneyFailure.DoNothingWeight = DoNothingWeight;
  TransferBankMoneyFailure.TransferBankMoneyWeight = TransferBankMoneyWeight;
  TransferBankMoneyFailure.PhishingWeight = PhishingWeight;
  TransferBankMoneyFailure.FindSecureAccessWeight = FindSecureAccessWeight;
  TransferBankMoneyFailure.GetDirectorCredentialsWeight = GetDirectorCredentialsWeight;
  TransferBankMoneyFailure.StudySecurityRoutinesWeight = StudySecurityRoutinesWeight;
  TransferBankMoneyFailure.GetSafeCombinationWeight = GetSafeCombinationWeight;
  TransferBankMoneyFailure.InfectTheSystemWeight = InfectTheSystemWeight;
  TransferBankMoneyFailure.SafeBreakWeight = SafeBreakWeight;
  TransferBankMoneyFailure.CyberAttackWeight = CyberAttackWeight;
  TransferBankMoneyFailure.MakeDecision = MakeDecision;
  TransferBankMoneyFailure.setSVs(TransferBankMoneyChosen, TransferBankMoneyWeight);
  TransferBankMoneySuccess.Money = Money;
  TransferBankMoneySuccess.SystemAccess = SystemAccess;
  TransferBankMoneySuccess.DirectorCredentials = DirectorCredentials;
  TransferBankMoneySuccess.TransferBankMoneyChosen = TransferBankMoneyChosen;
  TransferBankMoneySuccess.GetAccessToAlarmsWeight = GetAccessToAlarmsWeight;
  TransferBankMoneySuccess.TransferCustomerMoneyWeight = TransferCustomerMoneyWeight;
  TransferBankMoneySuccess.GetAccessToCamerasWeight = GetAccessToCamerasWeight;
  TransferBankMoneySuccess.DoNothingWeight = DoNothingWeight;
  TransferBankMoneySuccess.TransferBankMoneyWeight = TransferBankMoneyWeight;
  TransferBankMoneySuccess.PhishingWeight = PhishingWeight;
  TransferBankMoneySuccess.FindSecureAccessWeight = FindSecureAccessWeight;
  TransferBankMoneySuccess.GetDirectorCredentialsWeight = GetDirectorCredentialsWeight;
  TransferBankMoneySuccess.StudySecurityRoutinesWeight = StudySecurityRoutinesWeight;
  TransferBankMoneySuccess.GetSafeCombinationWeight = GetSafeCombinationWeight;
  TransferBankMoneySuccess.InfectTheSystemWeight = InfectTheSystemWeight;
  TransferBankMoneySuccess.SafeBreakWeight = SafeBreakWeight;
  TransferBankMoneySuccess.CyberAttackWeight = CyberAttackWeight;
  TransferBankMoneySuccess.MakeDecision = MakeDecision;
  TransferBankMoneySuccess.setSVs(TransferBankMoneyChosen, TransferBankMoneyWeight);
  PhishingFailure.UserCredentials = UserCredentials;
  PhishingFailure.SocialEngineer = SocialEngineer;
  PhishingFailure.PhishingChosen = PhishingChosen;
  PhishingFailure.GetAccessToAlarmsWeight = GetAccessToAlarmsWeight;
  PhishingFailure.TransferCustomerMoneyWeight = TransferCustomerMoneyWeight;
  PhishingFailure.GetAccessToCamerasWeight = GetAccessToCamerasWeight;
  PhishingFailure.DoNothingWeight = DoNothingWeight;
  PhishingFailure.TransferBankMoneyWeight = TransferBankMoneyWeight;
  PhishingFailure.PhishingWeight = PhishingWeight;
  PhishingFailure.FindSecureAccessWeight = FindSecureAccessWeight;
  PhishingFailure.GetDirectorCredentialsWeight = GetDirectorCredentialsWeight;
  PhishingFailure.StudySecurityRoutinesWeight = StudySecurityRoutinesWeight;
  PhishingFailure.GetSafeCombinationWeight = GetSafeCombinationWeight;
  PhishingFailure.InfectTheSystemWeight = InfectTheSystemWeight;
  PhishingFailure.SafeBreakWeight = SafeBreakWeight;
  PhishingFailure.CyberAttackWeight = CyberAttackWeight;
  PhishingFailure.MakeDecision = MakeDecision;
  PhishingFailure.setSVs(PhishingChosen, PhishingWeight);
  PhishingSuccess.UserCredentials = UserCredentials;
  PhishingSuccess.SocialEngineer = SocialEngineer;
  PhishingSuccess.PhishingChosen = PhishingChosen;
  PhishingSuccess.GetAccessToAlarmsWeight = GetAccessToAlarmsWeight;
  PhishingSuccess.TransferCustomerMoneyWeight = TransferCustomerMoneyWeight;
  PhishingSuccess.GetAccessToCamerasWeight = GetAccessToCamerasWeight;
  PhishingSuccess.DoNothingWeight = DoNothingWeight;
  PhishingSuccess.TransferBankMoneyWeight = TransferBankMoneyWeight;
  PhishingSuccess.PhishingWeight = PhishingWeight;
  PhishingSuccess.FindSecureAccessWeight = FindSecureAccessWeight;
  PhishingSuccess.GetDirectorCredentialsWeight = GetDirectorCredentialsWeight;
  PhishingSuccess.StudySecurityRoutinesWeight = StudySecurityRoutinesWeight;
  PhishingSuccess.GetSafeCombinationWeight = GetSafeCombinationWeight;
  PhishingSuccess.InfectTheSystemWeight = InfectTheSystemWeight;
  PhishingSuccess.SafeBreakWeight = SafeBreakWeight;
  PhishingSuccess.CyberAttackWeight = CyberAttackWeight;
  PhishingSuccess.MakeDecision = MakeDecision;
  PhishingSuccess.setSVs(PhishingChosen, PhishingWeight);
  FindSecureAccessFailure.SecurePath = SecurePath;
  FindSecureAccessFailure.SecurityRoutines = SecurityRoutines;
  FindSecureAccessFailure.CamerasControl = CamerasControl;
  FindSecureAccessFailure.FindSecureAccessChosen = FindSecureAccessChosen;
  FindSecureAccessFailure.GetAccessToAlarmsWeight = GetAccessToAlarmsWeight;
  FindSecureAccessFailure.TransferCustomerMoneyWeight = TransferCustomerMoneyWeight;
  FindSecureAccessFailure.GetAccessToCamerasWeight = GetAccessToCamerasWeight;
  FindSecureAccessFailure.DoNothingWeight = DoNothingWeight;
  FindSecureAccessFailure.TransferBankMoneyWeight = TransferBankMoneyWeight;
  FindSecureAccessFailure.PhishingWeight = PhishingWeight;
  FindSecureAccessFailure.FindSecureAccessWeight = FindSecureAccessWeight;
  FindSecureAccessFailure.GetDirectorCredentialsWeight = GetDirectorCredentialsWeight;
  FindSecureAccessFailure.StudySecurityRoutinesWeight = StudySecurityRoutinesWeight;
  FindSecureAccessFailure.GetSafeCombinationWeight = GetSafeCombinationWeight;
  FindSecureAccessFailure.InfectTheSystemWeight = InfectTheSystemWeight;
  FindSecureAccessFailure.SafeBreakWeight = SafeBreakWeight;
  FindSecureAccessFailure.CyberAttackWeight = CyberAttackWeight;
  FindSecureAccessFailure.MakeDecision = MakeDecision;
  FindSecureAccessFailure.setSVs(FindSecureAccessChosen, FindSecureAccessWeight);
  FindSecureAccessSuccess.SecurePath = SecurePath;
  FindSecureAccessSuccess.SecurityRoutines = SecurityRoutines;
  FindSecureAccessSuccess.CamerasControl = CamerasControl;
  FindSecureAccessSuccess.FindSecureAccessChosen = FindSecureAccessChosen;
  FindSecureAccessSuccess.GetAccessToAlarmsWeight = GetAccessToAlarmsWeight;
  FindSecureAccessSuccess.TransferCustomerMoneyWeight = TransferCustomerMoneyWeight;
  FindSecureAccessSuccess.GetAccessToCamerasWeight = GetAccessToCamerasWeight;
  FindSecureAccessSuccess.DoNothingWeight = DoNothingWeight;
  FindSecureAccessSuccess.TransferBankMoneyWeight = TransferBankMoneyWeight;
  FindSecureAccessSuccess.PhishingWeight = PhishingWeight;
  FindSecureAccessSuccess.FindSecureAccessWeight = FindSecureAccessWeight;
  FindSecureAccessSuccess.GetDirectorCredentialsWeight = GetDirectorCredentialsWeight;
  FindSecureAccessSuccess.StudySecurityRoutinesWeight = StudySecurityRoutinesWeight;
  FindSecureAccessSuccess.GetSafeCombinationWeight = GetSafeCombinationWeight;
  FindSecureAccessSuccess.InfectTheSystemWeight = InfectTheSystemWeight;
  FindSecureAccessSuccess.SafeBreakWeight = SafeBreakWeight;
  FindSecureAccessSuccess.CyberAttackWeight = CyberAttackWeight;
  FindSecureAccessSuccess.MakeDecision = MakeDecision;
  FindSecureAccessSuccess.setSVs(FindSecureAccessChosen, FindSecureAccessWeight);
  FindSecureAccessFailureCameraAccessFound.SecurePath = SecurePath;
  FindSecureAccessFailureCameraAccessFound.SecurityRoutines = SecurityRoutines;
  FindSecureAccessFailureCameraAccessFound.CamerasControl = CamerasControl;
  FindSecureAccessFailureCameraAccessFound.FindSecureAccessChosen = FindSecureAccessChosen;
  FindSecureAccessFailureCameraAccessFound.GetAccessToAlarmsWeight = GetAccessToAlarmsWeight;
  FindSecureAccessFailureCameraAccessFound.TransferCustomerMoneyWeight = TransferCustomerMoneyWeight;
  FindSecureAccessFailureCameraAccessFound.GetAccessToCamerasWeight = GetAccessToCamerasWeight;
  FindSecureAccessFailureCameraAccessFound.DoNothingWeight = DoNothingWeight;
  FindSecureAccessFailureCameraAccessFound.TransferBankMoneyWeight = TransferBankMoneyWeight;
  FindSecureAccessFailureCameraAccessFound.PhishingWeight = PhishingWeight;
  FindSecureAccessFailureCameraAccessFound.FindSecureAccessWeight = FindSecureAccessWeight;
  FindSecureAccessFailureCameraAccessFound.GetDirectorCredentialsWeight = GetDirectorCredentialsWeight;
  FindSecureAccessFailureCameraAccessFound.StudySecurityRoutinesWeight = StudySecurityRoutinesWeight;
  FindSecureAccessFailureCameraAccessFound.GetSafeCombinationWeight = GetSafeCombinationWeight;
  FindSecureAccessFailureCameraAccessFound.InfectTheSystemWeight = InfectTheSystemWeight;
  FindSecureAccessFailureCameraAccessFound.SafeBreakWeight = SafeBreakWeight;
  FindSecureAccessFailureCameraAccessFound.CyberAttackWeight = CyberAttackWeight;
  FindSecureAccessFailureCameraAccessFound.MakeDecision = MakeDecision;
  FindSecureAccessFailureCameraAccessFound.setSVs(FindSecureAccessChosen, FindSecureAccessWeight);
  GetDirectorCredentialsFailure.DirectorCredentials = DirectorCredentials;
  GetDirectorCredentialsFailure.BackDoor = BackDoor;
  GetDirectorCredentialsFailure.GetDirectorCredentialsChosen = GetDirectorCredentialsChosen;
  GetDirectorCredentialsFailure.GetAccessToAlarmsWeight = GetAccessToAlarmsWeight;
  GetDirectorCredentialsFailure.TransferCustomerMoneyWeight = TransferCustomerMoneyWeight;
  GetDirectorCredentialsFailure.GetAccessToCamerasWeight = GetAccessToCamerasWeight;
  GetDirectorCredentialsFailure.DoNothingWeight = DoNothingWeight;
  GetDirectorCredentialsFailure.TransferBankMoneyWeight = TransferBankMoneyWeight;
  GetDirectorCredentialsFailure.PhishingWeight = PhishingWeight;
  GetDirectorCredentialsFailure.FindSecureAccessWeight = FindSecureAccessWeight;
  GetDirectorCredentialsFailure.GetDirectorCredentialsWeight = GetDirectorCredentialsWeight;
  GetDirectorCredentialsFailure.StudySecurityRoutinesWeight = StudySecurityRoutinesWeight;
  GetDirectorCredentialsFailure.GetSafeCombinationWeight = GetSafeCombinationWeight;
  GetDirectorCredentialsFailure.InfectTheSystemWeight = InfectTheSystemWeight;
  GetDirectorCredentialsFailure.SafeBreakWeight = SafeBreakWeight;
  GetDirectorCredentialsFailure.CyberAttackWeight = CyberAttackWeight;
  GetDirectorCredentialsFailure.MakeDecision = MakeDecision;
  GetDirectorCredentialsFailure.setSVs(GetDirectorCredentialsChosen, GetDirectorCredentialsWeight);
  GetDirectorCredentialsSuccess.DirectorCredentials = DirectorCredentials;
  GetDirectorCredentialsSuccess.BackDoor = BackDoor;
  GetDirectorCredentialsSuccess.GetDirectorCredentialsChosen = GetDirectorCredentialsChosen;
  GetDirectorCredentialsSuccess.GetAccessToAlarmsWeight = GetAccessToAlarmsWeight;
  GetDirectorCredentialsSuccess.TransferCustomerMoneyWeight = TransferCustomerMoneyWeight;
  GetDirectorCredentialsSuccess.GetAccessToCamerasWeight = GetAccessToCamerasWeight;
  GetDirectorCredentialsSuccess.DoNothingWeight = DoNothingWeight;
  GetDirectorCredentialsSuccess.TransferBankMoneyWeight = TransferBankMoneyWeight;
  GetDirectorCredentialsSuccess.PhishingWeight = PhishingWeight;
  GetDirectorCredentialsSuccess.FindSecureAccessWeight = FindSecureAccessWeight;
  GetDirectorCredentialsSuccess.GetDirectorCredentialsWeight = GetDirectorCredentialsWeight;
  GetDirectorCredentialsSuccess.StudySecurityRoutinesWeight = StudySecurityRoutinesWeight;
  GetDirectorCredentialsSuccess.GetSafeCombinationWeight = GetSafeCombinationWeight;
  GetDirectorCredentialsSuccess.InfectTheSystemWeight = InfectTheSystemWeight;
  GetDirectorCredentialsSuccess.SafeBreakWeight = SafeBreakWeight;
  GetDirectorCredentialsSuccess.CyberAttackWeight = CyberAttackWeight;
  GetDirectorCredentialsSuccess.MakeDecision = MakeDecision;
  GetDirectorCredentialsSuccess.setSVs(GetDirectorCredentialsChosen, GetDirectorCredentialsWeight);
  StudySecurityRoutinesFailure.SecurityRoutines = SecurityRoutines;
  StudySecurityRoutinesFailure.CamerasControl = CamerasControl;
  StudySecurityRoutinesFailure.StudySecurityRoutinesChosen = StudySecurityRoutinesChosen;
  StudySecurityRoutinesFailure.GetAccessToAlarmsWeight = GetAccessToAlarmsWeight;
  StudySecurityRoutinesFailure.TransferCustomerMoneyWeight = TransferCustomerMoneyWeight;
  StudySecurityRoutinesFailure.GetAccessToCamerasWeight = GetAccessToCamerasWeight;
  StudySecurityRoutinesFailure.DoNothingWeight = DoNothingWeight;
  StudySecurityRoutinesFailure.TransferBankMoneyWeight = TransferBankMoneyWeight;
  StudySecurityRoutinesFailure.PhishingWeight = PhishingWeight;
  StudySecurityRoutinesFailure.FindSecureAccessWeight = FindSecureAccessWeight;
  StudySecurityRoutinesFailure.GetDirectorCredentialsWeight = GetDirectorCredentialsWeight;
  StudySecurityRoutinesFailure.StudySecurityRoutinesWeight = StudySecurityRoutinesWeight;
  StudySecurityRoutinesFailure.GetSafeCombinationWeight = GetSafeCombinationWeight;
  StudySecurityRoutinesFailure.InfectTheSystemWeight = InfectTheSystemWeight;
  StudySecurityRoutinesFailure.SafeBreakWeight = SafeBreakWeight;
  StudySecurityRoutinesFailure.CyberAttackWeight = CyberAttackWeight;
  StudySecurityRoutinesFailure.MakeDecision = MakeDecision;
  StudySecurityRoutinesFailure.setSVs(StudySecurityRoutinesChosen, StudySecurityRoutinesWeight);
  StudySecurityRoutinesSuccess.SecurityRoutines = SecurityRoutines;
  StudySecurityRoutinesSuccess.CamerasControl = CamerasControl;
  StudySecurityRoutinesSuccess.StudySecurityRoutinesChosen = StudySecurityRoutinesChosen;
  StudySecurityRoutinesSuccess.GetAccessToAlarmsWeight = GetAccessToAlarmsWeight;
  StudySecurityRoutinesSuccess.TransferCustomerMoneyWeight = TransferCustomerMoneyWeight;
  StudySecurityRoutinesSuccess.GetAccessToCamerasWeight = GetAccessToCamerasWeight;
  StudySecurityRoutinesSuccess.DoNothingWeight = DoNothingWeight;
  StudySecurityRoutinesSuccess.TransferBankMoneyWeight = TransferBankMoneyWeight;
  StudySecurityRoutinesSuccess.PhishingWeight = PhishingWeight;
  StudySecurityRoutinesSuccess.FindSecureAccessWeight = FindSecureAccessWeight;
  StudySecurityRoutinesSuccess.GetDirectorCredentialsWeight = GetDirectorCredentialsWeight;
  StudySecurityRoutinesSuccess.StudySecurityRoutinesWeight = StudySecurityRoutinesWeight;
  StudySecurityRoutinesSuccess.GetSafeCombinationWeight = GetSafeCombinationWeight;
  StudySecurityRoutinesSuccess.InfectTheSystemWeight = InfectTheSystemWeight;
  StudySecurityRoutinesSuccess.SafeBreakWeight = SafeBreakWeight;
  StudySecurityRoutinesSuccess.CyberAttackWeight = CyberAttackWeight;
  StudySecurityRoutinesSuccess.MakeDecision = MakeDecision;
  StudySecurityRoutinesSuccess.setSVs(StudySecurityRoutinesChosen, StudySecurityRoutinesWeight);
  StudySecurityRoutinesFailureCameraAccessFound.SecurityRoutines = SecurityRoutines;
  StudySecurityRoutinesFailureCameraAccessFound.CamerasControl = CamerasControl;
  StudySecurityRoutinesFailureCameraAccessFound.StudySecurityRoutinesChosen = StudySecurityRoutinesChosen;
  StudySecurityRoutinesFailureCameraAccessFound.GetAccessToAlarmsWeight = GetAccessToAlarmsWeight;
  StudySecurityRoutinesFailureCameraAccessFound.TransferCustomerMoneyWeight = TransferCustomerMoneyWeight;
  StudySecurityRoutinesFailureCameraAccessFound.GetAccessToCamerasWeight = GetAccessToCamerasWeight;
  StudySecurityRoutinesFailureCameraAccessFound.DoNothingWeight = DoNothingWeight;
  StudySecurityRoutinesFailureCameraAccessFound.TransferBankMoneyWeight = TransferBankMoneyWeight;
  StudySecurityRoutinesFailureCameraAccessFound.PhishingWeight = PhishingWeight;
  StudySecurityRoutinesFailureCameraAccessFound.FindSecureAccessWeight = FindSecureAccessWeight;
  StudySecurityRoutinesFailureCameraAccessFound.GetDirectorCredentialsWeight = GetDirectorCredentialsWeight;
  StudySecurityRoutinesFailureCameraAccessFound.StudySecurityRoutinesWeight = StudySecurityRoutinesWeight;
  StudySecurityRoutinesFailureCameraAccessFound.GetSafeCombinationWeight = GetSafeCombinationWeight;
  StudySecurityRoutinesFailureCameraAccessFound.InfectTheSystemWeight = InfectTheSystemWeight;
  StudySecurityRoutinesFailureCameraAccessFound.SafeBreakWeight = SafeBreakWeight;
  StudySecurityRoutinesFailureCameraAccessFound.CyberAttackWeight = CyberAttackWeight;
  StudySecurityRoutinesFailureCameraAccessFound.MakeDecision = MakeDecision;
  StudySecurityRoutinesFailureCameraAccessFound.setSVs(StudySecurityRoutinesChosen, StudySecurityRoutinesWeight);
  GetSafeCombinationFailure.SafeCombination = SafeCombination;
  GetSafeCombinationFailure.BackDoor = BackDoor;
  GetSafeCombinationFailure.GetSafeCombinationChosen = GetSafeCombinationChosen;
  GetSafeCombinationFailure.GetAccessToAlarmsWeight = GetAccessToAlarmsWeight;
  GetSafeCombinationFailure.TransferCustomerMoneyWeight = TransferCustomerMoneyWeight;
  GetSafeCombinationFailure.GetAccessToCamerasWeight = GetAccessToCamerasWeight;
  GetSafeCombinationFailure.DoNothingWeight = DoNothingWeight;
  GetSafeCombinationFailure.TransferBankMoneyWeight = TransferBankMoneyWeight;
  GetSafeCombinationFailure.PhishingWeight = PhishingWeight;
  GetSafeCombinationFailure.FindSecureAccessWeight = FindSecureAccessWeight;
  GetSafeCombinationFailure.GetDirectorCredentialsWeight = GetDirectorCredentialsWeight;
  GetSafeCombinationFailure.StudySecurityRoutinesWeight = StudySecurityRoutinesWeight;
  GetSafeCombinationFailure.GetSafeCombinationWeight = GetSafeCombinationWeight;
  GetSafeCombinationFailure.InfectTheSystemWeight = InfectTheSystemWeight;
  GetSafeCombinationFailure.SafeBreakWeight = SafeBreakWeight;
  GetSafeCombinationFailure.CyberAttackWeight = CyberAttackWeight;
  GetSafeCombinationFailure.MakeDecision = MakeDecision;
  GetSafeCombinationFailure.setSVs(GetSafeCombinationChosen, GetSafeCombinationWeight);
  GetSafeCombinationSuccess.SafeCombination = SafeCombination;
  GetSafeCombinationSuccess.BackDoor = BackDoor;
  GetSafeCombinationSuccess.GetSafeCombinationChosen = GetSafeCombinationChosen;
  GetSafeCombinationSuccess.GetAccessToAlarmsWeight = GetAccessToAlarmsWeight;
  GetSafeCombinationSuccess.TransferCustomerMoneyWeight = TransferCustomerMoneyWeight;
  GetSafeCombinationSuccess.GetAccessToCamerasWeight = GetAccessToCamerasWeight;
  GetSafeCombinationSuccess.DoNothingWeight = DoNothingWeight;
  GetSafeCombinationSuccess.TransferBankMoneyWeight = TransferBankMoneyWeight;
  GetSafeCombinationSuccess.PhishingWeight = PhishingWeight;
  GetSafeCombinationSuccess.FindSecureAccessWeight = FindSecureAccessWeight;
  GetSafeCombinationSuccess.GetDirectorCredentialsWeight = GetDirectorCredentialsWeight;
  GetSafeCombinationSuccess.StudySecurityRoutinesWeight = StudySecurityRoutinesWeight;
  GetSafeCombinationSuccess.GetSafeCombinationWeight = GetSafeCombinationWeight;
  GetSafeCombinationSuccess.InfectTheSystemWeight = InfectTheSystemWeight;
  GetSafeCombinationSuccess.SafeBreakWeight = SafeBreakWeight;
  GetSafeCombinationSuccess.CyberAttackWeight = CyberAttackWeight;
  GetSafeCombinationSuccess.MakeDecision = MakeDecision;
  GetSafeCombinationSuccess.setSVs(GetSafeCombinationChosen, GetSafeCombinationWeight);
  InfectTheSystemFailure.SystemAccess = SystemAccess;
  InfectTheSystemFailure.BackDoor = BackDoor;
  InfectTheSystemFailure.InfectTheSystemChosen = InfectTheSystemChosen;
  InfectTheSystemFailure.GetAccessToAlarmsWeight = GetAccessToAlarmsWeight;
  InfectTheSystemFailure.TransferCustomerMoneyWeight = TransferCustomerMoneyWeight;
  InfectTheSystemFailure.GetAccessToCamerasWeight = GetAccessToCamerasWeight;
  InfectTheSystemFailure.DoNothingWeight = DoNothingWeight;
  InfectTheSystemFailure.TransferBankMoneyWeight = TransferBankMoneyWeight;
  InfectTheSystemFailure.PhishingWeight = PhishingWeight;
  InfectTheSystemFailure.FindSecureAccessWeight = FindSecureAccessWeight;
  InfectTheSystemFailure.GetDirectorCredentialsWeight = GetDirectorCredentialsWeight;
  InfectTheSystemFailure.StudySecurityRoutinesWeight = StudySecurityRoutinesWeight;
  InfectTheSystemFailure.GetSafeCombinationWeight = GetSafeCombinationWeight;
  InfectTheSystemFailure.InfectTheSystemWeight = InfectTheSystemWeight;
  InfectTheSystemFailure.SafeBreakWeight = SafeBreakWeight;
  InfectTheSystemFailure.CyberAttackWeight = CyberAttackWeight;
  InfectTheSystemFailure.MakeDecision = MakeDecision;
  InfectTheSystemFailure.setSVs(InfectTheSystemChosen, InfectTheSystemWeight);
  InfectTheSystemSuccess.SystemAccess = SystemAccess;
  InfectTheSystemSuccess.BackDoor = BackDoor;
  InfectTheSystemSuccess.InfectTheSystemChosen = InfectTheSystemChosen;
  InfectTheSystemSuccess.GetAccessToAlarmsWeight = GetAccessToAlarmsWeight;
  InfectTheSystemSuccess.TransferCustomerMoneyWeight = TransferCustomerMoneyWeight;
  InfectTheSystemSuccess.GetAccessToCamerasWeight = GetAccessToCamerasWeight;
  InfectTheSystemSuccess.DoNothingWeight = DoNothingWeight;
  InfectTheSystemSuccess.TransferBankMoneyWeight = TransferBankMoneyWeight;
  InfectTheSystemSuccess.PhishingWeight = PhishingWeight;
  InfectTheSystemSuccess.FindSecureAccessWeight = FindSecureAccessWeight;
  InfectTheSystemSuccess.GetDirectorCredentialsWeight = GetDirectorCredentialsWeight;
  InfectTheSystemSuccess.StudySecurityRoutinesWeight = StudySecurityRoutinesWeight;
  InfectTheSystemSuccess.GetSafeCombinationWeight = GetSafeCombinationWeight;
  InfectTheSystemSuccess.InfectTheSystemWeight = InfectTheSystemWeight;
  InfectTheSystemSuccess.SafeBreakWeight = SafeBreakWeight;
  InfectTheSystemSuccess.CyberAttackWeight = CyberAttackWeight;
  InfectTheSystemSuccess.MakeDecision = MakeDecision;
  InfectTheSystemSuccess.setSVs(InfectTheSystemChosen, InfectTheSystemWeight);
  SafeBreakFailure.Money = Money;
  SafeBreakFailure.SecurePath = SecurePath;
  SafeBreakFailure.CamerasControl = CamerasControl;
  SafeBreakFailure.AlarmsControl = AlarmsControl;
  SafeBreakFailure.Breaker = Breaker;
  SafeBreakFailure.SafeCombination = SafeCombination;
  SafeBreakFailure.SecurityRoutines = SecurityRoutines;
  SafeBreakFailure.SafeBreakChosen = SafeBreakChosen;
  SafeBreakFailure.GetAccessToAlarmsWeight = GetAccessToAlarmsWeight;
  SafeBreakFailure.TransferCustomerMoneyWeight = TransferCustomerMoneyWeight;
  SafeBreakFailure.GetAccessToCamerasWeight = GetAccessToCamerasWeight;
  SafeBreakFailure.DoNothingWeight = DoNothingWeight;
  SafeBreakFailure.TransferBankMoneyWeight = TransferBankMoneyWeight;
  SafeBreakFailure.PhishingWeight = PhishingWeight;
  SafeBreakFailure.FindSecureAccessWeight = FindSecureAccessWeight;
  SafeBreakFailure.GetDirectorCredentialsWeight = GetDirectorCredentialsWeight;
  SafeBreakFailure.StudySecurityRoutinesWeight = StudySecurityRoutinesWeight;
  SafeBreakFailure.GetSafeCombinationWeight = GetSafeCombinationWeight;
  SafeBreakFailure.InfectTheSystemWeight = InfectTheSystemWeight;
  SafeBreakFailure.SafeBreakWeight = SafeBreakWeight;
  SafeBreakFailure.CyberAttackWeight = CyberAttackWeight;
  SafeBreakFailure.MakeDecision = MakeDecision;
  SafeBreakFailure.setSVs(SafeBreakChosen, SafeBreakWeight);
  SafeBreakSuccess.Money = Money;
  SafeBreakSuccess.SecurePath = SecurePath;
  SafeBreakSuccess.CamerasControl = CamerasControl;
  SafeBreakSuccess.AlarmsControl = AlarmsControl;
  SafeBreakSuccess.Breaker = Breaker;
  SafeBreakSuccess.SafeCombination = SafeCombination;
  SafeBreakSuccess.SecurityRoutines = SecurityRoutines;
  SafeBreakSuccess.SafeBreakChosen = SafeBreakChosen;
  SafeBreakSuccess.GetAccessToAlarmsWeight = GetAccessToAlarmsWeight;
  SafeBreakSuccess.TransferCustomerMoneyWeight = TransferCustomerMoneyWeight;
  SafeBreakSuccess.GetAccessToCamerasWeight = GetAccessToCamerasWeight;
  SafeBreakSuccess.DoNothingWeight = DoNothingWeight;
  SafeBreakSuccess.TransferBankMoneyWeight = TransferBankMoneyWeight;
  SafeBreakSuccess.PhishingWeight = PhishingWeight;
  SafeBreakSuccess.FindSecureAccessWeight = FindSecureAccessWeight;
  SafeBreakSuccess.GetDirectorCredentialsWeight = GetDirectorCredentialsWeight;
  SafeBreakSuccess.StudySecurityRoutinesWeight = StudySecurityRoutinesWeight;
  SafeBreakSuccess.GetSafeCombinationWeight = GetSafeCombinationWeight;
  SafeBreakSuccess.InfectTheSystemWeight = InfectTheSystemWeight;
  SafeBreakSuccess.SafeBreakWeight = SafeBreakWeight;
  SafeBreakSuccess.CyberAttackWeight = CyberAttackWeight;
  SafeBreakSuccess.MakeDecision = MakeDecision;
  SafeBreakSuccess.setSVs(SafeBreakChosen, SafeBreakWeight);
  CyberAttackFailure.BackDoor = BackDoor;
  CyberAttackFailure.CyberVulnerability = CyberVulnerability;
  CyberAttackFailure.Hacker = Hacker;
  CyberAttackFailure.CyberAttackChosen = CyberAttackChosen;
  CyberAttackFailure.GetAccessToAlarmsWeight = GetAccessToAlarmsWeight;
  CyberAttackFailure.TransferCustomerMoneyWeight = TransferCustomerMoneyWeight;
  CyberAttackFailure.GetAccessToCamerasWeight = GetAccessToCamerasWeight;
  CyberAttackFailure.DoNothingWeight = DoNothingWeight;
  CyberAttackFailure.TransferBankMoneyWeight = TransferBankMoneyWeight;
  CyberAttackFailure.PhishingWeight = PhishingWeight;
  CyberAttackFailure.FindSecureAccessWeight = FindSecureAccessWeight;
  CyberAttackFailure.GetDirectorCredentialsWeight = GetDirectorCredentialsWeight;
  CyberAttackFailure.StudySecurityRoutinesWeight = StudySecurityRoutinesWeight;
  CyberAttackFailure.GetSafeCombinationWeight = GetSafeCombinationWeight;
  CyberAttackFailure.InfectTheSystemWeight = InfectTheSystemWeight;
  CyberAttackFailure.SafeBreakWeight = SafeBreakWeight;
  CyberAttackFailure.CyberAttackWeight = CyberAttackWeight;
  CyberAttackFailure.MakeDecision = MakeDecision;
  CyberAttackFailure.setSVs(CyberAttackChosen, CyberAttackWeight);
  CyberAttackSuccess.BackDoor = BackDoor;
  CyberAttackSuccess.CyberVulnerability = CyberVulnerability;
  CyberAttackSuccess.Hacker = Hacker;
  CyberAttackSuccess.CyberAttackChosen = CyberAttackChosen;
  CyberAttackSuccess.GetAccessToAlarmsWeight = GetAccessToAlarmsWeight;
  CyberAttackSuccess.TransferCustomerMoneyWeight = TransferCustomerMoneyWeight;
  CyberAttackSuccess.GetAccessToCamerasWeight = GetAccessToCamerasWeight;
  CyberAttackSuccess.DoNothingWeight = DoNothingWeight;
  CyberAttackSuccess.TransferBankMoneyWeight = TransferBankMoneyWeight;
  CyberAttackSuccess.PhishingWeight = PhishingWeight;
  CyberAttackSuccess.FindSecureAccessWeight = FindSecureAccessWeight;
  CyberAttackSuccess.GetDirectorCredentialsWeight = GetDirectorCredentialsWeight;
  CyberAttackSuccess.StudySecurityRoutinesWeight = StudySecurityRoutinesWeight;
  CyberAttackSuccess.GetSafeCombinationWeight = GetSafeCombinationWeight;
  CyberAttackSuccess.InfectTheSystemWeight = InfectTheSystemWeight;
  CyberAttackSuccess.SafeBreakWeight = SafeBreakWeight;
  CyberAttackSuccess.CyberAttackWeight = CyberAttackWeight;
  CyberAttackSuccess.MakeDecision = MakeDecision;
  CyberAttackSuccess.setSVs(CyberAttackChosen, CyberAttackWeight);

  GetAccessToAlarmsAD.MakeDecision = MakeDecision;
  GetAccessToAlarmsAD.GetAccessToAlarmsChosen = GetAccessToAlarmsChosen;
  GetAccessToAlarmsAD.GetAccessToAlarmsWeight = GetAccessToAlarmsWeight;
  TransferCustomerMoneyAD.MakeDecision = MakeDecision;
  TransferCustomerMoneyAD.TransferCustomerMoneyChosen = TransferCustomerMoneyChosen;
  TransferCustomerMoneyAD.TransferCustomerMoneyWeight = TransferCustomerMoneyWeight;
  GetAccessToCamerasAD.MakeDecision = MakeDecision;
  GetAccessToCamerasAD.GetAccessToCamerasChosen = GetAccessToCamerasChosen;
  GetAccessToCamerasAD.GetAccessToCamerasWeight = GetAccessToCamerasWeight;
  DoNothingAD.MakeDecision = MakeDecision;
  DoNothingAD.DoNothingChosen = DoNothingChosen;
  DoNothingAD.DoNothingWeight = DoNothingWeight;
  TransferBankMoneyAD.MakeDecision = MakeDecision;
  TransferBankMoneyAD.TransferBankMoneyChosen = TransferBankMoneyChosen;
  TransferBankMoneyAD.TransferBankMoneyWeight = TransferBankMoneyWeight;
  PhishingAD.MakeDecision = MakeDecision;
  PhishingAD.PhishingChosen = PhishingChosen;
  PhishingAD.PhishingWeight = PhishingWeight;
  FindSecureAccessAD.MakeDecision = MakeDecision;
  FindSecureAccessAD.FindSecureAccessChosen = FindSecureAccessChosen;
  FindSecureAccessAD.FindSecureAccessWeight = FindSecureAccessWeight;
  GetDirectorCredentialsAD.MakeDecision = MakeDecision;
  GetDirectorCredentialsAD.GetDirectorCredentialsChosen = GetDirectorCredentialsChosen;
  GetDirectorCredentialsAD.GetDirectorCredentialsWeight = GetDirectorCredentialsWeight;
  StudySecurityRoutinesAD.MakeDecision = MakeDecision;
  StudySecurityRoutinesAD.StudySecurityRoutinesChosen = StudySecurityRoutinesChosen;
  StudySecurityRoutinesAD.StudySecurityRoutinesWeight = StudySecurityRoutinesWeight;
  GetSafeCombinationAD.MakeDecision = MakeDecision;
  GetSafeCombinationAD.GetSafeCombinationChosen = GetSafeCombinationChosen;
  GetSafeCombinationAD.GetSafeCombinationWeight = GetSafeCombinationWeight;
  InfectTheSystemAD.MakeDecision = MakeDecision;
  InfectTheSystemAD.InfectTheSystemChosen = InfectTheSystemChosen;
  InfectTheSystemAD.InfectTheSystemWeight = InfectTheSystemWeight;
  SafeBreakAD.MakeDecision = MakeDecision;
  SafeBreakAD.SafeBreakChosen = SafeBreakChosen;
  SafeBreakAD.SafeBreakWeight = SafeBreakWeight;
  CyberAttackAD.MakeDecision = MakeDecision;
  CyberAttackAD.CyberAttackChosen = CyberAttackChosen;
  CyberAttackAD.CyberAttackWeight = CyberAttackWeight;
}

double AttackModelADVISE::convertCostToUtility(double cost) {
  const double esquared = 7.389056099; // e^(2)
  if(cost < 0)
    return 1.0;
  else if(cost > 100)
    return 0.0;
  else {
    return (esquared - exp(cost/50))/(-1 + esquared);
  }
}

double AttackModelADVISE::convertPayoffToUtility(double payoff) {
  const double etoten = 28.031624895; // e^(10/3)
  if(payoff < 0)
    return 0;
  else if(payoff > 1000)
    return 1;
  else {
    return (etoten - (etoten/exp(payoff/300)))/(-1 + etoten);
  }
}

double AttackModelADVISE::convertDetectionToUtility(double detection) {
  const double esquared = 7.389056099; // e^(2)
  if(detection < 0)
    return 1;
  else if(detection > 1)
    return 0;
  else {
    return (1-(esquared/exp(2*detection)))/(1-esquared);
  }
}

void AttackModelADVISE::customInitialization() {

}

/*****************************************************************/
/*                   Attack Step Definitions                     */
/*****************************************************************/

/*====================== GetAccessToAlarmsFailureStep ========================*/

AttackModelADVISE::GetAccessToAlarmsFailureStep::GetAccessToAlarmsFailureStep() {
  TheDistributionParameters = new double[1];
  commonInit("GetAccessToAlarmsFailureStep", 0, Deterministic, RaceEnabled, 20, 1, false);}

AttackModelADVISE::GetAccessToAlarmsFailureStep::~GetAccessToAlarmsFailureStep() {
  delete[] TheDistributionParameters;
}

void AttackModelADVISE::GetAccessToAlarmsFailureStep::LinkVariables() {
  AlarmsControl->Register(&AlarmsControl_Mobius_Mark);
  SecVulnerabilities->Register(&SecVulnerabilities_Mobius_Mark);
  PhisicalAccess->Register(&PhisicalAccess_Mobius_Mark);
  Stealth->Register(&Stealth_Mobius_Mark);
  Hacker->Register(&Hacker_Mobius_Mark);
  GetAccessToAlarmsChosen->Register(&GetAccessToAlarmsChosen_Mobius_Mark);
  GetAccessToAlarmsWeight->Register(&GetAccessToAlarmsWeight_Mobius_Mark);
  TransferCustomerMoneyWeight->Register(&TransferCustomerMoneyWeight_Mobius_Mark);
  GetAccessToCamerasWeight->Register(&GetAccessToCamerasWeight_Mobius_Mark);
  DoNothingWeight->Register(&DoNothingWeight_Mobius_Mark);
  TransferBankMoneyWeight->Register(&TransferBankMoneyWeight_Mobius_Mark);
  PhishingWeight->Register(&PhishingWeight_Mobius_Mark);
  FindSecureAccessWeight->Register(&FindSecureAccessWeight_Mobius_Mark);
  GetDirectorCredentialsWeight->Register(&GetDirectorCredentialsWeight_Mobius_Mark);
  StudySecurityRoutinesWeight->Register(&StudySecurityRoutinesWeight_Mobius_Mark);
  GetSafeCombinationWeight->Register(&GetSafeCombinationWeight_Mobius_Mark);
  InfectTheSystemWeight->Register(&InfectTheSystemWeight_Mobius_Mark);
  SafeBreakWeight->Register(&SafeBreakWeight_Mobius_Mark);
  CyberAttackWeight->Register(&CyberAttackWeight_Mobius_Mark);
  MakeDecision->Register(&MakeDecision_Mobius_Mark);

}

bool AttackModelADVISE::GetAccessToAlarmsFailureStep::Enabled() {
  OldEnabled = NewEnabled;
  NewEnabled = (((*(GetAccessToAlarmsChosen_Mobius_Mark)) >= 1));
  return NewEnabled;
}

double AttackModelADVISE::GetAccessToAlarmsFailureStep::timeDistributionParameter0() {
return 30-Hacker->Mark()*25/1000;
}

double AttackModelADVISE::GetAccessToAlarmsFailureStep::Weight() {
return 0.8;
}

bool AttackModelADVISE::GetAccessToAlarmsFailureStep::ReactivationPredicate() {
  return false;
}

bool AttackModelADVISE::GetAccessToAlarmsFailureStep::ReactivationFunction() {
  return false;
}

double AttackModelADVISE::GetAccessToAlarmsFailureStep::SampleDistribution() {
  return TheDistribution->Deterministic(timeDistributionParameter0());
}

double *AttackModelADVISE::GetAccessToAlarmsFailureStep::ReturnDistributionParameters() {
  TheDistributionParameters[0] = timeDistributionParameter0();
  return TheDistributionParameters;
}

int AttackModelADVISE::GetAccessToAlarmsFailureStep::Rank() {
  return 1;
}

bool AttackModelADVISE::GetAccessToAlarmsFailureStep::preconditionsMet() {
return ((Hacker->Mark()>600 && Stealth->Mark()>300) || (Hacker->Mark()>200 && Stealth->Mark()>800)) && PhisicalAccess->Mark() && SecVulnerabilities->Mark();
  return true;
}

void AttackModelADVISE::GetAccessToAlarmsFailureStep::executeEffects() {

}

double AttackModelADVISE::GetAccessToAlarmsFailureStep::getCost() {
return 30;
}

double AttackModelADVISE::GetAccessToAlarmsFailureStep::getOutcomeProbability() {
return 0.8;
}

double AttackModelADVISE::GetAccessToAlarmsFailureStep::getDetection() {
return 0.9;
}

/*====================== GetAccessToAlarmsSuccessIWannaDiscreditStep ========================*/

AttackModelADVISE::GetAccessToAlarmsSuccessIWannaDiscreditStep::GetAccessToAlarmsSuccessIWannaDiscreditStep() {
  TheDistributionParameters = new double[1];
  commonInit("GetAccessToAlarmsSuccessIWannaDiscreditStep", 0, Deterministic, RaceEnabled, 20, 1, false);}

AttackModelADVISE::GetAccessToAlarmsSuccessIWannaDiscreditStep::~GetAccessToAlarmsSuccessIWannaDiscreditStep() {
  delete[] TheDistributionParameters;
}

void AttackModelADVISE::GetAccessToAlarmsSuccessIWannaDiscreditStep::LinkVariables() {
  AlarmsControl->Register(&AlarmsControl_Mobius_Mark);
  SecVulnerabilities->Register(&SecVulnerabilities_Mobius_Mark);
  PhisicalAccess->Register(&PhisicalAccess_Mobius_Mark);
  Stealth->Register(&Stealth_Mobius_Mark);
  Hacker->Register(&Hacker_Mobius_Mark);
  GetAccessToAlarmsChosen->Register(&GetAccessToAlarmsChosen_Mobius_Mark);
  GetAccessToAlarmsWeight->Register(&GetAccessToAlarmsWeight_Mobius_Mark);
  TransferCustomerMoneyWeight->Register(&TransferCustomerMoneyWeight_Mobius_Mark);
  GetAccessToCamerasWeight->Register(&GetAccessToCamerasWeight_Mobius_Mark);
  DoNothingWeight->Register(&DoNothingWeight_Mobius_Mark);
  TransferBankMoneyWeight->Register(&TransferBankMoneyWeight_Mobius_Mark);
  PhishingWeight->Register(&PhishingWeight_Mobius_Mark);
  FindSecureAccessWeight->Register(&FindSecureAccessWeight_Mobius_Mark);
  GetDirectorCredentialsWeight->Register(&GetDirectorCredentialsWeight_Mobius_Mark);
  StudySecurityRoutinesWeight->Register(&StudySecurityRoutinesWeight_Mobius_Mark);
  GetSafeCombinationWeight->Register(&GetSafeCombinationWeight_Mobius_Mark);
  InfectTheSystemWeight->Register(&InfectTheSystemWeight_Mobius_Mark);
  SafeBreakWeight->Register(&SafeBreakWeight_Mobius_Mark);
  CyberAttackWeight->Register(&CyberAttackWeight_Mobius_Mark);
  MakeDecision->Register(&MakeDecision_Mobius_Mark);

}

bool AttackModelADVISE::GetAccessToAlarmsSuccessIWannaDiscreditStep::Enabled() {
  OldEnabled = NewEnabled;
  NewEnabled = (((*(GetAccessToAlarmsChosen_Mobius_Mark)) >= 1));
  return NewEnabled;
}

double AttackModelADVISE::GetAccessToAlarmsSuccessIWannaDiscreditStep::timeDistributionParameter0() {
return 30-Hacker->Mark()*25/1000;
}

double AttackModelADVISE::GetAccessToAlarmsSuccessIWannaDiscreditStep::Weight() {
return 0.2;
}

bool AttackModelADVISE::GetAccessToAlarmsSuccessIWannaDiscreditStep::ReactivationPredicate() {
  return false;
}

bool AttackModelADVISE::GetAccessToAlarmsSuccessIWannaDiscreditStep::ReactivationFunction() {
  return false;
}

double AttackModelADVISE::GetAccessToAlarmsSuccessIWannaDiscreditStep::SampleDistribution() {
  return TheDistribution->Deterministic(timeDistributionParameter0());
}

double *AttackModelADVISE::GetAccessToAlarmsSuccessIWannaDiscreditStep::ReturnDistributionParameters() {
  TheDistributionParameters[0] = timeDistributionParameter0();
  return TheDistributionParameters;
}

int AttackModelADVISE::GetAccessToAlarmsSuccessIWannaDiscreditStep::Rank() {
  return 1;
}

bool AttackModelADVISE::GetAccessToAlarmsSuccessIWannaDiscreditStep::preconditionsMet() {
return ((Hacker->Mark()>600 && Stealth->Mark()>300) || (Hacker->Mark()>200 && Stealth->Mark()>800)) && PhisicalAccess->Mark() && SecVulnerabilities->Mark();
  return true;
}

void AttackModelADVISE::GetAccessToAlarmsSuccessIWannaDiscreditStep::executeEffects() {
AlarmsControl->Mark() = true;
}

double AttackModelADVISE::GetAccessToAlarmsSuccessIWannaDiscreditStep::getCost() {
return 30;
}

double AttackModelADVISE::GetAccessToAlarmsSuccessIWannaDiscreditStep::getOutcomeProbability() {
return 0.2;
}

double AttackModelADVISE::GetAccessToAlarmsSuccessIWannaDiscreditStep::getDetection() {
return 0.05;
}

/*====================== TransferCustomerMoneyFailureStep ========================*/

AttackModelADVISE::TransferCustomerMoneyFailureStep::TransferCustomerMoneyFailureStep() {
  TheDistributionParameters = new double[1];
  commonInit("TransferCustomerMoneyFailureStep", 1, Deterministic, RaceEnabled, 17, 1, false);}

AttackModelADVISE::TransferCustomerMoneyFailureStep::~TransferCustomerMoneyFailureStep() {
  delete[] TheDistributionParameters;
}

void AttackModelADVISE::TransferCustomerMoneyFailureStep::LinkVariables() {
  Money->Register(&Money_Mobius_Mark);
  UserCredentials->Register(&UserCredentials_Mobius_Mark);
  TransferCustomerMoneyChosen->Register(&TransferCustomerMoneyChosen_Mobius_Mark);
  GetAccessToAlarmsWeight->Register(&GetAccessToAlarmsWeight_Mobius_Mark);
  TransferCustomerMoneyWeight->Register(&TransferCustomerMoneyWeight_Mobius_Mark);
  GetAccessToCamerasWeight->Register(&GetAccessToCamerasWeight_Mobius_Mark);
  DoNothingWeight->Register(&DoNothingWeight_Mobius_Mark);
  TransferBankMoneyWeight->Register(&TransferBankMoneyWeight_Mobius_Mark);
  PhishingWeight->Register(&PhishingWeight_Mobius_Mark);
  FindSecureAccessWeight->Register(&FindSecureAccessWeight_Mobius_Mark);
  GetDirectorCredentialsWeight->Register(&GetDirectorCredentialsWeight_Mobius_Mark);
  StudySecurityRoutinesWeight->Register(&StudySecurityRoutinesWeight_Mobius_Mark);
  GetSafeCombinationWeight->Register(&GetSafeCombinationWeight_Mobius_Mark);
  InfectTheSystemWeight->Register(&InfectTheSystemWeight_Mobius_Mark);
  SafeBreakWeight->Register(&SafeBreakWeight_Mobius_Mark);
  CyberAttackWeight->Register(&CyberAttackWeight_Mobius_Mark);
  MakeDecision->Register(&MakeDecision_Mobius_Mark);

}

bool AttackModelADVISE::TransferCustomerMoneyFailureStep::Enabled() {
  OldEnabled = NewEnabled;
  NewEnabled = (((*(TransferCustomerMoneyChosen_Mobius_Mark)) >= 1));
  return NewEnabled;
}

double AttackModelADVISE::TransferCustomerMoneyFailureStep::timeDistributionParameter0() {
return 20;
}

double AttackModelADVISE::TransferCustomerMoneyFailureStep::Weight() {
return 0.20;
}

bool AttackModelADVISE::TransferCustomerMoneyFailureStep::ReactivationPredicate() {
  return false;
}

bool AttackModelADVISE::TransferCustomerMoneyFailureStep::ReactivationFunction() {
  return false;
}

double AttackModelADVISE::TransferCustomerMoneyFailureStep::SampleDistribution() {
  return TheDistribution->Deterministic(timeDistributionParameter0());
}

double *AttackModelADVISE::TransferCustomerMoneyFailureStep::ReturnDistributionParameters() {
  TheDistributionParameters[0] = timeDistributionParameter0();
  return TheDistributionParameters;
}

int AttackModelADVISE::TransferCustomerMoneyFailureStep::Rank() {
  return 1;
}

bool AttackModelADVISE::TransferCustomerMoneyFailureStep::preconditionsMet() {
return(!Money->Mark()&&UserCredentials->Mark());
  return true;
}

void AttackModelADVISE::TransferCustomerMoneyFailureStep::executeEffects() {

}

double AttackModelADVISE::TransferCustomerMoneyFailureStep::getCost() {
return 5;
}

double AttackModelADVISE::TransferCustomerMoneyFailureStep::getOutcomeProbability() {
return 0.20;
}

double AttackModelADVISE::TransferCustomerMoneyFailureStep::getDetection() {
return 0.95;
}

/*====================== TransferCustomerMoneySuccessStep ========================*/

AttackModelADVISE::TransferCustomerMoneySuccessStep::TransferCustomerMoneySuccessStep() {
  TheDistributionParameters = new double[1];
  commonInit("TransferCustomerMoneySuccessStep", 1, Deterministic, RaceEnabled, 17, 1, false);}

AttackModelADVISE::TransferCustomerMoneySuccessStep::~TransferCustomerMoneySuccessStep() {
  delete[] TheDistributionParameters;
}

void AttackModelADVISE::TransferCustomerMoneySuccessStep::LinkVariables() {
  Money->Register(&Money_Mobius_Mark);
  UserCredentials->Register(&UserCredentials_Mobius_Mark);
  TransferCustomerMoneyChosen->Register(&TransferCustomerMoneyChosen_Mobius_Mark);
  GetAccessToAlarmsWeight->Register(&GetAccessToAlarmsWeight_Mobius_Mark);
  TransferCustomerMoneyWeight->Register(&TransferCustomerMoneyWeight_Mobius_Mark);
  GetAccessToCamerasWeight->Register(&GetAccessToCamerasWeight_Mobius_Mark);
  DoNothingWeight->Register(&DoNothingWeight_Mobius_Mark);
  TransferBankMoneyWeight->Register(&TransferBankMoneyWeight_Mobius_Mark);
  PhishingWeight->Register(&PhishingWeight_Mobius_Mark);
  FindSecureAccessWeight->Register(&FindSecureAccessWeight_Mobius_Mark);
  GetDirectorCredentialsWeight->Register(&GetDirectorCredentialsWeight_Mobius_Mark);
  StudySecurityRoutinesWeight->Register(&StudySecurityRoutinesWeight_Mobius_Mark);
  GetSafeCombinationWeight->Register(&GetSafeCombinationWeight_Mobius_Mark);
  InfectTheSystemWeight->Register(&InfectTheSystemWeight_Mobius_Mark);
  SafeBreakWeight->Register(&SafeBreakWeight_Mobius_Mark);
  CyberAttackWeight->Register(&CyberAttackWeight_Mobius_Mark);
  MakeDecision->Register(&MakeDecision_Mobius_Mark);

}

bool AttackModelADVISE::TransferCustomerMoneySuccessStep::Enabled() {
  OldEnabled = NewEnabled;
  NewEnabled = (((*(TransferCustomerMoneyChosen_Mobius_Mark)) >= 1));
  return NewEnabled;
}

double AttackModelADVISE::TransferCustomerMoneySuccessStep::timeDistributionParameter0() {
return 20;
}

double AttackModelADVISE::TransferCustomerMoneySuccessStep::Weight() {
return 0.8;
}

bool AttackModelADVISE::TransferCustomerMoneySuccessStep::ReactivationPredicate() {
  return false;
}

bool AttackModelADVISE::TransferCustomerMoneySuccessStep::ReactivationFunction() {
  return false;
}

double AttackModelADVISE::TransferCustomerMoneySuccessStep::SampleDistribution() {
  return TheDistribution->Deterministic(timeDistributionParameter0());
}

double *AttackModelADVISE::TransferCustomerMoneySuccessStep::ReturnDistributionParameters() {
  TheDistributionParameters[0] = timeDistributionParameter0();
  return TheDistributionParameters;
}

int AttackModelADVISE::TransferCustomerMoneySuccessStep::Rank() {
  return 1;
}

bool AttackModelADVISE::TransferCustomerMoneySuccessStep::preconditionsMet() {
return(!Money->Mark()&&UserCredentials->Mark());
  return true;
}

void AttackModelADVISE::TransferCustomerMoneySuccessStep::executeEffects() {
Money->Mark()=true;
}

double AttackModelADVISE::TransferCustomerMoneySuccessStep::getCost() {
return 5;
}

double AttackModelADVISE::TransferCustomerMoneySuccessStep::getOutcomeProbability() {
return 0.8;
}

double AttackModelADVISE::TransferCustomerMoneySuccessStep::getDetection() {
return 0.85;
}

/*====================== GetAccessToCamerasFailureStep ========================*/

AttackModelADVISE::GetAccessToCamerasFailureStep::GetAccessToCamerasFailureStep() {
  TheDistributionParameters = new double[1];
  commonInit("GetAccessToCamerasFailureStep", 2, Deterministic, RaceEnabled, 20, 1, false);}

AttackModelADVISE::GetAccessToCamerasFailureStep::~GetAccessToCamerasFailureStep() {
  delete[] TheDistributionParameters;
}

void AttackModelADVISE::GetAccessToCamerasFailureStep::LinkVariables() {
  CamerasControl->Register(&CamerasControl_Mobius_Mark);
  SecVulnerabilities->Register(&SecVulnerabilities_Mobius_Mark);
  PhisicalAccess->Register(&PhisicalAccess_Mobius_Mark);
  Stealth->Register(&Stealth_Mobius_Mark);
  Hacker->Register(&Hacker_Mobius_Mark);
  GetAccessToCamerasChosen->Register(&GetAccessToCamerasChosen_Mobius_Mark);
  GetAccessToAlarmsWeight->Register(&GetAccessToAlarmsWeight_Mobius_Mark);
  TransferCustomerMoneyWeight->Register(&TransferCustomerMoneyWeight_Mobius_Mark);
  GetAccessToCamerasWeight->Register(&GetAccessToCamerasWeight_Mobius_Mark);
  DoNothingWeight->Register(&DoNothingWeight_Mobius_Mark);
  TransferBankMoneyWeight->Register(&TransferBankMoneyWeight_Mobius_Mark);
  PhishingWeight->Register(&PhishingWeight_Mobius_Mark);
  FindSecureAccessWeight->Register(&FindSecureAccessWeight_Mobius_Mark);
  GetDirectorCredentialsWeight->Register(&GetDirectorCredentialsWeight_Mobius_Mark);
  StudySecurityRoutinesWeight->Register(&StudySecurityRoutinesWeight_Mobius_Mark);
  GetSafeCombinationWeight->Register(&GetSafeCombinationWeight_Mobius_Mark);
  InfectTheSystemWeight->Register(&InfectTheSystemWeight_Mobius_Mark);
  SafeBreakWeight->Register(&SafeBreakWeight_Mobius_Mark);
  CyberAttackWeight->Register(&CyberAttackWeight_Mobius_Mark);
  MakeDecision->Register(&MakeDecision_Mobius_Mark);

}

bool AttackModelADVISE::GetAccessToCamerasFailureStep::Enabled() {
  OldEnabled = NewEnabled;
  NewEnabled = (((*(GetAccessToCamerasChosen_Mobius_Mark)) >= 1));
  return NewEnabled;
}

double AttackModelADVISE::GetAccessToCamerasFailureStep::timeDistributionParameter0() {
return 30-Hacker->Mark()*25/1000;
}

double AttackModelADVISE::GetAccessToCamerasFailureStep::Weight() {
return 0.2;
}

bool AttackModelADVISE::GetAccessToCamerasFailureStep::ReactivationPredicate() {
  return false;
}

bool AttackModelADVISE::GetAccessToCamerasFailureStep::ReactivationFunction() {
  return false;
}

double AttackModelADVISE::GetAccessToCamerasFailureStep::SampleDistribution() {
  return TheDistribution->Deterministic(timeDistributionParameter0());
}

double *AttackModelADVISE::GetAccessToCamerasFailureStep::ReturnDistributionParameters() {
  TheDistributionParameters[0] = timeDistributionParameter0();
  return TheDistributionParameters;
}

int AttackModelADVISE::GetAccessToCamerasFailureStep::Rank() {
  return 1;
}

bool AttackModelADVISE::GetAccessToCamerasFailureStep::preconditionsMet() {
return ((Hacker->Mark()>600 && Stealth->Mark()>300) || (Hacker->Mark()>200 && Stealth->Mark()>800)) && PhisicalAccess->Mark() && SecVulnerabilities->Mark();
  return true;
}

void AttackModelADVISE::GetAccessToCamerasFailureStep::executeEffects() {
CamerasControl->Mark() = true;
}

double AttackModelADVISE::GetAccessToCamerasFailureStep::getCost() {
return 20;
}

double AttackModelADVISE::GetAccessToCamerasFailureStep::getOutcomeProbability() {
return 0.2;
}

double AttackModelADVISE::GetAccessToCamerasFailureStep::getDetection() {
return 0.9;
}

/*====================== GetAccessToCamerasSuccessStep ========================*/

AttackModelADVISE::GetAccessToCamerasSuccessStep::GetAccessToCamerasSuccessStep() {
  TheDistributionParameters = new double[1];
  commonInit("GetAccessToCamerasSuccessStep", 2, Deterministic, RaceEnabled, 20, 1, false);}

AttackModelADVISE::GetAccessToCamerasSuccessStep::~GetAccessToCamerasSuccessStep() {
  delete[] TheDistributionParameters;
}

void AttackModelADVISE::GetAccessToCamerasSuccessStep::LinkVariables() {
  CamerasControl->Register(&CamerasControl_Mobius_Mark);
  SecVulnerabilities->Register(&SecVulnerabilities_Mobius_Mark);
  PhisicalAccess->Register(&PhisicalAccess_Mobius_Mark);
  Stealth->Register(&Stealth_Mobius_Mark);
  Hacker->Register(&Hacker_Mobius_Mark);
  GetAccessToCamerasChosen->Register(&GetAccessToCamerasChosen_Mobius_Mark);
  GetAccessToAlarmsWeight->Register(&GetAccessToAlarmsWeight_Mobius_Mark);
  TransferCustomerMoneyWeight->Register(&TransferCustomerMoneyWeight_Mobius_Mark);
  GetAccessToCamerasWeight->Register(&GetAccessToCamerasWeight_Mobius_Mark);
  DoNothingWeight->Register(&DoNothingWeight_Mobius_Mark);
  TransferBankMoneyWeight->Register(&TransferBankMoneyWeight_Mobius_Mark);
  PhishingWeight->Register(&PhishingWeight_Mobius_Mark);
  FindSecureAccessWeight->Register(&FindSecureAccessWeight_Mobius_Mark);
  GetDirectorCredentialsWeight->Register(&GetDirectorCredentialsWeight_Mobius_Mark);
  StudySecurityRoutinesWeight->Register(&StudySecurityRoutinesWeight_Mobius_Mark);
  GetSafeCombinationWeight->Register(&GetSafeCombinationWeight_Mobius_Mark);
  InfectTheSystemWeight->Register(&InfectTheSystemWeight_Mobius_Mark);
  SafeBreakWeight->Register(&SafeBreakWeight_Mobius_Mark);
  CyberAttackWeight->Register(&CyberAttackWeight_Mobius_Mark);
  MakeDecision->Register(&MakeDecision_Mobius_Mark);

}

bool AttackModelADVISE::GetAccessToCamerasSuccessStep::Enabled() {
  OldEnabled = NewEnabled;
  NewEnabled = (((*(GetAccessToCamerasChosen_Mobius_Mark)) >= 1));
  return NewEnabled;
}

double AttackModelADVISE::GetAccessToCamerasSuccessStep::timeDistributionParameter0() {
return 30-Hacker->Mark()*25/1000;
}

double AttackModelADVISE::GetAccessToCamerasSuccessStep::Weight() {
return 0.2;
}

bool AttackModelADVISE::GetAccessToCamerasSuccessStep::ReactivationPredicate() {
  return false;
}

bool AttackModelADVISE::GetAccessToCamerasSuccessStep::ReactivationFunction() {
  return false;
}

double AttackModelADVISE::GetAccessToCamerasSuccessStep::SampleDistribution() {
  return TheDistribution->Deterministic(timeDistributionParameter0());
}

double *AttackModelADVISE::GetAccessToCamerasSuccessStep::ReturnDistributionParameters() {
  TheDistributionParameters[0] = timeDistributionParameter0();
  return TheDistributionParameters;
}

int AttackModelADVISE::GetAccessToCamerasSuccessStep::Rank() {
  return 1;
}

bool AttackModelADVISE::GetAccessToCamerasSuccessStep::preconditionsMet() {
return ((Hacker->Mark()>600 && Stealth->Mark()>300) || (Hacker->Mark()>200 && Stealth->Mark()>800)) && PhisicalAccess->Mark() && SecVulnerabilities->Mark();
  return true;
}

void AttackModelADVISE::GetAccessToCamerasSuccessStep::executeEffects() {
CamerasControl->Mark() = true;

}

double AttackModelADVISE::GetAccessToCamerasSuccessStep::getCost() {
return 20;
}

double AttackModelADVISE::GetAccessToCamerasSuccessStep::getOutcomeProbability() {
return 0.2;
}

double AttackModelADVISE::GetAccessToCamerasSuccessStep::getDetection() {
return 0.05;
}

/*====================== DoNothingOutcome1Step ========================*/

AttackModelADVISE::DoNothingOutcome1Step::DoNothingOutcome1Step() {
  TheDistributionParameters = new double[1];
  commonInit("DoNothingOutcome1Step", 3, Deterministic, RaceEnabled, 15, 0, false);}

AttackModelADVISE::DoNothingOutcome1Step::~DoNothingOutcome1Step() {
  delete[] TheDistributionParameters;
}

void AttackModelADVISE::DoNothingOutcome1Step::LinkVariables() {
  DoNothingChosen->Register(&DoNothingChosen_Mobius_Mark);
  GetAccessToAlarmsWeight->Register(&GetAccessToAlarmsWeight_Mobius_Mark);
  TransferCustomerMoneyWeight->Register(&TransferCustomerMoneyWeight_Mobius_Mark);
  GetAccessToCamerasWeight->Register(&GetAccessToCamerasWeight_Mobius_Mark);
  DoNothingWeight->Register(&DoNothingWeight_Mobius_Mark);
  TransferBankMoneyWeight->Register(&TransferBankMoneyWeight_Mobius_Mark);
  PhishingWeight->Register(&PhishingWeight_Mobius_Mark);
  FindSecureAccessWeight->Register(&FindSecureAccessWeight_Mobius_Mark);
  GetDirectorCredentialsWeight->Register(&GetDirectorCredentialsWeight_Mobius_Mark);
  StudySecurityRoutinesWeight->Register(&StudySecurityRoutinesWeight_Mobius_Mark);
  GetSafeCombinationWeight->Register(&GetSafeCombinationWeight_Mobius_Mark);
  InfectTheSystemWeight->Register(&InfectTheSystemWeight_Mobius_Mark);
  SafeBreakWeight->Register(&SafeBreakWeight_Mobius_Mark);
  CyberAttackWeight->Register(&CyberAttackWeight_Mobius_Mark);
  MakeDecision->Register(&MakeDecision_Mobius_Mark);

}

bool AttackModelADVISE::DoNothingOutcome1Step::Enabled() {
  OldEnabled = NewEnabled;
  NewEnabled = (((*(DoNothingChosen_Mobius_Mark)) >= 1));
  return NewEnabled;
}

double AttackModelADVISE::DoNothingOutcome1Step::timeDistributionParameter0() {
return 1;
}

double AttackModelADVISE::DoNothingOutcome1Step::Weight() {
  return 1;
}

bool AttackModelADVISE::DoNothingOutcome1Step::ReactivationPredicate() {
  return false;
}

bool AttackModelADVISE::DoNothingOutcome1Step::ReactivationFunction() {
  return false;
}

double AttackModelADVISE::DoNothingOutcome1Step::SampleDistribution() {
  return TheDistribution->Deterministic(timeDistributionParameter0());
}

double *AttackModelADVISE::DoNothingOutcome1Step::ReturnDistributionParameters() {
  TheDistributionParameters[0] = timeDistributionParameter0();
  return TheDistributionParameters;
}

int AttackModelADVISE::DoNothingOutcome1Step::Rank() {
  return 1;
}

bool AttackModelADVISE::DoNothingOutcome1Step::preconditionsMet() {

  return true;
}

void AttackModelADVISE::DoNothingOutcome1Step::executeEffects() {

}

double AttackModelADVISE::DoNothingOutcome1Step::getCost() {
return 500;
}

double AttackModelADVISE::DoNothingOutcome1Step::getOutcomeProbability() {
return 1;
}

double AttackModelADVISE::DoNothingOutcome1Step::getDetection() {
return 0;
}

/*====================== TransferBankMoneyFailureStep ========================*/

AttackModelADVISE::TransferBankMoneyFailureStep::TransferBankMoneyFailureStep() {
  TheDistributionParameters = new double[1];
  commonInit("TransferBankMoneyFailureStep", 4, Deterministic, RaceEnabled, 18, 1, false);}

AttackModelADVISE::TransferBankMoneyFailureStep::~TransferBankMoneyFailureStep() {
  delete[] TheDistributionParameters;
}

void AttackModelADVISE::TransferBankMoneyFailureStep::LinkVariables() {
  Money->Register(&Money_Mobius_Mark);
  SystemAccess->Register(&SystemAccess_Mobius_Mark);
  DirectorCredentials->Register(&DirectorCredentials_Mobius_Mark);
  TransferBankMoneyChosen->Register(&TransferBankMoneyChosen_Mobius_Mark);
  GetAccessToAlarmsWeight->Register(&GetAccessToAlarmsWeight_Mobius_Mark);
  TransferCustomerMoneyWeight->Register(&TransferCustomerMoneyWeight_Mobius_Mark);
  GetAccessToCamerasWeight->Register(&GetAccessToCamerasWeight_Mobius_Mark);
  DoNothingWeight->Register(&DoNothingWeight_Mobius_Mark);
  TransferBankMoneyWeight->Register(&TransferBankMoneyWeight_Mobius_Mark);
  PhishingWeight->Register(&PhishingWeight_Mobius_Mark);
  FindSecureAccessWeight->Register(&FindSecureAccessWeight_Mobius_Mark);
  GetDirectorCredentialsWeight->Register(&GetDirectorCredentialsWeight_Mobius_Mark);
  StudySecurityRoutinesWeight->Register(&StudySecurityRoutinesWeight_Mobius_Mark);
  GetSafeCombinationWeight->Register(&GetSafeCombinationWeight_Mobius_Mark);
  InfectTheSystemWeight->Register(&InfectTheSystemWeight_Mobius_Mark);
  SafeBreakWeight->Register(&SafeBreakWeight_Mobius_Mark);
  CyberAttackWeight->Register(&CyberAttackWeight_Mobius_Mark);
  MakeDecision->Register(&MakeDecision_Mobius_Mark);

}

bool AttackModelADVISE::TransferBankMoneyFailureStep::Enabled() {
  OldEnabled = NewEnabled;
  NewEnabled = (((*(TransferBankMoneyChosen_Mobius_Mark)) >= 1));
  return NewEnabled;
}

double AttackModelADVISE::TransferBankMoneyFailureStep::timeDistributionParameter0() {
return 20;
}

double AttackModelADVISE::TransferBankMoneyFailureStep::Weight() {
return 0.20;
}

bool AttackModelADVISE::TransferBankMoneyFailureStep::ReactivationPredicate() {
  return false;
}

bool AttackModelADVISE::TransferBankMoneyFailureStep::ReactivationFunction() {
  return false;
}

double AttackModelADVISE::TransferBankMoneyFailureStep::SampleDistribution() {
  return TheDistribution->Deterministic(timeDistributionParameter0());
}

double *AttackModelADVISE::TransferBankMoneyFailureStep::ReturnDistributionParameters() {
  TheDistributionParameters[0] = timeDistributionParameter0();
  return TheDistributionParameters;
}

int AttackModelADVISE::TransferBankMoneyFailureStep::Rank() {
  return 1;
}

bool AttackModelADVISE::TransferBankMoneyFailureStep::preconditionsMet() {
return(!Money->Mark()&&SystemAccess->Mark()&&DirectorCredentials->Mark());
  return true;
}

void AttackModelADVISE::TransferBankMoneyFailureStep::executeEffects() {

}

double AttackModelADVISE::TransferBankMoneyFailureStep::getCost() {
return 5;
}

double AttackModelADVISE::TransferBankMoneyFailureStep::getOutcomeProbability() {
return 0.20;
}

double AttackModelADVISE::TransferBankMoneyFailureStep::getDetection() {
return 0.95;
}

/*====================== TransferBankMoneySuccessStep ========================*/

AttackModelADVISE::TransferBankMoneySuccessStep::TransferBankMoneySuccessStep() {
  TheDistributionParameters = new double[1];
  commonInit("TransferBankMoneySuccessStep", 4, Deterministic, RaceEnabled, 18, 1, false);}

AttackModelADVISE::TransferBankMoneySuccessStep::~TransferBankMoneySuccessStep() {
  delete[] TheDistributionParameters;
}

void AttackModelADVISE::TransferBankMoneySuccessStep::LinkVariables() {
  Money->Register(&Money_Mobius_Mark);
  SystemAccess->Register(&SystemAccess_Mobius_Mark);
  DirectorCredentials->Register(&DirectorCredentials_Mobius_Mark);
  TransferBankMoneyChosen->Register(&TransferBankMoneyChosen_Mobius_Mark);
  GetAccessToAlarmsWeight->Register(&GetAccessToAlarmsWeight_Mobius_Mark);
  TransferCustomerMoneyWeight->Register(&TransferCustomerMoneyWeight_Mobius_Mark);
  GetAccessToCamerasWeight->Register(&GetAccessToCamerasWeight_Mobius_Mark);
  DoNothingWeight->Register(&DoNothingWeight_Mobius_Mark);
  TransferBankMoneyWeight->Register(&TransferBankMoneyWeight_Mobius_Mark);
  PhishingWeight->Register(&PhishingWeight_Mobius_Mark);
  FindSecureAccessWeight->Register(&FindSecureAccessWeight_Mobius_Mark);
  GetDirectorCredentialsWeight->Register(&GetDirectorCredentialsWeight_Mobius_Mark);
  StudySecurityRoutinesWeight->Register(&StudySecurityRoutinesWeight_Mobius_Mark);
  GetSafeCombinationWeight->Register(&GetSafeCombinationWeight_Mobius_Mark);
  InfectTheSystemWeight->Register(&InfectTheSystemWeight_Mobius_Mark);
  SafeBreakWeight->Register(&SafeBreakWeight_Mobius_Mark);
  CyberAttackWeight->Register(&CyberAttackWeight_Mobius_Mark);
  MakeDecision->Register(&MakeDecision_Mobius_Mark);

}

bool AttackModelADVISE::TransferBankMoneySuccessStep::Enabled() {
  OldEnabled = NewEnabled;
  NewEnabled = (((*(TransferBankMoneyChosen_Mobius_Mark)) >= 1));
  return NewEnabled;
}

double AttackModelADVISE::TransferBankMoneySuccessStep::timeDistributionParameter0() {
return 20;
}

double AttackModelADVISE::TransferBankMoneySuccessStep::Weight() {
return 0.80;
}

bool AttackModelADVISE::TransferBankMoneySuccessStep::ReactivationPredicate() {
  return false;
}

bool AttackModelADVISE::TransferBankMoneySuccessStep::ReactivationFunction() {
  return false;
}

double AttackModelADVISE::TransferBankMoneySuccessStep::SampleDistribution() {
  return TheDistribution->Deterministic(timeDistributionParameter0());
}

double *AttackModelADVISE::TransferBankMoneySuccessStep::ReturnDistributionParameters() {
  TheDistributionParameters[0] = timeDistributionParameter0();
  return TheDistributionParameters;
}

int AttackModelADVISE::TransferBankMoneySuccessStep::Rank() {
  return 1;
}

bool AttackModelADVISE::TransferBankMoneySuccessStep::preconditionsMet() {
return(!Money->Mark()&&SystemAccess->Mark()&&DirectorCredentials->Mark());
  return true;
}

void AttackModelADVISE::TransferBankMoneySuccessStep::executeEffects() {
Money->Mark()=true;
}

double AttackModelADVISE::TransferBankMoneySuccessStep::getCost() {
return 5;
}

double AttackModelADVISE::TransferBankMoneySuccessStep::getOutcomeProbability() {
return 0.80;
}

double AttackModelADVISE::TransferBankMoneySuccessStep::getDetection() {
return 0.85;
}

/*====================== PhishingFailureStep ========================*/

AttackModelADVISE::PhishingFailureStep::PhishingFailureStep() {
  TheDistributionParameters = new double[1];
  commonInit("PhishingFailureStep", 5, Deterministic, RaceEnabled, 17, 1, false);}

AttackModelADVISE::PhishingFailureStep::~PhishingFailureStep() {
  delete[] TheDistributionParameters;
}

void AttackModelADVISE::PhishingFailureStep::LinkVariables() {
  UserCredentials->Register(&UserCredentials_Mobius_Mark);
  SocialEngineer->Register(&SocialEngineer_Mobius_Mark);
  PhishingChosen->Register(&PhishingChosen_Mobius_Mark);
  GetAccessToAlarmsWeight->Register(&GetAccessToAlarmsWeight_Mobius_Mark);
  TransferCustomerMoneyWeight->Register(&TransferCustomerMoneyWeight_Mobius_Mark);
  GetAccessToCamerasWeight->Register(&GetAccessToCamerasWeight_Mobius_Mark);
  DoNothingWeight->Register(&DoNothingWeight_Mobius_Mark);
  TransferBankMoneyWeight->Register(&TransferBankMoneyWeight_Mobius_Mark);
  PhishingWeight->Register(&PhishingWeight_Mobius_Mark);
  FindSecureAccessWeight->Register(&FindSecureAccessWeight_Mobius_Mark);
  GetDirectorCredentialsWeight->Register(&GetDirectorCredentialsWeight_Mobius_Mark);
  StudySecurityRoutinesWeight->Register(&StudySecurityRoutinesWeight_Mobius_Mark);
  GetSafeCombinationWeight->Register(&GetSafeCombinationWeight_Mobius_Mark);
  InfectTheSystemWeight->Register(&InfectTheSystemWeight_Mobius_Mark);
  SafeBreakWeight->Register(&SafeBreakWeight_Mobius_Mark);
  CyberAttackWeight->Register(&CyberAttackWeight_Mobius_Mark);
  MakeDecision->Register(&MakeDecision_Mobius_Mark);

}

bool AttackModelADVISE::PhishingFailureStep::Enabled() {
  OldEnabled = NewEnabled;
  NewEnabled = (((*(PhishingChosen_Mobius_Mark)) >= 1));
  return NewEnabled;
}

double AttackModelADVISE::PhishingFailureStep::timeDistributionParameter0() {
return 1000;
}

double AttackModelADVISE::PhishingFailureStep::Weight() {
return 0.80;
}

bool AttackModelADVISE::PhishingFailureStep::ReactivationPredicate() {
  return false;
}

bool AttackModelADVISE::PhishingFailureStep::ReactivationFunction() {
  return false;
}

double AttackModelADVISE::PhishingFailureStep::SampleDistribution() {
  return TheDistribution->Deterministic(timeDistributionParameter0());
}

double *AttackModelADVISE::PhishingFailureStep::ReturnDistributionParameters() {
  TheDistributionParameters[0] = timeDistributionParameter0();
  return TheDistributionParameters;
}

int AttackModelADVISE::PhishingFailureStep::Rank() {
  return 1;
}

bool AttackModelADVISE::PhishingFailureStep::preconditionsMet() {
return(!UserCredentials->Mark()&&SocialEngineer->Mark());
  return true;
}

void AttackModelADVISE::PhishingFailureStep::executeEffects() {

}

double AttackModelADVISE::PhishingFailureStep::getCost() {
return 35;
}

double AttackModelADVISE::PhishingFailureStep::getOutcomeProbability() {
return 0.80;
}

double AttackModelADVISE::PhishingFailureStep::getDetection() {
return 1;
}

/*====================== PhishingSuccessStep ========================*/

AttackModelADVISE::PhishingSuccessStep::PhishingSuccessStep() {
  TheDistributionParameters = new double[1];
  commonInit("PhishingSuccessStep", 5, Deterministic, RaceEnabled, 17, 1, false);}

AttackModelADVISE::PhishingSuccessStep::~PhishingSuccessStep() {
  delete[] TheDistributionParameters;
}

void AttackModelADVISE::PhishingSuccessStep::LinkVariables() {
  UserCredentials->Register(&UserCredentials_Mobius_Mark);
  SocialEngineer->Register(&SocialEngineer_Mobius_Mark);
  PhishingChosen->Register(&PhishingChosen_Mobius_Mark);
  GetAccessToAlarmsWeight->Register(&GetAccessToAlarmsWeight_Mobius_Mark);
  TransferCustomerMoneyWeight->Register(&TransferCustomerMoneyWeight_Mobius_Mark);
  GetAccessToCamerasWeight->Register(&GetAccessToCamerasWeight_Mobius_Mark);
  DoNothingWeight->Register(&DoNothingWeight_Mobius_Mark);
  TransferBankMoneyWeight->Register(&TransferBankMoneyWeight_Mobius_Mark);
  PhishingWeight->Register(&PhishingWeight_Mobius_Mark);
  FindSecureAccessWeight->Register(&FindSecureAccessWeight_Mobius_Mark);
  GetDirectorCredentialsWeight->Register(&GetDirectorCredentialsWeight_Mobius_Mark);
  StudySecurityRoutinesWeight->Register(&StudySecurityRoutinesWeight_Mobius_Mark);
  GetSafeCombinationWeight->Register(&GetSafeCombinationWeight_Mobius_Mark);
  InfectTheSystemWeight->Register(&InfectTheSystemWeight_Mobius_Mark);
  SafeBreakWeight->Register(&SafeBreakWeight_Mobius_Mark);
  CyberAttackWeight->Register(&CyberAttackWeight_Mobius_Mark);
  MakeDecision->Register(&MakeDecision_Mobius_Mark);

}

bool AttackModelADVISE::PhishingSuccessStep::Enabled() {
  OldEnabled = NewEnabled;
  NewEnabled = (((*(PhishingChosen_Mobius_Mark)) >= 1));
  return NewEnabled;
}

double AttackModelADVISE::PhishingSuccessStep::timeDistributionParameter0() {
return 1000;
}

double AttackModelADVISE::PhishingSuccessStep::Weight() {
return 0.20;
}

bool AttackModelADVISE::PhishingSuccessStep::ReactivationPredicate() {
  return false;
}

bool AttackModelADVISE::PhishingSuccessStep::ReactivationFunction() {
  return false;
}

double AttackModelADVISE::PhishingSuccessStep::SampleDistribution() {
  return TheDistribution->Deterministic(timeDistributionParameter0());
}

double *AttackModelADVISE::PhishingSuccessStep::ReturnDistributionParameters() {
  TheDistributionParameters[0] = timeDistributionParameter0();
  return TheDistributionParameters;
}

int AttackModelADVISE::PhishingSuccessStep::Rank() {
  return 1;
}

bool AttackModelADVISE::PhishingSuccessStep::preconditionsMet() {
return(!UserCredentials->Mark()&&SocialEngineer->Mark());
  return true;
}

void AttackModelADVISE::PhishingSuccessStep::executeEffects() {
UserCredentials->Mark()=true;
}

double AttackModelADVISE::PhishingSuccessStep::getCost() {
return 35;
}

double AttackModelADVISE::PhishingSuccessStep::getOutcomeProbability() {
return 0.20;
}

double AttackModelADVISE::PhishingSuccessStep::getDetection() {
return 0.40;
}

/*====================== FindSecureAccessFailureStep ========================*/

AttackModelADVISE::FindSecureAccessFailureStep::FindSecureAccessFailureStep() {
  TheDistributionParameters = new double[1];
  commonInit("FindSecureAccessFailureStep", 6, Deterministic, RaceEnabled, 18, 1, false);}

AttackModelADVISE::FindSecureAccessFailureStep::~FindSecureAccessFailureStep() {
  delete[] TheDistributionParameters;
}

void AttackModelADVISE::FindSecureAccessFailureStep::LinkVariables() {
  SecurePath->Register(&SecurePath_Mobius_Mark);
  SecurityRoutines->Register(&SecurityRoutines_Mobius_Mark);
  CamerasControl->Register(&CamerasControl_Mobius_Mark);
  FindSecureAccessChosen->Register(&FindSecureAccessChosen_Mobius_Mark);
  GetAccessToAlarmsWeight->Register(&GetAccessToAlarmsWeight_Mobius_Mark);
  TransferCustomerMoneyWeight->Register(&TransferCustomerMoneyWeight_Mobius_Mark);
  GetAccessToCamerasWeight->Register(&GetAccessToCamerasWeight_Mobius_Mark);
  DoNothingWeight->Register(&DoNothingWeight_Mobius_Mark);
  TransferBankMoneyWeight->Register(&TransferBankMoneyWeight_Mobius_Mark);
  PhishingWeight->Register(&PhishingWeight_Mobius_Mark);
  FindSecureAccessWeight->Register(&FindSecureAccessWeight_Mobius_Mark);
  GetDirectorCredentialsWeight->Register(&GetDirectorCredentialsWeight_Mobius_Mark);
  StudySecurityRoutinesWeight->Register(&StudySecurityRoutinesWeight_Mobius_Mark);
  GetSafeCombinationWeight->Register(&GetSafeCombinationWeight_Mobius_Mark);
  InfectTheSystemWeight->Register(&InfectTheSystemWeight_Mobius_Mark);
  SafeBreakWeight->Register(&SafeBreakWeight_Mobius_Mark);
  CyberAttackWeight->Register(&CyberAttackWeight_Mobius_Mark);
  MakeDecision->Register(&MakeDecision_Mobius_Mark);

}

bool AttackModelADVISE::FindSecureAccessFailureStep::Enabled() {
  OldEnabled = NewEnabled;
  NewEnabled = (((*(FindSecureAccessChosen_Mobius_Mark)) >= 1));
  return NewEnabled;
}

double AttackModelADVISE::FindSecureAccessFailureStep::timeDistributionParameter0() {
return 100;
}

double AttackModelADVISE::FindSecureAccessFailureStep::Weight() {
return 0.70;
}

bool AttackModelADVISE::FindSecureAccessFailureStep::ReactivationPredicate() {
  return false;
}

bool AttackModelADVISE::FindSecureAccessFailureStep::ReactivationFunction() {
  return false;
}

double AttackModelADVISE::FindSecureAccessFailureStep::SampleDistribution() {
  return TheDistribution->Deterministic(timeDistributionParameter0());
}

double *AttackModelADVISE::FindSecureAccessFailureStep::ReturnDistributionParameters() {
  TheDistributionParameters[0] = timeDistributionParameter0();
  return TheDistributionParameters;
}

int AttackModelADVISE::FindSecureAccessFailureStep::Rank() {
  return 1;
}

bool AttackModelADVISE::FindSecureAccessFailureStep::preconditionsMet() {
return SecurityRoutines->Mark() && CamerasControl->Mark();
  return true;
}

void AttackModelADVISE::FindSecureAccessFailureStep::executeEffects() {

}

double AttackModelADVISE::FindSecureAccessFailureStep::getCost() {
return 5;
}

double AttackModelADVISE::FindSecureAccessFailureStep::getOutcomeProbability() {
return 0.70;
}

double AttackModelADVISE::FindSecureAccessFailureStep::getDetection() {
return 0;
}

/*====================== FindSecureAccessSuccessStep ========================*/

AttackModelADVISE::FindSecureAccessSuccessStep::FindSecureAccessSuccessStep() {
  TheDistributionParameters = new double[1];
  commonInit("FindSecureAccessSuccessStep", 6, Deterministic, RaceEnabled, 18, 1, false);}

AttackModelADVISE::FindSecureAccessSuccessStep::~FindSecureAccessSuccessStep() {
  delete[] TheDistributionParameters;
}

void AttackModelADVISE::FindSecureAccessSuccessStep::LinkVariables() {
  SecurePath->Register(&SecurePath_Mobius_Mark);
  SecurityRoutines->Register(&SecurityRoutines_Mobius_Mark);
  CamerasControl->Register(&CamerasControl_Mobius_Mark);
  FindSecureAccessChosen->Register(&FindSecureAccessChosen_Mobius_Mark);
  GetAccessToAlarmsWeight->Register(&GetAccessToAlarmsWeight_Mobius_Mark);
  TransferCustomerMoneyWeight->Register(&TransferCustomerMoneyWeight_Mobius_Mark);
  GetAccessToCamerasWeight->Register(&GetAccessToCamerasWeight_Mobius_Mark);
  DoNothingWeight->Register(&DoNothingWeight_Mobius_Mark);
  TransferBankMoneyWeight->Register(&TransferBankMoneyWeight_Mobius_Mark);
  PhishingWeight->Register(&PhishingWeight_Mobius_Mark);
  FindSecureAccessWeight->Register(&FindSecureAccessWeight_Mobius_Mark);
  GetDirectorCredentialsWeight->Register(&GetDirectorCredentialsWeight_Mobius_Mark);
  StudySecurityRoutinesWeight->Register(&StudySecurityRoutinesWeight_Mobius_Mark);
  GetSafeCombinationWeight->Register(&GetSafeCombinationWeight_Mobius_Mark);
  InfectTheSystemWeight->Register(&InfectTheSystemWeight_Mobius_Mark);
  SafeBreakWeight->Register(&SafeBreakWeight_Mobius_Mark);
  CyberAttackWeight->Register(&CyberAttackWeight_Mobius_Mark);
  MakeDecision->Register(&MakeDecision_Mobius_Mark);

}

bool AttackModelADVISE::FindSecureAccessSuccessStep::Enabled() {
  OldEnabled = NewEnabled;
  NewEnabled = (((*(FindSecureAccessChosen_Mobius_Mark)) >= 1));
  return NewEnabled;
}

double AttackModelADVISE::FindSecureAccessSuccessStep::timeDistributionParameter0() {
return 100;
}

double AttackModelADVISE::FindSecureAccessSuccessStep::Weight() {
return 0.1;
}

bool AttackModelADVISE::FindSecureAccessSuccessStep::ReactivationPredicate() {
  return false;
}

bool AttackModelADVISE::FindSecureAccessSuccessStep::ReactivationFunction() {
  return false;
}

double AttackModelADVISE::FindSecureAccessSuccessStep::SampleDistribution() {
  return TheDistribution->Deterministic(timeDistributionParameter0());
}

double *AttackModelADVISE::FindSecureAccessSuccessStep::ReturnDistributionParameters() {
  TheDistributionParameters[0] = timeDistributionParameter0();
  return TheDistributionParameters;
}

int AttackModelADVISE::FindSecureAccessSuccessStep::Rank() {
  return 1;
}

bool AttackModelADVISE::FindSecureAccessSuccessStep::preconditionsMet() {
return SecurityRoutines->Mark() && CamerasControl->Mark();
  return true;
}

void AttackModelADVISE::FindSecureAccessSuccessStep::executeEffects() {
SecurePath->Mark() = true;
}

double AttackModelADVISE::FindSecureAccessSuccessStep::getCost() {
return 5;
}

double AttackModelADVISE::FindSecureAccessSuccessStep::getOutcomeProbability() {
return 0.1;
}

double AttackModelADVISE::FindSecureAccessSuccessStep::getDetection() {
return 0;
}

/*====================== FindSecureAccessFailureCameraAccessFoundStep ========================*/

AttackModelADVISE::FindSecureAccessFailureCameraAccessFoundStep::FindSecureAccessFailureCameraAccessFoundStep() {
  TheDistributionParameters = new double[1];
  commonInit("FindSecureAccessFailureCameraAccessFoundStep", 6, Deterministic, RaceEnabled, 18, 1, false);}

AttackModelADVISE::FindSecureAccessFailureCameraAccessFoundStep::~FindSecureAccessFailureCameraAccessFoundStep() {
  delete[] TheDistributionParameters;
}

void AttackModelADVISE::FindSecureAccessFailureCameraAccessFoundStep::LinkVariables() {
  SecurePath->Register(&SecurePath_Mobius_Mark);
  SecurityRoutines->Register(&SecurityRoutines_Mobius_Mark);
  CamerasControl->Register(&CamerasControl_Mobius_Mark);
  FindSecureAccessChosen->Register(&FindSecureAccessChosen_Mobius_Mark);
  GetAccessToAlarmsWeight->Register(&GetAccessToAlarmsWeight_Mobius_Mark);
  TransferCustomerMoneyWeight->Register(&TransferCustomerMoneyWeight_Mobius_Mark);
  GetAccessToCamerasWeight->Register(&GetAccessToCamerasWeight_Mobius_Mark);
  DoNothingWeight->Register(&DoNothingWeight_Mobius_Mark);
  TransferBankMoneyWeight->Register(&TransferBankMoneyWeight_Mobius_Mark);
  PhishingWeight->Register(&PhishingWeight_Mobius_Mark);
  FindSecureAccessWeight->Register(&FindSecureAccessWeight_Mobius_Mark);
  GetDirectorCredentialsWeight->Register(&GetDirectorCredentialsWeight_Mobius_Mark);
  StudySecurityRoutinesWeight->Register(&StudySecurityRoutinesWeight_Mobius_Mark);
  GetSafeCombinationWeight->Register(&GetSafeCombinationWeight_Mobius_Mark);
  InfectTheSystemWeight->Register(&InfectTheSystemWeight_Mobius_Mark);
  SafeBreakWeight->Register(&SafeBreakWeight_Mobius_Mark);
  CyberAttackWeight->Register(&CyberAttackWeight_Mobius_Mark);
  MakeDecision->Register(&MakeDecision_Mobius_Mark);

}

bool AttackModelADVISE::FindSecureAccessFailureCameraAccessFoundStep::Enabled() {
  OldEnabled = NewEnabled;
  NewEnabled = (((*(FindSecureAccessChosen_Mobius_Mark)) >= 1));
  return NewEnabled;
}

double AttackModelADVISE::FindSecureAccessFailureCameraAccessFoundStep::timeDistributionParameter0() {
return 100;
}

double AttackModelADVISE::FindSecureAccessFailureCameraAccessFoundStep::Weight() {
return 0.2;
}

bool AttackModelADVISE::FindSecureAccessFailureCameraAccessFoundStep::ReactivationPredicate() {
  return false;
}

bool AttackModelADVISE::FindSecureAccessFailureCameraAccessFoundStep::ReactivationFunction() {
  return false;
}

double AttackModelADVISE::FindSecureAccessFailureCameraAccessFoundStep::SampleDistribution() {
  return TheDistribution->Deterministic(timeDistributionParameter0());
}

double *AttackModelADVISE::FindSecureAccessFailureCameraAccessFoundStep::ReturnDistributionParameters() {
  TheDistributionParameters[0] = timeDistributionParameter0();
  return TheDistributionParameters;
}

int AttackModelADVISE::FindSecureAccessFailureCameraAccessFoundStep::Rank() {
  return 1;
}

bool AttackModelADVISE::FindSecureAccessFailureCameraAccessFoundStep::preconditionsMet() {
return SecurityRoutines->Mark() && CamerasControl->Mark();
  return true;
}

void AttackModelADVISE::FindSecureAccessFailureCameraAccessFoundStep::executeEffects() {
SecurityRoutines->Mark() = false;
CamerasControl->Mark() = false;
}

double AttackModelADVISE::FindSecureAccessFailureCameraAccessFoundStep::getCost() {
return 5;
}

double AttackModelADVISE::FindSecureAccessFailureCameraAccessFoundStep::getOutcomeProbability() {
return 0.2;
}

double AttackModelADVISE::FindSecureAccessFailureCameraAccessFoundStep::getDetection() {
return 1;
}

/*====================== GetDirectorCredentialsFailureStep ========================*/

AttackModelADVISE::GetDirectorCredentialsFailureStep::GetDirectorCredentialsFailureStep() {
  TheDistributionParameters = new double[1];
  commonInit("GetDirectorCredentialsFailureStep", 7, Deterministic, RaceEnabled, 17, 1, false);}

AttackModelADVISE::GetDirectorCredentialsFailureStep::~GetDirectorCredentialsFailureStep() {
  delete[] TheDistributionParameters;
}

void AttackModelADVISE::GetDirectorCredentialsFailureStep::LinkVariables() {
  DirectorCredentials->Register(&DirectorCredentials_Mobius_Mark);
  BackDoor->Register(&BackDoor_Mobius_Mark);
  GetDirectorCredentialsChosen->Register(&GetDirectorCredentialsChosen_Mobius_Mark);
  GetAccessToAlarmsWeight->Register(&GetAccessToAlarmsWeight_Mobius_Mark);
  TransferCustomerMoneyWeight->Register(&TransferCustomerMoneyWeight_Mobius_Mark);
  GetAccessToCamerasWeight->Register(&GetAccessToCamerasWeight_Mobius_Mark);
  DoNothingWeight->Register(&DoNothingWeight_Mobius_Mark);
  TransferBankMoneyWeight->Register(&TransferBankMoneyWeight_Mobius_Mark);
  PhishingWeight->Register(&PhishingWeight_Mobius_Mark);
  FindSecureAccessWeight->Register(&FindSecureAccessWeight_Mobius_Mark);
  GetDirectorCredentialsWeight->Register(&GetDirectorCredentialsWeight_Mobius_Mark);
  StudySecurityRoutinesWeight->Register(&StudySecurityRoutinesWeight_Mobius_Mark);
  GetSafeCombinationWeight->Register(&GetSafeCombinationWeight_Mobius_Mark);
  InfectTheSystemWeight->Register(&InfectTheSystemWeight_Mobius_Mark);
  SafeBreakWeight->Register(&SafeBreakWeight_Mobius_Mark);
  CyberAttackWeight->Register(&CyberAttackWeight_Mobius_Mark);
  MakeDecision->Register(&MakeDecision_Mobius_Mark);

}

bool AttackModelADVISE::GetDirectorCredentialsFailureStep::Enabled() {
  OldEnabled = NewEnabled;
  NewEnabled = (((*(GetDirectorCredentialsChosen_Mobius_Mark)) >= 1));
  return NewEnabled;
}

double AttackModelADVISE::GetDirectorCredentialsFailureStep::timeDistributionParameter0() {
return 25;
}

double AttackModelADVISE::GetDirectorCredentialsFailureStep::Weight() {
return 0.70;
}

bool AttackModelADVISE::GetDirectorCredentialsFailureStep::ReactivationPredicate() {
  return false;
}

bool AttackModelADVISE::GetDirectorCredentialsFailureStep::ReactivationFunction() {
  return false;
}

double AttackModelADVISE::GetDirectorCredentialsFailureStep::SampleDistribution() {
  return TheDistribution->Deterministic(timeDistributionParameter0());
}

double *AttackModelADVISE::GetDirectorCredentialsFailureStep::ReturnDistributionParameters() {
  TheDistributionParameters[0] = timeDistributionParameter0();
  return TheDistributionParameters;
}

int AttackModelADVISE::GetDirectorCredentialsFailureStep::Rank() {
  return 1;
}

bool AttackModelADVISE::GetDirectorCredentialsFailureStep::preconditionsMet() {
return (!DirectorCredentials->Mark()&&BackDoor->Mark());
  return true;
}

void AttackModelADVISE::GetDirectorCredentialsFailureStep::executeEffects() {

}

double AttackModelADVISE::GetDirectorCredentialsFailureStep::getCost() {
return 35;
}

double AttackModelADVISE::GetDirectorCredentialsFailureStep::getOutcomeProbability() {
return 0.70;
}

double AttackModelADVISE::GetDirectorCredentialsFailureStep::getDetection() {
return 0.9;
}

/*====================== GetDirectorCredentialsSuccessStep ========================*/

AttackModelADVISE::GetDirectorCredentialsSuccessStep::GetDirectorCredentialsSuccessStep() {
  TheDistributionParameters = new double[1];
  commonInit("GetDirectorCredentialsSuccessStep", 7, Deterministic, RaceEnabled, 17, 1, false);}

AttackModelADVISE::GetDirectorCredentialsSuccessStep::~GetDirectorCredentialsSuccessStep() {
  delete[] TheDistributionParameters;
}

void AttackModelADVISE::GetDirectorCredentialsSuccessStep::LinkVariables() {
  DirectorCredentials->Register(&DirectorCredentials_Mobius_Mark);
  BackDoor->Register(&BackDoor_Mobius_Mark);
  GetDirectorCredentialsChosen->Register(&GetDirectorCredentialsChosen_Mobius_Mark);
  GetAccessToAlarmsWeight->Register(&GetAccessToAlarmsWeight_Mobius_Mark);
  TransferCustomerMoneyWeight->Register(&TransferCustomerMoneyWeight_Mobius_Mark);
  GetAccessToCamerasWeight->Register(&GetAccessToCamerasWeight_Mobius_Mark);
  DoNothingWeight->Register(&DoNothingWeight_Mobius_Mark);
  TransferBankMoneyWeight->Register(&TransferBankMoneyWeight_Mobius_Mark);
  PhishingWeight->Register(&PhishingWeight_Mobius_Mark);
  FindSecureAccessWeight->Register(&FindSecureAccessWeight_Mobius_Mark);
  GetDirectorCredentialsWeight->Register(&GetDirectorCredentialsWeight_Mobius_Mark);
  StudySecurityRoutinesWeight->Register(&StudySecurityRoutinesWeight_Mobius_Mark);
  GetSafeCombinationWeight->Register(&GetSafeCombinationWeight_Mobius_Mark);
  InfectTheSystemWeight->Register(&InfectTheSystemWeight_Mobius_Mark);
  SafeBreakWeight->Register(&SafeBreakWeight_Mobius_Mark);
  CyberAttackWeight->Register(&CyberAttackWeight_Mobius_Mark);
  MakeDecision->Register(&MakeDecision_Mobius_Mark);

}

bool AttackModelADVISE::GetDirectorCredentialsSuccessStep::Enabled() {
  OldEnabled = NewEnabled;
  NewEnabled = (((*(GetDirectorCredentialsChosen_Mobius_Mark)) >= 1));
  return NewEnabled;
}

double AttackModelADVISE::GetDirectorCredentialsSuccessStep::timeDistributionParameter0() {
return 25;
}

double AttackModelADVISE::GetDirectorCredentialsSuccessStep::Weight() {
return 0.30;
}

bool AttackModelADVISE::GetDirectorCredentialsSuccessStep::ReactivationPredicate() {
  return false;
}

bool AttackModelADVISE::GetDirectorCredentialsSuccessStep::ReactivationFunction() {
  return false;
}

double AttackModelADVISE::GetDirectorCredentialsSuccessStep::SampleDistribution() {
  return TheDistribution->Deterministic(timeDistributionParameter0());
}

double *AttackModelADVISE::GetDirectorCredentialsSuccessStep::ReturnDistributionParameters() {
  TheDistributionParameters[0] = timeDistributionParameter0();
  return TheDistributionParameters;
}

int AttackModelADVISE::GetDirectorCredentialsSuccessStep::Rank() {
  return 1;
}

bool AttackModelADVISE::GetDirectorCredentialsSuccessStep::preconditionsMet() {
return (!DirectorCredentials->Mark()&&BackDoor->Mark());
  return true;
}

void AttackModelADVISE::GetDirectorCredentialsSuccessStep::executeEffects() {
DirectorCredentials->Mark()=true;
}

double AttackModelADVISE::GetDirectorCredentialsSuccessStep::getCost() {
return 35;
}

double AttackModelADVISE::GetDirectorCredentialsSuccessStep::getOutcomeProbability() {
return 0.30;
}

double AttackModelADVISE::GetDirectorCredentialsSuccessStep::getDetection() {
return 0.05;
}

/*====================== StudySecurityRoutinesFailureStep ========================*/

AttackModelADVISE::StudySecurityRoutinesFailureStep::StudySecurityRoutinesFailureStep() {
  TheDistributionParameters = new double[1];
  commonInit("StudySecurityRoutinesFailureStep", 8, Deterministic, RaceEnabled, 17, 1, false);}

AttackModelADVISE::StudySecurityRoutinesFailureStep::~StudySecurityRoutinesFailureStep() {
  delete[] TheDistributionParameters;
}

void AttackModelADVISE::StudySecurityRoutinesFailureStep::LinkVariables() {
  SecurityRoutines->Register(&SecurityRoutines_Mobius_Mark);
  CamerasControl->Register(&CamerasControl_Mobius_Mark);
  StudySecurityRoutinesChosen->Register(&StudySecurityRoutinesChosen_Mobius_Mark);
  GetAccessToAlarmsWeight->Register(&GetAccessToAlarmsWeight_Mobius_Mark);
  TransferCustomerMoneyWeight->Register(&TransferCustomerMoneyWeight_Mobius_Mark);
  GetAccessToCamerasWeight->Register(&GetAccessToCamerasWeight_Mobius_Mark);
  DoNothingWeight->Register(&DoNothingWeight_Mobius_Mark);
  TransferBankMoneyWeight->Register(&TransferBankMoneyWeight_Mobius_Mark);
  PhishingWeight->Register(&PhishingWeight_Mobius_Mark);
  FindSecureAccessWeight->Register(&FindSecureAccessWeight_Mobius_Mark);
  GetDirectorCredentialsWeight->Register(&GetDirectorCredentialsWeight_Mobius_Mark);
  StudySecurityRoutinesWeight->Register(&StudySecurityRoutinesWeight_Mobius_Mark);
  GetSafeCombinationWeight->Register(&GetSafeCombinationWeight_Mobius_Mark);
  InfectTheSystemWeight->Register(&InfectTheSystemWeight_Mobius_Mark);
  SafeBreakWeight->Register(&SafeBreakWeight_Mobius_Mark);
  CyberAttackWeight->Register(&CyberAttackWeight_Mobius_Mark);
  MakeDecision->Register(&MakeDecision_Mobius_Mark);

}

bool AttackModelADVISE::StudySecurityRoutinesFailureStep::Enabled() {
  OldEnabled = NewEnabled;
  NewEnabled = (((*(StudySecurityRoutinesChosen_Mobius_Mark)) >= 1));
  return NewEnabled;
}

double AttackModelADVISE::StudySecurityRoutinesFailureStep::timeDistributionParameter0() {
return 100;
}

double AttackModelADVISE::StudySecurityRoutinesFailureStep::Weight() {
return 0.05;
}

bool AttackModelADVISE::StudySecurityRoutinesFailureStep::ReactivationPredicate() {
  return false;
}

bool AttackModelADVISE::StudySecurityRoutinesFailureStep::ReactivationFunction() {
  return false;
}

double AttackModelADVISE::StudySecurityRoutinesFailureStep::SampleDistribution() {
  return TheDistribution->Deterministic(timeDistributionParameter0());
}

double *AttackModelADVISE::StudySecurityRoutinesFailureStep::ReturnDistributionParameters() {
  TheDistributionParameters[0] = timeDistributionParameter0();
  return TheDistributionParameters;
}

int AttackModelADVISE::StudySecurityRoutinesFailureStep::Rank() {
  return 1;
}

bool AttackModelADVISE::StudySecurityRoutinesFailureStep::preconditionsMet() {
return CamerasControl->Mark();
  return true;
}

void AttackModelADVISE::StudySecurityRoutinesFailureStep::executeEffects() {

}

double AttackModelADVISE::StudySecurityRoutinesFailureStep::getCost() {
return 5;
}

double AttackModelADVISE::StudySecurityRoutinesFailureStep::getOutcomeProbability() {
return 0.05;
}

double AttackModelADVISE::StudySecurityRoutinesFailureStep::getDetection() {
return 0;
}

/*====================== StudySecurityRoutinesSuccessStep ========================*/

AttackModelADVISE::StudySecurityRoutinesSuccessStep::StudySecurityRoutinesSuccessStep() {
  TheDistributionParameters = new double[1];
  commonInit("StudySecurityRoutinesSuccessStep", 8, Deterministic, RaceEnabled, 17, 1, false);}

AttackModelADVISE::StudySecurityRoutinesSuccessStep::~StudySecurityRoutinesSuccessStep() {
  delete[] TheDistributionParameters;
}

void AttackModelADVISE::StudySecurityRoutinesSuccessStep::LinkVariables() {
  SecurityRoutines->Register(&SecurityRoutines_Mobius_Mark);
  CamerasControl->Register(&CamerasControl_Mobius_Mark);
  StudySecurityRoutinesChosen->Register(&StudySecurityRoutinesChosen_Mobius_Mark);
  GetAccessToAlarmsWeight->Register(&GetAccessToAlarmsWeight_Mobius_Mark);
  TransferCustomerMoneyWeight->Register(&TransferCustomerMoneyWeight_Mobius_Mark);
  GetAccessToCamerasWeight->Register(&GetAccessToCamerasWeight_Mobius_Mark);
  DoNothingWeight->Register(&DoNothingWeight_Mobius_Mark);
  TransferBankMoneyWeight->Register(&TransferBankMoneyWeight_Mobius_Mark);
  PhishingWeight->Register(&PhishingWeight_Mobius_Mark);
  FindSecureAccessWeight->Register(&FindSecureAccessWeight_Mobius_Mark);
  GetDirectorCredentialsWeight->Register(&GetDirectorCredentialsWeight_Mobius_Mark);
  StudySecurityRoutinesWeight->Register(&StudySecurityRoutinesWeight_Mobius_Mark);
  GetSafeCombinationWeight->Register(&GetSafeCombinationWeight_Mobius_Mark);
  InfectTheSystemWeight->Register(&InfectTheSystemWeight_Mobius_Mark);
  SafeBreakWeight->Register(&SafeBreakWeight_Mobius_Mark);
  CyberAttackWeight->Register(&CyberAttackWeight_Mobius_Mark);
  MakeDecision->Register(&MakeDecision_Mobius_Mark);

}

bool AttackModelADVISE::StudySecurityRoutinesSuccessStep::Enabled() {
  OldEnabled = NewEnabled;
  NewEnabled = (((*(StudySecurityRoutinesChosen_Mobius_Mark)) >= 1));
  return NewEnabled;
}

double AttackModelADVISE::StudySecurityRoutinesSuccessStep::timeDistributionParameter0() {
return 100;
}

double AttackModelADVISE::StudySecurityRoutinesSuccessStep::Weight() {
return 0.85;
}

bool AttackModelADVISE::StudySecurityRoutinesSuccessStep::ReactivationPredicate() {
  return false;
}

bool AttackModelADVISE::StudySecurityRoutinesSuccessStep::ReactivationFunction() {
  return false;
}

double AttackModelADVISE::StudySecurityRoutinesSuccessStep::SampleDistribution() {
  return TheDistribution->Deterministic(timeDistributionParameter0());
}

double *AttackModelADVISE::StudySecurityRoutinesSuccessStep::ReturnDistributionParameters() {
  TheDistributionParameters[0] = timeDistributionParameter0();
  return TheDistributionParameters;
}

int AttackModelADVISE::StudySecurityRoutinesSuccessStep::Rank() {
  return 1;
}

bool AttackModelADVISE::StudySecurityRoutinesSuccessStep::preconditionsMet() {
return CamerasControl->Mark();
  return true;
}

void AttackModelADVISE::StudySecurityRoutinesSuccessStep::executeEffects() {
SecurityRoutines->Mark() = true;
}

double AttackModelADVISE::StudySecurityRoutinesSuccessStep::getCost() {
return 5;
}

double AttackModelADVISE::StudySecurityRoutinesSuccessStep::getOutcomeProbability() {
return 0.85;
}

double AttackModelADVISE::StudySecurityRoutinesSuccessStep::getDetection() {
return 0;
}

/*====================== StudySecurityRoutinesFailureCameraAccessFoundStep ========================*/

AttackModelADVISE::StudySecurityRoutinesFailureCameraAccessFoundStep::StudySecurityRoutinesFailureCameraAccessFoundStep() {
  TheDistributionParameters = new double[1];
  commonInit("StudySecurityRoutinesFailureCameraAccessFoundStep", 8, Deterministic, RaceEnabled, 17, 1, false);}

AttackModelADVISE::StudySecurityRoutinesFailureCameraAccessFoundStep::~StudySecurityRoutinesFailureCameraAccessFoundStep() {
  delete[] TheDistributionParameters;
}

void AttackModelADVISE::StudySecurityRoutinesFailureCameraAccessFoundStep::LinkVariables() {
  SecurityRoutines->Register(&SecurityRoutines_Mobius_Mark);
  CamerasControl->Register(&CamerasControl_Mobius_Mark);
  StudySecurityRoutinesChosen->Register(&StudySecurityRoutinesChosen_Mobius_Mark);
  GetAccessToAlarmsWeight->Register(&GetAccessToAlarmsWeight_Mobius_Mark);
  TransferCustomerMoneyWeight->Register(&TransferCustomerMoneyWeight_Mobius_Mark);
  GetAccessToCamerasWeight->Register(&GetAccessToCamerasWeight_Mobius_Mark);
  DoNothingWeight->Register(&DoNothingWeight_Mobius_Mark);
  TransferBankMoneyWeight->Register(&TransferBankMoneyWeight_Mobius_Mark);
  PhishingWeight->Register(&PhishingWeight_Mobius_Mark);
  FindSecureAccessWeight->Register(&FindSecureAccessWeight_Mobius_Mark);
  GetDirectorCredentialsWeight->Register(&GetDirectorCredentialsWeight_Mobius_Mark);
  StudySecurityRoutinesWeight->Register(&StudySecurityRoutinesWeight_Mobius_Mark);
  GetSafeCombinationWeight->Register(&GetSafeCombinationWeight_Mobius_Mark);
  InfectTheSystemWeight->Register(&InfectTheSystemWeight_Mobius_Mark);
  SafeBreakWeight->Register(&SafeBreakWeight_Mobius_Mark);
  CyberAttackWeight->Register(&CyberAttackWeight_Mobius_Mark);
  MakeDecision->Register(&MakeDecision_Mobius_Mark);

}

bool AttackModelADVISE::StudySecurityRoutinesFailureCameraAccessFoundStep::Enabled() {
  OldEnabled = NewEnabled;
  NewEnabled = (((*(StudySecurityRoutinesChosen_Mobius_Mark)) >= 1));
  return NewEnabled;
}

double AttackModelADVISE::StudySecurityRoutinesFailureCameraAccessFoundStep::timeDistributionParameter0() {
return 100;
}

double AttackModelADVISE::StudySecurityRoutinesFailureCameraAccessFoundStep::Weight() {
return 0.1;
}

bool AttackModelADVISE::StudySecurityRoutinesFailureCameraAccessFoundStep::ReactivationPredicate() {
  return false;
}

bool AttackModelADVISE::StudySecurityRoutinesFailureCameraAccessFoundStep::ReactivationFunction() {
  return false;
}

double AttackModelADVISE::StudySecurityRoutinesFailureCameraAccessFoundStep::SampleDistribution() {
  return TheDistribution->Deterministic(timeDistributionParameter0());
}

double *AttackModelADVISE::StudySecurityRoutinesFailureCameraAccessFoundStep::ReturnDistributionParameters() {
  TheDistributionParameters[0] = timeDistributionParameter0();
  return TheDistributionParameters;
}

int AttackModelADVISE::StudySecurityRoutinesFailureCameraAccessFoundStep::Rank() {
  return 1;
}

bool AttackModelADVISE::StudySecurityRoutinesFailureCameraAccessFoundStep::preconditionsMet() {
return CamerasControl->Mark();
  return true;
}

void AttackModelADVISE::StudySecurityRoutinesFailureCameraAccessFoundStep::executeEffects() {
CamerasControl->Mark() = false;
}

double AttackModelADVISE::StudySecurityRoutinesFailureCameraAccessFoundStep::getCost() {
return 5;
}

double AttackModelADVISE::StudySecurityRoutinesFailureCameraAccessFoundStep::getOutcomeProbability() {
return 0.1;
}

double AttackModelADVISE::StudySecurityRoutinesFailureCameraAccessFoundStep::getDetection() {
return 1;
}

/*====================== GetSafeCombinationFailureStep ========================*/

AttackModelADVISE::GetSafeCombinationFailureStep::GetSafeCombinationFailureStep() {
  TheDistributionParameters = new double[1];
  commonInit("GetSafeCombinationFailureStep", 9, Deterministic, RaceEnabled, 17, 1, false);}

AttackModelADVISE::GetSafeCombinationFailureStep::~GetSafeCombinationFailureStep() {
  delete[] TheDistributionParameters;
}

void AttackModelADVISE::GetSafeCombinationFailureStep::LinkVariables() {
  SafeCombination->Register(&SafeCombination_Mobius_Mark);
  BackDoor->Register(&BackDoor_Mobius_Mark);
  GetSafeCombinationChosen->Register(&GetSafeCombinationChosen_Mobius_Mark);
  GetAccessToAlarmsWeight->Register(&GetAccessToAlarmsWeight_Mobius_Mark);
  TransferCustomerMoneyWeight->Register(&TransferCustomerMoneyWeight_Mobius_Mark);
  GetAccessToCamerasWeight->Register(&GetAccessToCamerasWeight_Mobius_Mark);
  DoNothingWeight->Register(&DoNothingWeight_Mobius_Mark);
  TransferBankMoneyWeight->Register(&TransferBankMoneyWeight_Mobius_Mark);
  PhishingWeight->Register(&PhishingWeight_Mobius_Mark);
  FindSecureAccessWeight->Register(&FindSecureAccessWeight_Mobius_Mark);
  GetDirectorCredentialsWeight->Register(&GetDirectorCredentialsWeight_Mobius_Mark);
  StudySecurityRoutinesWeight->Register(&StudySecurityRoutinesWeight_Mobius_Mark);
  GetSafeCombinationWeight->Register(&GetSafeCombinationWeight_Mobius_Mark);
  InfectTheSystemWeight->Register(&InfectTheSystemWeight_Mobius_Mark);
  SafeBreakWeight->Register(&SafeBreakWeight_Mobius_Mark);
  CyberAttackWeight->Register(&CyberAttackWeight_Mobius_Mark);
  MakeDecision->Register(&MakeDecision_Mobius_Mark);

}

bool AttackModelADVISE::GetSafeCombinationFailureStep::Enabled() {
  OldEnabled = NewEnabled;
  NewEnabled = (((*(GetSafeCombinationChosen_Mobius_Mark)) >= 1));
  return NewEnabled;
}

double AttackModelADVISE::GetSafeCombinationFailureStep::timeDistributionParameter0() {
return 25;
}

double AttackModelADVISE::GetSafeCombinationFailureStep::Weight() {
return 0.70;
}

bool AttackModelADVISE::GetSafeCombinationFailureStep::ReactivationPredicate() {
  return false;
}

bool AttackModelADVISE::GetSafeCombinationFailureStep::ReactivationFunction() {
  return false;
}

double AttackModelADVISE::GetSafeCombinationFailureStep::SampleDistribution() {
  return TheDistribution->Deterministic(timeDistributionParameter0());
}

double *AttackModelADVISE::GetSafeCombinationFailureStep::ReturnDistributionParameters() {
  TheDistributionParameters[0] = timeDistributionParameter0();
  return TheDistributionParameters;
}

int AttackModelADVISE::GetSafeCombinationFailureStep::Rank() {
  return 1;
}

bool AttackModelADVISE::GetSafeCombinationFailureStep::preconditionsMet() {
return(!SafeCombination->Mark()&&BackDoor->Mark());
  return true;
}

void AttackModelADVISE::GetSafeCombinationFailureStep::executeEffects() {

}

double AttackModelADVISE::GetSafeCombinationFailureStep::getCost() {
return 35;
}

double AttackModelADVISE::GetSafeCombinationFailureStep::getOutcomeProbability() {
return 0.70;
}

double AttackModelADVISE::GetSafeCombinationFailureStep::getDetection() {
return 0.9;
}

/*====================== GetSafeCombinationSuccessStep ========================*/

AttackModelADVISE::GetSafeCombinationSuccessStep::GetSafeCombinationSuccessStep() {
  TheDistributionParameters = new double[1];
  commonInit("GetSafeCombinationSuccessStep", 9, Deterministic, RaceEnabled, 17, 1, false);}

AttackModelADVISE::GetSafeCombinationSuccessStep::~GetSafeCombinationSuccessStep() {
  delete[] TheDistributionParameters;
}

void AttackModelADVISE::GetSafeCombinationSuccessStep::LinkVariables() {
  SafeCombination->Register(&SafeCombination_Mobius_Mark);
  BackDoor->Register(&BackDoor_Mobius_Mark);
  GetSafeCombinationChosen->Register(&GetSafeCombinationChosen_Mobius_Mark);
  GetAccessToAlarmsWeight->Register(&GetAccessToAlarmsWeight_Mobius_Mark);
  TransferCustomerMoneyWeight->Register(&TransferCustomerMoneyWeight_Mobius_Mark);
  GetAccessToCamerasWeight->Register(&GetAccessToCamerasWeight_Mobius_Mark);
  DoNothingWeight->Register(&DoNothingWeight_Mobius_Mark);
  TransferBankMoneyWeight->Register(&TransferBankMoneyWeight_Mobius_Mark);
  PhishingWeight->Register(&PhishingWeight_Mobius_Mark);
  FindSecureAccessWeight->Register(&FindSecureAccessWeight_Mobius_Mark);
  GetDirectorCredentialsWeight->Register(&GetDirectorCredentialsWeight_Mobius_Mark);
  StudySecurityRoutinesWeight->Register(&StudySecurityRoutinesWeight_Mobius_Mark);
  GetSafeCombinationWeight->Register(&GetSafeCombinationWeight_Mobius_Mark);
  InfectTheSystemWeight->Register(&InfectTheSystemWeight_Mobius_Mark);
  SafeBreakWeight->Register(&SafeBreakWeight_Mobius_Mark);
  CyberAttackWeight->Register(&CyberAttackWeight_Mobius_Mark);
  MakeDecision->Register(&MakeDecision_Mobius_Mark);

}

bool AttackModelADVISE::GetSafeCombinationSuccessStep::Enabled() {
  OldEnabled = NewEnabled;
  NewEnabled = (((*(GetSafeCombinationChosen_Mobius_Mark)) >= 1));
  return NewEnabled;
}

double AttackModelADVISE::GetSafeCombinationSuccessStep::timeDistributionParameter0() {
return 25;
}

double AttackModelADVISE::GetSafeCombinationSuccessStep::Weight() {
return 0.30;
}

bool AttackModelADVISE::GetSafeCombinationSuccessStep::ReactivationPredicate() {
  return false;
}

bool AttackModelADVISE::GetSafeCombinationSuccessStep::ReactivationFunction() {
  return false;
}

double AttackModelADVISE::GetSafeCombinationSuccessStep::SampleDistribution() {
  return TheDistribution->Deterministic(timeDistributionParameter0());
}

double *AttackModelADVISE::GetSafeCombinationSuccessStep::ReturnDistributionParameters() {
  TheDistributionParameters[0] = timeDistributionParameter0();
  return TheDistributionParameters;
}

int AttackModelADVISE::GetSafeCombinationSuccessStep::Rank() {
  return 1;
}

bool AttackModelADVISE::GetSafeCombinationSuccessStep::preconditionsMet() {
return(!SafeCombination->Mark()&&BackDoor->Mark());
  return true;
}

void AttackModelADVISE::GetSafeCombinationSuccessStep::executeEffects() {
SafeCombination->Mark()=true;
}

double AttackModelADVISE::GetSafeCombinationSuccessStep::getCost() {
return 35;
}

double AttackModelADVISE::GetSafeCombinationSuccessStep::getOutcomeProbability() {
return 0.30;
}

double AttackModelADVISE::GetSafeCombinationSuccessStep::getDetection() {
return 0.05;
}

/*====================== InfectTheSystemFailureStep ========================*/

AttackModelADVISE::InfectTheSystemFailureStep::InfectTheSystemFailureStep() {
  TheDistributionParameters = new double[1];
  commonInit("InfectTheSystemFailureStep", 10, Deterministic, RaceEnabled, 17, 1, false);}

AttackModelADVISE::InfectTheSystemFailureStep::~InfectTheSystemFailureStep() {
  delete[] TheDistributionParameters;
}

void AttackModelADVISE::InfectTheSystemFailureStep::LinkVariables() {
  SystemAccess->Register(&SystemAccess_Mobius_Mark);
  BackDoor->Register(&BackDoor_Mobius_Mark);
  InfectTheSystemChosen->Register(&InfectTheSystemChosen_Mobius_Mark);
  GetAccessToAlarmsWeight->Register(&GetAccessToAlarmsWeight_Mobius_Mark);
  TransferCustomerMoneyWeight->Register(&TransferCustomerMoneyWeight_Mobius_Mark);
  GetAccessToCamerasWeight->Register(&GetAccessToCamerasWeight_Mobius_Mark);
  DoNothingWeight->Register(&DoNothingWeight_Mobius_Mark);
  TransferBankMoneyWeight->Register(&TransferBankMoneyWeight_Mobius_Mark);
  PhishingWeight->Register(&PhishingWeight_Mobius_Mark);
  FindSecureAccessWeight->Register(&FindSecureAccessWeight_Mobius_Mark);
  GetDirectorCredentialsWeight->Register(&GetDirectorCredentialsWeight_Mobius_Mark);
  StudySecurityRoutinesWeight->Register(&StudySecurityRoutinesWeight_Mobius_Mark);
  GetSafeCombinationWeight->Register(&GetSafeCombinationWeight_Mobius_Mark);
  InfectTheSystemWeight->Register(&InfectTheSystemWeight_Mobius_Mark);
  SafeBreakWeight->Register(&SafeBreakWeight_Mobius_Mark);
  CyberAttackWeight->Register(&CyberAttackWeight_Mobius_Mark);
  MakeDecision->Register(&MakeDecision_Mobius_Mark);

}

bool AttackModelADVISE::InfectTheSystemFailureStep::Enabled() {
  OldEnabled = NewEnabled;
  NewEnabled = (((*(InfectTheSystemChosen_Mobius_Mark)) >= 1));
  return NewEnabled;
}

double AttackModelADVISE::InfectTheSystemFailureStep::timeDistributionParameter0() {
return 20;
}

double AttackModelADVISE::InfectTheSystemFailureStep::Weight() {
return 0.70;
}

bool AttackModelADVISE::InfectTheSystemFailureStep::ReactivationPredicate() {
  return false;
}

bool AttackModelADVISE::InfectTheSystemFailureStep::ReactivationFunction() {
  return false;
}

double AttackModelADVISE::InfectTheSystemFailureStep::SampleDistribution() {
  return TheDistribution->Deterministic(timeDistributionParameter0());
}

double *AttackModelADVISE::InfectTheSystemFailureStep::ReturnDistributionParameters() {
  TheDistributionParameters[0] = timeDistributionParameter0();
  return TheDistributionParameters;
}

int AttackModelADVISE::InfectTheSystemFailureStep::Rank() {
  return 1;
}

bool AttackModelADVISE::InfectTheSystemFailureStep::preconditionsMet() {
return (!SystemAccess->Mark()&&BackDoor->Mark());
  return true;
}

void AttackModelADVISE::InfectTheSystemFailureStep::executeEffects() {

}

double AttackModelADVISE::InfectTheSystemFailureStep::getCost() {
return 30;
}

double AttackModelADVISE::InfectTheSystemFailureStep::getOutcomeProbability() {
return 0.70;
}

double AttackModelADVISE::InfectTheSystemFailureStep::getDetection() {
return 0.9;
}

/*====================== InfectTheSystemSuccessStep ========================*/

AttackModelADVISE::InfectTheSystemSuccessStep::InfectTheSystemSuccessStep() {
  TheDistributionParameters = new double[1];
  commonInit("InfectTheSystemSuccessStep", 10, Deterministic, RaceEnabled, 17, 1, false);}

AttackModelADVISE::InfectTheSystemSuccessStep::~InfectTheSystemSuccessStep() {
  delete[] TheDistributionParameters;
}

void AttackModelADVISE::InfectTheSystemSuccessStep::LinkVariables() {
  SystemAccess->Register(&SystemAccess_Mobius_Mark);
  BackDoor->Register(&BackDoor_Mobius_Mark);
  InfectTheSystemChosen->Register(&InfectTheSystemChosen_Mobius_Mark);
  GetAccessToAlarmsWeight->Register(&GetAccessToAlarmsWeight_Mobius_Mark);
  TransferCustomerMoneyWeight->Register(&TransferCustomerMoneyWeight_Mobius_Mark);
  GetAccessToCamerasWeight->Register(&GetAccessToCamerasWeight_Mobius_Mark);
  DoNothingWeight->Register(&DoNothingWeight_Mobius_Mark);
  TransferBankMoneyWeight->Register(&TransferBankMoneyWeight_Mobius_Mark);
  PhishingWeight->Register(&PhishingWeight_Mobius_Mark);
  FindSecureAccessWeight->Register(&FindSecureAccessWeight_Mobius_Mark);
  GetDirectorCredentialsWeight->Register(&GetDirectorCredentialsWeight_Mobius_Mark);
  StudySecurityRoutinesWeight->Register(&StudySecurityRoutinesWeight_Mobius_Mark);
  GetSafeCombinationWeight->Register(&GetSafeCombinationWeight_Mobius_Mark);
  InfectTheSystemWeight->Register(&InfectTheSystemWeight_Mobius_Mark);
  SafeBreakWeight->Register(&SafeBreakWeight_Mobius_Mark);
  CyberAttackWeight->Register(&CyberAttackWeight_Mobius_Mark);
  MakeDecision->Register(&MakeDecision_Mobius_Mark);

}

bool AttackModelADVISE::InfectTheSystemSuccessStep::Enabled() {
  OldEnabled = NewEnabled;
  NewEnabled = (((*(InfectTheSystemChosen_Mobius_Mark)) >= 1));
  return NewEnabled;
}

double AttackModelADVISE::InfectTheSystemSuccessStep::timeDistributionParameter0() {
return 20;
}

double AttackModelADVISE::InfectTheSystemSuccessStep::Weight() {
return 0.30;
}

bool AttackModelADVISE::InfectTheSystemSuccessStep::ReactivationPredicate() {
  return false;
}

bool AttackModelADVISE::InfectTheSystemSuccessStep::ReactivationFunction() {
  return false;
}

double AttackModelADVISE::InfectTheSystemSuccessStep::SampleDistribution() {
  return TheDistribution->Deterministic(timeDistributionParameter0());
}

double *AttackModelADVISE::InfectTheSystemSuccessStep::ReturnDistributionParameters() {
  TheDistributionParameters[0] = timeDistributionParameter0();
  return TheDistributionParameters;
}

int AttackModelADVISE::InfectTheSystemSuccessStep::Rank() {
  return 1;
}

bool AttackModelADVISE::InfectTheSystemSuccessStep::preconditionsMet() {
return (!SystemAccess->Mark()&&BackDoor->Mark());
  return true;
}

void AttackModelADVISE::InfectTheSystemSuccessStep::executeEffects() {
SystemAccess->Mark()=true;
}

double AttackModelADVISE::InfectTheSystemSuccessStep::getCost() {
return 30;
}

double AttackModelADVISE::InfectTheSystemSuccessStep::getOutcomeProbability() {
return 0.30;
}

double AttackModelADVISE::InfectTheSystemSuccessStep::getDetection() {
return 0.10;
}

/*====================== SafeBreakFailureStep ========================*/

AttackModelADVISE::SafeBreakFailureStep::SafeBreakFailureStep() {
  TheDistributionParameters = new double[1];
  commonInit("SafeBreakFailureStep", 11, Deterministic, RaceEnabled, 22, 1, false);}

AttackModelADVISE::SafeBreakFailureStep::~SafeBreakFailureStep() {
  delete[] TheDistributionParameters;
}

void AttackModelADVISE::SafeBreakFailureStep::LinkVariables() {
  Money->Register(&Money_Mobius_Mark);
  SecurePath->Register(&SecurePath_Mobius_Mark);
  CamerasControl->Register(&CamerasControl_Mobius_Mark);
  AlarmsControl->Register(&AlarmsControl_Mobius_Mark);
  Breaker->Register(&Breaker_Mobius_Mark);
  SafeCombination->Register(&SafeCombination_Mobius_Mark);
  SecurityRoutines->Register(&SecurityRoutines_Mobius_Mark);
  SafeBreakChosen->Register(&SafeBreakChosen_Mobius_Mark);
  GetAccessToAlarmsWeight->Register(&GetAccessToAlarmsWeight_Mobius_Mark);
  TransferCustomerMoneyWeight->Register(&TransferCustomerMoneyWeight_Mobius_Mark);
  GetAccessToCamerasWeight->Register(&GetAccessToCamerasWeight_Mobius_Mark);
  DoNothingWeight->Register(&DoNothingWeight_Mobius_Mark);
  TransferBankMoneyWeight->Register(&TransferBankMoneyWeight_Mobius_Mark);
  PhishingWeight->Register(&PhishingWeight_Mobius_Mark);
  FindSecureAccessWeight->Register(&FindSecureAccessWeight_Mobius_Mark);
  GetDirectorCredentialsWeight->Register(&GetDirectorCredentialsWeight_Mobius_Mark);
  StudySecurityRoutinesWeight->Register(&StudySecurityRoutinesWeight_Mobius_Mark);
  GetSafeCombinationWeight->Register(&GetSafeCombinationWeight_Mobius_Mark);
  InfectTheSystemWeight->Register(&InfectTheSystemWeight_Mobius_Mark);
  SafeBreakWeight->Register(&SafeBreakWeight_Mobius_Mark);
  CyberAttackWeight->Register(&CyberAttackWeight_Mobius_Mark);
  MakeDecision->Register(&MakeDecision_Mobius_Mark);

}

bool AttackModelADVISE::SafeBreakFailureStep::Enabled() {
  OldEnabled = NewEnabled;
  NewEnabled = (((*(SafeBreakChosen_Mobius_Mark)) >= 1));
  return NewEnabled;
}

double AttackModelADVISE::SafeBreakFailureStep::timeDistributionParameter0() {
return 60;
}

double AttackModelADVISE::SafeBreakFailureStep::Weight() {
return 0.8;
}

bool AttackModelADVISE::SafeBreakFailureStep::ReactivationPredicate() {
  return false;
}

bool AttackModelADVISE::SafeBreakFailureStep::ReactivationFunction() {
  return false;
}

double AttackModelADVISE::SafeBreakFailureStep::SampleDistribution() {
  return TheDistribution->Deterministic(timeDistributionParameter0());
}

double *AttackModelADVISE::SafeBreakFailureStep::ReturnDistributionParameters() {
  TheDistributionParameters[0] = timeDistributionParameter0();
  return TheDistributionParameters;
}

int AttackModelADVISE::SafeBreakFailureStep::Rank() {
  return 1;
}

bool AttackModelADVISE::SafeBreakFailureStep::preconditionsMet() {
return ( Breaker->Mark()>800 || SafeCombination->Mark()) && AlarmsControl->Mark() && CamerasControl->Mark() && SecurePath->Mark();
  return true;
}

void AttackModelADVISE::SafeBreakFailureStep::executeEffects() {

}

double AttackModelADVISE::SafeBreakFailureStep::getCost() {
return 50;
}

double AttackModelADVISE::SafeBreakFailureStep::getOutcomeProbability() {
return 0.8;
}

double AttackModelADVISE::SafeBreakFailureStep::getDetection() {
return 0;
}

/*====================== SafeBreakSuccessStep ========================*/

AttackModelADVISE::SafeBreakSuccessStep::SafeBreakSuccessStep() {
  TheDistributionParameters = new double[1];
  commonInit("SafeBreakSuccessStep", 11, Deterministic, RaceEnabled, 22, 1, false);}

AttackModelADVISE::SafeBreakSuccessStep::~SafeBreakSuccessStep() {
  delete[] TheDistributionParameters;
}

void AttackModelADVISE::SafeBreakSuccessStep::LinkVariables() {
  Money->Register(&Money_Mobius_Mark);
  SecurePath->Register(&SecurePath_Mobius_Mark);
  CamerasControl->Register(&CamerasControl_Mobius_Mark);
  AlarmsControl->Register(&AlarmsControl_Mobius_Mark);
  Breaker->Register(&Breaker_Mobius_Mark);
  SafeCombination->Register(&SafeCombination_Mobius_Mark);
  SecurityRoutines->Register(&SecurityRoutines_Mobius_Mark);
  SafeBreakChosen->Register(&SafeBreakChosen_Mobius_Mark);
  GetAccessToAlarmsWeight->Register(&GetAccessToAlarmsWeight_Mobius_Mark);
  TransferCustomerMoneyWeight->Register(&TransferCustomerMoneyWeight_Mobius_Mark);
  GetAccessToCamerasWeight->Register(&GetAccessToCamerasWeight_Mobius_Mark);
  DoNothingWeight->Register(&DoNothingWeight_Mobius_Mark);
  TransferBankMoneyWeight->Register(&TransferBankMoneyWeight_Mobius_Mark);
  PhishingWeight->Register(&PhishingWeight_Mobius_Mark);
  FindSecureAccessWeight->Register(&FindSecureAccessWeight_Mobius_Mark);
  GetDirectorCredentialsWeight->Register(&GetDirectorCredentialsWeight_Mobius_Mark);
  StudySecurityRoutinesWeight->Register(&StudySecurityRoutinesWeight_Mobius_Mark);
  GetSafeCombinationWeight->Register(&GetSafeCombinationWeight_Mobius_Mark);
  InfectTheSystemWeight->Register(&InfectTheSystemWeight_Mobius_Mark);
  SafeBreakWeight->Register(&SafeBreakWeight_Mobius_Mark);
  CyberAttackWeight->Register(&CyberAttackWeight_Mobius_Mark);
  MakeDecision->Register(&MakeDecision_Mobius_Mark);

}

bool AttackModelADVISE::SafeBreakSuccessStep::Enabled() {
  OldEnabled = NewEnabled;
  NewEnabled = (((*(SafeBreakChosen_Mobius_Mark)) >= 1));
  return NewEnabled;
}

double AttackModelADVISE::SafeBreakSuccessStep::timeDistributionParameter0() {
return 60;
}

double AttackModelADVISE::SafeBreakSuccessStep::Weight() {
return 0.2;
}

bool AttackModelADVISE::SafeBreakSuccessStep::ReactivationPredicate() {
  return false;
}

bool AttackModelADVISE::SafeBreakSuccessStep::ReactivationFunction() {
  return false;
}

double AttackModelADVISE::SafeBreakSuccessStep::SampleDistribution() {
  return TheDistribution->Deterministic(timeDistributionParameter0());
}

double *AttackModelADVISE::SafeBreakSuccessStep::ReturnDistributionParameters() {
  TheDistributionParameters[0] = timeDistributionParameter0();
  return TheDistributionParameters;
}

int AttackModelADVISE::SafeBreakSuccessStep::Rank() {
  return 1;
}

bool AttackModelADVISE::SafeBreakSuccessStep::preconditionsMet() {
return ( Breaker->Mark()>800 || SafeCombination->Mark()) && AlarmsControl->Mark() && CamerasControl->Mark() && SecurePath->Mark();
  return true;
}

void AttackModelADVISE::SafeBreakSuccessStep::executeEffects() {
Money->Mark() = true;
}

double AttackModelADVISE::SafeBreakSuccessStep::getCost() {
return 50;
}

double AttackModelADVISE::SafeBreakSuccessStep::getOutcomeProbability() {
return 0.2;
}

double AttackModelADVISE::SafeBreakSuccessStep::getDetection() {
return 0;
}

/*====================== CyberAttackFailureStep ========================*/

AttackModelADVISE::CyberAttackFailureStep::CyberAttackFailureStep() {
  TheDistributionParameters = new double[1];
  commonInit("CyberAttackFailureStep", 12, Deterministic, RaceEnabled, 18, 1, false);}

AttackModelADVISE::CyberAttackFailureStep::~CyberAttackFailureStep() {
  delete[] TheDistributionParameters;
}

void AttackModelADVISE::CyberAttackFailureStep::LinkVariables() {
  BackDoor->Register(&BackDoor_Mobius_Mark);
  CyberVulnerability->Register(&CyberVulnerability_Mobius_Mark);
  Hacker->Register(&Hacker_Mobius_Mark);
  CyberAttackChosen->Register(&CyberAttackChosen_Mobius_Mark);
  GetAccessToAlarmsWeight->Register(&GetAccessToAlarmsWeight_Mobius_Mark);
  TransferCustomerMoneyWeight->Register(&TransferCustomerMoneyWeight_Mobius_Mark);
  GetAccessToCamerasWeight->Register(&GetAccessToCamerasWeight_Mobius_Mark);
  DoNothingWeight->Register(&DoNothingWeight_Mobius_Mark);
  TransferBankMoneyWeight->Register(&TransferBankMoneyWeight_Mobius_Mark);
  PhishingWeight->Register(&PhishingWeight_Mobius_Mark);
  FindSecureAccessWeight->Register(&FindSecureAccessWeight_Mobius_Mark);
  GetDirectorCredentialsWeight->Register(&GetDirectorCredentialsWeight_Mobius_Mark);
  StudySecurityRoutinesWeight->Register(&StudySecurityRoutinesWeight_Mobius_Mark);
  GetSafeCombinationWeight->Register(&GetSafeCombinationWeight_Mobius_Mark);
  InfectTheSystemWeight->Register(&InfectTheSystemWeight_Mobius_Mark);
  SafeBreakWeight->Register(&SafeBreakWeight_Mobius_Mark);
  CyberAttackWeight->Register(&CyberAttackWeight_Mobius_Mark);
  MakeDecision->Register(&MakeDecision_Mobius_Mark);

}

bool AttackModelADVISE::CyberAttackFailureStep::Enabled() {
  OldEnabled = NewEnabled;
  NewEnabled = (((*(CyberAttackChosen_Mobius_Mark)) >= 1));
  return NewEnabled;
}

double AttackModelADVISE::CyberAttackFailureStep::timeDistributionParameter0() {
return 30-Hacker->Mark()*25/1000;
}

double AttackModelADVISE::CyberAttackFailureStep::Weight() {
return 0.3;
}

bool AttackModelADVISE::CyberAttackFailureStep::ReactivationPredicate() {
  return false;
}

bool AttackModelADVISE::CyberAttackFailureStep::ReactivationFunction() {
  return false;
}

double AttackModelADVISE::CyberAttackFailureStep::SampleDistribution() {
  return TheDistribution->Deterministic(timeDistributionParameter0());
}

double *AttackModelADVISE::CyberAttackFailureStep::ReturnDistributionParameters() {
  TheDistributionParameters[0] = timeDistributionParameter0();
  return TheDistributionParameters;
}

int AttackModelADVISE::CyberAttackFailureStep::Rank() {
  return 1;
}

bool AttackModelADVISE::CyberAttackFailureStep::preconditionsMet() {
return(!BackDoor->Mark()&&CyberVulnerability->Mark()&&Hacker->Mark()>600);
  return true;
}

void AttackModelADVISE::CyberAttackFailureStep::executeEffects() {

}

double AttackModelADVISE::CyberAttackFailureStep::getCost() {
return 20;
}

double AttackModelADVISE::CyberAttackFailureStep::getOutcomeProbability() {
return 0.3;
}

double AttackModelADVISE::CyberAttackFailureStep::getDetection() {
return 0.7;
}

/*====================== CyberAttackSuccessStep ========================*/

AttackModelADVISE::CyberAttackSuccessStep::CyberAttackSuccessStep() {
  TheDistributionParameters = new double[1];
  commonInit("CyberAttackSuccessStep", 12, Deterministic, RaceEnabled, 18, 1, false);}

AttackModelADVISE::CyberAttackSuccessStep::~CyberAttackSuccessStep() {
  delete[] TheDistributionParameters;
}

void AttackModelADVISE::CyberAttackSuccessStep::LinkVariables() {
  BackDoor->Register(&BackDoor_Mobius_Mark);
  CyberVulnerability->Register(&CyberVulnerability_Mobius_Mark);
  Hacker->Register(&Hacker_Mobius_Mark);
  CyberAttackChosen->Register(&CyberAttackChosen_Mobius_Mark);
  GetAccessToAlarmsWeight->Register(&GetAccessToAlarmsWeight_Mobius_Mark);
  TransferCustomerMoneyWeight->Register(&TransferCustomerMoneyWeight_Mobius_Mark);
  GetAccessToCamerasWeight->Register(&GetAccessToCamerasWeight_Mobius_Mark);
  DoNothingWeight->Register(&DoNothingWeight_Mobius_Mark);
  TransferBankMoneyWeight->Register(&TransferBankMoneyWeight_Mobius_Mark);
  PhishingWeight->Register(&PhishingWeight_Mobius_Mark);
  FindSecureAccessWeight->Register(&FindSecureAccessWeight_Mobius_Mark);
  GetDirectorCredentialsWeight->Register(&GetDirectorCredentialsWeight_Mobius_Mark);
  StudySecurityRoutinesWeight->Register(&StudySecurityRoutinesWeight_Mobius_Mark);
  GetSafeCombinationWeight->Register(&GetSafeCombinationWeight_Mobius_Mark);
  InfectTheSystemWeight->Register(&InfectTheSystemWeight_Mobius_Mark);
  SafeBreakWeight->Register(&SafeBreakWeight_Mobius_Mark);
  CyberAttackWeight->Register(&CyberAttackWeight_Mobius_Mark);
  MakeDecision->Register(&MakeDecision_Mobius_Mark);

}

bool AttackModelADVISE::CyberAttackSuccessStep::Enabled() {
  OldEnabled = NewEnabled;
  NewEnabled = (((*(CyberAttackChosen_Mobius_Mark)) >= 1));
  return NewEnabled;
}

double AttackModelADVISE::CyberAttackSuccessStep::timeDistributionParameter0() {
return 30-Hacker->Mark()*25/1000;
}

double AttackModelADVISE::CyberAttackSuccessStep::Weight() {
return 0.70;
}

bool AttackModelADVISE::CyberAttackSuccessStep::ReactivationPredicate() {
  return false;
}

bool AttackModelADVISE::CyberAttackSuccessStep::ReactivationFunction() {
  return false;
}

double AttackModelADVISE::CyberAttackSuccessStep::SampleDistribution() {
  return TheDistribution->Deterministic(timeDistributionParameter0());
}

double *AttackModelADVISE::CyberAttackSuccessStep::ReturnDistributionParameters() {
  TheDistributionParameters[0] = timeDistributionParameter0();
  return TheDistributionParameters;
}

int AttackModelADVISE::CyberAttackSuccessStep::Rank() {
  return 1;
}

bool AttackModelADVISE::CyberAttackSuccessStep::preconditionsMet() {
return(!BackDoor->Mark()&&CyberVulnerability->Mark()&&Hacker->Mark()>600);
  return true;
}

void AttackModelADVISE::CyberAttackSuccessStep::executeEffects() {
BackDoor->Mark()=true;
}

double AttackModelADVISE::CyberAttackSuccessStep::getCost() {
return 20;
}

double AttackModelADVISE::CyberAttackSuccessStep::getOutcomeProbability() {
return 0.70;
}

double AttackModelADVISE::CyberAttackSuccessStep::getDetection() {
return 0.15;
}

/*****************************************************************/
/*                   Adversary Decisions                         */
/*****************************************************************/

/*====================== GetAccessToAlarmsAdversaryDecision ========================*/

AttackModelADVISE::GetAccessToAlarmsAdversaryDecision::GetAccessToAlarmsAdversaryDecision() {
  commonInit("GetAccessToAlarmsAdversaryDecision", 13, Instantaneous, RaceEnabled, 2, 1, false);
}

AttackModelADVISE::GetAccessToAlarmsAdversaryDecision::~GetAccessToAlarmsAdversaryDecision() {
}

void AttackModelADVISE::GetAccessToAlarmsAdversaryDecision::LinkVariables() {
  MakeDecision->Register(&MakeDecision_Mobius_Mark);
  GetAccessToAlarmsChosen->Register(&GetAccessToAlarmsChosen_Mobius_Mark);
  GetAccessToAlarmsWeight->Register(&GetAccessToAlarmsWeight_Mobius_Mark);
}

bool AttackModelADVISE::GetAccessToAlarmsAdversaryDecision::Enabled() {
  OldEnabled = NewEnabled;
  NewEnabled = (((*(MakeDecision_Mobius_Mark)) >= 1));
  return NewEnabled;
}

double AttackModelADVISE::GetAccessToAlarmsAdversaryDecision::Weight() {
  return GetAccessToAlarmsWeight->Mark();
}

bool AttackModelADVISE::GetAccessToAlarmsAdversaryDecision::ReactivationPredicate() {
  return false;
}

bool AttackModelADVISE::GetAccessToAlarmsAdversaryDecision::ReactivationFunction() {
  return false;
}

double AttackModelADVISE::GetAccessToAlarmsAdversaryDecision::SampleDistribution() {
  return 0;
}

double* AttackModelADVISE::GetAccessToAlarmsAdversaryDecision::ReturnDistributionParameters() {
  return NULL;
}

int AttackModelADVISE::GetAccessToAlarmsAdversaryDecision::Rank() {
  return 1;
}

BaseActionClass* AttackModelADVISE::GetAccessToAlarmsAdversaryDecision::Fire() {
  (*(MakeDecision_Mobius_Mark))--;
  (*(GetAccessToAlarmsWeight_Mobius_Mark))--;
  (*(GetAccessToAlarmsChosen_Mobius_Mark))++;
  return this;
}

/*====================== TransferCustomerMoneyAdversaryDecision ========================*/

AttackModelADVISE::TransferCustomerMoneyAdversaryDecision::TransferCustomerMoneyAdversaryDecision() {
  commonInit("TransferCustomerMoneyAdversaryDecision", 13, Instantaneous, RaceEnabled, 2, 1, false);
}

AttackModelADVISE::TransferCustomerMoneyAdversaryDecision::~TransferCustomerMoneyAdversaryDecision() {
}

void AttackModelADVISE::TransferCustomerMoneyAdversaryDecision::LinkVariables() {
  MakeDecision->Register(&MakeDecision_Mobius_Mark);
  TransferCustomerMoneyChosen->Register(&TransferCustomerMoneyChosen_Mobius_Mark);
  TransferCustomerMoneyWeight->Register(&TransferCustomerMoneyWeight_Mobius_Mark);
}

bool AttackModelADVISE::TransferCustomerMoneyAdversaryDecision::Enabled() {
  OldEnabled = NewEnabled;
  NewEnabled = (((*(MakeDecision_Mobius_Mark)) >= 1));
  return NewEnabled;
}

double AttackModelADVISE::TransferCustomerMoneyAdversaryDecision::Weight() {
  return TransferCustomerMoneyWeight->Mark();
}

bool AttackModelADVISE::TransferCustomerMoneyAdversaryDecision::ReactivationPredicate() {
  return false;
}

bool AttackModelADVISE::TransferCustomerMoneyAdversaryDecision::ReactivationFunction() {
  return false;
}

double AttackModelADVISE::TransferCustomerMoneyAdversaryDecision::SampleDistribution() {
  return 0;
}

double* AttackModelADVISE::TransferCustomerMoneyAdversaryDecision::ReturnDistributionParameters() {
  return NULL;
}

int AttackModelADVISE::TransferCustomerMoneyAdversaryDecision::Rank() {
  return 1;
}

BaseActionClass* AttackModelADVISE::TransferCustomerMoneyAdversaryDecision::Fire() {
  (*(MakeDecision_Mobius_Mark))--;
  (*(TransferCustomerMoneyWeight_Mobius_Mark))--;
  (*(TransferCustomerMoneyChosen_Mobius_Mark))++;
  return this;
}

/*====================== GetAccessToCamerasAdversaryDecision ========================*/

AttackModelADVISE::GetAccessToCamerasAdversaryDecision::GetAccessToCamerasAdversaryDecision() {
  commonInit("GetAccessToCamerasAdversaryDecision", 13, Instantaneous, RaceEnabled, 2, 1, false);
}

AttackModelADVISE::GetAccessToCamerasAdversaryDecision::~GetAccessToCamerasAdversaryDecision() {
}

void AttackModelADVISE::GetAccessToCamerasAdversaryDecision::LinkVariables() {
  MakeDecision->Register(&MakeDecision_Mobius_Mark);
  GetAccessToCamerasChosen->Register(&GetAccessToCamerasChosen_Mobius_Mark);
  GetAccessToCamerasWeight->Register(&GetAccessToCamerasWeight_Mobius_Mark);
}

bool AttackModelADVISE::GetAccessToCamerasAdversaryDecision::Enabled() {
  OldEnabled = NewEnabled;
  NewEnabled = (((*(MakeDecision_Mobius_Mark)) >= 1));
  return NewEnabled;
}

double AttackModelADVISE::GetAccessToCamerasAdversaryDecision::Weight() {
  return GetAccessToCamerasWeight->Mark();
}

bool AttackModelADVISE::GetAccessToCamerasAdversaryDecision::ReactivationPredicate() {
  return false;
}

bool AttackModelADVISE::GetAccessToCamerasAdversaryDecision::ReactivationFunction() {
  return false;
}

double AttackModelADVISE::GetAccessToCamerasAdversaryDecision::SampleDistribution() {
  return 0;
}

double* AttackModelADVISE::GetAccessToCamerasAdversaryDecision::ReturnDistributionParameters() {
  return NULL;
}

int AttackModelADVISE::GetAccessToCamerasAdversaryDecision::Rank() {
  return 1;
}

BaseActionClass* AttackModelADVISE::GetAccessToCamerasAdversaryDecision::Fire() {
  (*(MakeDecision_Mobius_Mark))--;
  (*(GetAccessToCamerasWeight_Mobius_Mark))--;
  (*(GetAccessToCamerasChosen_Mobius_Mark))++;
  return this;
}

/*====================== DoNothingAdversaryDecision ========================*/

AttackModelADVISE::DoNothingAdversaryDecision::DoNothingAdversaryDecision() {
  commonInit("DoNothingAdversaryDecision", 13, Instantaneous, RaceEnabled, 2, 1, false);
}

AttackModelADVISE::DoNothingAdversaryDecision::~DoNothingAdversaryDecision() {
}

void AttackModelADVISE::DoNothingAdversaryDecision::LinkVariables() {
  MakeDecision->Register(&MakeDecision_Mobius_Mark);
  DoNothingChosen->Register(&DoNothingChosen_Mobius_Mark);
  DoNothingWeight->Register(&DoNothingWeight_Mobius_Mark);
}

bool AttackModelADVISE::DoNothingAdversaryDecision::Enabled() {
  OldEnabled = NewEnabled;
  NewEnabled = (((*(MakeDecision_Mobius_Mark)) >= 1));
  return NewEnabled;
}

double AttackModelADVISE::DoNothingAdversaryDecision::Weight() {
  return DoNothingWeight->Mark();
}

bool AttackModelADVISE::DoNothingAdversaryDecision::ReactivationPredicate() {
  return false;
}

bool AttackModelADVISE::DoNothingAdversaryDecision::ReactivationFunction() {
  return false;
}

double AttackModelADVISE::DoNothingAdversaryDecision::SampleDistribution() {
  return 0;
}

double* AttackModelADVISE::DoNothingAdversaryDecision::ReturnDistributionParameters() {
  return NULL;
}

int AttackModelADVISE::DoNothingAdversaryDecision::Rank() {
  return 1;
}

BaseActionClass* AttackModelADVISE::DoNothingAdversaryDecision::Fire() {
  (*(MakeDecision_Mobius_Mark))--;
  (*(DoNothingWeight_Mobius_Mark))--;
  (*(DoNothingChosen_Mobius_Mark))++;
  return this;
}

/*====================== TransferBankMoneyAdversaryDecision ========================*/

AttackModelADVISE::TransferBankMoneyAdversaryDecision::TransferBankMoneyAdversaryDecision() {
  commonInit("TransferBankMoneyAdversaryDecision", 13, Instantaneous, RaceEnabled, 2, 1, false);
}

AttackModelADVISE::TransferBankMoneyAdversaryDecision::~TransferBankMoneyAdversaryDecision() {
}

void AttackModelADVISE::TransferBankMoneyAdversaryDecision::LinkVariables() {
  MakeDecision->Register(&MakeDecision_Mobius_Mark);
  TransferBankMoneyChosen->Register(&TransferBankMoneyChosen_Mobius_Mark);
  TransferBankMoneyWeight->Register(&TransferBankMoneyWeight_Mobius_Mark);
}

bool AttackModelADVISE::TransferBankMoneyAdversaryDecision::Enabled() {
  OldEnabled = NewEnabled;
  NewEnabled = (((*(MakeDecision_Mobius_Mark)) >= 1));
  return NewEnabled;
}

double AttackModelADVISE::TransferBankMoneyAdversaryDecision::Weight() {
  return TransferBankMoneyWeight->Mark();
}

bool AttackModelADVISE::TransferBankMoneyAdversaryDecision::ReactivationPredicate() {
  return false;
}

bool AttackModelADVISE::TransferBankMoneyAdversaryDecision::ReactivationFunction() {
  return false;
}

double AttackModelADVISE::TransferBankMoneyAdversaryDecision::SampleDistribution() {
  return 0;
}

double* AttackModelADVISE::TransferBankMoneyAdversaryDecision::ReturnDistributionParameters() {
  return NULL;
}

int AttackModelADVISE::TransferBankMoneyAdversaryDecision::Rank() {
  return 1;
}

BaseActionClass* AttackModelADVISE::TransferBankMoneyAdversaryDecision::Fire() {
  (*(MakeDecision_Mobius_Mark))--;
  (*(TransferBankMoneyWeight_Mobius_Mark))--;
  (*(TransferBankMoneyChosen_Mobius_Mark))++;
  return this;
}

/*====================== PhishingAdversaryDecision ========================*/

AttackModelADVISE::PhishingAdversaryDecision::PhishingAdversaryDecision() {
  commonInit("PhishingAdversaryDecision", 13, Instantaneous, RaceEnabled, 2, 1, false);
}

AttackModelADVISE::PhishingAdversaryDecision::~PhishingAdversaryDecision() {
}

void AttackModelADVISE::PhishingAdversaryDecision::LinkVariables() {
  MakeDecision->Register(&MakeDecision_Mobius_Mark);
  PhishingChosen->Register(&PhishingChosen_Mobius_Mark);
  PhishingWeight->Register(&PhishingWeight_Mobius_Mark);
}

bool AttackModelADVISE::PhishingAdversaryDecision::Enabled() {
  OldEnabled = NewEnabled;
  NewEnabled = (((*(MakeDecision_Mobius_Mark)) >= 1));
  return NewEnabled;
}

double AttackModelADVISE::PhishingAdversaryDecision::Weight() {
  return PhishingWeight->Mark();
}

bool AttackModelADVISE::PhishingAdversaryDecision::ReactivationPredicate() {
  return false;
}

bool AttackModelADVISE::PhishingAdversaryDecision::ReactivationFunction() {
  return false;
}

double AttackModelADVISE::PhishingAdversaryDecision::SampleDistribution() {
  return 0;
}

double* AttackModelADVISE::PhishingAdversaryDecision::ReturnDistributionParameters() {
  return NULL;
}

int AttackModelADVISE::PhishingAdversaryDecision::Rank() {
  return 1;
}

BaseActionClass* AttackModelADVISE::PhishingAdversaryDecision::Fire() {
  (*(MakeDecision_Mobius_Mark))--;
  (*(PhishingWeight_Mobius_Mark))--;
  (*(PhishingChosen_Mobius_Mark))++;
  return this;
}

/*====================== FindSecureAccessAdversaryDecision ========================*/

AttackModelADVISE::FindSecureAccessAdversaryDecision::FindSecureAccessAdversaryDecision() {
  commonInit("FindSecureAccessAdversaryDecision", 13, Instantaneous, RaceEnabled, 2, 1, false);
}

AttackModelADVISE::FindSecureAccessAdversaryDecision::~FindSecureAccessAdversaryDecision() {
}

void AttackModelADVISE::FindSecureAccessAdversaryDecision::LinkVariables() {
  MakeDecision->Register(&MakeDecision_Mobius_Mark);
  FindSecureAccessChosen->Register(&FindSecureAccessChosen_Mobius_Mark);
  FindSecureAccessWeight->Register(&FindSecureAccessWeight_Mobius_Mark);
}

bool AttackModelADVISE::FindSecureAccessAdversaryDecision::Enabled() {
  OldEnabled = NewEnabled;
  NewEnabled = (((*(MakeDecision_Mobius_Mark)) >= 1));
  return NewEnabled;
}

double AttackModelADVISE::FindSecureAccessAdversaryDecision::Weight() {
  return FindSecureAccessWeight->Mark();
}

bool AttackModelADVISE::FindSecureAccessAdversaryDecision::ReactivationPredicate() {
  return false;
}

bool AttackModelADVISE::FindSecureAccessAdversaryDecision::ReactivationFunction() {
  return false;
}

double AttackModelADVISE::FindSecureAccessAdversaryDecision::SampleDistribution() {
  return 0;
}

double* AttackModelADVISE::FindSecureAccessAdversaryDecision::ReturnDistributionParameters() {
  return NULL;
}

int AttackModelADVISE::FindSecureAccessAdversaryDecision::Rank() {
  return 1;
}

BaseActionClass* AttackModelADVISE::FindSecureAccessAdversaryDecision::Fire() {
  (*(MakeDecision_Mobius_Mark))--;
  (*(FindSecureAccessWeight_Mobius_Mark))--;
  (*(FindSecureAccessChosen_Mobius_Mark))++;
  return this;
}

/*====================== GetDirectorCredentialsAdversaryDecision ========================*/

AttackModelADVISE::GetDirectorCredentialsAdversaryDecision::GetDirectorCredentialsAdversaryDecision() {
  commonInit("GetDirectorCredentialsAdversaryDecision", 13, Instantaneous, RaceEnabled, 2, 1, false);
}

AttackModelADVISE::GetDirectorCredentialsAdversaryDecision::~GetDirectorCredentialsAdversaryDecision() {
}

void AttackModelADVISE::GetDirectorCredentialsAdversaryDecision::LinkVariables() {
  MakeDecision->Register(&MakeDecision_Mobius_Mark);
  GetDirectorCredentialsChosen->Register(&GetDirectorCredentialsChosen_Mobius_Mark);
  GetDirectorCredentialsWeight->Register(&GetDirectorCredentialsWeight_Mobius_Mark);
}

bool AttackModelADVISE::GetDirectorCredentialsAdversaryDecision::Enabled() {
  OldEnabled = NewEnabled;
  NewEnabled = (((*(MakeDecision_Mobius_Mark)) >= 1));
  return NewEnabled;
}

double AttackModelADVISE::GetDirectorCredentialsAdversaryDecision::Weight() {
  return GetDirectorCredentialsWeight->Mark();
}

bool AttackModelADVISE::GetDirectorCredentialsAdversaryDecision::ReactivationPredicate() {
  return false;
}

bool AttackModelADVISE::GetDirectorCredentialsAdversaryDecision::ReactivationFunction() {
  return false;
}

double AttackModelADVISE::GetDirectorCredentialsAdversaryDecision::SampleDistribution() {
  return 0;
}

double* AttackModelADVISE::GetDirectorCredentialsAdversaryDecision::ReturnDistributionParameters() {
  return NULL;
}

int AttackModelADVISE::GetDirectorCredentialsAdversaryDecision::Rank() {
  return 1;
}

BaseActionClass* AttackModelADVISE::GetDirectorCredentialsAdversaryDecision::Fire() {
  (*(MakeDecision_Mobius_Mark))--;
  (*(GetDirectorCredentialsWeight_Mobius_Mark))--;
  (*(GetDirectorCredentialsChosen_Mobius_Mark))++;
  return this;
}

/*====================== StudySecurityRoutinesAdversaryDecision ========================*/

AttackModelADVISE::StudySecurityRoutinesAdversaryDecision::StudySecurityRoutinesAdversaryDecision() {
  commonInit("StudySecurityRoutinesAdversaryDecision", 13, Instantaneous, RaceEnabled, 2, 1, false);
}

AttackModelADVISE::StudySecurityRoutinesAdversaryDecision::~StudySecurityRoutinesAdversaryDecision() {
}

void AttackModelADVISE::StudySecurityRoutinesAdversaryDecision::LinkVariables() {
  MakeDecision->Register(&MakeDecision_Mobius_Mark);
  StudySecurityRoutinesChosen->Register(&StudySecurityRoutinesChosen_Mobius_Mark);
  StudySecurityRoutinesWeight->Register(&StudySecurityRoutinesWeight_Mobius_Mark);
}

bool AttackModelADVISE::StudySecurityRoutinesAdversaryDecision::Enabled() {
  OldEnabled = NewEnabled;
  NewEnabled = (((*(MakeDecision_Mobius_Mark)) >= 1));
  return NewEnabled;
}

double AttackModelADVISE::StudySecurityRoutinesAdversaryDecision::Weight() {
  return StudySecurityRoutinesWeight->Mark();
}

bool AttackModelADVISE::StudySecurityRoutinesAdversaryDecision::ReactivationPredicate() {
  return false;
}

bool AttackModelADVISE::StudySecurityRoutinesAdversaryDecision::ReactivationFunction() {
  return false;
}

double AttackModelADVISE::StudySecurityRoutinesAdversaryDecision::SampleDistribution() {
  return 0;
}

double* AttackModelADVISE::StudySecurityRoutinesAdversaryDecision::ReturnDistributionParameters() {
  return NULL;
}

int AttackModelADVISE::StudySecurityRoutinesAdversaryDecision::Rank() {
  return 1;
}

BaseActionClass* AttackModelADVISE::StudySecurityRoutinesAdversaryDecision::Fire() {
  (*(MakeDecision_Mobius_Mark))--;
  (*(StudySecurityRoutinesWeight_Mobius_Mark))--;
  (*(StudySecurityRoutinesChosen_Mobius_Mark))++;
  return this;
}

/*====================== GetSafeCombinationAdversaryDecision ========================*/

AttackModelADVISE::GetSafeCombinationAdversaryDecision::GetSafeCombinationAdversaryDecision() {
  commonInit("GetSafeCombinationAdversaryDecision", 13, Instantaneous, RaceEnabled, 2, 1, false);
}

AttackModelADVISE::GetSafeCombinationAdversaryDecision::~GetSafeCombinationAdversaryDecision() {
}

void AttackModelADVISE::GetSafeCombinationAdversaryDecision::LinkVariables() {
  MakeDecision->Register(&MakeDecision_Mobius_Mark);
  GetSafeCombinationChosen->Register(&GetSafeCombinationChosen_Mobius_Mark);
  GetSafeCombinationWeight->Register(&GetSafeCombinationWeight_Mobius_Mark);
}

bool AttackModelADVISE::GetSafeCombinationAdversaryDecision::Enabled() {
  OldEnabled = NewEnabled;
  NewEnabled = (((*(MakeDecision_Mobius_Mark)) >= 1));
  return NewEnabled;
}

double AttackModelADVISE::GetSafeCombinationAdversaryDecision::Weight() {
  return GetSafeCombinationWeight->Mark();
}

bool AttackModelADVISE::GetSafeCombinationAdversaryDecision::ReactivationPredicate() {
  return false;
}

bool AttackModelADVISE::GetSafeCombinationAdversaryDecision::ReactivationFunction() {
  return false;
}

double AttackModelADVISE::GetSafeCombinationAdversaryDecision::SampleDistribution() {
  return 0;
}

double* AttackModelADVISE::GetSafeCombinationAdversaryDecision::ReturnDistributionParameters() {
  return NULL;
}

int AttackModelADVISE::GetSafeCombinationAdversaryDecision::Rank() {
  return 1;
}

BaseActionClass* AttackModelADVISE::GetSafeCombinationAdversaryDecision::Fire() {
  (*(MakeDecision_Mobius_Mark))--;
  (*(GetSafeCombinationWeight_Mobius_Mark))--;
  (*(GetSafeCombinationChosen_Mobius_Mark))++;
  return this;
}

/*====================== InfectTheSystemAdversaryDecision ========================*/

AttackModelADVISE::InfectTheSystemAdversaryDecision::InfectTheSystemAdversaryDecision() {
  commonInit("InfectTheSystemAdversaryDecision", 13, Instantaneous, RaceEnabled, 2, 1, false);
}

AttackModelADVISE::InfectTheSystemAdversaryDecision::~InfectTheSystemAdversaryDecision() {
}

void AttackModelADVISE::InfectTheSystemAdversaryDecision::LinkVariables() {
  MakeDecision->Register(&MakeDecision_Mobius_Mark);
  InfectTheSystemChosen->Register(&InfectTheSystemChosen_Mobius_Mark);
  InfectTheSystemWeight->Register(&InfectTheSystemWeight_Mobius_Mark);
}

bool AttackModelADVISE::InfectTheSystemAdversaryDecision::Enabled() {
  OldEnabled = NewEnabled;
  NewEnabled = (((*(MakeDecision_Mobius_Mark)) >= 1));
  return NewEnabled;
}

double AttackModelADVISE::InfectTheSystemAdversaryDecision::Weight() {
  return InfectTheSystemWeight->Mark();
}

bool AttackModelADVISE::InfectTheSystemAdversaryDecision::ReactivationPredicate() {
  return false;
}

bool AttackModelADVISE::InfectTheSystemAdversaryDecision::ReactivationFunction() {
  return false;
}

double AttackModelADVISE::InfectTheSystemAdversaryDecision::SampleDistribution() {
  return 0;
}

double* AttackModelADVISE::InfectTheSystemAdversaryDecision::ReturnDistributionParameters() {
  return NULL;
}

int AttackModelADVISE::InfectTheSystemAdversaryDecision::Rank() {
  return 1;
}

BaseActionClass* AttackModelADVISE::InfectTheSystemAdversaryDecision::Fire() {
  (*(MakeDecision_Mobius_Mark))--;
  (*(InfectTheSystemWeight_Mobius_Mark))--;
  (*(InfectTheSystemChosen_Mobius_Mark))++;
  return this;
}

/*====================== SafeBreakAdversaryDecision ========================*/

AttackModelADVISE::SafeBreakAdversaryDecision::SafeBreakAdversaryDecision() {
  commonInit("SafeBreakAdversaryDecision", 13, Instantaneous, RaceEnabled, 2, 1, false);
}

AttackModelADVISE::SafeBreakAdversaryDecision::~SafeBreakAdversaryDecision() {
}

void AttackModelADVISE::SafeBreakAdversaryDecision::LinkVariables() {
  MakeDecision->Register(&MakeDecision_Mobius_Mark);
  SafeBreakChosen->Register(&SafeBreakChosen_Mobius_Mark);
  SafeBreakWeight->Register(&SafeBreakWeight_Mobius_Mark);
}

bool AttackModelADVISE::SafeBreakAdversaryDecision::Enabled() {
  OldEnabled = NewEnabled;
  NewEnabled = (((*(MakeDecision_Mobius_Mark)) >= 1));
  return NewEnabled;
}

double AttackModelADVISE::SafeBreakAdversaryDecision::Weight() {
  return SafeBreakWeight->Mark();
}

bool AttackModelADVISE::SafeBreakAdversaryDecision::ReactivationPredicate() {
  return false;
}

bool AttackModelADVISE::SafeBreakAdversaryDecision::ReactivationFunction() {
  return false;
}

double AttackModelADVISE::SafeBreakAdversaryDecision::SampleDistribution() {
  return 0;
}

double* AttackModelADVISE::SafeBreakAdversaryDecision::ReturnDistributionParameters() {
  return NULL;
}

int AttackModelADVISE::SafeBreakAdversaryDecision::Rank() {
  return 1;
}

BaseActionClass* AttackModelADVISE::SafeBreakAdversaryDecision::Fire() {
  (*(MakeDecision_Mobius_Mark))--;
  (*(SafeBreakWeight_Mobius_Mark))--;
  (*(SafeBreakChosen_Mobius_Mark))++;
  return this;
}

/*====================== CyberAttackAdversaryDecision ========================*/

AttackModelADVISE::CyberAttackAdversaryDecision::CyberAttackAdversaryDecision() {
  commonInit("CyberAttackAdversaryDecision", 13, Instantaneous, RaceEnabled, 2, 1, false);
}

AttackModelADVISE::CyberAttackAdversaryDecision::~CyberAttackAdversaryDecision() {
}

void AttackModelADVISE::CyberAttackAdversaryDecision::LinkVariables() {
  MakeDecision->Register(&MakeDecision_Mobius_Mark);
  CyberAttackChosen->Register(&CyberAttackChosen_Mobius_Mark);
  CyberAttackWeight->Register(&CyberAttackWeight_Mobius_Mark);
}

bool AttackModelADVISE::CyberAttackAdversaryDecision::Enabled() {
  OldEnabled = NewEnabled;
  NewEnabled = (((*(MakeDecision_Mobius_Mark)) >= 1));
  return NewEnabled;
}

double AttackModelADVISE::CyberAttackAdversaryDecision::Weight() {
  return CyberAttackWeight->Mark();
}

bool AttackModelADVISE::CyberAttackAdversaryDecision::ReactivationPredicate() {
  return false;
}

bool AttackModelADVISE::CyberAttackAdversaryDecision::ReactivationFunction() {
  return false;
}

double AttackModelADVISE::CyberAttackAdversaryDecision::SampleDistribution() {
  return 0;
}

double* AttackModelADVISE::CyberAttackAdversaryDecision::ReturnDistributionParameters() {
  return NULL;
}

int AttackModelADVISE::CyberAttackAdversaryDecision::Rank() {
  return 1;
}

BaseActionClass* AttackModelADVISE::CyberAttackAdversaryDecision::Fire() {
  (*(MakeDecision_Mobius_Mark))--;
  (*(CyberAttackWeight_Mobius_Mark))--;
  (*(CyberAttackChosen_Mobius_Mark))++;
  return this;
}

