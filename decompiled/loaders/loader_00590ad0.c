/* spd-match: far pct=10.64 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_00590AD0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

#undef NAN
#define NAN(x) ((x)!=(x))
typedef unsigned int WPARAM;
typedef long LRESULT;
typedef struct tagMSG { unsigned char _[48]; } MSG, tagMSG, *LPMSG;
int __cdecl FUN_m375_thunk_helper(void);

int unaff_ESI;
void __fastcall FUN_00590ad0(undefined4 * obj)

{
  float fVar1;
  float fVar2;
  int iVar3;

  float *unaff_ESI;
  int unaff_EDI;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 local_20;
  float local_1c;
  undefined4 local_18;
  
  puVar5 = &local_20;
  local_20 = *obj;
  local_1c = -(float)obj[1];
  puVar4 = &local_20;
  local_18 = 0x3f800000;
  FUN_00590ad0(puVar4,&local_20,unaff_EDI + 0x20);
  iVar3 = *(int *)(unaff_EDI + 0xa4);
  fVar1 = *(float *)(unsigned int)(iVar3 + 0x90);
  fVar2 = *(float *)(unsigned int)(iVar3 + 0x94);
  *unaff_ESI = ((float)(unsigned int)puVar4 - *(float *)(unsigned int)(iVar3 + 0x8c)) / *(float *)(unsigned int)(iVar3 + 0x94);
  unaff_ESI[1] = ((float)(unsigned int)puVar5 + fVar1) / fVar2;
  return;
}
