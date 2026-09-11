/* spd-match: far pct=7.96 flags=/O1 method=thiscall_tp source=m375_sync_decomp:m375_c2440_void_cdecl_uchar */
#include "ghidra_compat.h"

int __cdecl _fseek(FILE *, long, int);
long __cdecl _ftell(FILE *);
int __cdecl _fclose(FILE *);
void __cdecl _eh_vector_constructor_iterator_(void *, unsigned int, int, void *, void *);
void __cdecl _eh_vector_destructor_iterator_(void *, unsigned int, int, void *);

typedef void _func_void_void_ptr(...);
int __cdecl FUN_0040a880(...);
int __cdecl FUN_004361b0(...);
int __cdecl FUN_004364d0(...);
int __cdecl FUN_0043a2e0(...);
int __cdecl FUN_00564a50(...);
extern int DAT_006cc7a4;
extern int DAT_0073618c;
extern int DAT_00736190;
extern int DAT_0073ad34;
extern void LAB_00436040(...);
extern void LAB_004363f3(...);
extern void LAB_0043640d(...);
extern void LAB_00685028(...);
void *ExceptionList;

struct ThisCallBox {
  void FUN_00436258(int param_2);
};
void ThisCallBox::FUN_00436258(int param_2) {
  int *piVar1;
  char cVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  float10 fVar8;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = (unsigned char *)(unsigned int)&LAB_00685028;
  local_c = ExceptionList;
  if ((-1 < *(char *)(((int *)this)[2] + 0x1e)) && ((int)*(char *)(((int *)this)[2] + 0x1e) <= ((int *)this)[7])) {
    return;
  }
  if (((int *)this)[4] == 3) {
    return;
  }
  if (((int *)this)[4] == 4) {
    return;
  }
  ExceptionList = &local_c;
  ((int *)this)[0xe] = param_2;
  ((int *)this)[0xf] = DAT_0073ad34;
  if (*(char *)(((int *)this)[2] + 6) == '\0') {
    fVar8 = (float10)FUN_004361b0(0x3f800000);
    iVar5 = ((int *)this)[2];
    if (((*(float *)(iVar5 + 0x18) < DAT_006cc7a4) && (fVar8 < (float10)*(float *)(iVar5 + 0x10)))
       || ((piVar6 = (int *)(unsigned int)(DAT_0073618c), DAT_006cc7a4 < *(float *)(iVar5 + 0x18) &&
           ((float10)*(float *)(iVar5 + 0x10) < fVar8)))) {
      ((int *)this)[8] = (int)(float)fVar8;
      ((int *)this)[4] = 0;
      FUN_004364d0(0);
      piVar6 = (int *)(unsigned int)(DAT_0073618c);
    }
    goto LAB_0043640d;
  }
  piVar6 = (int *)(unsigned int)(DAT_0073618c);
  if (((int *)this)[4] != 2) goto LAB_0043640d;
  if ((((int *)this)[3] == 0) &&
     (cVar2 = FUN_0043a2e0(), piVar1 = (int *)(unsigned int)(DAT_0073618c), piVar6 = (int *)(unsigned int)(DAT_0073618c), cVar2 != '\0')) {
    if ((int *)(unsigned int)(DAT_0073618c) != (int *)0x0) {
      iVar5 = ((int)(unsigned int)(DAT_0073618c) << 7) % DAT_00736190;
      if (iVar5 < 0) {
        iVar5 = -iVar5;
      }
      if (((int *)this) == ((int *)(unsigned int)(DAT_0073618c)) + iVar5 * 0x11) goto LAB_004363f3;
    }
    iVar5 = FUN_00564a50(0x32);
    iVar5 = iVar5 + 5;
    DAT_00736190 = iVar5;
    piVar3 = (int *)_malloc(iVar5 * 0x44 + 4);
    local_4 = 0;
    if (piVar3 == (int *)0x0) {
      piVar6 = (int *)0x0;
    }
    else {
      piVar6 = piVar3 + 1;
      *piVar3 = iVar5;
      _eh_vector_constructor_iterator_
                (piVar6,0x44,iVar5,(_func_void_void_ptr *)&LAB_00436040,FUN_0040a880);
    }
    iVar5 = ((int)piVar6 << 7) % DAT_00736190;
    local_4 = 0xffffffff;
    if (iVar5 < 0) {
      iVar5 = -iVar5;
    }
    piVar3 = ((int *)this);
    piVar7 = piVar6 + iVar5 * 0x11;
    DAT_0073618c = (int)(unsigned int)(piVar6);
    for (iVar4 = 0x11; iVar4 != 0; iVar4 = iVar4 + -1) {
      *piVar7 = *piVar3;
      piVar3 = piVar3 + 1;
      piVar7 = piVar7 + 1;
    }
    if (piVar1 != (int *)0x0) {
      _eh_vector_destructor_iterator_(piVar1,0x44,piVar1[-1],FUN_0040a880);
      _free(piVar1 + -1);
      piVar6 = (int *)(unsigned int)(DAT_0073618c);
    }
  }
LAB_004363f3:
  ((int *)this)[0x10] = DAT_0073ad34;
  ((int *)this)[4] = 1;
LAB_0043640d:
  if ((((int *)this)[3] == 0) && (piVar6 != (int *)0x0)) {
    iVar5 = ((int)piVar6 << 7) % DAT_00736190;
    if (iVar5 < 0) {
      iVar5 = -iVar5;
    }
    if (((int *)this) != piVar6 + iVar5 * 0x11) {
      FUN_00436258(param_2);
    }
  }
  ExceptionList = local_c;
  return;
}
