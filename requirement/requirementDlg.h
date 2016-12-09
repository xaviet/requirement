
// requirementDlg.h : header file
//

#pragma once
#include "afxwin.h"


// CrequirementDlg dialog
class CrequirementDlg : public CDialogEx
{
// Construction
public:
	CrequirementDlg(CWnd* pParent = NULL);	// standard constructor

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_REQUIREMENT_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support


// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	virtual BOOL OnInitDialog();
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:

  CString m_macauto;
  CString m_macspec;
  CString m_idauto;
  CString m_idspec;
  CString m_idlast;
  CString m_cstrport;
  CString m_cstrstatus;
  CString m_cstrareaid;
  CEdit m_editmacspec;
  CEdit m_editidspec;
  int m_radiomac;
  int m_radioid;
  afx_msg void OnClickedRadio1();
  afx_msg void OnClickedRadio3();
  afx_msg void OnBnClickedRadio2();
  afx_msg void OnBnClickedRadio4();
};
