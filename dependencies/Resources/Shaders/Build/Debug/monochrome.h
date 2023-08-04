#if 0
//
// Generated by Microsoft (R) HLSL Shader Compiler 10.1
//
// Parameters:
//
//   float amount;
//   sampler2D texSampler;
//
//
// Registers:
//
//   Name         Reg   Size
//   ------------ ----- ----
//   amount       c0       1
//   texSampler   s0       1
//

    ps_2_0
    def c1, 0.212599993, 0.715200007, 0.0722000003, 0
    dcl t0.xy
    dcl_2d s0
    texld r0, t0, s0
    dp3 r1.w, r0, c1
    lrp r2.xyz, c0.x, r1.w, r0
    mov r2.w, r0.w
    mov oC0, r2

// approximately 5 instruction slots used (1 texture, 4 arithmetic)
#endif

const BYTE monochrome[] =
{
      0,   2, 255, 255, 254, 255, 
     43,   0,  67,  84,  65,  66, 
     28,   0,   0,   0, 127,   0, 
      0,   0,   0,   2, 255, 255, 
      2,   0,   0,   0,  28,   0, 
      0,   0,   0,   1,   0,   0, 
    120,   0,   0,   0,  68,   0, 
      0,   0,   2,   0,   0,   0, 
      1,   0,   0,   0,  76,   0, 
      0,   0,   0,   0,   0,   0, 
     92,   0,   0,   0,   3,   0, 
      0,   0,   1,   0,   0,   0, 
    104,   0,   0,   0,   0,   0, 
      0,   0,  97, 109, 111, 117, 
    110, 116,   0, 171,   0,   0, 
      3,   0,   1,   0,   1,   0, 
      1,   0,   0,   0,   0,   0, 
      0,   0, 116, 101, 120,  83, 
     97, 109, 112, 108, 101, 114, 
      0, 171,   4,   0,  12,   0, 
      1,   0,   1,   0,   1,   0, 
      0,   0,   0,   0,   0,   0, 
    112, 115,  95,  50,  95,  48, 
      0,  77, 105,  99, 114, 111, 
    115, 111, 102, 116,  32,  40, 
     82,  41,  32,  72,  76,  83, 
     76,  32,  83, 104,  97, 100, 
    101, 114,  32,  67, 111, 109, 
    112, 105, 108, 101, 114,  32, 
     49,  48,  46,  49,   0, 171, 
     81,   0,   0,   5,   1,   0, 
     15, 160, 208, 179,  89,  62, 
     89,  23,  55,  63, 152, 221, 
    147,  61,   0,   0,   0,   0, 
     31,   0,   0,   2,   0,   0, 
      0, 128,   0,   0,   3, 176, 
     31,   0,   0,   2,   0,   0, 
      0, 144,   0,   8,  15, 160, 
     66,   0,   0,   3,   0,   0, 
     15, 128,   0,   0, 228, 176, 
      0,   8, 228, 160,   8,   0, 
      0,   3,   1,   0,   8, 128, 
      0,   0, 228, 128,   1,   0, 
    228, 160,  18,   0,   0,   4, 
      2,   0,   7, 128,   0,   0, 
      0, 160,   1,   0, 255, 128, 
      0,   0, 228, 128,   1,   0, 
      0,   2,   2,   0,   8, 128, 
      0,   0, 255, 128,   1,   0, 
      0,   2,   0,   8,  15, 128, 
      2,   0, 228, 128, 255, 255, 
      0,   0
};
