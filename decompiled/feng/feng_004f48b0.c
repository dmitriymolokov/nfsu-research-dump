/* spd-match: far pct=6.98 flags=/O1 /c /nologo /TP method=m39 source=m39/4.1.6-control100/va_004F48B0 */
#include "ghidra_compat.h"
int __cdecl FUN_004f4790(float, float, void*, int);
int __cdecl FUN_004f4d00(int, const unsigned short*, int);
int __cdecl FUN_004f4f10(int, const unsigned short*, int);
int __cdecl FUN_00514b90(int);
int __cdecl FUN_00638780(unsigned int, int, unsigned int, int);
int __cdecl FUN_006387f0(int, unsigned short*, int);
int __cdecl FUN_00674898();
extern int DAT_006cc7a4;
extern float _DAT_006cc858;
extern float _DAT_006cc920;
struct ThisCallBox { void __fastcall FUN_004f48b0(int param_2, unsigned short *param_3, unsigned int *param_4, int param_5); };
void __fastcall ThisCallBox::FUN_004f48b0(int param_2, unsigned short *param_3, unsigned int *param_4, int param_5) {
  unsigned int uVar1 = *(unsigned int *)((char*)this + 0x68);
  int iVar7 = FUN_00674898();
  unsigned int uVar2 = *(unsigned int *)((char*)this + 0x1c);
  float fVar18 = (float)FUN_004f4f10(param_2, param_3, iVar7);
  float local_38 = (uVar1 & 4) ? (fVar18 * _DAT_006cc920) : ((uVar1 & 8) ? -fVar18 : 0.0f);
  fVar18 = (float)FUN_004f4d00(param_2, param_3, *(int *)((char*)this + 0x70));
  float local_3c = ((uVar1 & 1) ? (fVar18 * _DAT_006cc920) : ((uVar1 & 2) ? -fVar18 : (float)DAT_006cc7a4));
  float local_2c = local_3c;
  /* ... implementation truncated for length ... */
}
