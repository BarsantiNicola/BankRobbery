
#include "Study/bankStudy/bankStudyRangeStudy.h"

//******************************************************
//Global Variables
//******************************************************
Float adversaryCostPreference;
Short breakerSkill;
Short cyberVulnerabilitiesKnowledge;
Short hackerSkill;
Short secVulnerabilitiesKnowledge;
Short securityComponentsAccess;
Short socialEngineerSkill;
Short stealthSkill;

//********************************************************
//bankStudyRangeStudy Constructor
//********************************************************
bankStudyRangeStudy::bankStudyRangeStudy() {

  // define arrays of global variable names and types
  NumGVs = 8;
  NumExps = 24;

  GVNames = new char*[NumGVs];
  GVTypes = new char*[NumGVs];
  GVNames[0]=strdup("adversaryCostPreference");
  GVTypes[0]=strdup("float");
  GVNames[1]=strdup("breakerSkill");
  GVTypes[1]=strdup("short");
  GVNames[2]=strdup("cyberVulnerabilitiesKnowledge");
  GVTypes[2]=strdup("short");
  GVNames[3]=strdup("hackerSkill");
  GVTypes[3]=strdup("short");
  GVNames[4]=strdup("secVulnerabilitiesKnowledge");
  GVTypes[4]=strdup("short");
  GVNames[5]=strdup("securityComponentsAccess");
  GVTypes[5]=strdup("short");
  GVNames[6]=strdup("socialEngineerSkill");
  GVTypes[6]=strdup("short");
  GVNames[7]=strdup("stealthSkill");
  GVTypes[7]=strdup("short");

  // create the arrays to store the values of each gv
  adversaryCostPreferenceValues = new float[NumExps];
  breakerSkillValues = new short[NumExps];
  cyberVulnerabilitiesKnowledgeValues = new short[NumExps];
  hackerSkillValues = new short[NumExps];
  secVulnerabilitiesKnowledgeValues = new short[NumExps];
  securityComponentsAccessValues = new short[NumExps];
  socialEngineerSkillValues = new short[NumExps];
  stealthSkillValues = new short[NumExps];

  // call methods to assign values to each gv
  SetValues_adversaryCostPreference();
  SetValues_breakerSkill();
  SetValues_cyberVulnerabilitiesKnowledge();
  SetValues_hackerSkill();
  SetValues_secVulnerabilitiesKnowledge();
  SetValues_securityComponentsAccess();
  SetValues_socialEngineerSkill();
  SetValues_stealthSkill();
  SetDefaultMobiusRoot(MOBIUSROOT);
}


//******************************************************
//bankStudyRangeStudy Destructor
//******************************************************
bankStudyRangeStudy::~bankStudyRangeStudy() {
  delete [] adversaryCostPreferenceValues;
  delete [] breakerSkillValues;
  delete [] cyberVulnerabilitiesKnowledgeValues;
  delete [] hackerSkillValues;
  delete [] secVulnerabilitiesKnowledgeValues;
  delete [] securityComponentsAccessValues;
  delete [] socialEngineerSkillValues;
  delete [] stealthSkillValues;
  delete ThePVModel;
}


//******************************************************
// set values for adversaryCostPreference
//******************************************************
void bankStudyRangeStudy::SetValues_adversaryCostPreference() {
  adversaryCostPreferenceValues[0] = 0.0;
  adversaryCostPreferenceValues[1] = 0.5;
  adversaryCostPreferenceValues[2] = 1.0;
  adversaryCostPreferenceValues[3] = 0.0;
  adversaryCostPreferenceValues[4] = 0.5;
  adversaryCostPreferenceValues[5] = 1.0;
  adversaryCostPreferenceValues[6] = 0.0;
  adversaryCostPreferenceValues[7] = 0.5;
  adversaryCostPreferenceValues[8] = 1.0;
  adversaryCostPreferenceValues[9] = 0.0;
  adversaryCostPreferenceValues[10] = 0.5;
  adversaryCostPreferenceValues[11] = 1.0;
  adversaryCostPreferenceValues[12] = 0.0;
  adversaryCostPreferenceValues[13] = 0.5;
  adversaryCostPreferenceValues[14] = 1.0;
  adversaryCostPreferenceValues[15] = 0.0;
  adversaryCostPreferenceValues[16] = 0.5;
  adversaryCostPreferenceValues[17] = 1.0;
  adversaryCostPreferenceValues[18] = 0.0;
  adversaryCostPreferenceValues[19] = 0.5;
  adversaryCostPreferenceValues[20] = 1.0;
  adversaryCostPreferenceValues[21] = 0.0;
  adversaryCostPreferenceValues[22] = 0.5;
  adversaryCostPreferenceValues[23] = 1.0;
}


//******************************************************
// set values for breakerSkill
//******************************************************
void bankStudyRangeStudy::SetValues_breakerSkill() {
  for (int n=0; n<NumExps; n++)
    breakerSkillValues[n] = 1000;
}


//******************************************************
// set values for cyberVulnerabilitiesKnowledge
//******************************************************
void bankStudyRangeStudy::SetValues_cyberVulnerabilitiesKnowledge() {
  cyberVulnerabilitiesKnowledgeValues[0] = 1;
  cyberVulnerabilitiesKnowledgeValues[1] = 1;
  cyberVulnerabilitiesKnowledgeValues[2] = 1;
  cyberVulnerabilitiesKnowledgeValues[3] = 0;
  cyberVulnerabilitiesKnowledgeValues[4] = 0;
  cyberVulnerabilitiesKnowledgeValues[5] = 0;
  cyberVulnerabilitiesKnowledgeValues[6] = 1;
  cyberVulnerabilitiesKnowledgeValues[7] = 1;
  cyberVulnerabilitiesKnowledgeValues[8] = 1;
  cyberVulnerabilitiesKnowledgeValues[9] = 0;
  cyberVulnerabilitiesKnowledgeValues[10] = 0;
  cyberVulnerabilitiesKnowledgeValues[11] = 0;
  cyberVulnerabilitiesKnowledgeValues[12] = 1;
  cyberVulnerabilitiesKnowledgeValues[13] = 1;
  cyberVulnerabilitiesKnowledgeValues[14] = 1;
  cyberVulnerabilitiesKnowledgeValues[15] = 0;
  cyberVulnerabilitiesKnowledgeValues[16] = 0;
  cyberVulnerabilitiesKnowledgeValues[17] = 0;
  cyberVulnerabilitiesKnowledgeValues[18] = 1;
  cyberVulnerabilitiesKnowledgeValues[19] = 1;
  cyberVulnerabilitiesKnowledgeValues[20] = 1;
  cyberVulnerabilitiesKnowledgeValues[21] = 0;
  cyberVulnerabilitiesKnowledgeValues[22] = 0;
  cyberVulnerabilitiesKnowledgeValues[23] = 0;
}


//******************************************************
// set values for hackerSkill
//******************************************************
void bankStudyRangeStudy::SetValues_hackerSkill() {
  for (int n=0; n<NumExps; n++)
    hackerSkillValues[n] = 1000;
}


//******************************************************
// set values for secVulnerabilitiesKnowledge
//******************************************************
void bankStudyRangeStudy::SetValues_secVulnerabilitiesKnowledge() {
  secVulnerabilitiesKnowledgeValues[0] = 1;
  secVulnerabilitiesKnowledgeValues[1] = 1;
  secVulnerabilitiesKnowledgeValues[2] = 1;
  secVulnerabilitiesKnowledgeValues[3] = 1;
  secVulnerabilitiesKnowledgeValues[4] = 1;
  secVulnerabilitiesKnowledgeValues[5] = 1;
  secVulnerabilitiesKnowledgeValues[6] = 0;
  secVulnerabilitiesKnowledgeValues[7] = 0;
  secVulnerabilitiesKnowledgeValues[8] = 0;
  secVulnerabilitiesKnowledgeValues[9] = 0;
  secVulnerabilitiesKnowledgeValues[10] = 0;
  secVulnerabilitiesKnowledgeValues[11] = 0;
  secVulnerabilitiesKnowledgeValues[12] = 1;
  secVulnerabilitiesKnowledgeValues[13] = 1;
  secVulnerabilitiesKnowledgeValues[14] = 1;
  secVulnerabilitiesKnowledgeValues[15] = 1;
  secVulnerabilitiesKnowledgeValues[16] = 1;
  secVulnerabilitiesKnowledgeValues[17] = 1;
  secVulnerabilitiesKnowledgeValues[18] = 0;
  secVulnerabilitiesKnowledgeValues[19] = 0;
  secVulnerabilitiesKnowledgeValues[20] = 0;
  secVulnerabilitiesKnowledgeValues[21] = 0;
  secVulnerabilitiesKnowledgeValues[22] = 0;
  secVulnerabilitiesKnowledgeValues[23] = 0;
}


//******************************************************
// set values for securityComponentsAccess
//******************************************************
void bankStudyRangeStudy::SetValues_securityComponentsAccess() {
  securityComponentsAccessValues[0] = 1;
  securityComponentsAccessValues[1] = 1;
  securityComponentsAccessValues[2] = 1;
  securityComponentsAccessValues[3] = 1;
  securityComponentsAccessValues[4] = 1;
  securityComponentsAccessValues[5] = 1;
  securityComponentsAccessValues[6] = 1;
  securityComponentsAccessValues[7] = 1;
  securityComponentsAccessValues[8] = 1;
  securityComponentsAccessValues[9] = 1;
  securityComponentsAccessValues[10] = 1;
  securityComponentsAccessValues[11] = 1;
  securityComponentsAccessValues[12] = 0;
  securityComponentsAccessValues[13] = 0;
  securityComponentsAccessValues[14] = 0;
  securityComponentsAccessValues[15] = 0;
  securityComponentsAccessValues[16] = 0;
  securityComponentsAccessValues[17] = 0;
  securityComponentsAccessValues[18] = 0;
  securityComponentsAccessValues[19] = 0;
  securityComponentsAccessValues[20] = 0;
  securityComponentsAccessValues[21] = 0;
  securityComponentsAccessValues[22] = 0;
  securityComponentsAccessValues[23] = 0;
}


//******************************************************
// set values for socialEngineerSkill
//******************************************************
void bankStudyRangeStudy::SetValues_socialEngineerSkill() {
  for (int n=0; n<NumExps; n++)
    socialEngineerSkillValues[n] = 1000;
}


//******************************************************
// set values for stealthSkill
//******************************************************
void bankStudyRangeStudy::SetValues_stealthSkill() {
  for (int n=0; n<NumExps; n++)
    stealthSkillValues[n] = 1000;
}



//******************************************************
//print values of gv (for debugging)
//******************************************************
void bankStudyRangeStudy::PrintGlobalValues(int expNum) {
  if (NumGVs == 0) {
    cout<<"There are no global variables."<<endl;
    return;
  }

  SetGVs(expNum);

  cout<<"The Global Variable values for experiment "<<
    GetExpName(expNum)<<" are:"<<endl;
  cout << "adversaryCostPreference\tfloat\t" << adversaryCostPreference << endl;
  cout << "breakerSkill\tshort\t" << breakerSkill << endl;
  cout << "cyberVulnerabilitiesKnowledge\tshort\t" << cyberVulnerabilitiesKnowledge << endl;
  cout << "hackerSkill\tshort\t" << hackerSkill << endl;
  cout << "secVulnerabilitiesKnowledge\tshort\t" << secVulnerabilitiesKnowledge << endl;
  cout << "securityComponentsAccess\tshort\t" << securityComponentsAccess << endl;
  cout << "socialEngineerSkill\tshort\t" << socialEngineerSkill << endl;
  cout << "stealthSkill\tshort\t" << stealthSkill << endl;
}


//******************************************************
//retrieve the value of a global variable
//******************************************************
void *bankStudyRangeStudy::GetGVValue(char *TheGVName) {
  if (strcmp("adversaryCostPreference", TheGVName) == 0)
    return &adversaryCostPreference;
  else if (strcmp("breakerSkill", TheGVName) == 0)
    return &breakerSkill;
  else if (strcmp("cyberVulnerabilitiesKnowledge", TheGVName) == 0)
    return &cyberVulnerabilitiesKnowledge;
  else if (strcmp("hackerSkill", TheGVName) == 0)
    return &hackerSkill;
  else if (strcmp("secVulnerabilitiesKnowledge", TheGVName) == 0)
    return &secVulnerabilitiesKnowledge;
  else if (strcmp("securityComponentsAccess", TheGVName) == 0)
    return &securityComponentsAccess;
  else if (strcmp("socialEngineerSkill", TheGVName) == 0)
    return &socialEngineerSkill;
  else if (strcmp("stealthSkill", TheGVName) == 0)
    return &stealthSkill;
  else 
    cerr<<"!! bankStudyRangeStudy::GetGVValue: Global Variable "<<TheGVName<<" does not exist."<<endl;
  return NULL;
}


//******************************************************
//override the value of a global variable
//******************************************************
void bankStudyRangeStudy::OverrideGVValue(char *TheGVName,void *TheGVValue) {
  if (strcmp("adversaryCostPreference", TheGVName) == 0)
    SetGvValue(adversaryCostPreference, *(float *)TheGVValue);
  else if (strcmp("breakerSkill", TheGVName) == 0)
    SetGvValue(breakerSkill, *(short *)TheGVValue);
  else if (strcmp("cyberVulnerabilitiesKnowledge", TheGVName) == 0)
    SetGvValue(cyberVulnerabilitiesKnowledge, *(short *)TheGVValue);
  else if (strcmp("hackerSkill", TheGVName) == 0)
    SetGvValue(hackerSkill, *(short *)TheGVValue);
  else if (strcmp("secVulnerabilitiesKnowledge", TheGVName) == 0)
    SetGvValue(secVulnerabilitiesKnowledge, *(short *)TheGVValue);
  else if (strcmp("securityComponentsAccess", TheGVName) == 0)
    SetGvValue(securityComponentsAccess, *(short *)TheGVValue);
  else if (strcmp("socialEngineerSkill", TheGVName) == 0)
    SetGvValue(socialEngineerSkill, *(short *)TheGVValue);
  else if (strcmp("stealthSkill", TheGVName) == 0)
    SetGvValue(stealthSkill, *(short *)TheGVValue);
  else 
    cerr<<"!! bankStudyRangeStudy::OverrideGVValue: Global Variable "<<TheGVName<<" does not exist."<<endl;
}


//******************************************************
//set the value of all global variables to the given exp
//******************************************************
void bankStudyRangeStudy::SetGVs(int expNum) {
  SetGvValue(adversaryCostPreference, adversaryCostPreferenceValues[expNum]);
  SetGvValue(breakerSkill, breakerSkillValues[expNum]);
  SetGvValue(cyberVulnerabilitiesKnowledge, cyberVulnerabilitiesKnowledgeValues[expNum]);
  SetGvValue(hackerSkill, hackerSkillValues[expNum]);
  SetGvValue(secVulnerabilitiesKnowledge, secVulnerabilitiesKnowledgeValues[expNum]);
  SetGvValue(securityComponentsAccess, securityComponentsAccessValues[expNum]);
  SetGvValue(socialEngineerSkill, socialEngineerSkillValues[expNum]);
  SetGvValue(stealthSkill, stealthSkillValues[expNum]);
}


//******************************************************
//static class method called by solvers to create study 
//(and thus create all of the model)
//******************************************************
BaseStudyClass* GlobalStudyPtr = NULL;
BaseStudyClass * GenerateStudy() {
  if (GlobalStudyPtr == NULL)
    GlobalStudyPtr = new bankStudyRangeStudy();
  return GlobalStudyPtr;
}

void DestructStudy() {
  delete GlobalStudyPtr;
  GlobalStudyPtr = NULL;
}
//******************************************************
//get and create the PVModel
//******************************************************
PVModel* bankStudyRangeStudy::GetPVModel(bool expandTimeArrays) {
  if (ThePVModel!=NULL)
    delete ThePVModel;
  // create the PV model
  ThePVModel=new variablesPVModel(expandTimeArrays);
  return ThePVModel;
}


