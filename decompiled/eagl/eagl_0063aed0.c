/* spd-match: far pct=8.87 flags=/O1 /c /nologo /TC method=pass_a_tc source=reports/m375_p3/buckets/C2065_undecl_stubs_p2/batches/20260724T141902Z_w0_tc0 */
#include "ghidra_compat.h"

#ifndef _VA_LIST_DEFINED
typedef char *va_list;
#define _VA_LIST_DEFINED
#endif
int __cdecl WideCharToMultiByte(void);
int __cdecl lstrcmpiA(const char *, const char *);
char *__cdecl _strncpy(char *, const char *, unsigned int);
long __cdecl __ftol(void);

int __cdecl FUN_00639c00();
int __cdecl FUN_00639d70();
int __cdecl FUN_0063a700();
int __cdecl FUN_00642450();
int __cdecl FUN_00642640();
extern unsigned char *PTR_s_A_fatal_error_has_occurred_in_th_006e7618;

extern int cRam0070f434;
extern unsigned char UNK_0063aeda[];








LPCSTR FUN_0063aed0(undefined4 param_1,HANDLE param_2,undefined4 param_3,undefined2 *param_4)

{
  undefined2 uVar1;
  LPCSTR pCVar2;
  DWORD DVar3;
  BOOL BVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  LPCSTR pCStack_4010;
  DWORD aDStack_400c [3];
  undefined1 auStack_4000 [16380];
  undefined *puStack_4;
  
  puStack_4 = &UNK_0063aeda;
  pCVar2 = (LPCSTR)SetFilePointer(param_2,0,(PLONG)0x0,1);
  pCStack_4010 = pCVar2;
  aDStack_400c[0] = FUN_0063a700(param_1,pCVar2,auStack_4000,0x2000,param_3,0);
  uVar6 = 0;
  while( true ) {
    uVar7 = uVar6;
    uVar6 = uVar7 ^ 1;
    DVar3 = FUN_0063a700(param_1,pCVar2 + 0x2000,auStack_4000 + uVar6 * 0x2000,0x2000,param_3,0);
    aDStack_400c[uVar6] = DVar3;
    DVar3 = aDStack_400c[uVar7];
    FUN_00639d70(DVar3);
    DVar3 = FUN_00639c00(DVar3);
    BVar4 = WriteFile(param_2,auStack_4000 + uVar7 * 0x2000,DVar3,aDStack_400c + 2,(LPOVERLAPPED)0x0
                     );
    if (BVar4 == 0) break;
    uVar1 = FUN_00642640(auStack_4000 + uVar7 * 0x2000,DVar3,*param_4);
    pCVar2 = pCStack_4010 + DVar3;
    *param_4 = uVar1;
    pCStack_4010 = pCVar2;
    if ((DVar3 != 0x2000) || (cRam0070f434 != '\0')) goto code_r0x0063b010;
  }
  DVar3 = GetLastError();
  FormatMessageA(0x1300,(LPCVOID)0x0,DVar3,0x400,(LPSTR)&pCStack_4010,0,(va_list *)0x0);
  OutputDebugStringA(pCStack_4010);
  LocalFree(pCStack_4010);
  pCStack_4010 = (LPCSTR)0xffffffff;
code_r0x0063b010:
  DVar3 = aDStack_400c[uVar7 ^ 1];
  iVar5 = FUN_00639d70(DVar3);
  if (iVar5 != 1) {
    FUN_00642450(PTR_s_A_fatal_error_has_occurred_in_th_006e7618);
  }
  FUN_00639c00(DVar3);
  return pCStack_4010;
}
