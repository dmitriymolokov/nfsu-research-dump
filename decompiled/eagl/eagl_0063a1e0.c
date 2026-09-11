/* spd-match: far pct=19.69 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_cheap */
#include "ghidra_compat.h"

int __cdecl FUN_0063e950();
int __cdecl FUN_0063f150();
int __cdecl FUN_00641a70();
int __cdecl FUN_00641bf0();
int __cdecl FUN_00641c40();
int __cdecl FUN_00642360();
int __cdecl FUN_00642380();
int __cdecl FUN_00642450();
extern int DAT_0070f36c;
extern int DAT_0070f370;
extern void LAB_00639110(void);
extern void LAB_006392f0(void);
int unaff_EBX;

void FUN_0063a1e0(void)

{
  int iVar1;
  int iVar2;
  char cVar3;
  undefined4 uVar4;
  HANDLE pvVar5;
  int unaff_EBX;
  int iVar6;
  
  iVar6 = unaff_EBX * 0xac;
  if (*(int *)(iVar6 + DAT_0070f36c) == 0) {
    uVar4 = FUN_00642360(&DAT_0070f370);
    iVar1 = iVar6 + 0x14 + DAT_0070f36c;
    *(undefined4 *)(iVar6 + 0x10 + DAT_0070f36c) = 0;
    FUN_00641bf0(iVar1,&LAB_00639110,0);
    FUN_00641c40(iVar6 + 0x48 + DAT_0070f36c,0,0,iVar6 + 0x14 + DAT_0070f36c);
    FUN_00641a70(iVar6 + 0x7c + DAT_0070f36c);
    iVar1 = iVar6 + DAT_0070f36c;
    pvVar5 = CreateEventA((LPSECURITY_ATTRIBUTES)0x0,1,0,(LPCSTR)0x0);
    *(HANDLE *)(iVar1 + 0xa0) = pvVar5;
    FUN_0063f150(iVar1 + 0x84);
    iVar2 = DAT_0070f36c;
    iVar1 = iVar6 + 4 + DAT_0070f36c;
    *(undefined4 *)(iVar6 + 0xa4 + DAT_0070f36c) = 1;
    *(undefined4 *)(iVar6 + 0xa8 + iVar2) = 0xff;
    cVar3 = FUN_0063e950(iVar1,&LAB_006392f0);
    if (cVar3 != '\0') {
      WaitForSingleObject(*(HANDLE *)(iVar6 + 0xa0 + DAT_0070f36c),0xffffffff);
      ResetEvent(*(HANDLE *)(iVar6 + 0xa0 + DAT_0070f36c));
      FUN_00642380(&DAT_0070f370,uVar4);
      return;
    }
    FUN_00642450("FILE_startdevice - FAILED TO START THREAD FOR FILE SYSTEM DEVICE.\n");
    FUN_00642380(&DAT_0070f370,uVar4);
  }
  return;
}
