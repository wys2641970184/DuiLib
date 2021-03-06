
// MFC中使用duilibDlg.h : 头文件
//

#pragma once

#include "DuiFrameWnd.h"

// CMFC中使用duilibDlg 对话框
class CMFC中使用duilibDlg : public CDialogEx
{
// 构造
public:
	CMFC中使用duilibDlg(CWnd* pParent = NULL);	// 标准构造函数

// 对话框数据
	enum { IDD = IDD_MFCDUILIB_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV 支持


// 实现
protected:
	HICON m_hIcon;

	// 生成的消息映射函数
	virtual BOOL OnInitDialog();
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()

	DuiFrameWnd m_duiFrame;
public:
	afx_msg void OnClose();
};
