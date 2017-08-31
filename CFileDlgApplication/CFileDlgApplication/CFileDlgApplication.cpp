
// CFileDlgApplication.cpp : Defines the class behaviors for the application.
//

#include "stdafx.h"
#include "CFileDlgApplication.h"
#include "CFileDlgApplicationDlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CCFileDlgApplicationApp

BEGIN_MESSAGE_MAP(CCFileDlgApplicationApp, CWinApp)
	ON_COMMAND(ID_HELP, &CWinApp::OnHelp)
END_MESSAGE_MAP()


// CCFileDlgApplicationApp construction

CCFileDlgApplicationApp::CCFileDlgApplicationApp()
{
	// TODO: add construction code here,
	// Place all significant initialization in InitInstance
}


// The one and only CCFileDlgApplicationApp object

CCFileDlgApplicationApp theApp;


// CCFileDlgApplicationApp initialization

BOOL CCFileDlgApplicationApp::InitInstance()
{
	CWinApp::InitInstance();


	// Create the shell manager, in case the dialog contains
	// any shell tree view or shell list view controls.
	CShellManager *pShellManager = new CShellManager;

	// Standard initialization
	// If you are not using these features and wish to reduce the size
	// of your final executable, you should remove from the following
	// the specific initialization routines you do not need
	// Change the registry key under which our settings are stored
	// TODO: You should modify this string to be something appropriate
	// such as the name of your company or organization
	SetRegistryKey(_T("Local AppWizard-Generated Applications"));

	CCFileDlgApplicationDlg dlg;
	m_pMainWnd = &dlg;
	INT_PTR nResponse = dlg.DoModal();
	if (nResponse == IDOK)
	{
		// TODO: Place code here to handle when the dialog is
		//  dismissed with OK
	}
	else if (nResponse == IDCANCEL)
	{
		// TODO: Place code here to handle when the dialog is
		//  dismissed with Cancel
	}

	// Delete the shell manager created above.
	if (pShellManager != NULL)
	{
		delete pShellManager;
	}

	// Since the dialog has been closed, return FALSE so that we exit the
	//  application, rather than start the application's message pump.
	return FALSE;
}

