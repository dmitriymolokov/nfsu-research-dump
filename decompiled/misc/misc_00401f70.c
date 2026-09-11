/* spd-match: far pct=52.75 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_00401F70 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

float10 __fastcall FUN_00401f70(float * obj)

{

  return (float10)obj[0xf] * (float10)obj[10] * (float10)*obj * (float10)obj[5] +
         (((((float10)obj[9] * (float10)obj[4] * (float10)obj[2] +
            (float10)obj[6] * (float10)obj[8] * (float10)obj[1]) * (float10)obj[0xf] +
           (((((float10)obj[4] * (float10)obj[0xb] * (float10)obj[1] +
              (float10)obj[9] * (float10)obj[7] * (float10)*obj) * (float10)obj[0xe] +
             ((((float10)obj[0xd] * (float10)obj[0xb] * (float10)obj[6] * (float10)*obj
               + (float10)obj[8] * (float10)obj[0xe] * (float10)obj[3] * (float10)obj[5]
                 + (((((float10)obj[7] * (float10)obj[2] * (float10)obj[8] +
                      (float10)obj[4] * (float10)obj[3] * (float10)obj[10]) *
                      (float10)obj[0xd] +
                     (((((float10)obj[2] * (float10)obj[0xb] * (float10)obj[5] +
                        (float10)obj[7] * (float10)obj[10] * (float10)obj[1]) *
                        (float10)obj[0xc] +
                       (((float10)obj[6] * (float10)obj[3] *
                         (float10)obj[9] * (float10)obj[0xc] -
                        (float10)obj[7] * (float10)obj[2] *
                        (float10)obj[9] * (float10)obj[0xc]) -
                       (float10)obj[3] * (float10)obj[0xc] * (float10)obj[10] *
                       (float10)obj[5])) -
                      (float10)obj[6] * (float10)obj[0xb] * (float10)obj[0xc] *
                      (float10)obj[1]) -
                     (float10)obj[0xd] * (float10)obj[6] * (float10)obj[3] *
                     (float10)obj[8])) -
                    (float10)obj[0xd] * (float10)obj[7] * (float10)*obj *
                    (float10)obj[10]) -
                   (float10)obj[4] * (float10)obj[2] *
                   (float10)obj[0xd] * (float10)obj[0xb])) -
              (float10)obj[8] * (float10)obj[0xe] * (float10)obj[7] * (float10)obj[1]) -
             (float10)obj[9] * (float10)obj[4] * (float10)obj[3] * (float10)obj[0xe])) -
            (float10)obj[0xb] * (float10)obj[0xe] * (float10)*obj * (float10)obj[5]) -
           (float10)obj[2] * (float10)obj[8] * (float10)obj[0xf] * (float10)obj[5])) -
          (float10)obj[9] * (float10)obj[6] * (float10)obj[0xf] * (float10)*obj) -
         (float10)obj[0xf] * (float10)obj[10] * (float10)obj[4] * (float10)obj[1]);
}
