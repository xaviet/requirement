
// requirementDlg.cpp : implementation file
//

#include "stdafx.h"
#include "requirement.h"
#include "requirementDlg.h"
#include "afxdialogex.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CrequirementDlg dialog



CrequirementDlg::CrequirementDlg(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_REQUIREMENT_DIALOG, pParent)
  , m_macauto(_T(""))
  , m_macspec(_T(""))
  , m_idauto(_T(""))
  , m_idsped(_T(""))
  , m_idlast(_T(""))
  , m_radiomac(true)
  , m_radioid(true)
  , m_cstrport(_T(""))
  , m_cstrstatus(_T(""))
  , m_cstrareaid(_T(""))
{
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CrequirementDlg::DoDataExchange(CDataExchange* pDX)
{
  CDialogEx::DoDataExchange(pDX);

  DDX_Text(pDX, IDC_EDIT3, m_macauto);
  DDX_Text(pDX, IDC_EDIT4, m_macspec);
  DDX_Text(pDX, IDC_EDIT5, m_idauto);
  DDX_Text(pDX, IDC_EDIT6, m_idsped);
  DDX_Text(pDX, IDC_EDIT7, m_idlast);
  DDX_Text(pDX, IDC_EDIT8, m_cstrport);
  DDX_Text(pDX, IDC_EDIT9, m_cstrstatus);
  DDX_Text(pDX, IDC_EDIT11, m_cstrareaid);
}

BEGIN_MESSAGE_MAP(CrequirementDlg, CDialogEx)
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
END_MESSAGE_MAP()


// CrequirementDlg message handlers

BOOL CrequirementDlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// Set the icon for this dialog.  The framework does this automatically
	//  when the application's main window is not a dialog
	SetIcon(m_hIcon, TRUE);			// Set big icon
	SetIcon(m_hIcon, FALSE);		// Set small icon

	// TODO: Add extra initialization here
  m_macauto = _T("48-df-1c-00-00-10");
  m_macspec = _T("00-00-00-00-00-00");
  m_idauto = _T("10.10.10.10");
  m_idsped = _T("0.0.0.0");
  m_idlast = _T("0.0.0.0");
  m_radiomac = true;
  m_radioid = true;
  m_cstrport = _T("xg.1.2"); 
  m_cstrstatus = _T("indisc");
  m_cstrareaid = _T("1.2.3.4");

  UpdateData(false);
	return TRUE;  // return TRUE  unless you set the focus to a control
}

// If you add a minimize button to your dialog, you will need the code below
//  to draw the icon.  For MFC applications using the document/view model,
//  this is automatically done for you by the framework.

void CrequirementDlg::OnPaint()
{
	if (IsIconic())
	{
		CPaintDC dc(this); // device context for painting

		SendMessage(WM_ICONERASEBKGND, reinterpret_cast<WPARAM>(dc.GetSafeHdc()), 0);

		// Center icon in client rectangle
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// Draw the icon
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialogEx::OnPaint();
	}
}

// The system calls this function to obtain the cursor to display while the user drags
//  the minimized window.
HCURSOR CrequirementDlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}

