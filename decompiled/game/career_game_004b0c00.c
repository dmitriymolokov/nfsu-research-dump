/* spd-match: far pct=11.53 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_004B0C00 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_004877d0();
int __cdecl FUN_004877f0();
int __cdecl FUN_00487810();
int __cdecl FUN_004aeac0();
int __cdecl FUN_004f3f90();
extern int DAT_006cc7a4;
extern int DAT_006fb02c;
extern int DAT_007064a4;
extern int DAT_007064a8;
extern int DAT_007064ac;
extern int DAT_007064b0;
extern int DAT_007064b1;
extern int DAT_00735e84;
extern int DAT_00735eb4;
extern int DAT_0073ad3c;
extern int DAT_00746104;
extern int DAT_0074810c;
extern unsigned char *DAT_0078eb18;
extern unsigned char *DAT_0078eb24;
extern unsigned char *DAT_0078eb30;
extern int _DAT_006cc7d0;
extern int _DAT_006cc7dc;
void __fastcall FUN_004b0c00(int obj)

{
  int iVar1;
  float fVar2;
  char cVar3;

  int iVar4;
  int iVar5;
  
  iVar1 = obj + 0x80;
  cVar3 = FUN_004aeac0(iVar1);
  if (cVar3 != '\0') {
    iVar4 = FUN_004f3f90(&DAT_00746104);
    if (((iVar4 == 0) || (*(int *)(iVar4 + 0x18) == 0)) &&
       (((float)DAT_007064ac != DAT_006cc7a4 || (DAT_00735eb4 != '\0')))) {
      DAT_00735eb4 = (float)DAT_007064ac != DAT_006cc7a4;
      iVar4 = *(int *)(obj + 0x60);
      if ((*(int *)(iVar4 + 0x2c) != 2) && (*(int *)(iVar4 + 0x2c) != 0)) {
        iVar5 = -DAT_007064ac;
        *(undefined4 *)(iVar4 + 0x2c) = 3;
        *(float *)(iVar4 + 0x180) = (float)iVar5 * _DAT_006cc7d0;
      }
      DAT_006fb02c = 0;
      DAT_00735e84 = 0;
      DAT_0074810c = DAT_0073ad3c;
    }
    if (DAT_007064b0 != '\0') {
      iVar4 = *(int *)(obj + 0x60);
      if ((*(int *)(iVar4 + 0x2c) != 2) && (*(int *)(iVar4 + 0x2c) != 0)) {
        fVar2 = (float)DAT_007064a4;
        *(undefined4 *)(iVar4 + 0x2c) = 3;
        *(float *)(iVar4 + 0x188) = fVar2 * _DAT_006cc7dc;
      }
      iVar4 = *(int *)(obj + 0x60);
      if ((*(int *)(iVar4 + 0x2c) != 2) && (*(int *)(iVar4 + 0x2c) != 0)) {
        fVar2 = (float)DAT_007064a8;
        *(undefined4 *)(iVar4 + 0x2c) = 3;
        *(float *)(iVar4 + 0x184) = fVar2 * _DAT_006cc7dc;
      }
      DAT_006fb02c = 0;
      DAT_00735e84 = 0;
      DAT_0074810c = DAT_0073ad3c;
    }
    if (((DAT_007064b1 != '\0') ||
        ((iVar4 = FUN_004f3f90(&DAT_00746104), iVar4 != 0 && (*(int *)(iVar4 + 0x18) != 0)))) &&
       (*(int *)(obj + 0x84) != 0)) {
      if ((*(int *)(obj + 0x8c) == 4) && (cVar3 = FUN_004aeac0(iVar1), cVar3 != '\0')) {
        if (DAT_0078eb30 != 0) {
          FUN_004877f0(0);
          DAT_006fb02c = 0;
          DAT_00735e84 = 0;
          DAT_0074810c = DAT_0073ad3c;
        }
        DAT_0078eb30 = DAT_0078eb30 + 1;
      }
      if (*(int *)(obj + 0x84) != 0) {
        if ((*(int *)(obj + 0x8c) == 4) && (cVar3 = FUN_004aeac0(iVar1), cVar3 != '\0')) {
          if (DAT_0078eb24 != 0) {
            FUN_004877d0(0);
            DAT_006fb02c = 0;
            DAT_00735e84 = 0;
            DAT_0074810c = DAT_0073ad3c;
          }
          DAT_0078eb24 = DAT_0078eb24 + 1;
        }
        if (((*(int *)(obj + 0x84) != 0) && (*(int *)(obj + 0x8c) == 4)) &&
           (cVar3 = FUN_004aeac0(iVar1), cVar3 != '\0')) {
          if (DAT_0078eb18 != 0) {
            FUN_00487810(0);
            DAT_0074810c = DAT_0073ad3c;
            DAT_006fb02c = 0;
            DAT_00735e84 = 0;
            FUN_004877f0(0);
            FUN_004877d0(0);
          }
          DAT_0078eb18 = DAT_0078eb18 + 1;
        }
      }
    }
  }
  return;
}
