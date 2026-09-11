/* spd-match: far pct=7.81 flags=/O1 /c /nologo /TC method=pass_a_tc source=reports/m375_p3/buckets/residual_m375_c2297/batches/20260724T142944Z_w0_tc0 */
#include "ghidra_compat.h"

#undef NAN
#define NAN(x) ((x)!=(x))
double __cdecl sqrt(double);
int __cdecl abs(int);

int __cdecl FUN_00567370();
extern int DAT_006cc7a4;

short FUN_00452690(float param_1)

{
  float fVar1;
  byte bVar2;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  FUN_00567370();
  fVar1 = (local_1c + local_20) * ((int)DAT_006cc7a4) + local_18;
  bVar2 = fVar1 < param_1 | (byte)((ushort)((ushort)(NAN(fVar1) || NAN(param_1)) << 10) >> 8) |
          (byte)((ushort)((ushort)(fVar1 == param_1) << 0xe) >> 8);
  if (fVar1 >= param_1 && (fVar1 == param_1) == 0) {
    return CONCAT11(bVar2,1);
  }
  return (ushort)bVar2 << 8;
}
