
#include "Atomic/AttackModel/AttackModelADVISE.h"
#include <stdlib.h>
#include <iostream>
#include <math.h>


AttackModelADVISE::AttackModelADVISE() {
  DoNothingAD.setParent(this);
  FindSecureAccessAD.setParent(this);
  SafeBreakAD.setParent(this);
  GetAccessToCamerasAD.setParent(this);
  StudySecurityRoutinesAD.setParent(this);
  GetAccessToAlarmsAD.setParent(this);
  DoNothingOutcome1.setParent(this);
  FindSecureAccessFailure.setParent(this);
  FindSecureAccessSuccess.setParent(this);
  FindSecureAccessFailureCameraAccessFound.setParent(this);
  SafeBreakFailure.setParent(this);
  SafeBreakSuccess.setParent(this);
  GetAccessToCamerasFailure.setParent(this);
  GetAccessToCamerasSuccess.setParent(this);
  StudySecurityRoutinesFailure.setParent(this);
  StudySecurityRoutinesSuccess.setParent(this);
  StudySecurityRoutinesFailureCameraAccessFound.setParent(this);
  GetAccessToAlarmsFailure.setParent(this);
  GetAccessToAlarmsSuccessIWannaDiscredit.setParent(this);
  FindSecureAccessGroup.initialize(3, "FindSecureAccessGroup");
  FindSecureAccessGroup.appendGroup((BaseGroupClass*) &FindSecureAccessFailure);
  FindSecureAccessGroup.appendGroup((BaseGroupClass*) &FindSecureAccessSuccess);
  FindSecureAccessGroup.appendGroup((BaseGroupClass*) &FindSecureAccessFailureCameraAccessFound);

  SafeBreakGroup.initialize(2, "SafeBreakGroup");
  SafeBreakGroup.appendGroup((BaseGroupClass*) &SafeBreakFailure);
  SafeBreakGroup.appendGroup((BaseGroupClass*) &SafeBreakSuccess);

  GetAccessToCamerasGroup.initialize(2, "GetAccessToCamerasGroup");
  GetAccessToCamerasGroup.appendGroup((BaseGroupClass*) &GetAccessToCamerasFailure);
  GetAccessToCamerasGroup.appendGroup((BaseGroupClass*) &GetAccessToCamerasSuccess);

  StudySecurityRoutinesGroup.initialize(3, "StudySecurityRoutinesGroup");
  StudySecurityRoutinesGroup.appendGroup((BaseGroupClass*) &StudySecurityRoutinesFailure);
  StudySecurityRoutinesGroup.appendGroup((BaseGroupClass*) &StudySecurityRoutinesSuccess);
  StudySecurityRoutinesGroup.appendGroup((BaseGroupClass*) &StudySecurityRoutinesFailureCameraAccessFound);

  GetAccessToAlarmsGroup.initialize(2, "GetAccessToAlarmsGroup");
  GetAccessToAlarmsGroup.appendGroup((BaseGroupClass*) &GetAccessToAlarmsFailure);
  GetAccessToAlarmsGroup.appendGroup((BaseGroupClass*) &GetAccessToAlarmsSuccessIWannaDiscredit);

  AdversaryDecisionGroup.initialize(6, "AdversaryDecisionGroup");
  AdversaryDecisionGroup.appendGroup((BaseGroupClass*) &DoNothingAD);
  AdversaryDecisionGroup.appendGroup((BaseGroupClass*) &FindSecureAccessAD);
  AdversaryDecisionGroup.appendGroup((BaseGroupClass*) &SafeBreakAD);
  AdversaryDecisionGroup.appendGroup((BaseGroupClass*) &GetAccessToCamerasAD);
  AdversaryDecisionGroup.appendGroup((BaseGroupClass*) &StudySecurityRoutinesAD);
  AdversaryDecisionGroup.appendGroup((BaseGroupClass*) &GetAccessToAlarmsAD);

  BaseADVISEAction* InitialActions[19] = {
    &DoNothingAD, // 0
    &FindSecureAccessAD, // 1
    &SafeBreakAD, // 2
    &GetAccessToCamerasAD, // 3
    &StudySecurityRoutinesAD, // 4
    &GetAccessToAlarmsAD, // 5
    &DoNothingOutcome1, // 6
    &FindSecureAccessFailure, // 7
    &FindSecureAccessSuccess, // 8
    &FindSecureAccessFailureCameraAccessFound, // 9
    &SafeBreakFailure, // 10
    &SafeBreakSuccess, // 11
    &GetAccessToCamerasFailure, // 12
    &GetAccessToCamerasSuccess, // 13
    &StudySecurityRoutinesFailure, // 14
    &StudySecurityRoutinesSuccess, // 15
    &StudySecurityRoutinesFailureCameraAccessFound, // 16
    &GetAccessToAlarmsFailure, // 17
    &GetAccessToAlarmsSuccessIWannaDiscredit // 18
  };

  Step* InitialSteps[13] = {
      &DoNothingOutcome1,
      &FindSecureAccessFailure,
      &FindSecureAccessSuccess,
      &FindSecureAccessFailureCameraAccessFound,
      &SafeBreakFailure,
      &SafeBreakSuccess,
      &GetAccessToCamerasFailure,
      &GetAccessToCamerasSuccess,
      &StudySecurityRoutinesFailure,
      &StudySecurityRoutinesSuccess,
      &StudySecurityRoutinesFailureCameraAccessFound,
      &GetAccessToAlarmsFailure,
      &GetAccessToAlarmsSuccessIWannaDiscredit
  };

  BaseGroupClass* InitialGroups[7] = {
    (BaseGroupClass*) &DoNothingOutcome1, // 0
    (BaseGroupClass*) &FindSecureAccessGroup, // 1
    (BaseGroupClass*) &SafeBreakGroup, // 2
    (BaseGroupClass*) &GetAccessToCamerasGroup, // 3
    (BaseGroupClass*) &StudySecurityRoutinesGroup, // 4
    (BaseGroupClass*) &GetAccessToAlarmsGroup, // 5
    (BaseGroupClass*) &AdversaryDecisionGroup
  };

  SecurePath = new Access("SecurePath", 0);
  CamerasControl = new Access("CamerasControl", 0);
  PhisicalAccess = new Access("PhisicalAccess", securityComponentsAccess);
  AlarmsControl = new Access("AlarmsControl", 0);
  SecurityRoutines = new Knowledge("SecurityRoutines", 0);
  SecVulnerabilities = new Knowledge("SecVulnerabilities", secVulnerabilitiesKnowledge);
  SafeCombination = new Knowledge("SafeCombination", safeCombinationKnowledge);
  Stealth = new Skill("Stealth", stealthSkill);
  Hacker = new Skill("Hacker", hackerSkill);
  Breaker = new Skill("Breaker", breakerSkill);
  Money = new Goal("Money", 0);
  Money->setPayoff(3000);
  MakeDecision = new BeginAdversaryDecision("MakeDecision", 0);
  DoNothingWeight = new StepWeight("DoNothingWeight", 0);
  DoNothingChosen = new StepChosen("DoNothingChosen", 0);
  FindSecureAccessWeight = new StepWeight("FindSecureAccessWeight", 0);
  FindSecureAccessChosen = new StepChosen("FindSecureAccessChosen", 0);
  SafeBreakWeight = new StepWeight("SafeBreakWeight", 0);
  SafeBreakChosen = new StepChosen("SafeBreakChosen", 0);
  GetAccessToCamerasWeight = new StepWeight("GetAccessToCamerasWeight", 0);
  GetAccessToCamerasChosen = new StepChosen("GetAccessToCamerasChosen", 0);
  StudySecurityRoutinesWeight = new StepWeight("StudySecurityRoutinesWeight", 0);
  StudySecurityRoutinesChosen = new StepChosen("StudySecurityRoutinesChosen", 0);
  GetAccessToAlarmsWeight = new StepWeight("GetAccessToAlarmsWeight", 0);
  GetAccessToAlarmsChosen = new StepChosen("GetAccessToAlarmsChosen", 0);

  Goal* InitialGoals[1] = {
      Money
  };

  ADVISEStateVariable* InitialSVs[24] = {
    SecurePath, // 0
    CamerasControl, // 1
    PhisicalAccess, // 2
    AlarmsControl, // 3
    SecurityRoutines, // 4
    SecVulnerabilities, // 5
    SafeCombination, // 6
    Stealth, // 7
    Hacker, // 8
    Breaker, // 9
    Money, // 10
    DoNothingChosen, // 11
    FindSecureAccessChosen, // 12
    SafeBreakChosen, // 13
    GetAccessToCamerasChosen, // 14
    StudySecurityRoutinesChosen, // 15
    GetAccessToAlarmsChosen, // 16
    DoNothingWeight, // 17
    FindSecureAccessWeight, // 18
    SafeBreakWeight, // 19
    GetAccessToCamerasWeight, // 20
    StudySecurityRoutinesWeight, // 21
    GetAccessToAlarmsWeight, // 22
    MakeDecision // 23
};

  int outCounts[6] = { 1, 3, 2, 2, 3, 2 };

  commonInit("AttackModel", 24, InitialSVs, 19, InitialActions, 7, InitialGroups, 6, outCounts, InitialSteps, 1, InitialGoals);

  advCostPref = 0.1;
  advDetectPref = 0.1;
  advPayPref = 0.8;

  planningHorizon = 4;
  costDiscount = 0.1;
  detectionDiscount = 0.1;
  payoffDiscount = 0.8;

  assignSVsToAttackSteps();

  int AffectArcs[161][2] = {
    {23,0}, {11,0}, {17,0}, {23,1}, {12,1}, {18,1}, {23,2}, {13,2}, 
    {19,2}, {23,3}, {14,3}, {20,3}, {23,4}, {15,4}, {21,4}, {23,5}, 
    {16,5}, {22,5}, {23,6}, {11,6}, {17,6}, {18,6}, {19,6}, {20,6}, 
    {21,6}, {22,6}, {23,7}, {12,7}, {17,7}, {18,7}, {19,7}, {20,7}, 
    {21,7}, {22,7}, {0,7}, {4,7}, {1,7}, {23,8}, {12,8}, {17,8}, 
    {18,8}, {19,8}, {20,8}, {21,8}, {22,8}, {0,8}, {4,8}, {1,8}, 
    {23,9}, {12,9}, {17,9}, {18,9}, {19,9}, {20,9}, {21,9}, {22,9}, 
    {0,9}, {4,9}, {1,9}, {23,10}, {13,10}, {17,10}, {18,10}, {19,10}, 
    {20,10}, {21,10}, {22,10}, {10,10}, {0,10}, {1,10}, {3,10}, {6,10}, 
    {4,10}, {23,11}, {13,11}, {17,11}, {18,11}, {19,11}, {20,11}, {21,11}, 
    {22,11}, {10,11}, {0,11}, {1,11}, {3,11}, {6,11}, {4,11}, {23,12}, 
    {14,12}, {17,12}, {18,12}, {19,12}, {20,12}, {21,12}, {22,12}, {1,12}, 
    {5,12}, {2,12}, {23,13}, {14,13}, {17,13}, {18,13}, {19,13}, {20,13}, 
    {21,13}, {22,13}, {1,13}, {5,13}, {2,13}, {23,14}, {15,14}, {17,14}, 
    {18,14}, {19,14}, {20,14}, {21,14}, {22,14}, {4,14}, {1,14}, {23,15}, 
    {15,15}, {17,15}, {18,15}, {19,15}, {20,15}, {21,15}, {22,15}, {4,15}, 
    {1,15}, {23,16}, {15,16}, {17,16}, {18,16}, {19,16}, {20,16}, {21,16}, 
    {22,16}, {4,16}, {1,16}, {23,17}, {16,17}, {17,17}, {18,17}, {19,17}, 
    {20,17}, {21,17}, {22,17}, {3,17}, {5,17}, {2,17}, {23,18}, {16,18}, 
    {17,18}, {18,18}, {19,18}, {20,18}, {21,18}, {22,18}, {3,18}, {5,18}, 
    {2,18}
};
  for(int n = 0; n < 161;n++)
    AddAffectArc(InitialSVs[AffectArcs[n][0]], InitialActions[AffectArcs[n][1]]);
  int EnableArcs[31][2] = {
    {23,0}, {23,1}, {23,2}, {23,3}, {23,4}, {23,5}, {11,6}, {12,7}, 
    {0,7}, {12,8}, {0,8}, {12,9}, {0,9}, {13,10}, {10,10}, {13,11}, 
    {10,11}, {14,12}, {1,12}, {14,13}, {1,13}, {15,14}, {4,14}, {15,15}, 
    {4,15}, {15,16}, {4,16}, {16,17}, {3,17}, {16,18}, {3,18}
};
  for(int n = 0; n < 31;n++)
    AddEnableArc(InitialSVs[EnableArcs[n][0]], InitialActions[EnableArcs[n][1]]);
  for(int x = 0; x < 19; x++) {
    InitialActions[x]->LinkVariables();
  }

  customInitialization();

  recalculateAdversaryDecisionWeights();

}

AttackModelADVISE::~AttackModelADVISE() {
}

void AttackModelADVISE::assignSVsToAttackSteps() {
  DoNothingOutcome1.DoNothingChosen = DoNothingChosen;
  DoNothingOutcome1.DoNothingWeight = DoNothingWeight;
  DoNothingOutcome1.FindSecureAccessWeight = FindSecureAccessWeight;
  DoNothingOutcome1.SafeBreakWeight = SafeBreakWeight;
  DoNothingOutcome1.GetAccessToCamerasWeight = GetAccessToCamerasWeight;
  DoNothingOutcome1.StudySecurityRoutinesWeight = StudySecurityRoutinesWeight;
  DoNothingOutcome1.GetAccessToAlarmsWeight = GetAccessToAlarmsWeight;
  DoNothingOutcome1.MakeDecision = MakeDecision;
  DoNothingOutcome1.setSVs(DoNothingChosen, DoNothingWeight);
  FindSecureAccessFailure.SecurePath = SecurePath;
  FindSecureAccessFailure.SecurityRoutines = SecurityRoutines;
  FindSecureAccessFailure.CamerasControl = CamerasControl;
  FindSecureAccessFailure.FindSecureAccessChosen = FindSecureAccessChosen;
  FindSecureAccessFailure.DoNothingWeight = DoNothingWeight;
  FindSecureAccessFailure.FindSecureAccessWeight = FindSecureAccessWeight;
  FindSecureAccessFailure.SafeBreakWeight = SafeBreakWeight;
  FindSecureAccessFailure.GetAccessToCamerasWeight = GetAccessToCamerasWeight;
  FindSecureAccessFailure.StudySecurityRoutinesWeight = StudySecurityRoutinesWeight;
  FindSecureAccessFailure.GetAccessToAlarmsWeight = GetAccessToAlarmsWeight;
  FindSecureAccessFailure.MakeDecision = MakeDecision;
  FindSecureAccessFailure.setSVs(FindSecureAccessChosen, FindSecureAccessWeight);
  FindSecureAccessSuccess.SecurePath = SecurePath;
  FindSecureAccessSuccess.SecurityRoutines = SecurityRoutines;
  FindSecureAccessSuccess.CamerasControl = CamerasControl;
  FindSecureAccessSuccess.FindSecureAccessChosen = FindSecureAccessChosen;
  FindSecureAccessSuccess.DoNothingWeight = DoNothingWeight;
  FindSecureAccessSuccess.FindSecureAccessWeight = FindSecureAccessWeight;
  FindSecureAccessSuccess.SafeBreakWeight = SafeBreakWeight;
  FindSecureAccessSuccess.GetAccessToCamerasWeight = GetAccessToCamerasWeight;
  FindSecureAccessSuccess.StudySecurityRoutinesWeight = StudySecurityRoutinesWeight;
  FindSecureAccessSuccess.GetAccessToAlarmsWeight = GetAccessToAlarmsWeight;
  FindSecureAccessSuccess.MakeDecision = MakeDecision;
  FindSecureAccessSuccess.setSVs(FindSecureAccessChosen, FindSecureAccessWeight);
  FindSecureAccessFailureCameraAccessFound.SecurePath = SecurePath;
  FindSecureAccessFailureCameraAccessFound.SecurityRoutines = SecurityRoutines;
  FindSecureAccessFailureCameraAccessFound.CamerasControl = CamerasControl;
  FindSecureAccessFailureCameraAccessFound.FindSecureAccessChosen = FindSecureAccessChosen;
  FindSecureAccessFailureCameraAccessFound.DoNothingWeight = DoNothingWeight;
  FindSecureAccessFailureCameraAccessFound.FindSecureAccessWeight = FindSecureAccessWeight;
  FindSecureAccessFailureCameraAccessFound.SafeBreakWeight = SafeBreakWeight;
  FindSecureAccessFailureCameraAccessFound.GetAccessToCamerasWeight = GetAccessToCamerasWeight;
  FindSecureAccessFailureCameraAccessFound.StudySecurityRoutinesWeight = StudySecurityRoutinesWeight;
  FindSecureAccessFailureCameraAccessFound.GetAccessToAlarmsWeight = GetAccessToAlarmsWeight;
  FindSecureAccessFailureCameraAccessFound.MakeDecision = MakeDecision;
  FindSecureAccessFailureCameraAccessFound.setSVs(FindSecureAccessChosen, FindSecureAccessWeight);
  SafeBreakFailure.Money = Money;
  SafeBreakFailure.SecurePath = SecurePath;
  SafeBreakFailure.CamerasControl = CamerasControl;
  SafeBreakFailure.AlarmsControl = AlarmsControl;
  SafeBreakFailure.Breaker = Breaker;
  SafeBreakFailure.SafeCombination = SafeCombination;
  SafeBreakFailure.SecurityRoutines = SecurityRoutines;
  SafeBreakFailure.SafeBreakChosen = SafeBreakChosen;
  SafeBreakFailure.DoNothingWeight = DoNothingWeight;
  SafeBreakFailure.FindSecureAccessWeight = FindSecureAccessWeight;
  SafeBreakFailure.SafeBreakWeight = SafeBreakWeight;
  SafeBreakFailure.GetAccessToCamerasWeight = GetAccessToCamerasWeight;
  SafeBreakFailure.StudySecurityRoutinesWeight = StudySecurityRoutinesWeight;
  SafeBreakFailure.GetAccessToAlarmsWeight = GetAccessToAlarmsWeight;
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
  SafeBreakSuccess.DoNothingWeight = DoNothingWeight;
  SafeBreakSuccess.FindSecureAccessWeight = FindSecureAccessWeight;
  SafeBreakSuccess.SafeBreakWeight = SafeBreakWeight;
  SafeBreakSuccess.GetAccessToCamerasWeight = GetAccessToCamerasWeight;
  SafeBreakSuccess.StudySecurityRoutinesWeight = StudySecurityRoutinesWeight;
  SafeBreakSuccess.GetAccessToAlarmsWeight = GetAccessToAlarmsWeight;
  SafeBreakSuccess.MakeDecision = MakeDecision;
  SafeBreakSuccess.setSVs(SafeBreakChosen, SafeBreakWeight);
  GetAccessToCamerasFailure.CamerasControl = CamerasControl;
  GetAccessToCamerasFailure.SecVulnerabilities = SecVulnerabilities;
  GetAccessToCamerasFailure.PhisicalAccess = PhisicalAccess;
  GetAccessToCamerasFailure.Stealth = Stealth;
  GetAccessToCamerasFailure.Hacker = Hacker;
  GetAccessToCamerasFailure.GetAccessToCamerasChosen = GetAccessToCamerasChosen;
  GetAccessToCamerasFailure.DoNothingWeight = DoNothingWeight;
  GetAccessToCamerasFailure.FindSecureAccessWeight = FindSecureAccessWeight;
  GetAccessToCamerasFailure.SafeBreakWeight = SafeBreakWeight;
  GetAccessToCamerasFailure.GetAccessToCamerasWeight = GetAccessToCamerasWeight;
  GetAccessToCamerasFailure.StudySecurityRoutinesWeight = StudySecurityRoutinesWeight;
  GetAccessToCamerasFailure.GetAccessToAlarmsWeight = GetAccessToAlarmsWeight;
  GetAccessToCamerasFailure.MakeDecision = MakeDecision;
  GetAccessToCamerasFailure.setSVs(GetAccessToCamerasChosen, GetAccessToCamerasWeight);
  GetAccessToCamerasSuccess.CamerasControl = CamerasControl;
  GetAccessToCamerasSuccess.SecVulnerabilities = SecVulnerabilities;
  GetAccessToCamerasSuccess.PhisicalAccess = PhisicalAccess;
  GetAccessToCamerasSuccess.Stealth = Stealth;
  GetAccessToCamerasSuccess.Hacker = Hacker;
  GetAccessToCamerasSuccess.GetAccessToCamerasChosen = GetAccessToCamerasChosen;
  GetAccessToCamerasSuccess.DoNothingWeight = DoNothingWeight;
  GetAccessToCamerasSuccess.FindSecureAccessWeight = FindSecureAccessWeight;
  GetAccessToCamerasSuccess.SafeBreakWeight = SafeBreakWeight;
  GetAccessToCamerasSuccess.GetAccessToCamerasWeight = GetAccessToCamerasWeight;
  GetAccessToCamerasSuccess.StudySecurityRoutinesWeight = StudySecurityRoutinesWeight;
  GetAccessToCamerasSuccess.GetAccessToAlarmsWeight = GetAccessToAlarmsWeight;
  GetAccessToCamerasSuccess.MakeDecision = MakeDecision;
  GetAccessToCamerasSuccess.setSVs(GetAccessToCamerasChosen, GetAccessToCamerasWeight);
  StudySecurityRoutinesFailure.SecurityRoutines = SecurityRoutines;
  StudySecurityRoutinesFailure.CamerasControl = CamerasControl;
  StudySecurityRoutinesFailure.StudySecurityRoutinesChosen = StudySecurityRoutinesChosen;
  StudySecurityRoutinesFailure.DoNothingWeight = DoNothingWeight;
  StudySecurityRoutinesFailure.FindSecureAccessWeight = FindSecureAccessWeight;
  StudySecurityRoutinesFailure.SafeBreakWeight = SafeBreakWeight;
  StudySecurityRoutinesFailure.GetAccessToCamerasWeight = GetAccessToCamerasWeight;
  StudySecurityRoutinesFailure.StudySecurityRoutinesWeight = StudySecurityRoutinesWeight;
  StudySecurityRoutinesFailure.GetAccessToAlarmsWeight = GetAccessToAlarmsWeight;
  StudySecurityRoutinesFailure.MakeDecision = MakeDecision;
  StudySecurityRoutinesFailure.setSVs(StudySecurityRoutinesChosen, StudySecurityRoutinesWeight);
  StudySecurityRoutinesSuccess.SecurityRoutines = SecurityRoutines;
  StudySecurityRoutinesSuccess.CamerasControl = CamerasControl;
  StudySecurityRoutinesSuccess.StudySecurityRoutinesChosen = StudySecurityRoutinesChosen;
  StudySecurityRoutinesSuccess.DoNothingWeight = DoNothingWeight;
  StudySecurityRoutinesSuccess.FindSecureAccessWeight = FindSecureAccessWeight;
  StudySecurityRoutinesSuccess.SafeBreakWeight = SafeBreakWeight;
  StudySecurityRoutinesSuccess.GetAccessToCamerasWeight = GetAccessToCamerasWeight;
  StudySecurityRoutinesSuccess.StudySecurityRoutinesWeight = StudySecurityRoutinesWeight;
  StudySecurityRoutinesSuccess.GetAccessToAlarmsWeight = GetAccessToAlarmsWeight;
  StudySecurityRoutinesSuccess.MakeDecision = MakeDecision;
  StudySecurityRoutinesSuccess.setSVs(StudySecurityRoutinesChosen, StudySecurityRoutinesWeight);
  StudySecurityRoutinesFailureCameraAccessFound.SecurityRoutines = SecurityRoutines;
  StudySecurityRoutinesFailureCameraAccessFound.CamerasControl = CamerasControl;
  StudySecurityRoutinesFailureCameraAccessFound.StudySecurityRoutinesChosen = StudySecurityRoutinesChosen;
  StudySecurityRoutinesFailureCameraAccessFound.DoNothingWeight = DoNothingWeight;
  StudySecurityRoutinesFailureCameraAccessFound.FindSecureAccessWeight = FindSecureAccessWeight;
  StudySecurityRoutinesFailureCameraAccessFound.SafeBreakWeight = SafeBreakWeight;
  StudySecurityRoutinesFailureCameraAccessFound.GetAccessToCamerasWeight = GetAccessToCamerasWeight;
  StudySecurityRoutinesFailureCameraAccessFound.StudySecurityRoutinesWeight = StudySecurityRoutinesWeight;
  StudySecurityRoutinesFailureCameraAccessFound.GetAccessToAlarmsWeight = GetAccessToAlarmsWeight;
  StudySecurityRoutinesFailureCameraAccessFound.MakeDecision = MakeDecision;
  StudySecurityRoutinesFailureCameraAccessFound.setSVs(StudySecurityRoutinesChosen, StudySecurityRoutinesWeight);
  GetAccessToAlarmsFailure.AlarmsControl = AlarmsControl;
  GetAccessToAlarmsFailure.SecVulnerabilities = SecVulnerabilities;
  GetAccessToAlarmsFailure.PhisicalAccess = PhisicalAccess;
  GetAccessToAlarmsFailure.Stealth = Stealth;
  GetAccessToAlarmsFailure.Hacker = Hacker;
  GetAccessToAlarmsFailure.GetAccessToAlarmsChosen = GetAccessToAlarmsChosen;
  GetAccessToAlarmsFailure.DoNothingWeight = DoNothingWeight;
  GetAccessToAlarmsFailure.FindSecureAccessWeight = FindSecureAccessWeight;
  GetAccessToAlarmsFailure.SafeBreakWeight = SafeBreakWeight;
  GetAccessToAlarmsFailure.GetAccessToCamerasWeight = GetAccessToCamerasWeight;
  GetAccessToAlarmsFailure.StudySecurityRoutinesWeight = StudySecurityRoutinesWeight;
  GetAccessToAlarmsFailure.GetAccessToAlarmsWeight = GetAccessToAlarmsWeight;
  GetAccessToAlarmsFailure.MakeDecision = MakeDecision;
  GetAccessToAlarmsFailure.setSVs(GetAccessToAlarmsChosen, GetAccessToAlarmsWeight);
  GetAccessToAlarmsSuccessIWannaDiscredit.AlarmsControl = AlarmsControl;
  GetAccessToAlarmsSuccessIWannaDiscredit.SecVulnerabilities = SecVulnerabilities;
  GetAccessToAlarmsSuccessIWannaDiscredit.PhisicalAccess = PhisicalAccess;
  GetAccessToAlarmsSuccessIWannaDiscredit.Stealth = Stealth;
  GetAccessToAlarmsSuccessIWannaDiscredit.Hacker = Hacker;
  GetAccessToAlarmsSuccessIWannaDiscredit.GetAccessToAlarmsChosen = GetAccessToAlarmsChosen;
  GetAccessToAlarmsSuccessIWannaDiscredit.DoNothingWeight = DoNothingWeight;
  GetAccessToAlarmsSuccessIWannaDiscredit.FindSecureAccessWeight = FindSecureAccessWeight;
  GetAccessToAlarmsSuccessIWannaDiscredit.SafeBreakWeight = SafeBreakWeight;
  GetAccessToAlarmsSuccessIWannaDiscredit.GetAccessToCamerasWeight = GetAccessToCamerasWeight;
  GetAccessToAlarmsSuccessIWannaDiscredit.StudySecurityRoutinesWeight = StudySecurityRoutinesWeight;
  GetAccessToAlarmsSuccessIWannaDiscredit.GetAccessToAlarmsWeight = GetAccessToAlarmsWeight;
  GetAccessToAlarmsSuccessIWannaDiscredit.MakeDecision = MakeDecision;
  GetAccessToAlarmsSuccessIWannaDiscredit.setSVs(GetAccessToAlarmsChosen, GetAccessToAlarmsWeight);

  DoNothingAD.MakeDecision = MakeDecision;
  DoNothingAD.DoNothingChosen = DoNothingChosen;
  DoNothingAD.DoNothingWeight = DoNothingWeight;
  FindSecureAccessAD.MakeDecision = MakeDecision;
  FindSecureAccessAD.FindSecureAccessChosen = FindSecureAccessChosen;
  FindSecureAccessAD.FindSecureAccessWeight = FindSecureAccessWeight;
  SafeBreakAD.MakeDecision = MakeDecision;
  SafeBreakAD.SafeBreakChosen = SafeBreakChosen;
  SafeBreakAD.SafeBreakWeight = SafeBreakWeight;
  GetAccessToCamerasAD.MakeDecision = MakeDecision;
  GetAccessToCamerasAD.GetAccessToCamerasChosen = GetAccessToCamerasChosen;
  GetAccessToCamerasAD.GetAccessToCamerasWeight = GetAccessToCamerasWeight;
  StudySecurityRoutinesAD.MakeDecision = MakeDecision;
  StudySecurityRoutinesAD.StudySecurityRoutinesChosen = StudySecurityRoutinesChosen;
  StudySecurityRoutinesAD.StudySecurityRoutinesWeight = StudySecurityRoutinesWeight;
  GetAccessToAlarmsAD.MakeDecision = MakeDecision;
  GetAccessToAlarmsAD.GetAccessToAlarmsChosen = GetAccessToAlarmsChosen;
  GetAccessToAlarmsAD.GetAccessToAlarmsWeight = GetAccessToAlarmsWeight;
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

/*====================== DoNothingOutcome1Step ========================*/

AttackModelADVISE::DoNothingOutcome1Step::DoNothingOutcome1Step() {
  TheDistributionParameters = new double[1];
  commonInit("DoNothingOutcome1Step", 0, Deterministic, RaceEnabled, 8, 0, false);}

AttackModelADVISE::DoNothingOutcome1Step::~DoNothingOutcome1Step() {
  delete[] TheDistributionParameters;
}

void AttackModelADVISE::DoNothingOutcome1Step::LinkVariables() {
  DoNothingChosen->Register(&DoNothingChosen_Mobius_Mark);
  DoNothingWeight->Register(&DoNothingWeight_Mobius_Mark);
  FindSecureAccessWeight->Register(&FindSecureAccessWeight_Mobius_Mark);
  SafeBreakWeight->Register(&SafeBreakWeight_Mobius_Mark);
  GetAccessToCamerasWeight->Register(&GetAccessToCamerasWeight_Mobius_Mark);
  StudySecurityRoutinesWeight->Register(&StudySecurityRoutinesWeight_Mobius_Mark);
  GetAccessToAlarmsWeight->Register(&GetAccessToAlarmsWeight_Mobius_Mark);
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

/*====================== FindSecureAccessFailureStep ========================*/

AttackModelADVISE::FindSecureAccessFailureStep::FindSecureAccessFailureStep() {
  TheDistributionParameters = new double[1];
  commonInit("FindSecureAccessFailureStep", 1, Deterministic, RaceEnabled, 11, 1, false);}

AttackModelADVISE::FindSecureAccessFailureStep::~FindSecureAccessFailureStep() {
  delete[] TheDistributionParameters;
}

void AttackModelADVISE::FindSecureAccessFailureStep::LinkVariables() {
  SecurePath->Register(&SecurePath_Mobius_Mark);
  SecurityRoutines->Register(&SecurityRoutines_Mobius_Mark);
  CamerasControl->Register(&CamerasControl_Mobius_Mark);
  FindSecureAccessChosen->Register(&FindSecureAccessChosen_Mobius_Mark);
  DoNothingWeight->Register(&DoNothingWeight_Mobius_Mark);
  FindSecureAccessWeight->Register(&FindSecureAccessWeight_Mobius_Mark);
  SafeBreakWeight->Register(&SafeBreakWeight_Mobius_Mark);
  GetAccessToCamerasWeight->Register(&GetAccessToCamerasWeight_Mobius_Mark);
  StudySecurityRoutinesWeight->Register(&StudySecurityRoutinesWeight_Mobius_Mark);
  GetAccessToAlarmsWeight->Register(&GetAccessToAlarmsWeight_Mobius_Mark);
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
  commonInit("FindSecureAccessSuccessStep", 1, Deterministic, RaceEnabled, 11, 1, false);}

AttackModelADVISE::FindSecureAccessSuccessStep::~FindSecureAccessSuccessStep() {
  delete[] TheDistributionParameters;
}

void AttackModelADVISE::FindSecureAccessSuccessStep::LinkVariables() {
  SecurePath->Register(&SecurePath_Mobius_Mark);
  SecurityRoutines->Register(&SecurityRoutines_Mobius_Mark);
  CamerasControl->Register(&CamerasControl_Mobius_Mark);
  FindSecureAccessChosen->Register(&FindSecureAccessChosen_Mobius_Mark);
  DoNothingWeight->Register(&DoNothingWeight_Mobius_Mark);
  FindSecureAccessWeight->Register(&FindSecureAccessWeight_Mobius_Mark);
  SafeBreakWeight->Register(&SafeBreakWeight_Mobius_Mark);
  GetAccessToCamerasWeight->Register(&GetAccessToCamerasWeight_Mobius_Mark);
  StudySecurityRoutinesWeight->Register(&StudySecurityRoutinesWeight_Mobius_Mark);
  GetAccessToAlarmsWeight->Register(&GetAccessToAlarmsWeight_Mobius_Mark);
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
  commonInit("FindSecureAccessFailureCameraAccessFoundStep", 1, Deterministic, RaceEnabled, 11, 1, false);}

AttackModelADVISE::FindSecureAccessFailureCameraAccessFoundStep::~FindSecureAccessFailureCameraAccessFoundStep() {
  delete[] TheDistributionParameters;
}

void AttackModelADVISE::FindSecureAccessFailureCameraAccessFoundStep::LinkVariables() {
  SecurePath->Register(&SecurePath_Mobius_Mark);
  SecurityRoutines->Register(&SecurityRoutines_Mobius_Mark);
  CamerasControl->Register(&CamerasControl_Mobius_Mark);
  FindSecureAccessChosen->Register(&FindSecureAccessChosen_Mobius_Mark);
  DoNothingWeight->Register(&DoNothingWeight_Mobius_Mark);
  FindSecureAccessWeight->Register(&FindSecureAccessWeight_Mobius_Mark);
  SafeBreakWeight->Register(&SafeBreakWeight_Mobius_Mark);
  GetAccessToCamerasWeight->Register(&GetAccessToCamerasWeight_Mobius_Mark);
  StudySecurityRoutinesWeight->Register(&StudySecurityRoutinesWeight_Mobius_Mark);
  GetAccessToAlarmsWeight->Register(&GetAccessToAlarmsWeight_Mobius_Mark);
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

/*====================== SafeBreakFailureStep ========================*/

AttackModelADVISE::SafeBreakFailureStep::SafeBreakFailureStep() {
  TheDistributionParameters = new double[1];
  commonInit("SafeBreakFailureStep", 2, Deterministic, RaceEnabled, 15, 1, false);}

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
  DoNothingWeight->Register(&DoNothingWeight_Mobius_Mark);
  FindSecureAccessWeight->Register(&FindSecureAccessWeight_Mobius_Mark);
  SafeBreakWeight->Register(&SafeBreakWeight_Mobius_Mark);
  GetAccessToCamerasWeight->Register(&GetAccessToCamerasWeight_Mobius_Mark);
  StudySecurityRoutinesWeight->Register(&StudySecurityRoutinesWeight_Mobius_Mark);
  GetAccessToAlarmsWeight->Register(&GetAccessToAlarmsWeight_Mobius_Mark);
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
  commonInit("SafeBreakSuccessStep", 2, Deterministic, RaceEnabled, 15, 1, false);}

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
  DoNothingWeight->Register(&DoNothingWeight_Mobius_Mark);
  FindSecureAccessWeight->Register(&FindSecureAccessWeight_Mobius_Mark);
  SafeBreakWeight->Register(&SafeBreakWeight_Mobius_Mark);
  GetAccessToCamerasWeight->Register(&GetAccessToCamerasWeight_Mobius_Mark);
  StudySecurityRoutinesWeight->Register(&StudySecurityRoutinesWeight_Mobius_Mark);
  GetAccessToAlarmsWeight->Register(&GetAccessToAlarmsWeight_Mobius_Mark);
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

/*====================== GetAccessToCamerasFailureStep ========================*/

AttackModelADVISE::GetAccessToCamerasFailureStep::GetAccessToCamerasFailureStep() {
  TheDistributionParameters = new double[1];
  commonInit("GetAccessToCamerasFailureStep", 3, Deterministic, RaceEnabled, 13, 1, false);}

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
  DoNothingWeight->Register(&DoNothingWeight_Mobius_Mark);
  FindSecureAccessWeight->Register(&FindSecureAccessWeight_Mobius_Mark);
  SafeBreakWeight->Register(&SafeBreakWeight_Mobius_Mark);
  GetAccessToCamerasWeight->Register(&GetAccessToCamerasWeight_Mobius_Mark);
  StudySecurityRoutinesWeight->Register(&StudySecurityRoutinesWeight_Mobius_Mark);
  GetAccessToAlarmsWeight->Register(&GetAccessToAlarmsWeight_Mobius_Mark);
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
  commonInit("GetAccessToCamerasSuccessStep", 3, Deterministic, RaceEnabled, 13, 1, false);}

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
  DoNothingWeight->Register(&DoNothingWeight_Mobius_Mark);
  FindSecureAccessWeight->Register(&FindSecureAccessWeight_Mobius_Mark);
  SafeBreakWeight->Register(&SafeBreakWeight_Mobius_Mark);
  GetAccessToCamerasWeight->Register(&GetAccessToCamerasWeight_Mobius_Mark);
  StudySecurityRoutinesWeight->Register(&StudySecurityRoutinesWeight_Mobius_Mark);
  GetAccessToAlarmsWeight->Register(&GetAccessToAlarmsWeight_Mobius_Mark);
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

/*====================== StudySecurityRoutinesFailureStep ========================*/

AttackModelADVISE::StudySecurityRoutinesFailureStep::StudySecurityRoutinesFailureStep() {
  TheDistributionParameters = new double[1];
  commonInit("StudySecurityRoutinesFailureStep", 4, Deterministic, RaceEnabled, 10, 1, false);}

AttackModelADVISE::StudySecurityRoutinesFailureStep::~StudySecurityRoutinesFailureStep() {
  delete[] TheDistributionParameters;
}

void AttackModelADVISE::StudySecurityRoutinesFailureStep::LinkVariables() {
  SecurityRoutines->Register(&SecurityRoutines_Mobius_Mark);
  CamerasControl->Register(&CamerasControl_Mobius_Mark);
  StudySecurityRoutinesChosen->Register(&StudySecurityRoutinesChosen_Mobius_Mark);
  DoNothingWeight->Register(&DoNothingWeight_Mobius_Mark);
  FindSecureAccessWeight->Register(&FindSecureAccessWeight_Mobius_Mark);
  SafeBreakWeight->Register(&SafeBreakWeight_Mobius_Mark);
  GetAccessToCamerasWeight->Register(&GetAccessToCamerasWeight_Mobius_Mark);
  StudySecurityRoutinesWeight->Register(&StudySecurityRoutinesWeight_Mobius_Mark);
  GetAccessToAlarmsWeight->Register(&GetAccessToAlarmsWeight_Mobius_Mark);
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
  commonInit("StudySecurityRoutinesSuccessStep", 4, Deterministic, RaceEnabled, 10, 1, false);}

AttackModelADVISE::StudySecurityRoutinesSuccessStep::~StudySecurityRoutinesSuccessStep() {
  delete[] TheDistributionParameters;
}

void AttackModelADVISE::StudySecurityRoutinesSuccessStep::LinkVariables() {
  SecurityRoutines->Register(&SecurityRoutines_Mobius_Mark);
  CamerasControl->Register(&CamerasControl_Mobius_Mark);
  StudySecurityRoutinesChosen->Register(&StudySecurityRoutinesChosen_Mobius_Mark);
  DoNothingWeight->Register(&DoNothingWeight_Mobius_Mark);
  FindSecureAccessWeight->Register(&FindSecureAccessWeight_Mobius_Mark);
  SafeBreakWeight->Register(&SafeBreakWeight_Mobius_Mark);
  GetAccessToCamerasWeight->Register(&GetAccessToCamerasWeight_Mobius_Mark);
  StudySecurityRoutinesWeight->Register(&StudySecurityRoutinesWeight_Mobius_Mark);
  GetAccessToAlarmsWeight->Register(&GetAccessToAlarmsWeight_Mobius_Mark);
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
  commonInit("StudySecurityRoutinesFailureCameraAccessFoundStep", 4, Deterministic, RaceEnabled, 10, 1, false);}

AttackModelADVISE::StudySecurityRoutinesFailureCameraAccessFoundStep::~StudySecurityRoutinesFailureCameraAccessFoundStep() {
  delete[] TheDistributionParameters;
}

void AttackModelADVISE::StudySecurityRoutinesFailureCameraAccessFoundStep::LinkVariables() {
  SecurityRoutines->Register(&SecurityRoutines_Mobius_Mark);
  CamerasControl->Register(&CamerasControl_Mobius_Mark);
  StudySecurityRoutinesChosen->Register(&StudySecurityRoutinesChosen_Mobius_Mark);
  DoNothingWeight->Register(&DoNothingWeight_Mobius_Mark);
  FindSecureAccessWeight->Register(&FindSecureAccessWeight_Mobius_Mark);
  SafeBreakWeight->Register(&SafeBreakWeight_Mobius_Mark);
  GetAccessToCamerasWeight->Register(&GetAccessToCamerasWeight_Mobius_Mark);
  StudySecurityRoutinesWeight->Register(&StudySecurityRoutinesWeight_Mobius_Mark);
  GetAccessToAlarmsWeight->Register(&GetAccessToAlarmsWeight_Mobius_Mark);
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

/*====================== GetAccessToAlarmsFailureStep ========================*/

AttackModelADVISE::GetAccessToAlarmsFailureStep::GetAccessToAlarmsFailureStep() {
  TheDistributionParameters = new double[1];
  commonInit("GetAccessToAlarmsFailureStep", 5, Deterministic, RaceEnabled, 13, 1, false);}

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
  DoNothingWeight->Register(&DoNothingWeight_Mobius_Mark);
  FindSecureAccessWeight->Register(&FindSecureAccessWeight_Mobius_Mark);
  SafeBreakWeight->Register(&SafeBreakWeight_Mobius_Mark);
  GetAccessToCamerasWeight->Register(&GetAccessToCamerasWeight_Mobius_Mark);
  StudySecurityRoutinesWeight->Register(&StudySecurityRoutinesWeight_Mobius_Mark);
  GetAccessToAlarmsWeight->Register(&GetAccessToAlarmsWeight_Mobius_Mark);
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
  commonInit("GetAccessToAlarmsSuccessIWannaDiscreditStep", 5, Deterministic, RaceEnabled, 13, 1, false);}

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
  DoNothingWeight->Register(&DoNothingWeight_Mobius_Mark);
  FindSecureAccessWeight->Register(&FindSecureAccessWeight_Mobius_Mark);
  SafeBreakWeight->Register(&SafeBreakWeight_Mobius_Mark);
  GetAccessToCamerasWeight->Register(&GetAccessToCamerasWeight_Mobius_Mark);
  StudySecurityRoutinesWeight->Register(&StudySecurityRoutinesWeight_Mobius_Mark);
  GetAccessToAlarmsWeight->Register(&GetAccessToAlarmsWeight_Mobius_Mark);
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

/*****************************************************************/
/*                   Adversary Decisions                         */
/*****************************************************************/

/*====================== DoNothingAdversaryDecision ========================*/

AttackModelADVISE::DoNothingAdversaryDecision::DoNothingAdversaryDecision() {
  commonInit("DoNothingAdversaryDecision", 6, Instantaneous, RaceEnabled, 2, 1, false);
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

/*====================== FindSecureAccessAdversaryDecision ========================*/

AttackModelADVISE::FindSecureAccessAdversaryDecision::FindSecureAccessAdversaryDecision() {
  commonInit("FindSecureAccessAdversaryDecision", 6, Instantaneous, RaceEnabled, 2, 1, false);
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

/*====================== SafeBreakAdversaryDecision ========================*/

AttackModelADVISE::SafeBreakAdversaryDecision::SafeBreakAdversaryDecision() {
  commonInit("SafeBreakAdversaryDecision", 6, Instantaneous, RaceEnabled, 2, 1, false);
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

/*====================== GetAccessToCamerasAdversaryDecision ========================*/

AttackModelADVISE::GetAccessToCamerasAdversaryDecision::GetAccessToCamerasAdversaryDecision() {
  commonInit("GetAccessToCamerasAdversaryDecision", 6, Instantaneous, RaceEnabled, 2, 1, false);
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

/*====================== StudySecurityRoutinesAdversaryDecision ========================*/

AttackModelADVISE::StudySecurityRoutinesAdversaryDecision::StudySecurityRoutinesAdversaryDecision() {
  commonInit("StudySecurityRoutinesAdversaryDecision", 6, Instantaneous, RaceEnabled, 2, 1, false);
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

/*====================== GetAccessToAlarmsAdversaryDecision ========================*/

AttackModelADVISE::GetAccessToAlarmsAdversaryDecision::GetAccessToAlarmsAdversaryDecision() {
  commonInit("GetAccessToAlarmsAdversaryDecision", 6, Instantaneous, RaceEnabled, 2, 1, false);
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

