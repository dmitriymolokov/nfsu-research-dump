/* spd-match: far pct=10.70 flags=/O1 method=thiscall_tp source=m375_sync_decomp:m375_7 */
#include "ghidra_compat.h"

typedef DWORD LCID;
typedef struct _SYSTEMTIME {
  WORD wYear; WORD wMonth; WORD wDayOfWeek; WORD wDay;
  WORD wHour; WORD wMinute; WORD wSecond; WORD wMilliseconds;
} SYSTEMTIME, *LPSYSTEMTIME;
unsigned int __cdecl _fwrite(const void *, unsigned int, unsigned int, FILE *);
int __cdecl _fclose(FILE *);
int __stdcall GetDateFormatA(LCID, DWORD, LPSYSTEMTIME, LPCSTR, LPSTR, int);
int __stdcall GetTimeFormatA(LCID, DWORD, LPSYSTEMTIME, LPCSTR, LPSTR, int);

int __cdecl FUN_0041dc10(...);
int __cdecl FUN_0041dd10(...);
int __cdecl FUN_004ab120(...);
int __cdecl FUN_00671541(...);
extern int DAT_006cb148;
extern int DAT_006cc3d4;
extern int DAT_00734998;
extern int DAT_007588c4;

struct ThisCallBox {
  undefined4 FUN_0041d8a0(undefined4 param_2, void *param_3);
};
undefined4 ThisCallBox::FUN_0041d8a0(undefined4 param_2, void *param_3) {
  char cVar1;
  FILE *_File;
  int iVar2;
  char *pcVar3;
  uint uVar4;
  void *_Str;
  uint uVar5;
  char *pcVar6;
  undefined2 *puVar7;
  undefined4 local_134;
  undefined1 local_130 [4];
  CHAR local_12c [28];
  char local_110 [12];
  undefined1 local_104 [260];
  
  FUN_0041dc10(param_2,((undefined4)this),local_104);
  _File = (FILE *)FUN_00671541(local_104,&DAT_006cc3d4);
  if (_File != (FILE *)0x0) {
    *(undefined4 *)local_130 = 0x13;
    _fwrite(local_130,4,1,_File);
    GetDateFormatA(0x800,1,(SYSTEMTIME *)0x0,(LPCSTR)0x0,local_12c,0xc);
    iVar2 = 0;
    do {
      pcVar3 = local_12c + iVar2;
      local_110[iVar2] = *pcVar3;
      iVar2 = iVar2 + 1;
    } while (*pcVar3 != '\0');
    pcVar3 = (char *)(unsigned int)0;
    if ((DAT_00734998 == 4) || (DAT_00734998 == 2)) {
      pcVar3 = (char *)"HH\':\'mm";
    }
    GetTimeFormatA(0x800,2,(SYSTEMTIME *)0x0,pcVar3,local_12c,0xc);
    puVar7 = (undefined2 *)((char *)local_130 + 3);
    do {
      pcVar3 = (char *)((int)puVar7 + 1);
      puVar7 = (undefined2 *)((int)puVar7 + 1);
    } while (*pcVar3 != '\0');
    *puVar7 = DAT_006cb148;
    pcVar3 = local_110;
    do {
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    uVar4 = (int)pcVar3 - (int)local_110;
    pcVar3 = (char *)local_130 + 3;
    do {
      pcVar6 = pcVar3 + 1;
      pcVar3 = pcVar3 + 1;
    } while (*pcVar6 != '\0');
    pcVar6 = local_110;
    for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined4 *)pcVar3 = *(undefined4 *)pcVar6;
      pcVar6 = pcVar6 + 4;
      pcVar3 = pcVar3 + 4;
    }
    for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *pcVar3 = *pcVar6;
      pcVar6 = pcVar6 + 1;
      pcVar3 = pcVar3 + 1;
    }
    _fwrite(param_3,0x12,1,_File);
    _fwrite(local_12c,0x19,1,_File);
    _Str = _malloc(0xf660);
    FUN_004ab120(&DAT_007588c4,0xf660);
    _fwrite(_Str,0xf660,1,_File);
    local_134 = FUN_0041dd10(param_2,_Str);
    _fwrite(&local_134,4,1,_File);
    _free(_Str);
    _fclose(_File);
    return 1;
  }
  return 0;
}
