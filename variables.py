# VARIABILE BDT
variables['readBDT'] = {
	'name': 'readBDT(PuppiMET_pt,Lepton_pt,mll,ptll,dphillmet)',
	'range' : (100,0,5),
	'xaxis': 'MVA discriminant',
	'linesToAdd' : ['.L /afs/cern.ch/user/r/rdfexp/bianca/CMSSW_10_2_15_patch2/src/BDT_plot/readBDT.C+', 'initmyreaderBDT()']
}
