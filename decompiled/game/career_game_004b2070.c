/* spd-match: far pct=10.10 flags=/O1 /c /nologo /TP method=thiscall_tp source=reports/m375_p3/buckets/residual_m375_c2440_void_cdecl_uchar/batches/20260724T142916Z_w0_tp1 */
#include "ghidra_compat.h"

int __cdecl _atexit(void (__cdecl *)(void));
typedef void (__cdecl *_func_void_void_ptr)(void *);
extern char s_SND__FE_FrontEnd_006bf464[];
extern char s_SND__FE_Common_006bf41c[];
extern char s_SND__Nitrous_006bf0c0[];
extern char s_Right_Road_Noise_006befd8[];
extern char s_333_333__006b6c84[];
void __cdecl _eh_vector_constructor_iterator_(void *, unsigned int, int, void *, void *);
void __cdecl _eh_vector_destructor_iterator_(void *, unsigned int, int, void *, void *);
int __cdecl _fseek(FILE *, long, int);
long __cdecl _ftell(FILE *);
int __cdecl _fclose(FILE *);

int __cdecl FUN_004ae9a0(...);
int __cdecl FUN_004aefa0(...);
int __cdecl FUN_004af020(...);
int __cdecl FUN_004af030(...);
int __cdecl FUN_004af620(...);
int __cdecl FUN_004f78e0(...);
extern int DAT_00748120;
extern int DAT_00748850;
extern int DAT_00748f78;
extern int DAT_00748f7c;
extern int DAT_0078f620;
extern int DAT_00792fa0;
extern void *PTR_FUN_006c61f0;
extern void LAB_0068950a(...);
extern void LAB_006964a0(...);
void *ExceptionList;

struct ThisCallBox {
  undefined4 * FUN_004b2070(undefined4 *param_2);
};
undefined4 * ThisCallBox::FUN_004b2070(undefined4 *param_2) {
  int iVar1;
  uint uVar2;
  void *pvVar3;
  undefined4 uVar4;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = (unsigned char *)(unsigned int)&LAB_0068950a;
  local_10 = ExceptionList;
  ExceptionList = (void *)(unsigned int)&local_10;
  FUN_004f78e0(param_2,((undefined4)this));
  uVar2 = DAT_00792fa0 & 1;
  (local_8 = ((unsigned int)(local_8) & 0xff));
  *param_2 = (unsigned int)&PTR_FUN_006c61f0;
  if (uVar2 == 0) {
    DAT_00792fa0 = DAT_00792fa0 | 1;
    (*(unsigned char *)&(local_8)) = 1;
    (local_8 = ((unsigned int)(local_8) & 0xff));
    _eh_vector_constructor_iterator_(&DAT_0078f620,0x1cc0,2,FUN_004aefa0,FUN_004af020);
    _atexit((void (__cdecl *)(void))(unsigned int)&LAB_006964a0);
  }
  (*(unsigned char *)&(local_8)) = 0;
  FUN_004af030();
  if ((DAT_00792fa0 & 1) == 0) {
    DAT_00792fa0 = DAT_00792fa0 | 1;
    (*(unsigned char *)&(local_8)) = 2;
    _eh_vector_constructor_iterator_(&DAT_0078f620,0x1cc0,2,FUN_004aefa0,FUN_004af020);
    _atexit((void (__cdecl *)(void))(unsigned int)&LAB_006964a0);
    (*(unsigned char *)&(local_8)) = 0;
  }
  FUN_004af030();
  pvVar3 = (void *)_malloc(0x128);
  (*(unsigned char *)&(local_8)) = 3;
  if (pvVar3 == (void *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_004af620(pvVar3,((undefined4)this),1,&DAT_00748850,0,DAT_00748f78);
  }
  param_2[0x10] = uVar4;
  pvVar3 = (void *)_malloc(0x128);
  (*(unsigned char *)&(local_8)) = 4;
  if (pvVar3 == (void *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_004af620(pvVar3,((undefined4)this),2,&DAT_00748120,1,DAT_00748f7c);
  }
  iVar1 = param_2[0x10];
  param_2[0x11] = uVar4;
  local_8 = (uint)((unsigned int)(local_8) >> 8) << 8;
  FUN_004ae9a0();
  *(undefined4 *)(iVar1 + 0x84) = 1;
  iVar1 = param_2[0x11];
  FUN_004ae9a0();
  *(undefined4 *)(iVar1 + 0x84) = 1;
  ExceptionList = (void *)(unsigned int)local_10;
  return param_2;
}
