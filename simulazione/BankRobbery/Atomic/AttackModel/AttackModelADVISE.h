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
extern Short secVulnerabilitiesKnowledge;
extern Short securityComponentsAccess;
extern Short socialEngineerSkill;
extern Short cyberVulnerabilitiesKnowledge;
extern UserDistributions* TheDistribution;

/*********************************************************************
               AttackModelADVISE Submodel Definition                   
*********************************************************************/

class AttackModelADVISE : public ADVISEModel {
public:

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

class TransferCustomerMoneyAdversaryDecision : public AdversaryDecision {
public:

  BeginAdversaryDecision *MakeDecision;
  short *MakeDecision_Mobius_Mark;
  StepChosen *TransferCustomerMoneyChosen;
  short *TransferCustomerMoneyChosen_Mobius_Mark;
  StepWeight *TransferCustomerMoneyWeight;
  short *TransferCustomerMoneyWeight_Mobius_Mark;
  double *TheDistributionParameters;

  TransferCustomerMoneyAdversaryDecision();
  ~TransferCustomerMoneyAdversaryDecision();
  bool Enabled();
  void LinkVariables();
  double Weight();
  bool ReactivationPredicate();
  bool ReactivationFunction();
  double SampleDistribution();
  double* ReturnDistributionParameters();
  int Rank();
  BaseActionClass *Fire();
}; // TransferCustomerMoneyAdversaryDecision

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

class TransferBankMoneyAdversaryDecision : public AdversaryDecision {
public:

  BeginAdversaryDecision *MakeDecision;
  short *MakeDecision_Mobius_Mark;
  StepChosen *TransferBankMoneyChosen;
  short *TransferBankMoneyChosen_Mobius_Mark;
  StepWeight *TransferBankMoneyWeight;
  short *TransferBankMoneyWeight_Mobius_Mark;
  double *TheDistributionParameters;

  TransferBankMoneyAdversaryDecision();
  ~TransferBankMoneyAdversaryDecision();
  bool Enabled();
  void LinkVariables();
  double Weight();
  bool ReactivationPredicate();
  bool ReactivationFunction();
  double SampleDistribution();
  double* ReturnDistributionParameters();
  int Rank();
  BaseActionClass *Fire();
}; // TransferBankMoneyAdversaryDecision

class PhishingAdversaryDecision : public AdversaryDecision {
public:

  BeginAdversaryDecision *MakeDecision;
  short *MakeDecision_Mobius_Mark;
  StepChosen *PhishingChosen;
  short *PhishingChosen_Mobius_Mark;
  StepWeight *PhishingWeight;
  short *PhishingWeight_Mobius_Mark;
  double *TheDistributionParameters;

  PhishingAdversaryDecision();
  ~PhishingAdversaryDecision();
  bool Enabled();
  void LinkVariables();
  double Weight();
  bool ReactivationPredicate();
  bool ReactivationFunction();
  double SampleDistribution();
  double* ReturnDistributionParameters();
  int Rank();
  BaseActionClass *Fire();
}; // PhishingAdversaryDecision

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

class GetDirectorCredentialsAdversaryDecision : public AdversaryDecision {
public:

  BeginAdversaryDecision *MakeDecision;
  short *MakeDecision_Mobius_Mark;
  StepChosen *GetDirectorCredentialsChosen;
  short *GetDirectorCredentialsChosen_Mobius_Mark;
  StepWeight *GetDirectorCredentialsWeight;
  short *GetDirectorCredentialsWeight_Mobius_Mark;
  double *TheDistributionParameters;

  GetDirectorCredentialsAdversaryDecision();
  ~GetDirectorCredentialsAdversaryDecision();
  bool Enabled();
  void LinkVariables();
  double Weight();
  bool ReactivationPredicate();
  bool ReactivationFunction();
  double SampleDistribution();
  double* ReturnDistributionParameters();
  int Rank();
  BaseActionClass *Fire();
}; // GetDirectorCredentialsAdversaryDecision

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

class GetSafeCombinationAdversaryDecision : public AdversaryDecision {
public:

  BeginAdversaryDecision *MakeDecision;
  short *MakeDecision_Mobius_Mark;
  StepChosen *GetSafeCombinationChosen;
  short *GetSafeCombinationChosen_Mobius_Mark;
  StepWeight *GetSafeCombinationWeight;
  short *GetSafeCombinationWeight_Mobius_Mark;
  double *TheDistributionParameters;

  GetSafeCombinationAdversaryDecision();
  ~GetSafeCombinationAdversaryDecision();
  bool Enabled();
  void LinkVariables();
  double Weight();
  bool ReactivationPredicate();
  bool ReactivationFunction();
  double SampleDistribution();
  double* ReturnDistributionParameters();
  int Rank();
  BaseActionClass *Fire();
}; // GetSafeCombinationAdversaryDecision

class InfectTheSystemAdversaryDecision : public AdversaryDecision {
public:

  BeginAdversaryDecision *MakeDecision;
  short *MakeDecision_Mobius_Mark;
  StepChosen *InfectTheSystemChosen;
  short *InfectTheSystemChosen_Mobius_Mark;
  StepWeight *InfectTheSystemWeight;
  short *InfectTheSystemWeight_Mobius_Mark;
  double *TheDistributionParameters;

  InfectTheSystemAdversaryDecision();
  ~InfectTheSystemAdversaryDecision();
  bool Enabled();
  void LinkVariables();
  double Weight();
  bool ReactivationPredicate();
  bool ReactivationFunction();
  double SampleDistribution();
  double* ReturnDistributionParameters();
  int Rank();
  BaseActionClass *Fire();
}; // InfectTheSystemAdversaryDecision

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

class CyberAttackAdversaryDecision : public AdversaryDecision {
public:

  BeginAdversaryDecision *MakeDecision;
  short *MakeDecision_Mobius_Mark;
  StepChosen *CyberAttackChosen;
  short *CyberAttackChosen_Mobius_Mark;
  StepWeight *CyberAttackWeight;
  short *CyberAttackWeight_Mobius_Mark;
  double *TheDistributionParameters;

  CyberAttackAdversaryDecision();
  ~CyberAttackAdversaryDecision();
  bool Enabled();
  void LinkVariables();
  double Weight();
  bool ReactivationPredicate();
  bool ReactivationFunction();
  double SampleDistribution();
  double* ReturnDistributionParameters();
  int Rank();
  BaseActionClass *Fire();
}; // CyberAttackAdversaryDecision

class GetAccessToAlarmsFailureStep : public Step {
public:

  Access *AlarmsControl;
  short* AlarmsControl_Mobius_Mark;
  Skill *Hacker;
  short* Hacker_Mobius_Mark;
  Skill *Stealth;
  short* Stealth_Mobius_Mark;
  Knowledge *SecVulnerabilities;
  short* SecVulnerabilities_Mobius_Mark;
  Access *PhisicalAccess;
  short* PhisicalAccess_Mobius_Mark;
  StepChosen *GetAccessToAlarmsChosen;
  short *GetAccessToAlarmsChosen_Mobius_Mark;
  StepWeight *GetAccessToAlarmsWeight;
  short *GetAccessToAlarmsWeight_Mobius_Mark;
  StepWeight *TransferCustomerMoneyWeight;
  short *TransferCustomerMoneyWeight_Mobius_Mark;
  StepWeight *GetAccessToCamerasWeight;
  short *GetAccessToCamerasWeight_Mobius_Mark;
  StepWeight *DoNothingWeight;
  short *DoNothingWeight_Mobius_Mark;
  StepWeight *TransferBankMoneyWeight;
  short *TransferBankMoneyWeight_Mobius_Mark;
  StepWeight *PhishingWeight;
  short *PhishingWeight_Mobius_Mark;
  StepWeight *FindSecureAccessWeight;
  short *FindSecureAccessWeight_Mobius_Mark;
  StepWeight *GetDirectorCredentialsWeight;
  short *GetDirectorCredentialsWeight_Mobius_Mark;
  StepWeight *StudySecurityRoutinesWeight;
  short *StudySecurityRoutinesWeight_Mobius_Mark;
  StepWeight *GetSafeCombinationWeight;
  short *GetSafeCombinationWeight_Mobius_Mark;
  StepWeight *InfectTheSystemWeight;
  short *InfectTheSystemWeight_Mobius_Mark;
  StepWeight *SafeBreakWeight;
  short *SafeBreakWeight_Mobius_Mark;
  StepWeight *CyberAttackWeight;
  short *CyberAttackWeight_Mobius_Mark;
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

class GetAccessToAlarmsSuccessStep : public Step {
public:

  Access *AlarmsControl;
  short* AlarmsControl_Mobius_Mark;
  Skill *Hacker;
  short* Hacker_Mobius_Mark;
  Skill *Stealth;
  short* Stealth_Mobius_Mark;
  Knowledge *SecVulnerabilities;
  short* SecVulnerabilities_Mobius_Mark;
  Access *PhisicalAccess;
  short* PhisicalAccess_Mobius_Mark;
  StepChosen *GetAccessToAlarmsChosen;
  short *GetAccessToAlarmsChosen_Mobius_Mark;
  StepWeight *GetAccessToAlarmsWeight;
  short *GetAccessToAlarmsWeight_Mobius_Mark;
  StepWeight *TransferCustomerMoneyWeight;
  short *TransferCustomerMoneyWeight_Mobius_Mark;
  StepWeight *GetAccessToCamerasWeight;
  short *GetAccessToCamerasWeight_Mobius_Mark;
  StepWeight *DoNothingWeight;
  short *DoNothingWeight_Mobius_Mark;
  StepWeight *TransferBankMoneyWeight;
  short *TransferBankMoneyWeight_Mobius_Mark;
  StepWeight *PhishingWeight;
  short *PhishingWeight_Mobius_Mark;
  StepWeight *FindSecureAccessWeight;
  short *FindSecureAccessWeight_Mobius_Mark;
  StepWeight *GetDirectorCredentialsWeight;
  short *GetDirectorCredentialsWeight_Mobius_Mark;
  StepWeight *StudySecurityRoutinesWeight;
  short *StudySecurityRoutinesWeight_Mobius_Mark;
  StepWeight *GetSafeCombinationWeight;
  short *GetSafeCombinationWeight_Mobius_Mark;
  StepWeight *InfectTheSystemWeight;
  short *InfectTheSystemWeight_Mobius_Mark;
  StepWeight *SafeBreakWeight;
  short *SafeBreakWeight_Mobius_Mark;
  StepWeight *CyberAttackWeight;
  short *CyberAttackWeight_Mobius_Mark;
  BeginAdversaryDecision *MakeDecision;
  short *MakeDecision_Mobius_Mark;
  double *TheDistributionParameters;

  GetAccessToAlarmsSuccessStep();
  ~GetAccessToAlarmsSuccessStep();
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
}; // GetAccessToAlarmsSuccessStep

class TransferCustomerMoneyFailureStep : public Step {
public:

  Goal *DigitalMoney;
  short* DigitalMoney_Mobius_Mark;
  Knowledge *UserCredentials;
  short* UserCredentials_Mobius_Mark;
  StepChosen *TransferCustomerMoneyChosen;
  short *TransferCustomerMoneyChosen_Mobius_Mark;
  StepWeight *GetAccessToAlarmsWeight;
  short *GetAccessToAlarmsWeight_Mobius_Mark;
  StepWeight *TransferCustomerMoneyWeight;
  short *TransferCustomerMoneyWeight_Mobius_Mark;
  StepWeight *GetAccessToCamerasWeight;
  short *GetAccessToCamerasWeight_Mobius_Mark;
  StepWeight *DoNothingWeight;
  short *DoNothingWeight_Mobius_Mark;
  StepWeight *TransferBankMoneyWeight;
  short *TransferBankMoneyWeight_Mobius_Mark;
  StepWeight *PhishingWeight;
  short *PhishingWeight_Mobius_Mark;
  StepWeight *FindSecureAccessWeight;
  short *FindSecureAccessWeight_Mobius_Mark;
  StepWeight *GetDirectorCredentialsWeight;
  short *GetDirectorCredentialsWeight_Mobius_Mark;
  StepWeight *StudySecurityRoutinesWeight;
  short *StudySecurityRoutinesWeight_Mobius_Mark;
  StepWeight *GetSafeCombinationWeight;
  short *GetSafeCombinationWeight_Mobius_Mark;
  StepWeight *InfectTheSystemWeight;
  short *InfectTheSystemWeight_Mobius_Mark;
  StepWeight *SafeBreakWeight;
  short *SafeBreakWeight_Mobius_Mark;
  StepWeight *CyberAttackWeight;
  short *CyberAttackWeight_Mobius_Mark;
  BeginAdversaryDecision *MakeDecision;
  short *MakeDecision_Mobius_Mark;
  double *TheDistributionParameters;

  TransferCustomerMoneyFailureStep();
  ~TransferCustomerMoneyFailureStep();
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
}; // TransferCustomerMoneyFailureStep

class TransferCustomerMoneySuccessStep : public Step {
public:

  Goal *DigitalMoney;
  short* DigitalMoney_Mobius_Mark;
  Knowledge *UserCredentials;
  short* UserCredentials_Mobius_Mark;
  StepChosen *TransferCustomerMoneyChosen;
  short *TransferCustomerMoneyChosen_Mobius_Mark;
  StepWeight *GetAccessToAlarmsWeight;
  short *GetAccessToAlarmsWeight_Mobius_Mark;
  StepWeight *TransferCustomerMoneyWeight;
  short *TransferCustomerMoneyWeight_Mobius_Mark;
  StepWeight *GetAccessToCamerasWeight;
  short *GetAccessToCamerasWeight_Mobius_Mark;
  StepWeight *DoNothingWeight;
  short *DoNothingWeight_Mobius_Mark;
  StepWeight *TransferBankMoneyWeight;
  short *TransferBankMoneyWeight_Mobius_Mark;
  StepWeight *PhishingWeight;
  short *PhishingWeight_Mobius_Mark;
  StepWeight *FindSecureAccessWeight;
  short *FindSecureAccessWeight_Mobius_Mark;
  StepWeight *GetDirectorCredentialsWeight;
  short *GetDirectorCredentialsWeight_Mobius_Mark;
  StepWeight *StudySecurityRoutinesWeight;
  short *StudySecurityRoutinesWeight_Mobius_Mark;
  StepWeight *GetSafeCombinationWeight;
  short *GetSafeCombinationWeight_Mobius_Mark;
  StepWeight *InfectTheSystemWeight;
  short *InfectTheSystemWeight_Mobius_Mark;
  StepWeight *SafeBreakWeight;
  short *SafeBreakWeight_Mobius_Mark;
  StepWeight *CyberAttackWeight;
  short *CyberAttackWeight_Mobius_Mark;
  BeginAdversaryDecision *MakeDecision;
  short *MakeDecision_Mobius_Mark;
  double *TheDistributionParameters;

  TransferCustomerMoneySuccessStep();
  ~TransferCustomerMoneySuccessStep();
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
}; // TransferCustomerMoneySuccessStep

class GetAccessToCamerasFailureStep : public Step {
public:

  Access *CamerasControl;
  short* CamerasControl_Mobius_Mark;
  Skill *Hacker;
  short* Hacker_Mobius_Mark;
  Skill *Stealth;
  short* Stealth_Mobius_Mark;
  Knowledge *SecVulnerabilities;
  short* SecVulnerabilities_Mobius_Mark;
  Access *PhisicalAccess;
  short* PhisicalAccess_Mobius_Mark;
  StepChosen *GetAccessToCamerasChosen;
  short *GetAccessToCamerasChosen_Mobius_Mark;
  StepWeight *GetAccessToAlarmsWeight;
  short *GetAccessToAlarmsWeight_Mobius_Mark;
  StepWeight *TransferCustomerMoneyWeight;
  short *TransferCustomerMoneyWeight_Mobius_Mark;
  StepWeight *GetAccessToCamerasWeight;
  short *GetAccessToCamerasWeight_Mobius_Mark;
  StepWeight *DoNothingWeight;
  short *DoNothingWeight_Mobius_Mark;
  StepWeight *TransferBankMoneyWeight;
  short *TransferBankMoneyWeight_Mobius_Mark;
  StepWeight *PhishingWeight;
  short *PhishingWeight_Mobius_Mark;
  StepWeight *FindSecureAccessWeight;
  short *FindSecureAccessWeight_Mobius_Mark;
  StepWeight *GetDirectorCredentialsWeight;
  short *GetDirectorCredentialsWeight_Mobius_Mark;
  StepWeight *StudySecurityRoutinesWeight;
  short *StudySecurityRoutinesWeight_Mobius_Mark;
  StepWeight *GetSafeCombinationWeight;
  short *GetSafeCombinationWeight_Mobius_Mark;
  StepWeight *InfectTheSystemWeight;
  short *InfectTheSystemWeight_Mobius_Mark;
  StepWeight *SafeBreakWeight;
  short *SafeBreakWeight_Mobius_Mark;
  StepWeight *CyberAttackWeight;
  short *CyberAttackWeight_Mobius_Mark;
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
  Skill *Hacker;
  short* Hacker_Mobius_Mark;
  Skill *Stealth;
  short* Stealth_Mobius_Mark;
  Knowledge *SecVulnerabilities;
  short* SecVulnerabilities_Mobius_Mark;
  Access *PhisicalAccess;
  short* PhisicalAccess_Mobius_Mark;
  StepChosen *GetAccessToCamerasChosen;
  short *GetAccessToCamerasChosen_Mobius_Mark;
  StepWeight *GetAccessToAlarmsWeight;
  short *GetAccessToAlarmsWeight_Mobius_Mark;
  StepWeight *TransferCustomerMoneyWeight;
  short *TransferCustomerMoneyWeight_Mobius_Mark;
  StepWeight *GetAccessToCamerasWeight;
  short *GetAccessToCamerasWeight_Mobius_Mark;
  StepWeight *DoNothingWeight;
  short *DoNothingWeight_Mobius_Mark;
  StepWeight *TransferBankMoneyWeight;
  short *TransferBankMoneyWeight_Mobius_Mark;
  StepWeight *PhishingWeight;
  short *PhishingWeight_Mobius_Mark;
  StepWeight *FindSecureAccessWeight;
  short *FindSecureAccessWeight_Mobius_Mark;
  StepWeight *GetDirectorCredentialsWeight;
  short *GetDirectorCredentialsWeight_Mobius_Mark;
  StepWeight *StudySecurityRoutinesWeight;
  short *StudySecurityRoutinesWeight_Mobius_Mark;
  StepWeight *GetSafeCombinationWeight;
  short *GetSafeCombinationWeight_Mobius_Mark;
  StepWeight *InfectTheSystemWeight;
  short *InfectTheSystemWeight_Mobius_Mark;
  StepWeight *SafeBreakWeight;
  short *SafeBreakWeight_Mobius_Mark;
  StepWeight *CyberAttackWeight;
  short *CyberAttackWeight_Mobius_Mark;
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

class DoNothingOutcome1Step : public Step {
public:

  StepChosen *DoNothingChosen;
  short *DoNothingChosen_Mobius_Mark;
  StepWeight *GetAccessToAlarmsWeight;
  short *GetAccessToAlarmsWeight_Mobius_Mark;
  StepWeight *TransferCustomerMoneyWeight;
  short *TransferCustomerMoneyWeight_Mobius_Mark;
  StepWeight *GetAccessToCamerasWeight;
  short *GetAccessToCamerasWeight_Mobius_Mark;
  StepWeight *DoNothingWeight;
  short *DoNothingWeight_Mobius_Mark;
  StepWeight *TransferBankMoneyWeight;
  short *TransferBankMoneyWeight_Mobius_Mark;
  StepWeight *PhishingWeight;
  short *PhishingWeight_Mobius_Mark;
  StepWeight *FindSecureAccessWeight;
  short *FindSecureAccessWeight_Mobius_Mark;
  StepWeight *GetDirectorCredentialsWeight;
  short *GetDirectorCredentialsWeight_Mobius_Mark;
  StepWeight *StudySecurityRoutinesWeight;
  short *StudySecurityRoutinesWeight_Mobius_Mark;
  StepWeight *GetSafeCombinationWeight;
  short *GetSafeCombinationWeight_Mobius_Mark;
  StepWeight *InfectTheSystemWeight;
  short *InfectTheSystemWeight_Mobius_Mark;
  StepWeight *SafeBreakWeight;
  short *SafeBreakWeight_Mobius_Mark;
  StepWeight *CyberAttackWeight;
  short *CyberAttackWeight_Mobius_Mark;
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

class TransferBankMoneyFailureStep : public Step {
public:

  Goal *DigitalMoney;
  short* DigitalMoney_Mobius_Mark;
  Access *SystemAccess;
  short* SystemAccess_Mobius_Mark;
  Knowledge *DirectorCredentials;
  short* DirectorCredentials_Mobius_Mark;
  StepChosen *TransferBankMoneyChosen;
  short *TransferBankMoneyChosen_Mobius_Mark;
  StepWeight *GetAccessToAlarmsWeight;
  short *GetAccessToAlarmsWeight_Mobius_Mark;
  StepWeight *TransferCustomerMoneyWeight;
  short *TransferCustomerMoneyWeight_Mobius_Mark;
  StepWeight *GetAccessToCamerasWeight;
  short *GetAccessToCamerasWeight_Mobius_Mark;
  StepWeight *DoNothingWeight;
  short *DoNothingWeight_Mobius_Mark;
  StepWeight *TransferBankMoneyWeight;
  short *TransferBankMoneyWeight_Mobius_Mark;
  StepWeight *PhishingWeight;
  short *PhishingWeight_Mobius_Mark;
  StepWeight *FindSecureAccessWeight;
  short *FindSecureAccessWeight_Mobius_Mark;
  StepWeight *GetDirectorCredentialsWeight;
  short *GetDirectorCredentialsWeight_Mobius_Mark;
  StepWeight *StudySecurityRoutinesWeight;
  short *StudySecurityRoutinesWeight_Mobius_Mark;
  StepWeight *GetSafeCombinationWeight;
  short *GetSafeCombinationWeight_Mobius_Mark;
  StepWeight *InfectTheSystemWeight;
  short *InfectTheSystemWeight_Mobius_Mark;
  StepWeight *SafeBreakWeight;
  short *SafeBreakWeight_Mobius_Mark;
  StepWeight *CyberAttackWeight;
  short *CyberAttackWeight_Mobius_Mark;
  BeginAdversaryDecision *MakeDecision;
  short *MakeDecision_Mobius_Mark;
  double *TheDistributionParameters;

  TransferBankMoneyFailureStep();
  ~TransferBankMoneyFailureStep();
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
}; // TransferBankMoneyFailureStep

class TransferBankMoneySuccessStep : public Step {
public:

  Goal *DigitalMoney;
  short* DigitalMoney_Mobius_Mark;
  Access *SystemAccess;
  short* SystemAccess_Mobius_Mark;
  Knowledge *DirectorCredentials;
  short* DirectorCredentials_Mobius_Mark;
  StepChosen *TransferBankMoneyChosen;
  short *TransferBankMoneyChosen_Mobius_Mark;
  StepWeight *GetAccessToAlarmsWeight;
  short *GetAccessToAlarmsWeight_Mobius_Mark;
  StepWeight *TransferCustomerMoneyWeight;
  short *TransferCustomerMoneyWeight_Mobius_Mark;
  StepWeight *GetAccessToCamerasWeight;
  short *GetAccessToCamerasWeight_Mobius_Mark;
  StepWeight *DoNothingWeight;
  short *DoNothingWeight_Mobius_Mark;
  StepWeight *TransferBankMoneyWeight;
  short *TransferBankMoneyWeight_Mobius_Mark;
  StepWeight *PhishingWeight;
  short *PhishingWeight_Mobius_Mark;
  StepWeight *FindSecureAccessWeight;
  short *FindSecureAccessWeight_Mobius_Mark;
  StepWeight *GetDirectorCredentialsWeight;
  short *GetDirectorCredentialsWeight_Mobius_Mark;
  StepWeight *StudySecurityRoutinesWeight;
  short *StudySecurityRoutinesWeight_Mobius_Mark;
  StepWeight *GetSafeCombinationWeight;
  short *GetSafeCombinationWeight_Mobius_Mark;
  StepWeight *InfectTheSystemWeight;
  short *InfectTheSystemWeight_Mobius_Mark;
  StepWeight *SafeBreakWeight;
  short *SafeBreakWeight_Mobius_Mark;
  StepWeight *CyberAttackWeight;
  short *CyberAttackWeight_Mobius_Mark;
  BeginAdversaryDecision *MakeDecision;
  short *MakeDecision_Mobius_Mark;
  double *TheDistributionParameters;

  TransferBankMoneySuccessStep();
  ~TransferBankMoneySuccessStep();
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
}; // TransferBankMoneySuccessStep

class PhishingFailureStep : public Step {
public:

  Knowledge *UserCredentials;
  short* UserCredentials_Mobius_Mark;
  Skill *SocialEngineer;
  short* SocialEngineer_Mobius_Mark;
  StepChosen *PhishingChosen;
  short *PhishingChosen_Mobius_Mark;
  StepWeight *GetAccessToAlarmsWeight;
  short *GetAccessToAlarmsWeight_Mobius_Mark;
  StepWeight *TransferCustomerMoneyWeight;
  short *TransferCustomerMoneyWeight_Mobius_Mark;
  StepWeight *GetAccessToCamerasWeight;
  short *GetAccessToCamerasWeight_Mobius_Mark;
  StepWeight *DoNothingWeight;
  short *DoNothingWeight_Mobius_Mark;
  StepWeight *TransferBankMoneyWeight;
  short *TransferBankMoneyWeight_Mobius_Mark;
  StepWeight *PhishingWeight;
  short *PhishingWeight_Mobius_Mark;
  StepWeight *FindSecureAccessWeight;
  short *FindSecureAccessWeight_Mobius_Mark;
  StepWeight *GetDirectorCredentialsWeight;
  short *GetDirectorCredentialsWeight_Mobius_Mark;
  StepWeight *StudySecurityRoutinesWeight;
  short *StudySecurityRoutinesWeight_Mobius_Mark;
  StepWeight *GetSafeCombinationWeight;
  short *GetSafeCombinationWeight_Mobius_Mark;
  StepWeight *InfectTheSystemWeight;
  short *InfectTheSystemWeight_Mobius_Mark;
  StepWeight *SafeBreakWeight;
  short *SafeBreakWeight_Mobius_Mark;
  StepWeight *CyberAttackWeight;
  short *CyberAttackWeight_Mobius_Mark;
  BeginAdversaryDecision *MakeDecision;
  short *MakeDecision_Mobius_Mark;
  double *TheDistributionParameters;

  PhishingFailureStep();
  ~PhishingFailureStep();
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
}; // PhishingFailureStep

class PhishingSuccessStep : public Step {
public:

  Knowledge *UserCredentials;
  short* UserCredentials_Mobius_Mark;
  Skill *SocialEngineer;
  short* SocialEngineer_Mobius_Mark;
  StepChosen *PhishingChosen;
  short *PhishingChosen_Mobius_Mark;
  StepWeight *GetAccessToAlarmsWeight;
  short *GetAccessToAlarmsWeight_Mobius_Mark;
  StepWeight *TransferCustomerMoneyWeight;
  short *TransferCustomerMoneyWeight_Mobius_Mark;
  StepWeight *GetAccessToCamerasWeight;
  short *GetAccessToCamerasWeight_Mobius_Mark;
  StepWeight *DoNothingWeight;
  short *DoNothingWeight_Mobius_Mark;
  StepWeight *TransferBankMoneyWeight;
  short *TransferBankMoneyWeight_Mobius_Mark;
  StepWeight *PhishingWeight;
  short *PhishingWeight_Mobius_Mark;
  StepWeight *FindSecureAccessWeight;
  short *FindSecureAccessWeight_Mobius_Mark;
  StepWeight *GetDirectorCredentialsWeight;
  short *GetDirectorCredentialsWeight_Mobius_Mark;
  StepWeight *StudySecurityRoutinesWeight;
  short *StudySecurityRoutinesWeight_Mobius_Mark;
  StepWeight *GetSafeCombinationWeight;
  short *GetSafeCombinationWeight_Mobius_Mark;
  StepWeight *InfectTheSystemWeight;
  short *InfectTheSystemWeight_Mobius_Mark;
  StepWeight *SafeBreakWeight;
  short *SafeBreakWeight_Mobius_Mark;
  StepWeight *CyberAttackWeight;
  short *CyberAttackWeight_Mobius_Mark;
  BeginAdversaryDecision *MakeDecision;
  short *MakeDecision_Mobius_Mark;
  double *TheDistributionParameters;

  PhishingSuccessStep();
  ~PhishingSuccessStep();
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
}; // PhishingSuccessStep

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
  StepWeight *GetAccessToAlarmsWeight;
  short *GetAccessToAlarmsWeight_Mobius_Mark;
  StepWeight *TransferCustomerMoneyWeight;
  short *TransferCustomerMoneyWeight_Mobius_Mark;
  StepWeight *GetAccessToCamerasWeight;
  short *GetAccessToCamerasWeight_Mobius_Mark;
  StepWeight *DoNothingWeight;
  short *DoNothingWeight_Mobius_Mark;
  StepWeight *TransferBankMoneyWeight;
  short *TransferBankMoneyWeight_Mobius_Mark;
  StepWeight *PhishingWeight;
  short *PhishingWeight_Mobius_Mark;
  StepWeight *FindSecureAccessWeight;
  short *FindSecureAccessWeight_Mobius_Mark;
  StepWeight *GetDirectorCredentialsWeight;
  short *GetDirectorCredentialsWeight_Mobius_Mark;
  StepWeight *StudySecurityRoutinesWeight;
  short *StudySecurityRoutinesWeight_Mobius_Mark;
  StepWeight *GetSafeCombinationWeight;
  short *GetSafeCombinationWeight_Mobius_Mark;
  StepWeight *InfectTheSystemWeight;
  short *InfectTheSystemWeight_Mobius_Mark;
  StepWeight *SafeBreakWeight;
  short *SafeBreakWeight_Mobius_Mark;
  StepWeight *CyberAttackWeight;
  short *CyberAttackWeight_Mobius_Mark;
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
  StepWeight *GetAccessToAlarmsWeight;
  short *GetAccessToAlarmsWeight_Mobius_Mark;
  StepWeight *TransferCustomerMoneyWeight;
  short *TransferCustomerMoneyWeight_Mobius_Mark;
  StepWeight *GetAccessToCamerasWeight;
  short *GetAccessToCamerasWeight_Mobius_Mark;
  StepWeight *DoNothingWeight;
  short *DoNothingWeight_Mobius_Mark;
  StepWeight *TransferBankMoneyWeight;
  short *TransferBankMoneyWeight_Mobius_Mark;
  StepWeight *PhishingWeight;
  short *PhishingWeight_Mobius_Mark;
  StepWeight *FindSecureAccessWeight;
  short *FindSecureAccessWeight_Mobius_Mark;
  StepWeight *GetDirectorCredentialsWeight;
  short *GetDirectorCredentialsWeight_Mobius_Mark;
  StepWeight *StudySecurityRoutinesWeight;
  short *StudySecurityRoutinesWeight_Mobius_Mark;
  StepWeight *GetSafeCombinationWeight;
  short *GetSafeCombinationWeight_Mobius_Mark;
  StepWeight *InfectTheSystemWeight;
  short *InfectTheSystemWeight_Mobius_Mark;
  StepWeight *SafeBreakWeight;
  short *SafeBreakWeight_Mobius_Mark;
  StepWeight *CyberAttackWeight;
  short *CyberAttackWeight_Mobius_Mark;
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
  StepWeight *GetAccessToAlarmsWeight;
  short *GetAccessToAlarmsWeight_Mobius_Mark;
  StepWeight *TransferCustomerMoneyWeight;
  short *TransferCustomerMoneyWeight_Mobius_Mark;
  StepWeight *GetAccessToCamerasWeight;
  short *GetAccessToCamerasWeight_Mobius_Mark;
  StepWeight *DoNothingWeight;
  short *DoNothingWeight_Mobius_Mark;
  StepWeight *TransferBankMoneyWeight;
  short *TransferBankMoneyWeight_Mobius_Mark;
  StepWeight *PhishingWeight;
  short *PhishingWeight_Mobius_Mark;
  StepWeight *FindSecureAccessWeight;
  short *FindSecureAccessWeight_Mobius_Mark;
  StepWeight *GetDirectorCredentialsWeight;
  short *GetDirectorCredentialsWeight_Mobius_Mark;
  StepWeight *StudySecurityRoutinesWeight;
  short *StudySecurityRoutinesWeight_Mobius_Mark;
  StepWeight *GetSafeCombinationWeight;
  short *GetSafeCombinationWeight_Mobius_Mark;
  StepWeight *InfectTheSystemWeight;
  short *InfectTheSystemWeight_Mobius_Mark;
  StepWeight *SafeBreakWeight;
  short *SafeBreakWeight_Mobius_Mark;
  StepWeight *CyberAttackWeight;
  short *CyberAttackWeight_Mobius_Mark;
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

class GetDirectorCredentialsFailureStep : public Step {
public:

  Knowledge *DirectorCredentials;
  short* DirectorCredentials_Mobius_Mark;
  Access *BackDoor;
  short* BackDoor_Mobius_Mark;
  Skill *Hacker;
  short* Hacker_Mobius_Mark;
  StepChosen *GetDirectorCredentialsChosen;
  short *GetDirectorCredentialsChosen_Mobius_Mark;
  StepWeight *GetAccessToAlarmsWeight;
  short *GetAccessToAlarmsWeight_Mobius_Mark;
  StepWeight *TransferCustomerMoneyWeight;
  short *TransferCustomerMoneyWeight_Mobius_Mark;
  StepWeight *GetAccessToCamerasWeight;
  short *GetAccessToCamerasWeight_Mobius_Mark;
  StepWeight *DoNothingWeight;
  short *DoNothingWeight_Mobius_Mark;
  StepWeight *TransferBankMoneyWeight;
  short *TransferBankMoneyWeight_Mobius_Mark;
  StepWeight *PhishingWeight;
  short *PhishingWeight_Mobius_Mark;
  StepWeight *FindSecureAccessWeight;
  short *FindSecureAccessWeight_Mobius_Mark;
  StepWeight *GetDirectorCredentialsWeight;
  short *GetDirectorCredentialsWeight_Mobius_Mark;
  StepWeight *StudySecurityRoutinesWeight;
  short *StudySecurityRoutinesWeight_Mobius_Mark;
  StepWeight *GetSafeCombinationWeight;
  short *GetSafeCombinationWeight_Mobius_Mark;
  StepWeight *InfectTheSystemWeight;
  short *InfectTheSystemWeight_Mobius_Mark;
  StepWeight *SafeBreakWeight;
  short *SafeBreakWeight_Mobius_Mark;
  StepWeight *CyberAttackWeight;
  short *CyberAttackWeight_Mobius_Mark;
  BeginAdversaryDecision *MakeDecision;
  short *MakeDecision_Mobius_Mark;
  double *TheDistributionParameters;

  GetDirectorCredentialsFailureStep();
  ~GetDirectorCredentialsFailureStep();
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
}; // GetDirectorCredentialsFailureStep

class GetDirectorCredentialsFailureBackdoorfoundStep : public Step {
public:

  Knowledge *DirectorCredentials;
  short* DirectorCredentials_Mobius_Mark;
  Access *BackDoor;
  short* BackDoor_Mobius_Mark;
  Skill *Hacker;
  short* Hacker_Mobius_Mark;
  StepChosen *GetDirectorCredentialsChosen;
  short *GetDirectorCredentialsChosen_Mobius_Mark;
  StepWeight *GetAccessToAlarmsWeight;
  short *GetAccessToAlarmsWeight_Mobius_Mark;
  StepWeight *TransferCustomerMoneyWeight;
  short *TransferCustomerMoneyWeight_Mobius_Mark;
  StepWeight *GetAccessToCamerasWeight;
  short *GetAccessToCamerasWeight_Mobius_Mark;
  StepWeight *DoNothingWeight;
  short *DoNothingWeight_Mobius_Mark;
  StepWeight *TransferBankMoneyWeight;
  short *TransferBankMoneyWeight_Mobius_Mark;
  StepWeight *PhishingWeight;
  short *PhishingWeight_Mobius_Mark;
  StepWeight *FindSecureAccessWeight;
  short *FindSecureAccessWeight_Mobius_Mark;
  StepWeight *GetDirectorCredentialsWeight;
  short *GetDirectorCredentialsWeight_Mobius_Mark;
  StepWeight *StudySecurityRoutinesWeight;
  short *StudySecurityRoutinesWeight_Mobius_Mark;
  StepWeight *GetSafeCombinationWeight;
  short *GetSafeCombinationWeight_Mobius_Mark;
  StepWeight *InfectTheSystemWeight;
  short *InfectTheSystemWeight_Mobius_Mark;
  StepWeight *SafeBreakWeight;
  short *SafeBreakWeight_Mobius_Mark;
  StepWeight *CyberAttackWeight;
  short *CyberAttackWeight_Mobius_Mark;
  BeginAdversaryDecision *MakeDecision;
  short *MakeDecision_Mobius_Mark;
  double *TheDistributionParameters;

  GetDirectorCredentialsFailureBackdoorfoundStep();
  ~GetDirectorCredentialsFailureBackdoorfoundStep();
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
}; // GetDirectorCredentialsFailureBackdoorfoundStep

class GetDirectorCredentialsSuccessStep : public Step {
public:

  Knowledge *DirectorCredentials;
  short* DirectorCredentials_Mobius_Mark;
  Access *BackDoor;
  short* BackDoor_Mobius_Mark;
  Skill *Hacker;
  short* Hacker_Mobius_Mark;
  StepChosen *GetDirectorCredentialsChosen;
  short *GetDirectorCredentialsChosen_Mobius_Mark;
  StepWeight *GetAccessToAlarmsWeight;
  short *GetAccessToAlarmsWeight_Mobius_Mark;
  StepWeight *TransferCustomerMoneyWeight;
  short *TransferCustomerMoneyWeight_Mobius_Mark;
  StepWeight *GetAccessToCamerasWeight;
  short *GetAccessToCamerasWeight_Mobius_Mark;
  StepWeight *DoNothingWeight;
  short *DoNothingWeight_Mobius_Mark;
  StepWeight *TransferBankMoneyWeight;
  short *TransferBankMoneyWeight_Mobius_Mark;
  StepWeight *PhishingWeight;
  short *PhishingWeight_Mobius_Mark;
  StepWeight *FindSecureAccessWeight;
  short *FindSecureAccessWeight_Mobius_Mark;
  StepWeight *GetDirectorCredentialsWeight;
  short *GetDirectorCredentialsWeight_Mobius_Mark;
  StepWeight *StudySecurityRoutinesWeight;
  short *StudySecurityRoutinesWeight_Mobius_Mark;
  StepWeight *GetSafeCombinationWeight;
  short *GetSafeCombinationWeight_Mobius_Mark;
  StepWeight *InfectTheSystemWeight;
  short *InfectTheSystemWeight_Mobius_Mark;
  StepWeight *SafeBreakWeight;
  short *SafeBreakWeight_Mobius_Mark;
  StepWeight *CyberAttackWeight;
  short *CyberAttackWeight_Mobius_Mark;
  BeginAdversaryDecision *MakeDecision;
  short *MakeDecision_Mobius_Mark;
  double *TheDistributionParameters;

  GetDirectorCredentialsSuccessStep();
  ~GetDirectorCredentialsSuccessStep();
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
}; // GetDirectorCredentialsSuccessStep

class StudySecurityRoutinesFailureStep : public Step {
public:

  Knowledge *SecurityRoutines;
  short* SecurityRoutines_Mobius_Mark;
  Access *CamerasControl;
  short* CamerasControl_Mobius_Mark;
  StepChosen *StudySecurityRoutinesChosen;
  short *StudySecurityRoutinesChosen_Mobius_Mark;
  StepWeight *GetAccessToAlarmsWeight;
  short *GetAccessToAlarmsWeight_Mobius_Mark;
  StepWeight *TransferCustomerMoneyWeight;
  short *TransferCustomerMoneyWeight_Mobius_Mark;
  StepWeight *GetAccessToCamerasWeight;
  short *GetAccessToCamerasWeight_Mobius_Mark;
  StepWeight *DoNothingWeight;
  short *DoNothingWeight_Mobius_Mark;
  StepWeight *TransferBankMoneyWeight;
  short *TransferBankMoneyWeight_Mobius_Mark;
  StepWeight *PhishingWeight;
  short *PhishingWeight_Mobius_Mark;
  StepWeight *FindSecureAccessWeight;
  short *FindSecureAccessWeight_Mobius_Mark;
  StepWeight *GetDirectorCredentialsWeight;
  short *GetDirectorCredentialsWeight_Mobius_Mark;
  StepWeight *StudySecurityRoutinesWeight;
  short *StudySecurityRoutinesWeight_Mobius_Mark;
  StepWeight *GetSafeCombinationWeight;
  short *GetSafeCombinationWeight_Mobius_Mark;
  StepWeight *InfectTheSystemWeight;
  short *InfectTheSystemWeight_Mobius_Mark;
  StepWeight *SafeBreakWeight;
  short *SafeBreakWeight_Mobius_Mark;
  StepWeight *CyberAttackWeight;
  short *CyberAttackWeight_Mobius_Mark;
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
  StepWeight *GetAccessToAlarmsWeight;
  short *GetAccessToAlarmsWeight_Mobius_Mark;
  StepWeight *TransferCustomerMoneyWeight;
  short *TransferCustomerMoneyWeight_Mobius_Mark;
  StepWeight *GetAccessToCamerasWeight;
  short *GetAccessToCamerasWeight_Mobius_Mark;
  StepWeight *DoNothingWeight;
  short *DoNothingWeight_Mobius_Mark;
  StepWeight *TransferBankMoneyWeight;
  short *TransferBankMoneyWeight_Mobius_Mark;
  StepWeight *PhishingWeight;
  short *PhishingWeight_Mobius_Mark;
  StepWeight *FindSecureAccessWeight;
  short *FindSecureAccessWeight_Mobius_Mark;
  StepWeight *GetDirectorCredentialsWeight;
  short *GetDirectorCredentialsWeight_Mobius_Mark;
  StepWeight *StudySecurityRoutinesWeight;
  short *StudySecurityRoutinesWeight_Mobius_Mark;
  StepWeight *GetSafeCombinationWeight;
  short *GetSafeCombinationWeight_Mobius_Mark;
  StepWeight *InfectTheSystemWeight;
  short *InfectTheSystemWeight_Mobius_Mark;
  StepWeight *SafeBreakWeight;
  short *SafeBreakWeight_Mobius_Mark;
  StepWeight *CyberAttackWeight;
  short *CyberAttackWeight_Mobius_Mark;
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
  StepWeight *GetAccessToAlarmsWeight;
  short *GetAccessToAlarmsWeight_Mobius_Mark;
  StepWeight *TransferCustomerMoneyWeight;
  short *TransferCustomerMoneyWeight_Mobius_Mark;
  StepWeight *GetAccessToCamerasWeight;
  short *GetAccessToCamerasWeight_Mobius_Mark;
  StepWeight *DoNothingWeight;
  short *DoNothingWeight_Mobius_Mark;
  StepWeight *TransferBankMoneyWeight;
  short *TransferBankMoneyWeight_Mobius_Mark;
  StepWeight *PhishingWeight;
  short *PhishingWeight_Mobius_Mark;
  StepWeight *FindSecureAccessWeight;
  short *FindSecureAccessWeight_Mobius_Mark;
  StepWeight *GetDirectorCredentialsWeight;
  short *GetDirectorCredentialsWeight_Mobius_Mark;
  StepWeight *StudySecurityRoutinesWeight;
  short *StudySecurityRoutinesWeight_Mobius_Mark;
  StepWeight *GetSafeCombinationWeight;
  short *GetSafeCombinationWeight_Mobius_Mark;
  StepWeight *InfectTheSystemWeight;
  short *InfectTheSystemWeight_Mobius_Mark;
  StepWeight *SafeBreakWeight;
  short *SafeBreakWeight_Mobius_Mark;
  StepWeight *CyberAttackWeight;
  short *CyberAttackWeight_Mobius_Mark;
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

class GetSafeCombinationFailureStep : public Step {
public:

  Knowledge *SafeCombination;
  short* SafeCombination_Mobius_Mark;
  Access *BackDoor;
  short* BackDoor_Mobius_Mark;
  Skill *Hacker;
  short* Hacker_Mobius_Mark;
  StepChosen *GetSafeCombinationChosen;
  short *GetSafeCombinationChosen_Mobius_Mark;
  StepWeight *GetAccessToAlarmsWeight;
  short *GetAccessToAlarmsWeight_Mobius_Mark;
  StepWeight *TransferCustomerMoneyWeight;
  short *TransferCustomerMoneyWeight_Mobius_Mark;
  StepWeight *GetAccessToCamerasWeight;
  short *GetAccessToCamerasWeight_Mobius_Mark;
  StepWeight *DoNothingWeight;
  short *DoNothingWeight_Mobius_Mark;
  StepWeight *TransferBankMoneyWeight;
  short *TransferBankMoneyWeight_Mobius_Mark;
  StepWeight *PhishingWeight;
  short *PhishingWeight_Mobius_Mark;
  StepWeight *FindSecureAccessWeight;
  short *FindSecureAccessWeight_Mobius_Mark;
  StepWeight *GetDirectorCredentialsWeight;
  short *GetDirectorCredentialsWeight_Mobius_Mark;
  StepWeight *StudySecurityRoutinesWeight;
  short *StudySecurityRoutinesWeight_Mobius_Mark;
  StepWeight *GetSafeCombinationWeight;
  short *GetSafeCombinationWeight_Mobius_Mark;
  StepWeight *InfectTheSystemWeight;
  short *InfectTheSystemWeight_Mobius_Mark;
  StepWeight *SafeBreakWeight;
  short *SafeBreakWeight_Mobius_Mark;
  StepWeight *CyberAttackWeight;
  short *CyberAttackWeight_Mobius_Mark;
  BeginAdversaryDecision *MakeDecision;
  short *MakeDecision_Mobius_Mark;
  double *TheDistributionParameters;

  GetSafeCombinationFailureStep();
  ~GetSafeCombinationFailureStep();
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
}; // GetSafeCombinationFailureStep

class GetSafeCombinationFailureBackdoorfoundStep : public Step {
public:

  Knowledge *SafeCombination;
  short* SafeCombination_Mobius_Mark;
  Access *BackDoor;
  short* BackDoor_Mobius_Mark;
  Skill *Hacker;
  short* Hacker_Mobius_Mark;
  StepChosen *GetSafeCombinationChosen;
  short *GetSafeCombinationChosen_Mobius_Mark;
  StepWeight *GetAccessToAlarmsWeight;
  short *GetAccessToAlarmsWeight_Mobius_Mark;
  StepWeight *TransferCustomerMoneyWeight;
  short *TransferCustomerMoneyWeight_Mobius_Mark;
  StepWeight *GetAccessToCamerasWeight;
  short *GetAccessToCamerasWeight_Mobius_Mark;
  StepWeight *DoNothingWeight;
  short *DoNothingWeight_Mobius_Mark;
  StepWeight *TransferBankMoneyWeight;
  short *TransferBankMoneyWeight_Mobius_Mark;
  StepWeight *PhishingWeight;
  short *PhishingWeight_Mobius_Mark;
  StepWeight *FindSecureAccessWeight;
  short *FindSecureAccessWeight_Mobius_Mark;
  StepWeight *GetDirectorCredentialsWeight;
  short *GetDirectorCredentialsWeight_Mobius_Mark;
  StepWeight *StudySecurityRoutinesWeight;
  short *StudySecurityRoutinesWeight_Mobius_Mark;
  StepWeight *GetSafeCombinationWeight;
  short *GetSafeCombinationWeight_Mobius_Mark;
  StepWeight *InfectTheSystemWeight;
  short *InfectTheSystemWeight_Mobius_Mark;
  StepWeight *SafeBreakWeight;
  short *SafeBreakWeight_Mobius_Mark;
  StepWeight *CyberAttackWeight;
  short *CyberAttackWeight_Mobius_Mark;
  BeginAdversaryDecision *MakeDecision;
  short *MakeDecision_Mobius_Mark;
  double *TheDistributionParameters;

  GetSafeCombinationFailureBackdoorfoundStep();
  ~GetSafeCombinationFailureBackdoorfoundStep();
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
}; // GetSafeCombinationFailureBackdoorfoundStep

class GetSafeCombinationSuccessStep : public Step {
public:

  Knowledge *SafeCombination;
  short* SafeCombination_Mobius_Mark;
  Access *BackDoor;
  short* BackDoor_Mobius_Mark;
  Skill *Hacker;
  short* Hacker_Mobius_Mark;
  StepChosen *GetSafeCombinationChosen;
  short *GetSafeCombinationChosen_Mobius_Mark;
  StepWeight *GetAccessToAlarmsWeight;
  short *GetAccessToAlarmsWeight_Mobius_Mark;
  StepWeight *TransferCustomerMoneyWeight;
  short *TransferCustomerMoneyWeight_Mobius_Mark;
  StepWeight *GetAccessToCamerasWeight;
  short *GetAccessToCamerasWeight_Mobius_Mark;
  StepWeight *DoNothingWeight;
  short *DoNothingWeight_Mobius_Mark;
  StepWeight *TransferBankMoneyWeight;
  short *TransferBankMoneyWeight_Mobius_Mark;
  StepWeight *PhishingWeight;
  short *PhishingWeight_Mobius_Mark;
  StepWeight *FindSecureAccessWeight;
  short *FindSecureAccessWeight_Mobius_Mark;
  StepWeight *GetDirectorCredentialsWeight;
  short *GetDirectorCredentialsWeight_Mobius_Mark;
  StepWeight *StudySecurityRoutinesWeight;
  short *StudySecurityRoutinesWeight_Mobius_Mark;
  StepWeight *GetSafeCombinationWeight;
  short *GetSafeCombinationWeight_Mobius_Mark;
  StepWeight *InfectTheSystemWeight;
  short *InfectTheSystemWeight_Mobius_Mark;
  StepWeight *SafeBreakWeight;
  short *SafeBreakWeight_Mobius_Mark;
  StepWeight *CyberAttackWeight;
  short *CyberAttackWeight_Mobius_Mark;
  BeginAdversaryDecision *MakeDecision;
  short *MakeDecision_Mobius_Mark;
  double *TheDistributionParameters;

  GetSafeCombinationSuccessStep();
  ~GetSafeCombinationSuccessStep();
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
}; // GetSafeCombinationSuccessStep

class InfectTheSystemFailureStep : public Step {
public:

  Access *SystemAccess;
  short* SystemAccess_Mobius_Mark;
  Access *BackDoor;
  short* BackDoor_Mobius_Mark;
  Skill *Hacker;
  short* Hacker_Mobius_Mark;
  StepChosen *InfectTheSystemChosen;
  short *InfectTheSystemChosen_Mobius_Mark;
  StepWeight *GetAccessToAlarmsWeight;
  short *GetAccessToAlarmsWeight_Mobius_Mark;
  StepWeight *TransferCustomerMoneyWeight;
  short *TransferCustomerMoneyWeight_Mobius_Mark;
  StepWeight *GetAccessToCamerasWeight;
  short *GetAccessToCamerasWeight_Mobius_Mark;
  StepWeight *DoNothingWeight;
  short *DoNothingWeight_Mobius_Mark;
  StepWeight *TransferBankMoneyWeight;
  short *TransferBankMoneyWeight_Mobius_Mark;
  StepWeight *PhishingWeight;
  short *PhishingWeight_Mobius_Mark;
  StepWeight *FindSecureAccessWeight;
  short *FindSecureAccessWeight_Mobius_Mark;
  StepWeight *GetDirectorCredentialsWeight;
  short *GetDirectorCredentialsWeight_Mobius_Mark;
  StepWeight *StudySecurityRoutinesWeight;
  short *StudySecurityRoutinesWeight_Mobius_Mark;
  StepWeight *GetSafeCombinationWeight;
  short *GetSafeCombinationWeight_Mobius_Mark;
  StepWeight *InfectTheSystemWeight;
  short *InfectTheSystemWeight_Mobius_Mark;
  StepWeight *SafeBreakWeight;
  short *SafeBreakWeight_Mobius_Mark;
  StepWeight *CyberAttackWeight;
  short *CyberAttackWeight_Mobius_Mark;
  BeginAdversaryDecision *MakeDecision;
  short *MakeDecision_Mobius_Mark;
  double *TheDistributionParameters;

  InfectTheSystemFailureStep();
  ~InfectTheSystemFailureStep();
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
}; // InfectTheSystemFailureStep

class InfectTheSystemFailureBackdoorfoundStep : public Step {
public:

  Access *SystemAccess;
  short* SystemAccess_Mobius_Mark;
  Access *BackDoor;
  short* BackDoor_Mobius_Mark;
  Skill *Hacker;
  short* Hacker_Mobius_Mark;
  StepChosen *InfectTheSystemChosen;
  short *InfectTheSystemChosen_Mobius_Mark;
  StepWeight *GetAccessToAlarmsWeight;
  short *GetAccessToAlarmsWeight_Mobius_Mark;
  StepWeight *TransferCustomerMoneyWeight;
  short *TransferCustomerMoneyWeight_Mobius_Mark;
  StepWeight *GetAccessToCamerasWeight;
  short *GetAccessToCamerasWeight_Mobius_Mark;
  StepWeight *DoNothingWeight;
  short *DoNothingWeight_Mobius_Mark;
  StepWeight *TransferBankMoneyWeight;
  short *TransferBankMoneyWeight_Mobius_Mark;
  StepWeight *PhishingWeight;
  short *PhishingWeight_Mobius_Mark;
  StepWeight *FindSecureAccessWeight;
  short *FindSecureAccessWeight_Mobius_Mark;
  StepWeight *GetDirectorCredentialsWeight;
  short *GetDirectorCredentialsWeight_Mobius_Mark;
  StepWeight *StudySecurityRoutinesWeight;
  short *StudySecurityRoutinesWeight_Mobius_Mark;
  StepWeight *GetSafeCombinationWeight;
  short *GetSafeCombinationWeight_Mobius_Mark;
  StepWeight *InfectTheSystemWeight;
  short *InfectTheSystemWeight_Mobius_Mark;
  StepWeight *SafeBreakWeight;
  short *SafeBreakWeight_Mobius_Mark;
  StepWeight *CyberAttackWeight;
  short *CyberAttackWeight_Mobius_Mark;
  BeginAdversaryDecision *MakeDecision;
  short *MakeDecision_Mobius_Mark;
  double *TheDistributionParameters;

  InfectTheSystemFailureBackdoorfoundStep();
  ~InfectTheSystemFailureBackdoorfoundStep();
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
}; // InfectTheSystemFailureBackdoorfoundStep

class InfectTheSystemSuccessStep : public Step {
public:

  Access *SystemAccess;
  short* SystemAccess_Mobius_Mark;
  Access *BackDoor;
  short* BackDoor_Mobius_Mark;
  Skill *Hacker;
  short* Hacker_Mobius_Mark;
  StepChosen *InfectTheSystemChosen;
  short *InfectTheSystemChosen_Mobius_Mark;
  StepWeight *GetAccessToAlarmsWeight;
  short *GetAccessToAlarmsWeight_Mobius_Mark;
  StepWeight *TransferCustomerMoneyWeight;
  short *TransferCustomerMoneyWeight_Mobius_Mark;
  StepWeight *GetAccessToCamerasWeight;
  short *GetAccessToCamerasWeight_Mobius_Mark;
  StepWeight *DoNothingWeight;
  short *DoNothingWeight_Mobius_Mark;
  StepWeight *TransferBankMoneyWeight;
  short *TransferBankMoneyWeight_Mobius_Mark;
  StepWeight *PhishingWeight;
  short *PhishingWeight_Mobius_Mark;
  StepWeight *FindSecureAccessWeight;
  short *FindSecureAccessWeight_Mobius_Mark;
  StepWeight *GetDirectorCredentialsWeight;
  short *GetDirectorCredentialsWeight_Mobius_Mark;
  StepWeight *StudySecurityRoutinesWeight;
  short *StudySecurityRoutinesWeight_Mobius_Mark;
  StepWeight *GetSafeCombinationWeight;
  short *GetSafeCombinationWeight_Mobius_Mark;
  StepWeight *InfectTheSystemWeight;
  short *InfectTheSystemWeight_Mobius_Mark;
  StepWeight *SafeBreakWeight;
  short *SafeBreakWeight_Mobius_Mark;
  StepWeight *CyberAttackWeight;
  short *CyberAttackWeight_Mobius_Mark;
  BeginAdversaryDecision *MakeDecision;
  short *MakeDecision_Mobius_Mark;
  double *TheDistributionParameters;

  InfectTheSystemSuccessStep();
  ~InfectTheSystemSuccessStep();
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
}; // InfectTheSystemSuccessStep

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
  StepChosen *SafeBreakChosen;
  short *SafeBreakChosen_Mobius_Mark;
  StepWeight *GetAccessToAlarmsWeight;
  short *GetAccessToAlarmsWeight_Mobius_Mark;
  StepWeight *TransferCustomerMoneyWeight;
  short *TransferCustomerMoneyWeight_Mobius_Mark;
  StepWeight *GetAccessToCamerasWeight;
  short *GetAccessToCamerasWeight_Mobius_Mark;
  StepWeight *DoNothingWeight;
  short *DoNothingWeight_Mobius_Mark;
  StepWeight *TransferBankMoneyWeight;
  short *TransferBankMoneyWeight_Mobius_Mark;
  StepWeight *PhishingWeight;
  short *PhishingWeight_Mobius_Mark;
  StepWeight *FindSecureAccessWeight;
  short *FindSecureAccessWeight_Mobius_Mark;
  StepWeight *GetDirectorCredentialsWeight;
  short *GetDirectorCredentialsWeight_Mobius_Mark;
  StepWeight *StudySecurityRoutinesWeight;
  short *StudySecurityRoutinesWeight_Mobius_Mark;
  StepWeight *GetSafeCombinationWeight;
  short *GetSafeCombinationWeight_Mobius_Mark;
  StepWeight *InfectTheSystemWeight;
  short *InfectTheSystemWeight_Mobius_Mark;
  StepWeight *SafeBreakWeight;
  short *SafeBreakWeight_Mobius_Mark;
  StepWeight *CyberAttackWeight;
  short *CyberAttackWeight_Mobius_Mark;
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
  StepChosen *SafeBreakChosen;
  short *SafeBreakChosen_Mobius_Mark;
  StepWeight *GetAccessToAlarmsWeight;
  short *GetAccessToAlarmsWeight_Mobius_Mark;
  StepWeight *TransferCustomerMoneyWeight;
  short *TransferCustomerMoneyWeight_Mobius_Mark;
  StepWeight *GetAccessToCamerasWeight;
  short *GetAccessToCamerasWeight_Mobius_Mark;
  StepWeight *DoNothingWeight;
  short *DoNothingWeight_Mobius_Mark;
  StepWeight *TransferBankMoneyWeight;
  short *TransferBankMoneyWeight_Mobius_Mark;
  StepWeight *PhishingWeight;
  short *PhishingWeight_Mobius_Mark;
  StepWeight *FindSecureAccessWeight;
  short *FindSecureAccessWeight_Mobius_Mark;
  StepWeight *GetDirectorCredentialsWeight;
  short *GetDirectorCredentialsWeight_Mobius_Mark;
  StepWeight *StudySecurityRoutinesWeight;
  short *StudySecurityRoutinesWeight_Mobius_Mark;
  StepWeight *GetSafeCombinationWeight;
  short *GetSafeCombinationWeight_Mobius_Mark;
  StepWeight *InfectTheSystemWeight;
  short *InfectTheSystemWeight_Mobius_Mark;
  StepWeight *SafeBreakWeight;
  short *SafeBreakWeight_Mobius_Mark;
  StepWeight *CyberAttackWeight;
  short *CyberAttackWeight_Mobius_Mark;
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

class CyberAttackFailureStep : public Step {
public:

  Access *BackDoor;
  short* BackDoor_Mobius_Mark;
  Knowledge *CyberVulnerability;
  short* CyberVulnerability_Mobius_Mark;
  Skill *Hacker;
  short* Hacker_Mobius_Mark;
  StepChosen *CyberAttackChosen;
  short *CyberAttackChosen_Mobius_Mark;
  StepWeight *GetAccessToAlarmsWeight;
  short *GetAccessToAlarmsWeight_Mobius_Mark;
  StepWeight *TransferCustomerMoneyWeight;
  short *TransferCustomerMoneyWeight_Mobius_Mark;
  StepWeight *GetAccessToCamerasWeight;
  short *GetAccessToCamerasWeight_Mobius_Mark;
  StepWeight *DoNothingWeight;
  short *DoNothingWeight_Mobius_Mark;
  StepWeight *TransferBankMoneyWeight;
  short *TransferBankMoneyWeight_Mobius_Mark;
  StepWeight *PhishingWeight;
  short *PhishingWeight_Mobius_Mark;
  StepWeight *FindSecureAccessWeight;
  short *FindSecureAccessWeight_Mobius_Mark;
  StepWeight *GetDirectorCredentialsWeight;
  short *GetDirectorCredentialsWeight_Mobius_Mark;
  StepWeight *StudySecurityRoutinesWeight;
  short *StudySecurityRoutinesWeight_Mobius_Mark;
  StepWeight *GetSafeCombinationWeight;
  short *GetSafeCombinationWeight_Mobius_Mark;
  StepWeight *InfectTheSystemWeight;
  short *InfectTheSystemWeight_Mobius_Mark;
  StepWeight *SafeBreakWeight;
  short *SafeBreakWeight_Mobius_Mark;
  StepWeight *CyberAttackWeight;
  short *CyberAttackWeight_Mobius_Mark;
  BeginAdversaryDecision *MakeDecision;
  short *MakeDecision_Mobius_Mark;
  double *TheDistributionParameters;

  CyberAttackFailureStep();
  ~CyberAttackFailureStep();
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
}; // CyberAttackFailureStep

class CyberAttackSuccessStep : public Step {
public:

  Access *BackDoor;
  short* BackDoor_Mobius_Mark;
  Knowledge *CyberVulnerability;
  short* CyberVulnerability_Mobius_Mark;
  Skill *Hacker;
  short* Hacker_Mobius_Mark;
  StepChosen *CyberAttackChosen;
  short *CyberAttackChosen_Mobius_Mark;
  StepWeight *GetAccessToAlarmsWeight;
  short *GetAccessToAlarmsWeight_Mobius_Mark;
  StepWeight *TransferCustomerMoneyWeight;
  short *TransferCustomerMoneyWeight_Mobius_Mark;
  StepWeight *GetAccessToCamerasWeight;
  short *GetAccessToCamerasWeight_Mobius_Mark;
  StepWeight *DoNothingWeight;
  short *DoNothingWeight_Mobius_Mark;
  StepWeight *TransferBankMoneyWeight;
  short *TransferBankMoneyWeight_Mobius_Mark;
  StepWeight *PhishingWeight;
  short *PhishingWeight_Mobius_Mark;
  StepWeight *FindSecureAccessWeight;
  short *FindSecureAccessWeight_Mobius_Mark;
  StepWeight *GetDirectorCredentialsWeight;
  short *GetDirectorCredentialsWeight_Mobius_Mark;
  StepWeight *StudySecurityRoutinesWeight;
  short *StudySecurityRoutinesWeight_Mobius_Mark;
  StepWeight *GetSafeCombinationWeight;
  short *GetSafeCombinationWeight_Mobius_Mark;
  StepWeight *InfectTheSystemWeight;
  short *InfectTheSystemWeight_Mobius_Mark;
  StepWeight *SafeBreakWeight;
  short *SafeBreakWeight_Mobius_Mark;
  StepWeight *CyberAttackWeight;
  short *CyberAttackWeight_Mobius_Mark;
  BeginAdversaryDecision *MakeDecision;
  short *MakeDecision_Mobius_Mark;
  double *TheDistributionParameters;

  CyberAttackSuccessStep();
  ~CyberAttackSuccessStep();
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
}; // CyberAttackSuccessStep

  //List of user-specified state variables
  Access *CamerasControl;
  Access *SystemAccess;
  Access *SecurePath;
  Access *AlarmsControl;
  Access *PhisicalAccess;
  Access *BackDoor;
  Knowledge *SecurityRoutines;
  Knowledge *SafeCombination;
  Knowledge *SecVulnerabilities;
  Knowledge *CyberVulnerability;
  Knowledge *DirectorCredentials;
  Knowledge *UserCredentials;
  Skill *Hacker;
  Skill *Breaker;
  Skill *SocialEngineer;
  Skill *Stealth;
  Goal *Money;
  Goal *DigitalMoney;
  //List of attack step weight state variables
  StepWeight *GetAccessToAlarmsWeight;
  StepWeight *TransferCustomerMoneyWeight;
  StepWeight *GetAccessToCamerasWeight;
  StepWeight *DoNothingWeight;
  StepWeight *TransferBankMoneyWeight;
  StepWeight *PhishingWeight;
  StepWeight *FindSecureAccessWeight;
  StepWeight *GetDirectorCredentialsWeight;
  StepWeight *StudySecurityRoutinesWeight;
  StepWeight *GetSafeCombinationWeight;
  StepWeight *InfectTheSystemWeight;
  StepWeight *SafeBreakWeight;
  StepWeight *CyberAttackWeight;
  //List of attack step chosen state variables
  StepChosen *GetAccessToAlarmsChosen;
  StepChosen *TransferCustomerMoneyChosen;
  StepChosen *GetAccessToCamerasChosen;
  StepChosen *DoNothingChosen;
  StepChosen *TransferBankMoneyChosen;
  StepChosen *PhishingChosen;
  StepChosen *FindSecureAccessChosen;
  StepChosen *GetDirectorCredentialsChosen;
  StepChosen *StudySecurityRoutinesChosen;
  StepChosen *GetSafeCombinationChosen;
  StepChosen *InfectTheSystemChosen;
  StepChosen *SafeBreakChosen;
  StepChosen *CyberAttackChosen;
  //List of attack steps
  GetAccessToAlarmsFailureStep GetAccessToAlarmsFailure;
  GetAccessToAlarmsSuccessStep GetAccessToAlarmsSuccess;
  TransferCustomerMoneyFailureStep TransferCustomerMoneyFailure;
  TransferCustomerMoneySuccessStep TransferCustomerMoneySuccess;
  GetAccessToCamerasFailureStep GetAccessToCamerasFailure;
  GetAccessToCamerasSuccessStep GetAccessToCamerasSuccess;
  DoNothingOutcome1Step DoNothingOutcome1;
  TransferBankMoneyFailureStep TransferBankMoneyFailure;
  TransferBankMoneySuccessStep TransferBankMoneySuccess;
  PhishingFailureStep PhishingFailure;
  PhishingSuccessStep PhishingSuccess;
  FindSecureAccessFailureStep FindSecureAccessFailure;
  FindSecureAccessSuccessStep FindSecureAccessSuccess;
  FindSecureAccessFailureCameraAccessFoundStep FindSecureAccessFailureCameraAccessFound;
  GetDirectorCredentialsFailureStep GetDirectorCredentialsFailure;
  GetDirectorCredentialsFailureBackdoorfoundStep GetDirectorCredentialsFailureBackdoorfound;
  GetDirectorCredentialsSuccessStep GetDirectorCredentialsSuccess;
  StudySecurityRoutinesFailureStep StudySecurityRoutinesFailure;
  StudySecurityRoutinesSuccessStep StudySecurityRoutinesSuccess;
  StudySecurityRoutinesFailureCameraAccessFoundStep StudySecurityRoutinesFailureCameraAccessFound;
  GetSafeCombinationFailureStep GetSafeCombinationFailure;
  GetSafeCombinationFailureBackdoorfoundStep GetSafeCombinationFailureBackdoorfound;
  GetSafeCombinationSuccessStep GetSafeCombinationSuccess;
  InfectTheSystemFailureStep InfectTheSystemFailure;
  InfectTheSystemFailureBackdoorfoundStep InfectTheSystemFailureBackdoorfound;
  InfectTheSystemSuccessStep InfectTheSystemSuccess;
  SafeBreakFailureStep SafeBreakFailure;
  SafeBreakSuccessStep SafeBreakSuccess;
  CyberAttackFailureStep CyberAttackFailure;
  CyberAttackSuccessStep CyberAttackSuccess;
  GetAccessToAlarmsAdversaryDecision GetAccessToAlarmsAD;
  TransferCustomerMoneyAdversaryDecision TransferCustomerMoneyAD;
  GetAccessToCamerasAdversaryDecision GetAccessToCamerasAD;
  DoNothingAdversaryDecision DoNothingAD;
  TransferBankMoneyAdversaryDecision TransferBankMoneyAD;
  PhishingAdversaryDecision PhishingAD;
  FindSecureAccessAdversaryDecision FindSecureAccessAD;
  GetDirectorCredentialsAdversaryDecision GetDirectorCredentialsAD;
  StudySecurityRoutinesAdversaryDecision StudySecurityRoutinesAD;
  GetSafeCombinationAdversaryDecision GetSafeCombinationAD;
  InfectTheSystemAdversaryDecision InfectTheSystemAD;
  SafeBreakAdversaryDecision SafeBreakAD;
  CyberAttackAdversaryDecision CyberAttackAD;
  //Groups for attack steps
  PreselectGroup ImmediateGroup;
  PostselectGroup GetAccessToAlarmsGroup;
  PostselectGroup TransferCustomerMoneyGroup;
  PostselectGroup GetAccessToCamerasGroup;
  PostselectGroup TransferBankMoneyGroup;
  PostselectGroup PhishingGroup;
  PostselectGroup FindSecureAccessGroup;
  PostselectGroup GetDirectorCredentialsGroup;
  PostselectGroup StudySecurityRoutinesGroup;
  PostselectGroup GetSafeCombinationGroup;
  PostselectGroup InfectTheSystemGroup;
  PostselectGroup SafeBreakGroup;
  PostselectGroup CyberAttackGroup;
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
