﻿
// MFCApplication1.h: главный файл заголовка для приложения PROJECT_NAME
//

#pragma once

#ifndef __AFXWIN_H__
	#error "включить pch.h до включения этого файла в PCH"
#endif

#include "resource.h"		// основные символы


// CMainDlg:
// Сведения о реализации этого класса: MFCApplication1.cpp
//

class CMainDlg : public CWinApp
{
public:
	CMainDlg();

// Переопределение
public:
	virtual BOOL InitInstance();

// Реализация

	DECLARE_MESSAGE_MAP()
};

extern CMainDlg theApp;
