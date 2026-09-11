/* spd-match: far pct=9.43 flags=/O1 method=thiscall_tp source=m375_sync_decomp:m375_cheap */
#include "ghidra_compat.h"

int __cdecl FUN_00424b50(...);
int __cdecl FUN_0044e9c0(...);
int __cdecl FUN_0044ecd0(...);
int __cdecl FUN_00468820(...);
int __cdecl FUN_0057a7d0(...);
extern int DAT_006b7684;
extern int DAT_0073ad34;
extern int _DAT_006b7680;
extern int _DAT_006cca38;

struct ThisCallBox {
  char FUN_00451f10(int *param_2);
};
char ThisCallBox::FUN_00451f10(int *param_2) {
  char cVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  cVar2 = '\0';
  if (param_2[0xe3] == 0) {
    return '\x01';
  }
  cVar1 = FUN_0057a7d0();
  if (cVar1 != '\0') {
    if ((*(char *)(((int)this) + 0x208) == '\0') ||
       (*(float *)(((int)this) + 0x204) <=
        (float)(DAT_0073ad34 - *(int *)(((int)this) + 0x200)) * _DAT_006cca38)) {
      iVar3 = FUN_0044e9c0(1);
      if (iVar3 == 2) {
        return '\x01';
      }
      iVar3 = *(int *)(*param_2 + 0x3c);
      iVar6 = 0;
      if ('\0' < *(char *)(iVar3 + 0x1c)) {
        do {
          if (cVar2 != '\0') {
            return cVar2;
          }
          iVar4 = FUN_00468820(iVar6);
          iVar5 = FUN_0044ecd0();
          if (((iVar5 == 1) &&
              (_DAT_006b7680 <= (float)(DAT_0073ad34 - *(int *)(iVar4 + 8)) * _DAT_006cca38)) &&
             ((ABS(*(float *)(*param_2 + 0x3d4)) < DAT_006b7684 ||
              (iVar4 = FUN_00424b50(*(float *)(*param_2 + 0x3d4),DAT_006b7684,0x3a83126f),
              iVar4 != 0)))) {
            cVar2 = '\x01';
          }
          iVar6 = iVar6 + 1;
        } while (iVar6 < *(char *)(iVar3 + 0x1c));
      }
    }
    return cVar2;
  }
  return '\x01';
}
