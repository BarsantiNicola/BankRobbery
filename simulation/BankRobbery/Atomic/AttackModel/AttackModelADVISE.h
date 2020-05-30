#ifndef AttackModelADVISE_H_
#define AttackModelADVISE_H_

#include "Cpp/Simulator/UserDistributions.h"
#include "Cpp/BaseClasses/GlobalVariables.h"
#include "Cpp/BaseClasses/PostselectGroup.h"
#include "Cpp/BaseClasses/PreselectGroup.h"
#include "Cpp/BaseClasses/atomic/advise/ADVISEModel.h"
#include "Cpp/BaseClasses/atomic/advise/Access.h"
#include "Cpp/BaseClasses/atomic/advise/AdversaryDecision.h"
#include "Cpp/BaseClasses/atomic/advise/BeginAdversaryDecision.h"
#include "Cpp/BaseClasses/atomic/advise/Goal.h"
#include "Cpp/BaseClasses/atomic/advise/Knowledge.h"
#include "Cpp/BaseClasses/atomic/advise/Skill.h"
#include "Cpp/BaseClasses/atomic/advise/Step.h"
#include "Cpp/BaseClasses/atomic/advise/StepChosen.h"
#include "Cpp/BaseClasses/atomic/advise/StepWeight.h"
#include <limits.h>
#include <cmath>
extern Short stealthSkill;
extern Short hackerSkill;
extern Short breakerSkill;
extern Short safeCombinationKnowledge;
extern Short secVulnerabilitiesKnowledge;
extern Short securityComponentsAccess;
extern UserDistributions* TheDistribution;

/*********************************************************************
               AttackModelADVISE Submodel Definition                   
*********************************************************************/

class AttackModelADVISE : public ADVISEModel {
public:

class DoNothingAdversaryDecision : public AdversaryDecision {
public:

  BeginAdversaryDecision *MakeDecision;
  short *MakeDecision_Mobius_Mark;
  StepChosen *DoNothingChosen;
  short *DoNothingChosen_Mobius_Mark;
  StepWeight *DoNothingWeight;
  short *DoNothingWeight_Mobius_Mark;
  double *TheDistributionParameters;

  DoNothingAdversaryDecision();
  ~DoNothingAdversaryDecision();
  bool Enabled();
  void LinkVariables();
  double Weight();
  bool ReactivationPredicate();
  bool ReactivationFunction();
  double SampleDistribution();
  double* ReturnDistributionParameters();
  int Rank();
  BaseActionClass *Fire();
}; // DoNothingAdversaryDecision

class FindSecureAccessAdversaryDecision : public AdversaryDecision {
public:

  BeginAdversaryDecision *MakeDecision;
  short *MakeDecision_Mobius_Mark;
  StepChosen *FindSecureAccessChosen;
  short *FindSecureAccessChosen_Mobius_Mark;
  StepWeight *FindSecureAccessWeight;
  short *FindSecureAccessWeight_Mobius_Mark;
  double *TheDistributionParameters;

  FindSecureAccessAdversaryDecision();
  ~FindSecureAccessAdversaryDecision();
  bool Enabled();
  void LinkVariables();
  double Weight();
  bool ReactivationPredicate();
  bool ReactivationFunction();
  double SampleDistribution();
  double* ReturnDistributionParameters();
  int Rank();
  BaseActionClass *Fire();
}; // FindSecureAccessAdversaryDecision

class SafeBreakAdversaryDecision : public AdversaryDecision {
public:

  BeginAdversaryDecision *MakeDecision;
  short *MakeDecision_Mobius_Mark;
  StepChosen *SafeBreakChosen;
  short *SafeBreakChosen_Mobius_Mark;
  StepWeight *SafeBreakWeight;
  short *SafeBreakWeight_Mobius_Mark;
  double *TheDistributionParameters;

  SafeBreakAdversaryDecision();
  ~SafeBreakAdversaryDecision();
  bool Enabled();
  void LinkVariables();
  double Weight();
  bool ReactivationPredicate();
  bool ReactivationFunction();
  double SampleDistribution();
  double* ReturnDistributionParameters();
  int Rank();
  BaseActionClass *Fire();
}; // SafeBreakAdversaryDecision

class GetAccessToCamerasAdversaryDecision : public AdversaryDecision {
public:

  BeginAdversaryDecision *MakeDecision;
  short *MakeDecision_Mobius_Mark;
  StepChosen *GetAccessToCamerasChosen;
  short *GetAccessToCamerasChosen_Mobius_Mark;
  StepWeight *GetAccessToCamerasWeight;
  short *GetAccessToCamerasWeight_Mobius_Mark;
  double *TheDistributionParameters;

  GetAccessToCamerasAdversaryDecision();
  ~GetAccessToCamerasAdversaryDecision();
  bool Enabled();
  void LinkVariables();
  double Weight();
  bool ReactivationPredicate();
  bool ReactivationFunction();
  double SampleDistribution();
  double* ReturnDistributionParameters();
  int Rank();
  BaseActionClass *Fire();
}; // GetAccessToCamerasAdversaryDecision

class StudySecurityRoutinesAdversaryDecision : public AdversaryDecision {
public:

  BeginAdversaryDecision *MakeDecision;
  short *MakeDecision_Mobius_Mark;
  StepChosen *StudySecurityRoutinesChosen;
  short *StudySecurityRoutinesChosen_Mobius_Mark;
  StepWeight *StudySecurityRoutinesWeight;
  short *StudySecurityRoutinesWeight_Mobius_Mark;
  double *TheDistributionParameters;

  StudySecurityRoutinesAdversaryDecision();
  ~StudySecurityRoutinesAdversaryDecision();
  bool Enabled();
  void LinkVariables();
  double Weight();
  bool ReactivationPredicate();
  bool ReactivationFunction();
  double SampleDistribution();
  double* ReturnDistributionParameters();
  int Rank();
  BaseActionClass *Fire();
}; // StudySecurityRoutinesAdversaryDecision

class GetAccessToAlarmsAdversaryDecision : public AdversaryDecision {
public:

  BeginAdversaryDecision *MakeDecision;
  short *MakeDecision_Mobius_Mark;
  StepChosen *GetAccessToAlarmsChosen;
  short *GetAccessToAlarmsChosen_Mobius_Mark;
  StepWeight *GetAccessToAlarmsWeight;
  short *GetAccessToAlarmsWeight_Mobius_Mark;
  double *TheDistributionParameters;

  GetAccessToAlarmsAdversaryDecision();
  ~GetAccessToAlarmsAdversaryDecision();
  bool Enabled();
  void LinkVariables();
  double Weight();
  bool ReactivationPredicate();
  bool ReactivationFunction();
  double SampleDistribution();
  double* ReturnDistributionParameters();
  int Rank();
  BaseActionClass *Fire();
}; // GetAccessToAlarmsAdversaryDecision

class DoNothingOutcome1Step : public Step {
public:

  StepChosen *DoNothingChosen;
  short *DoNothingChosen_Mobius_Mark;
  StepWeight *DoNothingWeight;
  short *DoNothingWeight_Mobius_Mark;
  StepWeight *FindSecureAccessWeight;
  short *FindSecureAccessWeight_Mobius_Mark;
  StepWeight *SafeBreakWeight;
  short *SafeBreakWeight_Mobius_Mark;
  StepWeight *GetAccessToCamerasWeight;
  short *GetAccessToCamerasWeight_Mobius_Mark;
  StepWeight *StudySecurityRoutinesWeight;
  short *StudySecurityRoutinesWeight_Mobius_Mark;
  StepWeight *GetAccessToAlarmsWeight;
  short *GetAccessToAlarmsWeight_Mobius_Mark;
  BeginAdversaryDecision *MakeDecision;
  short *MakeDecision_Mobius_Mark;
  double *TheDistributionParameters;

  DoNothingOutcome1Step();
  ~DoNothingOutcome1Step();
  bool Enabled();
  void LinkVariables();
  double Weight();
  bool ReactivationPredicate();
  bool ReactivationFunction();
  double SampleDistribution();
  double* ReturnDistributionParameters();
  double getCost();
  double getOutcomeProbability();
  double getDetection();
  int Rank();
  double timeDistributionParameter0();
  bool preconditionsMet();
  void executeEffects();
}; // DoNothingOutcome1Step

class FindSecureAccessFailureStep : public Step {
public:

  Access *SecurePath;
  short* SecurePath_Mobius_Mark;
  Knowledge *SecurityRoutines;
  short* SecurityRoutines_Mobius_Mark;
  Access *CamerasControl;
  short* CamerasControl_Mobius_Mark;
  StepChosen *FindSecureAccessChosen;
  short *FindSecureAccessChosen_Mobius_Mark;
  StepWeight *DoNothingWeight;
  short *DoNothingWeight_Mobius_Mark;
  StepWeight *FindSecureAccessWeight;
  short *FindSecureAccessWeight_Mobius_Mark;
  StepWeight *SafeBreakWeight;
  short *SafeBreakWeight_Mobius_Mark;
  StepWeight *GetAccessToCamerasWeight;
  short *GetAccessToCamerasWeight_Mobius_Mark;
  StepWeight *StudySecurityRoutinesWeight;
  short *StudySecurityRoutinesWeight_Mobius_Mark;
  StepWeight *GetAccessToAlarmsWeight;
  short *GetAccessToAlarmsWeight_Mobius_Mark;
  BeginAdversaryDecision *MakeDecision;
  short *MakeDecision_Mobius_Mark;
  double *TheDistributionParameters;

  FindSecureAccessFailureStep();
  ~FindSecureAccessFailureStep();
  bool Enabled();
  void LinkVariables();
  double Weight();
  bool ReactivationPredicate();
  bool ReactivationFunction();
  double SampleDistribution();
  double* ReturnDistributionParameters();
  double getCost();
  double getOutcomeProbability();
  double getDetection();
  int Rank();
  double timeDistributionParameter0();
  bool preconditionsMet();
  void executeEffects();
}; // FindSecureAccessFailureStep

class FindSecureAccessSuccessStep : public Step {
public:

  Access *SecurePath;
  short* SecurePath_Mobius_Mark;
  Knowledge *SecurityRoutines;
  short* SecurityRoutines_Mobius_Mark;
  Access *CamerasControl;
  short* CamerasControl_Mobius_Mark;
  StepChosen *FindSecureAccessChosen;
  short *FindSecureAccessChosen_Mobius_Mark;
  StepWeight *DoNothingWeight;
  short *DoNothingWeight_Mobius_Mark;
  StepWeight *FindSecureAccessWeight;
  short *FindSecureAccessWeight_Mobius_Mark;
  StepWeight *SafeBreakWeight;
  short *SafeBreakWeight_Mobius_Mark;
  StepWeight *GetAccessToCamerasWeight;
  short *GetAccessToCamerasWeight_Mobius_Mark;
  StepWeight *StudySecurityRoutinesWeight;
  short *StudySecurityRoutinesWeight_Mobius_Mark;
  StepWeight *GetAccessToAlarmsWeight;
  short *GetAccessToAlarmsWeight_Mobius_Mark;
  BeginAdversaryDecision *MakeDecision;
  short *MakeDecision_Mobius_Mark;
  double *TheDistributionParameters;

  FindSecureAccessSuccessStep();
  ~FindSecureAccessSuccessStep();
  bool Enabled();
  void LinkVariables();
  double Weight();
  bool ReactivationPredicate();
  bool ReactivationFunction();
  double SampleDistribution();
  double* ReturnDistributionParameters();
  double getCost();
  double getOutcomeProbability();
  double getDetection();
  int Rank();
  double timeDistributionParameter0();
  bool preconditionsMet();
  void executeEffects();
}; // FindSecureAccessSuccessStep

class FindSecureAccessFailureCameraAccessFoundStep : public Step {
public:

  Access *SecurePath;
  short* SecurePath_Mobius_Mark;
  Knowledge *SecurityRoutines;
  short* SecurityRoutines_Mobius_Mark;
  Access *CamerasControl;
  short* CamerasControl_Mobius_Mark;
  StepChosen *FindSecureAccessChosen;
  short *FindSecureAccessChosen_Mobius_Mark;
  StepWeight *DoNothingWeight;
  short *DoNothingWeight_Mobius_Mark;
  StepWeight *FindSecureAccessWeight;
  short *FindSecureAccessWeight_Mobius_Mark;
  StepWeight *SafeBreakWeight;
  short *SafeBreakWeight_Mobius_Mark;
  StepWeight *GetAccessToCamerasWeight;
  short *GetAccessToCamerasWeight_Mobius_Mark;
  StepWeight *StudySecurityRoutinesWeight;
  short *StudySecurityRoutinesWeight_Mobius_Mark;
  StepWeight *GetAccessToAlarmsWeight;
  short *GetAccessToAlarmsWeight_Mobius_Mark;
  BeginAdversaryDecision *MakeDecision;
  short *MakeDecision_Mobius_Mark;
  double *TheDistributionParameters;

  FindSecureAccessFailureCameraAccessFoundStep();
  ~FindSecureAccessFailureCameraAccessFoundStep();
  bool Enabled();
  void LinkVariables();
  double Weight();
  bool ReactivationPredicate();
  bool ReactivationFunction();
  double SampleDistribution();
  double* ReturnDistributionParameters();
  double getCost();
  double getOutcomeProbability();
  double getDetection();
  int Rank();
  double timeDistributionParameter0();
  bool preconditionsMet();
  void executeEffects();
}; // FindSecureAccessFailureCameraAccessFoundStep

class SafeBreakFailureStep : public Step {
public:

  Goal *Money;
  short* Money_Mobius_Mark;
  Access *SecurePath;
  short* SecurePath_Mobius_Mark;
  Access *CamerasControl;
  short* CamerasControl_Mobius_Mark;
  Access *AlarmsControl;
  short* AlarmsControl_Mobius_Mark;
  Skill *Breaker;
  short* Breaker_Mobius_Mark;
  Knowledge *SafeCombination;
  short* SafeCombination_Mobius_Mark;
  Knowledge *SecurityRoutines;
  short* SecurityRoutines_Mobius_Mark;
  StepChosen *SafeBreakChosen;
  short *SafeBreakChosen_Mobius_Mark;
  StepWeight *DoNothingWeight;
  short *DoNothingWeight_Mobius_Mark;
  StepWeight *FindSecureAccessWeight;
  short *FindSecureAccessWeight_Mobius_Mark;
  StepWeight *SafeBreakWeight;
  short *SafeBreakWeight_Mobius_Mark;
  StepWeight *GetAccessToCamerasWeight;
  short *GetAccessToCamerasWeight_Mobius_Mark;
  StepWeight *StudySecurityRoutinesWeight;
  short *StudySecurityRoutinesWeight_Mobius_Mark;
  StepWeight *GetAccessToAlarmsWeight;
  short *GetAccessToAlarmsWeight_Mobius_Mark;
  BeginAdversaryDecision *MakeDecision;
  short *MakeDecision_Mobius_Mark;
  double *TheDistributionParameters;

  SafeBreakFailureStep();
  ~SafeBreakFailureStep();
  bool Enabled();
  void LinkVariables();
  double Weight();
  bool ReactivationPredicate();
  bool ReactivationFunction();
  double SampleDistribution();
  double* ReturnDistributionParameters();
  double getCost();
  double getOutcomeProbability();
  double getDetection();
  int Rank();
  double timeDistributionParameter0();
  bool preconditionsMet();
  void executeEffects();
}; // SafeBreakFailureStep

class SafeBreakSuccessStep : public Step {
public:

  Goal *Money;
  short* Money_Mobius_Mark;
  Access *SecurePath;
  short* SecurePath_Mobius_Mark;
  Access *CamerasControl;
  short* CamerasControl_Mobius_Mark;
  Access *AlarmsControl;
  short* AlarmsControl_Mobius_Mark;
  Skill *Breaker;
  short* Breaker_Mobius_Mark;
  Knowledge *SafeCombination;
  short* SafeCombination_Mobius_Mark;
  Knowledge *SecurityRoutines;
  short* SecurityRoutines_Mobius_Mark;
  StepChosen *SafeBreakChosen;
  short *SafeBreakChosen_Mobius_Mark;
  StepWeight *DoNothingWeight;
  short *DoNothingWeight_Mobius_Mark;
  StepWeight *FindSecureAccessWeight;
  short *FindSecureAccessWeight_Mobius_Mark;
  StepWeight *SafeBreakWeight;
  short *SafeBreakWeight_Mobius_Mark;
  StepWeight *GetAccessToCamerasWeight;
  short *GetAccessToCamerasWeight_Mobius_Mark;
  StepWeight *StudySecurityRoutinesWeight;
  short *StudySecurityRoutinesWeight_Mobius_Mark;
  StepWeight *GetAccessToAlarmsWeight;
  short *GetAccessToAlarmsWeight_Mobius_Mark;
  BeginAdversaryDecision *MakeDecision;
  short *MakeDecision_Mobius_Mark;
  double *TheDistributionParameters;

  SafeBreakSuccessStep();
  ~SafeBreakSuccessStep();
  bool Enabled();
  void LinkVariables();
  double Weight();
  bool ReactivationPredicate();
  bool ReactivationFunction();
  double SampleDistribution();
  double* ReturnDistributionParameters();
  double getCost();
  double getOutcomeProbability();
  double getDetection();
  int Rank();
  double timeDistributionParameter0();
  bool preconditionsMet();
  void executeEffects();
}; // SafeBreakSuccessStep

class GetAccessToCamerasFailureStep : public Step {
public:

  Access *CamerasControl;
  short* CamerasControl_Mobius_Mark;
  Knowledge *SecVulnerabilities;
  short* SecVulnerabilities_Mobius_Mark;
  Access *PhisicalAccess;
  short* PhisicalAccess_Mobius_Mark;
  Skill *Stealth;
  short* Stealth_Mobius_Mark;
  Skill *Hacker;
  short* Hacker_Mobius_Mark;
  StepChosen *GetAccessToCamerasChosen;
  short *GetAccessToCamerasChosen_Mobius_Mark;
  StepWeight *DoNothingWeight;
  short *DoNothingWeight_Mobius_Mark;
  StepWeight *FindSecureAccessWeight;
  short *FindSecureAccessWeight_Mobius_Mark;
  StepWeight *SafeBreakWeight;
  short *SafeBreakWeight_Mobius_Mark;
  StepWeight *GetAccessToCamerasWeight;
  short *GetAccessToCamerasWeight_Mobius_Mark;
  StepWeight *StudySecurityRoutinesWeight;
  short *StudySecurityRoutinesWeight_Mobius_Mark;
  StepWeight *GetAccessToAlarmsWeight;
  short *GetAccessToAlarmsWeight_Mobius_Mark;
  BeginAdversaryDecision *MakeDecision;
  short *MakeDecision_Mobius_Mark;
  double *TheDistributionParameters;

  GetAccessToCamerasFailureStep();
  ~GetAccessToCamerasFailureStep();
  bool Enabled();
  void LinkVariables();
  double Weight();
  bool ReactivationPredicate();
  bool ReactivationFunction();
  double SampleDistribution();
  double* ReturnDistributionParameters();
  double getCost();
  double getOutcomeProbability();
  double getDetection();
  int Rank();
  double timeDistributionParameter0();
  bool preconditionsMet();
  void executeEffects();
}; // GetAccessToCamerasFailureStep

class GetAccessToCamerasSuccessStep : public Step {
public:

  Access *CamerasControl;
  short* CamerasControl_Mobius_Mark;
  Knowledge *SecVulnerabilities;
  short* SecVulnerabilities_Mobius_Mark;
  Access *PhisicalAccess;
  short* PhisicalAccess_Mobius_Mark;
  Skill *Stealth;
  short* Stealth_Mobius_Mark;
  Skill *Hacker;
  short* Hacker_Mobius_Mark;
  StepChosen *GetAccessToCamerasChosen;
  short *GetAccessToCamerasChosen_Mobius_Mark;
  StepWeight *DoNothingWeight;
  short *DoNothingWeight_Mobius_Mark;
  StepWeight *FindSecureAccessWeight;
  short *FindSecureAccessWeight_Mobius_Mark;
  StepWeight *SafeBreakWeight;
  short *SafeBreakWeight_Mobius_Mark;
  StepWeight *GetAccessToCamerasWeight;
  short *GetAccessToCamerasWeight_Mobius_Mark;
  StepWeight *StudySecurityRoutinesWeight;
  short *StudySecurityRoutinesWeight_Mobius_Mark;
  StepWeight *GetAccessToAlarmsWeight;
  short *GetAccessToAlarmsWeight_Mobius_Mark;
  BeginAdversaryDecision *MakeDecision;
  short *MakeDecision_Mobius_Mark;
  double *TheDistributionParameters;

  GetAccessToCamerasSuccessStep();
  ~GetAccessToCamerasSuccessStep();
  bool Enabled();
  void LinkVariables();
  double Weight();
  bool ReactivationPredicate();
  bool ReactivationFunction();
  double SampleDistribution();
  double* ReturnDistributionParameters();
  double getCost();
  double getOutcomeProbability();
  double getDetection();
  int Rank();
  double timeDistributionParameter0();
  bool preconditionsMet();
  void executeEffects();
}; // GetAccessToCamerasSuccessStep

class StudySecurityRoutinesFailureStep : public Step {
public:

  Knowledge *SecurityRoutines;
  short* SecurityRoutines_Mobius_Mark;
  Access *CamerasControl;
  short* CamerasControl_Mobius_Mark;
  StepChosen *StudySecurityRoutinesChosen;
  short *StudySecurityRoutinesChosen_Mobius_Mark;
  StepWeight *DoNothingWeight;
  short *DoNothingWeight_Mobius_Mark;
  StepWeight *FindSecureAccessWeight;
  short *FindSecureAccessWeight_Mobius_Mark;
  StepWeight *SafeBreakWeight;
  short *SafeBreakWeight_Mobius_Mark;
  StepWeight *GetAccessToCamerasWeight;
  short *GetAccessToCamerasWeight_Mobius_Mark;
  StepWeight *StudySecurityRoutinesWeight;
  short *StudySecurityRoutinesWeight_Mobius_Mark;
  StepWeight *GetAccessToAlarmsWeight;
  short *GetAccessToAlarmsWeight_Mobius_Mark;
  BeginAdversaryDecision *MakeDecision;
  short *MakeDecision_Mobius_Mark;
  double *TheDistributionParameters;

  StudySecurityRoutinesFailureStep();
  ~StudySecurityRoutinesFailureStep();
  bool Enabled();
  void LinkVariables();
  double Weight();
  bool ReactivationPredicate();
  bool ReactivationFunction();
  double SampleDistribution();
  double* ReturnDistributionParameters();
  double getCost();
  double getOutcomeProbability();
  double getDetection();
  int Rank();
  double timeDistributionParameter0();
  bool preconditionsMet();
  void executeEffects();
}; // StudySecurityRoutinesFailureStep

class StudySecurityRoutinesSuccessStep : public Step {
public:

  Knowledge *SecurityRoutines;
  short* SecurityRoutines_Mobius_Mark;
  Access *CamerasControl;
  short* CamerasControl_Mobius_Mark;
  StepChosen *StudySecurityRoutinesChosen;
  short *StudySecurityRoutinesChosen_Mobius_Mark;
  StepWeight *DoNothingWeight;
  short *DoNothingWeight_Mobius_Mark;
  StepWeight *FindSecureAccessWeight;
  short *FindSecureAccessWeight_Mobius_Mark;
  StepWeight *SafeBreakWeight;
  short *SafeBreakWeight_Mobius_Mark;
  StepWeight *GetAccessToCamerasWeight;
  short *GetAccessToCamerasWeight_Mobius_Mark;
  StepWeight *StudySecurityRoutinesWeight;
  short *StudySecurityRoutinesWeight_Mobius_Mark;
  StepWeight *GetAccessToAlarmsWeight;
  short *GetAccessToAlarmsWeight_Mobius_Mark;
  BeginAdversaryDecision *MakeDecision;
  short *MakeDecision_Mobius_Mark;
  double *TheDistributionParameters;

  StudySecurityRoutinesSuccessStep();
  ~StudySecurityRoutinesSuccessStep();
  bool Enabled();
  void LinkVariables();
  double Weight();
  bool ReactivationPredicate();
  bool ReactivationFunction();
  double SampleDistribution();
  double* ReturnDistributionParameters();
  double getCost();
  double getOutcomeProbability();
  double getDetection();
  int Rank();
  double timeDistributionParameter0();
  bool preconditionsMet();
  void executeEffects();
}; // StudySecurityRoutinesSuccessStep

class StudySecurityRoutinesFailureCameraAccessFoundStep : public Step {
public:

  Knowledge *SecurityRoutines;
  short* SecurityRoutines_Mobius_Mark;
  Access *CamerasControl;
  short* CamerasControl_Mobius_Mark;
  StepChosen *StudySecurityRoutinesChosen;
  short *StudySecurityRoutinesChosen_Mobius_Mark;
  StepWeight *DoNothingWeight;
  short *DoNothingWeight_Mobius_Mark;
  StepWeight *FindSecureAccessWeight;
  short *FindSecureAccessWeight_Mobius_Mark;
  StepWeight *SafeBreakWeight;
  short *SafeBreakWeight_Mobius_Mark;
  StepWeight *GetAccessToCamerasWeight;
  short *GetAccessToCamerasWeight_Mobius_Mark;
  StepWeight *StudySecurityRoutinesWeight;
  short *StudySecurityRoutinesWeight_Mobius_Mark;
  StepWeight *GetAccessToAlarmsWeight;
  short *GetAccessToAlarmsWeight_Mobius_Mark;
  BeginAdversaryDecision *MakeDecision;
  short *MakeDecision_Mobius_Mark;
  double *TheDistributionParameters;

  StudySecurityRoutinesFailureCameraAccessFoundStep();
  ~StudySecurityRoutinesFailureCameraAccessFoundStep();
  bool Enabled();
  void LinkVariables();
  double Weight();
  bool ReactivationPredicate();
  bool ReactivationFunction();
  double SampleDistribution();
  double* ReturnDistributionParameters();
  double getCost();
  double getOutcomeProbability();
  double getDetection();
  int Rank();
  double timeDistributionParameter0();
  bool preconditionsMet();
  void executeEffects();
}; // StudySecurityRoutinesFailureCameraAccessFoundStep

class GetAccessToAlarmsFailureStep : public Step {
public:

  Access *AlarmsControl;
  short* AlarmsControl_Mobius_Mark;
  Knowledge *SecVulnerabilities;
  short* SecVulnerabilities_Mobius_Mark;
  Access *PhisicalAccess;
  short* PhisicalAccess_Mobius_Mark;
  Skill *Stealth;
  short* Stealth_Mobius_Mark;
  Skill *Hacker;
  short* Hacker_Mobius_Mark;
  StepChosen *GetAccessToAlarmsChosen;
  short *GetAccessToAlarmsChosen_Mobius_Mark;
  StepWeight *DoNothingWeight;
  short *DoNothingWeight_Mobius_Mark;
  StepWeight *FindSecureAccessWeight;
  short *FindSecureAccessWeight_Mobius_Mark;
  StepWeight *SafeBreakWeight;
  short *SafeBreakWeight_Mobius_Mark;
  StepWeight *GetAccessToCamerasWeight;
  short *GetAccessToCamerasWeight_Mobius_Mark;
  StepWeight *StudySecurityRoutinesWeight;
  short *StudySecurityRoutinesWeight_Mobius_Mark;
  StepWeight *GetAccessToAlarmsWeight;
  short *GetAccessToAlarmsWeight_Mobius_Mark;
  BeginAdversaryDecision *MakeDecision;
  short *MakeDecision_Mobius_Mark;
  double *TheDistributionParameters;

  GetAccessToAlarmsFailureStep();
  ~GetAccessToAlarmsFailureStep();
  bool Enabled();
  void LinkVariables();
  double Weight();
  bool ReactivationPredicate();
  bool ReactivationFunction();
  double SampleDistribution();
  double* ReturnDistributionParameters();
  double getCost();
  double getOutcomeProbability();
  double getDetection();
  int Rank();
  double timeDistributionParameter0();
  bool preconditionsMet();
  void executeEffects();
}; // GetAccessToAlarmsFailureStep

class GetAccessToAlarmsSuccessIWannaDiscreditStep : public Step {
public:

  Access *AlarmsControl;
  short* AlarmsControl_Mobius_Mark;
  Knowledge *SecVulnerabilities;
  short* SecVulnerabilities_Mobius_Mark;
  Access *PhisicalAccess;
  short* PhisicalAccess_Mobius_Mark;
  Skill *Stealth;
  short* Stealth_Mobius_Mark;
  Skill *Hacker;
  short* Hacker_Mobius_Mark;
  StepChosen *GetAccessToAlarmsChosen;
  short *GetAccessToAlarmsChosen_Mobius_Mark;
  StepWeight *DoNothingWeight;
  short *DoNothingWeight_Mobius_Mark;
  StepWeight *FindSecureAccessWeight;
  short *FindSecureAccessWeight_Mobius_Mark;
  StepWeight *SafeBreakWeight;
  short *SafeBreakWeight_Mobius_Mark;
  StepWeight *GetAccessToCamerasWeight;
  short *GetAccessToCamerasWeight_Mobius_Mark;
  StepWeight *StudySecurityRoutinesWeight;
  short *StudySecurityRoutinesWeight_Mobius_Mark;
  StepWeight *GetAccessToAlarmsWeight;
  short *GetAccessToAlarmsWeight_Mobius_Mark;
  BeginAdversaryDecision *MakeDecision;
  short *MakeDecision_Mobius_Mark;
  double *TheDistributionParameters;

  GetAccessToAlarmsSuccessIWannaDiscreditStep();
  ~GetAccessToAlarmsSuccessIWannaDiscreditStep();
  bool Enabled();
  void LinkVariables();
  double Weight();
  bool ReactivationPredicate();
  bool ReactivationFunction();
  double SampleDistribution();
  double* ReturnDistributionParameters();
  double getCost();
  double getOutcomeProbability();
  double getDetection();
  int Rank();
  double timeDistributionParameter0();
  bool preconditionsMet();
  void executeEffects();
}; // GetAccessToAlarmsSuccessIWannaDiscreditStep

  //List of user-specified state variables
  Access *SecurePath;
  Access *CamerasControl;
  Access *PhisicalAccess;
  Access *AlarmsControl;
  Knowledge *SecurityRoutines;
  Knowledge *SecVulnerabilities;
  Knowledge *SafeCombination;
  Skill *Stealth;
  Skill *Hacker;
  Skill *Breaker;
  Goal *Money;
  //List of attack step weight state variables
  StepWeight *DoNothingWeight;
  StepWeight *FindSecureAccessWeight;
  StepWeight *SafeBreakWeight;
  StepWeight *GetAccessToCamerasWeight;
  StepWeight *StudySecurityRoutinesWeight;
  StepWeight *GetAccessToAlarmsWeight;
  //List of attack step chosen state variables
  StepChosen *DoNothingChosen;
  StepChosen *FindSecureAccessChosen;
  StepChosen *SafeBreakChosen;
  StepChosen *GetAccessToCamerasChosen;
  StepChosen *StudySecurityRoutinesChosen;
  StepChosen *GetAccessToAlarmsChosen;
  //List of attack steps
  DoNothingOutcome1Step DoNothingOutcome1;
  FindSecureAccessFailureStep FindSecureAccessFailure;
  FindSecureAccessSuccessStep FindSecureAccessSuccess;
  FindSecureAccessFailureCameraAccessFoundStep FindSecureAccessFailureCameraAccessFound;
  SafeBreakFailureStep SafeBreakFailure;
  SafeBreakSuccessStep SafeBreakSuccess;
  GetAccessToCamerasFailureStep GetAccessToCamerasFailure;
  GetAccessToCamerasSuccessStep GetAccessToCamerasSuccess;
  StudySecurityRoutinesFailureStep StudySecurityRoutinesFailure;
  StudySecurityRoutinesSuccessStep StudySecurityRoutinesSuccess;
  StudySecurityRoutinesFailureCameraAccessFoundStep StudySecurityRoutinesFailureCameraAccessFound;
  GetAccessToAlarmsFailureStep GetAccessToAlarmsFailure;
  GetAccessToAlarmsSuccessIWannaDiscreditStep GetAccessToAlarmsSuccessIWannaDiscredit;
  DoNothingAdversaryDecision DoNothingAD;
  FindSecureAccessAdversaryDecision FindSecureAccessAD;
  SafeBreakAdversaryDecision SafeBreakAD;
  GetAccessToCamerasAdversaryDecision GetAccessToCamerasAD;
  StudySecurityRoutinesAdversaryDecision StudySecurityRoutinesAD;
  GetAccessToAlarmsAdversaryDecision GetAccessToAlarmsAD;
  //Groups for attack steps
  PreselectGroup ImmediateGroup;
  PostselectGroup FindSecureAccessGroup;
  PostselectGroup SafeBreakGroup;
  PostselectGroup GetAccessToCamerasGroup;
  PostselectGroup StudySecurityRoutinesGroup;
  PostselectGroup GetAccessToAlarmsGroup;
  PostselectGroup AdversaryDecisionGroup;
  AttackModelADVISE();
  ~AttackModelADVISE();
  void assignSVsToAttackSteps();
  double convertCostToUtility(double cost);
  double convertDetectionToUtility(double detections);
  double convertPayoffToUtility(double payoff);
  void customInitialization();

protected:
}; // end AttackModelADVISE

#endif // AttackModelADVISE_H_
