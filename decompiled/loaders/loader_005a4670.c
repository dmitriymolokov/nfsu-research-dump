/* spd-match: far pct=23.98 flags=/O1 method=thiscall_tp source=m375_sync_decomp:m375_c2440_void_cdecl_uchar */
#include "ghidra_compat.h"

int __cdecl _fseek(FILE *, long, int);
long __cdecl _ftell(FILE *);
int __cdecl _fclose(FILE *);
void __cdecl _eh_vector_constructor_iterator_(void *, unsigned int, int, void *, void *);
void __cdecl _eh_vector_destructor_iterator_(void *, unsigned int, int, void *);

int __cdecl FUN_005a4750(...);
int __cdecl FUN_00644a16(...);
extern int DAT_006b9172;
extern code *DAT_00712020;
extern int DAT_00712028;
int unaff_ESI;
extern void LAB_006859e8(...);
void *ExceptionList;

struct ThisCallBox {
  undefined4 FUN_005a4670(undefined1 param_2);
};
undefined4 ThisCallBox::FUN_005a4670(undefined1 param_2) {
  char *pcVar1;
  char cVar2;
  char *pcVar3;
  int iVar4;
  undefined4 uVar5;
  int unaff_ESI;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = (unsigned char *)(unsigned int)&LAB_006859e8;
  pvStack_c = ExceptionList;
  cVar2 = *((char *)this);
  pcVar1 = (char *)(unaff_ESI + 0x31);
  ExceptionList = &pvStack_c;
  *pcVar1 = cVar2;
  if (cVar2 != '\0') {
    pcVar3 = pcVar1;
    do {
      cVar2 = pcVar3[(int)(((char *)this) + (1 - (int)pcVar1))];
      pcVar3 = pcVar3 + 1;
      *pcVar3 = cVar2;
    } while (cVar2 != '\0');
  }
  *(undefined1 *)(unaff_ESI + 0x10) = 0;
  *(undefined1 *)(unaff_ESI + 0x11) = 0;
  *(undefined1 *)(unaff_ESI + 0x12) = 0;
  *(undefined1 *)(unaff_ESI + 0x13) = 0;
  *(undefined1 *)(unaff_ESI + 0x17) = 0;
  *(undefined1 *)(unaff_ESI + 0x18) = 0;
  *(undefined1 *)(unaff_ESI + 0x19) = 1;
  *(undefined1 *)(unaff_ESI + 0x1a) = 0;
  *(undefined1 *)(unaff_ESI + 0x1b) = 1;
  *(undefined1 *)(unaff_ESI + 0x14) = 0;
  *(undefined1 *)(unaff_ESI + 0x16) = 1;
  *(undefined1 *)(unaff_ESI + 0x15) = 0;
  *(char **)(unaff_ESI + 0x20) = pcVar1;
  *(undefined1 *)(unaff_ESI + 0x1c) = param_2;
  iVar4 = (*DAT_00712020)(&DAT_006b9172,0x94,0,0,DAT_00712028);
  uStack_4 = 0;
  if (iVar4 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = FUN_00644a16(*(undefined4 *)(unaff_ESI + 0x20),0x100000,
                         *(undefined4 *)(unaff_ESI + 0x24),0x32000,0,0);
  }
  uStack_4 = 0xffffffff;
  *(undefined4 *)(unaff_ESI + 0x28) = uVar5;
  *(undefined4 *)(unaff_ESI + 0x2c) = 0;
  *(undefined1 *)(unaff_ESI + 0x30) = 1;
  FUN_005a4750(unaff_ESI);
  ExceptionList = pvStack_c;
  return 1;
}
