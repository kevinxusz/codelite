#ifndef __referenceanalyseroptionsdlg__
#define __referenceanalyseroptionsdlg__

/**
@file
Subclass of AnalyserOptionsBaseDlg, which is generated by wxFormBuilder.
*/

#include "analyseroptionsbasedlg.h"
#include "analyseroptions.h"

/** Implementing AnalyserOptionsBaseDlg */
class ReferenceAnalyserOptionsDlg : public AnalyserOptionsBaseDlg
{
	AnalyserOptions m_options;
protected:
	// Handlers for AnalyserOptionsBaseDlg events.
	void OnButtonOk( wxCommandEvent& event );
public:
	/** Constructor */
	ReferenceAnalyserOptionsDlg( wxWindow* parent, const AnalyserOptions& options );
	const AnalyserOptions& GetOptions() const{return m_options;}
};

#endif // __referenceanalyseroptionsdlg__
