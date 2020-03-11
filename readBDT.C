#include <TMVA/Reader.h>

using namespace std;


TMVA::Reader* myreaderBDT = new TMVA::Reader();

  int check = 1;

  float PuppiMET_pt_32;
  float Lepton_pt_32;
  float mll_32;
  float ptll_32;
  float dphillmet_32;

void initmyreaderBDT(){

  myreaderBDT->AddVariable("PuppiMET_pt", &PuppiMET_pt_32);
  myreaderBDT->AddVariable("Lepton_pt", &Lepton_pt_32);
  myreaderBDT->AddVariable("mll", &mll_32);
  myreaderBDT->AddVariable("ptll", &ptll_32);
  myreaderBDT->AddVariable("dphillmet", &dphillmet_32);

  TString direction = "/afs/cern.ch/user/r/rdfexp/bianca/CMSSW_10_2_15_patch2/src/PlotsConfigurations/Configurations/VBSOS/SignalRegions/2018/BDT.weights.xml";

  if (check) {
        cout << "BOOKING METHOD!" << endl;
        myreaderBDT->BookMVA("MUCCA_BDT",direction);
        i = 0;
  }
}


float readBDT	(
  	float PuppiMET_pt_33,
  	float Lepton_pt_33,
  	float mll_33,
  	float ptll_33,
  	float dphillmet_33
                ){
  PuppiMET_pt_32  = PuppiMET_pt_33;
  Lepton_pt_32    = Lepton_pt_33;
  mll_32          = mll_33;
  ptll_32         = ptll_33;
  dphillmet_32    = dphillmet_33;

  return  myreaderBDT->EvaluateMVA("MUCCA_BDT");
}
