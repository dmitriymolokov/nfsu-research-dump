/* spd-match: far pct=8.43 flags=/O1 /c /nologo /TC method=pass_a_tc source=reports/m375_p3/buckets/C2065_undecl_stubs_p1/batches/20260724T141857Z_w0_tc0 */
#include "ghidra_compat.h"

#ifndef _VA_LIST_DEFINED
typedef char *va_list;
#define _VA_LIST_DEFINED
#endif
typedef unsigned int errno_t;
typedef unsigned int (*LPTHREAD_START_ROUTINE)(void *);
typedef HANDLE *LPHANDLE;
typedef BYTE *LPBYTE;
typedef UINT MMRESULT;
typedef __int64 LONGLONG;
typedef long __time32_t;
typedef void *HLINEAPP;
typedef void __cdecl _StartAddress(void *);
typedef WIN32_FIND_DATAA *LPWIN32_FIND_DATAA;
int __cdecl _fclose(FILE *);
int __cdecl _isalnum(int);
int __cdecl WideCharToMultiByte(UINT, DWORD, LPCWSTR, int, LPSTR, int, LPCSTR, BOOL *);
int __cdecl lstrcmpiA(const char *, const char *);
char *__cdecl _strncpy(char *, const char *, unsigned int);
int __cdecl __stricmp(const char *, const char *);
long __cdecl __ftol(void);
unsigned int __cdecl __control87(unsigned int, unsigned int);
void *__cdecl CreateObject(void);
typedef struct tagMSG { unsigned char _[48]; } MSG, tagMSG, *LPMSG;
typedef struct tagPOINT { long x, y; } POINT, tagPOINT, *LPPOINT;
typedef struct tagPAINTSTRUCT { unsigned char _[64]; } PAINTSTRUCT, tagPAINTSTRUCT;
typedef struct varstring_tag { unsigned char _[32]; } varstring_tag;
typedef struct _AFX_EDIT_STATE { unsigned char _[64]; } _AFX_EDIT_STATE;
unsigned __stdcall __beginthreadex(void *, unsigned, unsigned (__stdcall *)(void *), void *, unsigned, unsigned *);

int __cdecl FUN_004e21e0();
int __cdecl FUN_004e2250();
int __cdecl FUN_004e23d0();
int __cdecl FUN_004e3b10();
int __cdecl FUN_004e3f00();
int __cdecl FUN_004f3f90();
int __cdecl FUN_004f6a10();
int __cdecl FUN_00567c70();
int __cdecl FUN_005a36f0();
int __cdecl FUN_005a3710();
int __cdecl FUN_005a3730();
extern int DAT_00745e40;
extern int DAT_00746104;
extern int DAT_00760290;
extern int DAT_00760294;
extern unsigned char *PTR_FUN_006c317c;
extern void LAB_004e4582(void);
extern void LAB_00688c18(void);
void *ExceptionList;

extern char s_VINYL_GROUP_MANUFACTURAR_LOGO_006c3634[];
extern char s_VINYL_GROUP_BODY_VINYL_006c361c[];
extern char s_VINYL_GROUP_UNIQUES_006c35f8[];






undefined4 * FUN_004e40d0(undefined4 *param_1,uint param_2)

{
  char *pcVar1;
  undefined1 uVar2;
  char cVar3;
  byte bVar4;
  int iVar5;
  char *pcVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  uint uVar10;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00688c18;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_004e21e0(param_1,param_2);
  local_8 = 0;
  *param_1 = &PTR_FUN_006c317c;
  FUN_004f6a10("MU_HorizontalBrowserBack.fng",1);
  iVar5 = FUN_004f3f90(&DAT_00746104);
  if (((iVar5 != 0) && (*(int *)(iVar5 + 0x18) != 0)) && (*(int **)(iVar5 + 0x14) != (int *)0x0)) {
    (**(code **)(**(int **)(iVar5 + 0x14) + 8))(0x50fe8c15,0,0,*(int *)(iVar5 + 0x18));
  }
  if (DAT_00745e40 == 1) {
    uVar2 = FUN_005a3710();
    pcVar6 = "VINYL_GROUP_MANUFACTURAR_NAME";
    do {
      pcVar1 = pcVar6 + 1;
      pcVar6 = pcVar6 + 1;
    } while (*pcVar1 != '\0');
    FUN_004e2250(0xfe10f96,0,"MU_GarageVinylGroup.fng",uVar2,0);
    uVar2 = FUN_005a3730();
    pcVar6 = "VINYL_GROUP_MANUFACTURAR_HOOD_LOGO";
    do {
      pcVar1 = pcVar6 + 1;
      pcVar6 = pcVar6 + 1;
    } while (*pcVar1 != '\0');
    FUN_004e2250(0xfdb225b,1,"MU_GarageVinylGroup.fng",uVar2,0);
    uVar10 = DAT_00760294 & 0x3fffffff;
    pcVar6 = "VINYL_GROUP_MANUFACTURAR_LOGO";
    cVar3 = s_VINYL_GROUP_MANUFACTURAR_LOGO_006c3634[0];
    while (cVar3 != '\0') {
      pcVar1 = pcVar6 + 1;
      pcVar6 = pcVar6 + 1;
      cVar3 = *pcVar1;
    }
    cVar3 = FUN_004e3b10(0);
    FUN_004e2250(0xd3f477de,2,"MU_GarageVinylBrowser.fng",uVar10 != 0,'\x01' - (cVar3 != '\0'));
    bVar4 = (byte)DAT_00760290 & 0x3e;
    pcVar6 = "VINYL_GROUP_BODY_VINYL";
    cVar3 = s_VINYL_GROUP_BODY_VINYL_006c361c[0];
    while (cVar3 != '\0') {
      pcVar1 = pcVar6 + 1;
      pcVar6 = pcVar6 + 1;
      cVar3 = *pcVar1;
    }
    cVar3 = FUN_004e3b10(0);
    FUN_004e2250(0xfd7d6bf,3,"MU_GarageVinylBrowser.fng",bVar4 != 0,'\x01' - (cVar3 != '\0'));
    bVar4 = FUN_005a36f0();
    param_2 = (uint)bVar4;
    pcVar6 = "VINYL_GROUP_UNIQUES";
    cVar3 = s_VINYL_GROUP_UNIQUES_006c35f8[0];
    while (cVar3 != '\0') {
      pcVar1 = pcVar6 + 1;
      pcVar6 = pcVar6 + 1;
      cVar3 = *pcVar1;
    }
    cVar3 = FUN_004e3b10(0);
    uVar10 = (uint)(byte)(1 - (cVar3 != '\0'));
    pcVar6 = "MU_GarageVinylBrowser.fng";
    uVar8 = 4;
    uVar7 = 0x916b1508;
  }
  else {
    if (DAT_00745e40 != 2) goto LAB_004e4582;
    cVar3 = FUN_004e3f00(0);
    if ((((cVar3 != '\0') || (cVar3 = FUN_004e3f00(0), cVar3 != '\0')) ||
        ((cVar3 = FUN_004e3f00(0), cVar3 != '\0' ||
         ((cVar3 = FUN_004e3f00(0), cVar3 != '\0' || (cVar3 = FUN_004e3f00(0), cVar3 != '\0'))))))
       || ((cVar3 = FUN_004e3f00(0), cVar3 != '\0' ||
           (((cVar3 = FUN_004e3f00(0), cVar3 != '\0' || (cVar3 = FUN_004e3f00(0), cVar3 != '\0')) ||
            (cVar3 = FUN_004e3f00(0), cVar3 != '\0')))))) {
      uVar2 = FUN_005a3710();
      pcVar6 = "VINYL_GROUP_MANUFACTURAR_NAME";
      do {
        pcVar1 = pcVar6 + 1;
        pcVar6 = pcVar6 + 1;
      } while (*pcVar1 != '\0');
      FUN_004e2250(0xfe10f96,0,"MU_GarageVinylGroup.fng",uVar2,0);
    }
    cVar3 = FUN_004e3f00(0);
    if (((cVar3 != '\0') || (cVar3 = FUN_004e3f00(0), cVar3 != '\0')) ||
       (((cVar3 = FUN_004e3f00(0), cVar3 != '\0' ||
         ((cVar3 = FUN_004e3f00(0), cVar3 != '\0' || (cVar3 = FUN_004e3f00(0), cVar3 != '\0')))) ||
        (cVar3 = FUN_004e3f00(0), cVar3 != '\0')))) {
      uVar2 = FUN_005a3730();
      pcVar6 = "VINYL_GROUP_MANUFACTURAR_HOOD_LOGO";
      do {
        pcVar1 = pcVar6 + 1;
        pcVar6 = pcVar6 + 1;
      } while (*pcVar1 != '\0');
      FUN_004e2250(0xfdb225b,1,"MU_GarageVinylGroup.fng",uVar2,0);
    }
    cVar3 = FUN_004e3b10(0);
    if (cVar3 != '\0') {
      param_2 = (uint)((DAT_00760294 & 0x3fffffff) != 0);
      uVar9 = 0;
      pcVar6 = "MU_GarageVinylBrowser.fng";
      uVar8 = 2;
      uVar7 = 0xd3f477de;
      FUN_00567c70(0xd3f477de,2,"MU_GarageVinylBrowser.fng",param_2,0);
      FUN_004e2250(uVar7,uVar8,pcVar6,param_2,uVar9);
    }
    cVar3 = FUN_004e3b10(0);
    if (cVar3 != '\0') {
      param_2 = (uint)(((byte)DAT_00760290 & 0x3e) != 0);
      uVar9 = 0;
      pcVar6 = "MU_GarageVinylBrowser.fng";
      uVar8 = 3;
      uVar7 = 0xfd7d6bf;
      FUN_00567c70(0xfd7d6bf,3,"MU_GarageVinylBrowser.fng",param_2,0);
      FUN_004e2250(uVar7,uVar8,pcVar6,param_2,uVar9);
    }
    cVar3 = FUN_004e3b10(0);
    if (cVar3 == '\0') goto LAB_004e4582;
    bVar4 = FUN_005a36f0();
    param_2 = (uint)bVar4;
    uVar10 = 0;
    pcVar6 = "MU_GarageVinylBrowser.fng";
    uVar8 = 4;
    uVar7 = 0x916b1508;
    FUN_00567c70(0x916b1508,4,"MU_GarageVinylBrowser.fng",param_2,0);
  }
  FUN_004e2250(uVar7,uVar8,pcVar6,param_2,uVar10);
LAB_004e4582:
  FUN_004e23d0();
  ExceptionList = local_10;
  return param_1;
}
