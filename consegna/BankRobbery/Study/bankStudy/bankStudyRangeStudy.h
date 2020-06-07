
#ifndef bankStudyRangeSTUDY_H_
#define bankStudyRangeSTUDY_H_

#include "Reward/variables/variablesPVNodes.h"
#include "Reward/variables/variablesPVModel.h"
#include "Cpp/BaseClasses/GlobalVariables.h"
#include "Cpp/Study/BaseStudyClass.hpp"

extern Float adversaryCostPreference;
extern Short breakerSkill;
extern Short cyberVulnerabilitiesKnowledge;
extern Short hackerSkill;
extern Short secVulnerabilitiesKnowledge;
extern Short securityComponentsAccess;
extern Short socialEngineerSkill;
extern Short stealthSkill;

class bankStudyRangeStudy : public BaseStudyClass {
public:

bankStudyRangeStudy();
~bankStudyRangeStudy();

private:

float *adversaryCostPreferenceValues;
short *breakerSkillValues;
short *cyberVulnerabilitiesKnowledgeValues;
short *hackerSkillValues;
short *secVulnerabilitiesKnowledgeValues;
short *securityComponentsAccessValues;
short *socialEngineerSkillValues;
short *stealthSkillValues;

void SetValues_adversaryCostPreference();
void SetValues_breakerSkill();
void SetValues_cyberVulnerabilitiesKnowledge();
void SetValues_hackerSkill();
void SetValues_secVulnerabilitiesKnowledge();
void SetValues_securityComponentsAccess();
void SetValues_socialEngineerSkill();
void SetValues_stealthSkill();

void PrintGlobalValues(int);
void *GetGVValue(char *TheGVName);
void OverrideGVValue(char *TheGVName, void *TheGVValue);
void SetGVs(int expnum);
PVModel *GetPVModel(bool expandTimeArrays);
};

#endif

