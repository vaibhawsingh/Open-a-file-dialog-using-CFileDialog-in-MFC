# Open-a-file-dialog-using-CFileDialog-in-MFC
In MFC how to open file dialog for opening and saving files with the filter

MFC provides two way of saving and opening file.

1st Method (Mannual operation):-

Suppose you have a button either on dialog or any ribbon/Menu bar. You want if that button is clicked file dialog shoud get open.
Now there is two option, 1. Either you want to save a file in specific directory or 2. you want to open one or the other file.



//used for opening a file
CString szFilters= L"Config Files (*.ini)";//|*.NC|Text Files (*.txt)|*.txt|All Files (*.*)|*.*||";
	// Create an Open dialog; the default file name extension is ".my".
	CFileDialog fileDlg (1, NULL, L"*.ini",OFN_FILEMUSTEXIST| OFN_HIDEREADONLY, (LPCTSTR)szFilters, this);



//used for saving a file in specific directory

CString szFilters= L"Config file(*.ini)";//|*.NC|Text Files (*.txt)|*.txt|All Files (*.*)|*.*||";
	// Create an Open dialog; the default file name extension is ".my".
	CFileDialog fileDlg (0, L"ini", NULL,OFN_FILEMUSTEXIST| OFN_HIDEREADONLY, szFilters, this);


if( fileDlg.DoModal ()==IDOK )//opens a file
	{
		CString m_strPathname = fileDlg.GetPathName();//fetch the file from dialog along with path

		ofstream writeToFile(m_strPathname/*"..//RtkPostOption.ini"*/);		//open file for writing
		writeToFile <<"posMode		"<<m_PosModeCtrl.GetCurSel()<<endl;	//writing to the file	
	}
