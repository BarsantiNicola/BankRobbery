
#include "Study/bankStudy/bankStudyRangeStudy.h"

//******************************************************
//Global Variables
//******************************************************
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
  NumGVs = 7;
  NumExps = 1;

  GVNames = new char*[NumGVs];
  GVTypes = new char*[NumGVs];
  GVNames[0]=strdup("breakerSkill");
  GVTypes[0]=strdup("short");
  GVNames[1]=strdup("cyberVulnerabilitiesKnowledge");
  GVTypes[1]=strdup("short");
  GVNames[2]=strdup("hackerSkill");
  GVTypes[2]=strdup("short");
  GVNames[3]=strdup("secVulnerabilitiesKnowledge");
  GVTypes[3]=strdup("short");
  GVNames[4]=strdup("securityComponentsAccess");
  GVTypes[4]=strdup("short");
  GVNames[5]=strdup("socialEngineerSkill");
  GVTypes[5]=strdup("short");
  GVNames[6]=strdup("stealthSkill");
  GVTypes[6]=strdup("short");

  // create the arrays to store the values of each gv
  breakerSkillValues = new short[NumExps];
  cyberVulnerabilitiesKnowledgeValues = new short[NumExps];
  hackerSkillValues = new short[NumExps];
  secVulnerabilitiesKnowledgeValues = new short[NumExps];
  securityComponentsAccessValues = new short[NumExps];
  socialEngineerSkillValues = new short[NumExps];
  stealthSkillValues = new short[NumExps];

  // call methods to assign values to each gv
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
// set values for breakerSkill
//******************************************************
void bankStudyRangeStudy::SetValues_breakerSkill() {
  breakerSkillValues[0] = 1000;
}


//******************************************************
// set values for cyberVulnerabilitiesKnowledge
//******************************************************
void bankStudyRangeStudy::SetValues_cyberVulnerabilitiesKnowledge() {
  cyberVulnerabilitiesKnowledgeValues[0] = 1;
}


//******************************************************
// set values for hackerSkill
//******************************************************
void bankStudyRangeStudy::SetValues_hackerSkill() {
  hackerSkillValues[0] = 1000;
}


//******************************************************
// set values for secVulnerabilitiesKnowledge
//******************************************************
void bankStudyRangeStudy::SetValues_secVulnerabilitiesKnowledge() {
  secVulnerabilitiesKnowledgeValues[0] = 0;
}


//******************************************************
// set values for securityComponentsAccess
//******************************************************
void bankStudyRangeStudy::SetValues_securityComponentsAccess() {
  securityComponentsAccessValues[0] = 1;
}


//******************************************************
// set values for socialEngineerSkill
//******************************************************
void bankStudyRangeStudy::SetValues_socialEngineerSkill() {
  socialEngineerSkillValues[0] = 1000;
}


//******************************************************
// set values for stealthSkill
//******************************************************
void bankStudyRangeStudy::SetValues_stealthSkill() {
  stealthSkillValues[0] = 1000;
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
  if (strcmp("breakerSkill", TheGVName) == 0)
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
  if (strcmp("breakerSkill", TheGVName) == 0)
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


