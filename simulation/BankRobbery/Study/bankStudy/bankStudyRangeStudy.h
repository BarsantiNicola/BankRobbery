
#ifndef bankStudyRangeSTUDY_H_
#define bankStudyRangeSTUDY_H_

#include "Reward/variables/variablesPVNodes.h"
#include "Reward/variables/variablesPVModel.h"
#include "Cpp/BaseClasses/GlobalVariables.h"
#include "Cpp/Study/BaseStudyClass.hpp"

extern Short breakerSkill;
extern Short hackerSkill;
extern Short safeCombinationKnowledge;
extern Short secVulnerabilitiesKnowledge;
extern Short securityComponentsAccess;
extern Short stealthSkill;

class bankStudyRangeStudy : public BaseStudyClass {
public:

bankStudyRangeStudy();
~bankStudyRangeStudy();

private:

short *breakerSkillValues;
short *hackerSkillValues;
short *safeCombinationKnowledgeValues;
short *secVulnerabilitiesKnowledgeValues;
short *securityComponentsAccessValues;
short *stealthSkillValues;

void SetValues_breakerSkill();
void SetValues_hackerSkill();
void SetValues_safeCombinationKnowledge();
void SetValues_secVulnerabilitiesKnowledge();
void SetValues_securityComponentsAccess();
void SetValues_stealthSkill();

void PrintGlobalValues(int);
void *GetGVValue(char *TheGVName);
void OverrideGVValue(char *TheGVName, void *TheGVValue);
void SetGVs(int expnum);
PVModel *GetPVModel(bool expandTimeArrays);
};

#endif

