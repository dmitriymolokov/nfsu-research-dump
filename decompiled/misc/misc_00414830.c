/* spd-match: far pct=9.77 flags=/O2 /c /nologo /TP method=m39 build_strip source=m39/3.9.26.51-cefam-ce_types_code/va_00414830 */
#include "ghidra_compat.h"

int __cdecl FUN_00407800(...);
int __cdecl FUN_004079f0(...);
int __cdecl FUN_004ef050(...);
int __cdecl FUN_004f65d0(...);
int __cdecl FUN_004f68a0(...);
int __cdecl FUN_004ffb70(...);
int __cdecl FUN_00504080(...);
int __cdecl FUN_006724e4(...);
extern int DAT_006cbf24;
extern int DAT_0071b808;
extern int DAT_0073578c;
extern int DAT_00736344;
extern unsigned char *DAT_0078daa8;
extern unsigned char *DAT_0078dbdc;

int __stdcall MultiByteToWideChar(unsigned int, unsigned long, const char *, int, unsigned short *, int);

struct ThisCallBox {
  void FUN_00414830(int obj, undefined4 param_2, undefined4 param_3);
};
void ThisCallBox::FUN_00414830(int obj, undefined4 param_2, undefined4 param_3)

{

  int iVar1;
  LPCSTR lpMultiByteStr;
  int iVar2;
  WCHAR *pWVar3;
  WCHAR local_30 [24];
  
  if (((*(int *)(obj + 0xc) == 0) || (iVar1 = FUN_004f65d0(), iVar1 == 0)) ||
     (iVar1 = FUN_004ffb70(), iVar1 == 0)) {
    if (DAT_0073578c == 0) {
      return;
    }
    iVar1 = FUN_004ef050(((undefined4)this));
  }
  if ((iVar1 != 0) && (*(int *)(iVar1 + 0x18) == 2)) {
    if (*(int *)(&DAT_0078dbdc + (&DAT_0071b808)[DAT_00736344 * 3] * 0x270) == 0x13) {
      lpMultiByteStr =
           (LPCSTR)FUN_004079f0(&DAT_0078daa8 + (&DAT_0071b808)[DAT_00736344 * 3] * 0x270,param_2,
                                param_3);
    }
    else {
      lpMultiByteStr =
           (LPCSTR)FUN_00407800(&DAT_0078daa8 + (&DAT_0071b808)[DAT_00736344 * 3] * 0x270,param_2,
                                param_3);
    }
    pWVar3 = local_30;
    for (iVar2 = 0xb; iVar2 != 0; iVar2 = iVar2 + -1) {
      pWVar3[0] = L'\0';
      pWVar3[1] = L'\0';
      pWVar3 = pWVar3 + 2;
    }
    *pWVar3 = L'\0';
    MultiByteToWideChar(0,0,lpMultiByteStr,-1,local_30,0x17);
    iVar2 = FUN_006724e4(lpMultiByteStr);
    if (iVar2 != 0) {
      FUN_00504080();
      *(uint *)(iVar1 + 0x1c) = *(uint *)(iVar1 + 0x1c) | 0x400002;
      return;
    }
    FUN_004f68a0(&DAT_006cbf24);
  }
  return;
}
