/* spd-match: far pct=7.92 flags=/O2 /c /nologo /TC method=m39 source=m39/4.1.6-control100/va_0049D5B0 */
#include <windows.h>
extern int DAT_006cc7a4;
extern int DAT_00735710;
extern unsigned char *DAT_0073619c;
extern unsigned char *DAT_00777b80;
extern int _DAT_006cca38;
int __cdecl FUN_004f68a0(void* p);
int __cdecl FUN_00586580(void* p);
typedef void (__stdcall *CallbackFn)(void*);
void __fastcall FUN_0049d5b0(int obj, int param_1) {
  int iVar1;
  int unaff_EBX = 0;
  int *puVar3 = (int *)DAT_00735710;
  char auStack_20[32];
  iVar1 = *(int *)(param_1 + 0xd0 + unaff_EBX * 4);
  if (iVar1 != 0) {
    *(unsigned int *)(iVar1 + 0x1c) |= 0x400000;
    *(unsigned int *)(iVar1 + 0x5c) = 0xab44ed8b;
    if (puVar3 != 0) { ((CallbackFn)(**(int **)puVar3))((void*)iVar1); }
    *(unsigned int *)(iVar1 + 0x1c) = (*(unsigned int *)(iVar1 + 0x1c) & ~2) | 0x400000;
  }
  if (*(short *)(obj + 0x10) == 1) {
    if ((obj != *(int *)(DAT_0073619c + 0x520)) && ((*(float *)(DAT_00777b80 + *(signed char *)(obj + 10) * 0x15c) * (float)_DAT_006cca38) == (float)DAT_006cc7a4)) {
      FUN_00586580(auStack_20); FUN_004f68a0(auStack_20); return;
    }
    iVar1 = *(int *)(param_1 + 0xf8 + unaff_EBX * 4);
    if (iVar1 != 0) {
      *(unsigned int *)(iVar1 + 0x1c) |= 0x400000;
      *(unsigned int *)(iVar1 + 0x5c) = 0x61c9b7a2;
      if (puVar3 != 0) ((CallbackFn)(**(int **)puVar3))((void*)iVar1);
      *(unsigned int *)(iVar1 + 0x1c) = (*(unsigned int *)(iVar1 + 0x1c) & ~2) | 0x400000;
    }
  }
}
