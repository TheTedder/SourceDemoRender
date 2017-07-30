#if 0
//
// Generated by Microsoft (R) HLSL Shader Compiler 6.3.9600.16384
//
//
// Buffer Definitions: 
//
// cbuffer SharedInputData
// {
//
//   int2 Dimensions;                   // Offset:    0 Size:     8
//
// }
//
// Resource bind info for WorkBuffer
// {
//
//   struct WorkBufferData
//   {
//       
//       float3 Color;                  // Offset:    0
//       float Padding;                 // Offset:   12
//
//   } $Element;                        // Offset:    0 Size:    16
//
// }
//
//
// Resource Bindings:
//
// Name                                 Type  Format         Dim Slot Elements
// ------------------------------ ---------- ------- ----------- ---- --------
// SharedTexture                     texture  float4          2d    0        1
// WorkBuffer                            UAV  struct         r/w    0        1
// SharedInputData                   cbuffer      NA          NA    0        1
//
//
//
// Input signature:
//
// Name                 Index   Mask Register SysValue  Format   Used
// -------------------- ----- ------ -------- -------- ------- ------
// no Input
//
// Output signature:
//
// Name                 Index   Mask Register SysValue  Format   Used
// -------------------- ----- ------ -------- -------- ------- ------
// no Output
cs_5_0
dcl_globalFlags refactoringAllowed
dcl_constantbuffer cb0[1], immediateIndexed
dcl_resource_texture2d (float,float,float,float) t0
dcl_uav_structured u0, 16
dcl_input vThreadID.xyz
dcl_temps 1
dcl_thread_group 8, 8, 1
imad r0.x, vThreadID.y, cb0[0].x, vThreadID.x
ld_indexable(texture2d)(float,float,float,float) r0.yzw, vThreadID.xyzz, t0.wxyz
store_structured u0.xyz, r0.x, l(0), r0.yzwy
ret 
// Approximately 4 instruction slots used
#endif

const BYTE CSBlob_PassUAV[] =
{
     68,  88,  66,  67,  83, 122, 
    248, 244, 110,  60,  36, 198, 
     80, 249, 233, 223, 234, 210, 
    185,  98,   1,   0,   0,   0, 
     48,   4,   0,   0,   5,   0, 
      0,   0,  52,   0,   0,   0, 
    168,   2,   0,   0, 184,   2, 
      0,   0, 200,   2,   0,   0, 
    148,   3,   0,   0,  82,  68, 
     69,  70, 108,   2,   0,   0, 
      2,   0,   0,   0, 200,   0, 
      0,   0,   3,   0,   0,   0, 
     60,   0,   0,   0,   0,   5, 
     83,  67,   0,   1,   0,   0, 
     56,   2,   0,   0,  82,  68, 
     49,  49,  60,   0,   0,   0, 
     24,   0,   0,   0,  32,   0, 
      0,   0,  40,   0,   0,   0, 
     36,   0,   0,   0,  12,   0, 
      0,   0,   0,   0,   0,   0, 
    156,   0,   0,   0,   2,   0, 
      0,   0,   5,   0,   0,   0, 
      4,   0,   0,   0, 255, 255, 
    255, 255,   0,   0,   0,   0, 
      1,   0,   0,   0,  13,   0, 
      0,   0, 170,   0,   0,   0, 
      6,   0,   0,   0,   6,   0, 
      0,   0,   1,   0,   0,   0, 
     16,   0,   0,   0,   0,   0, 
      0,   0,   1,   0,   0,   0, 
      1,   0,   0,   0, 181,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   1,   0, 
      0,   0,   1,   0,   0,   0, 
     83, 104,  97, 114, 101, 100, 
     84, 101, 120, 116, 117, 114, 
    101,   0,  87, 111, 114, 107, 
     66, 117, 102, 102, 101, 114, 
      0,  83, 104,  97, 114, 101, 
    100,  73, 110, 112, 117, 116, 
     68,  97, 116,  97,   0, 171, 
    171, 171, 181,   0,   0,   0, 
      1,   0,   0,   0, 248,   0, 
      0,   0,  16,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0, 170,   0,   0,   0, 
      1,   0,   0,   0,  84,   1, 
      0,   0,  16,   0,   0,   0, 
      0,   0,   0,   0,   3,   0, 
      0,   0,  32,   1,   0,   0, 
      0,   0,   0,   0,   8,   0, 
      0,   0,   2,   0,   0,   0, 
     48,   1,   0,   0,   0,   0, 
      0,   0, 255, 255, 255, 255, 
      0,   0,   0,   0, 255, 255, 
    255, 255,   0,   0,   0,   0, 
     68, 105, 109, 101, 110, 115, 
    105, 111, 110, 115,   0, 105, 
    110, 116,  50,   0,   1,   0, 
      2,   0,   1,   0,   2,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
     43,   1,   0,   0, 124,   1, 
      0,   0,   0,   0,   0,   0, 
     16,   0,   0,   0,   2,   0, 
      0,   0,  20,   2,   0,   0, 
      0,   0,   0,   0, 255, 255, 
    255, 255,   0,   0,   0,   0, 
    255, 255, 255, 255,   0,   0, 
      0,   0,  36,  69, 108, 101, 
    109, 101, 110, 116,   0,  87, 
    111, 114, 107,  66, 117, 102, 
    102, 101, 114,  68,  97, 116, 
     97,   0,  67, 111, 108, 111, 
    114,   0, 102, 108, 111,  97, 
    116,  51,   0, 171, 171, 171, 
      1,   0,   3,   0,   1,   0, 
      3,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0, 154,   1,   0,   0, 
     80,  97, 100, 100, 105, 110, 
    103,   0, 102, 108, 111,  97, 
    116,   0, 171, 171,   0,   0, 
      3,   0,   1,   0,   1,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
    208,   1,   0,   0, 148,   1, 
      0,   0, 164,   1,   0,   0, 
      0,   0,   0,   0, 200,   1, 
      0,   0, 216,   1,   0,   0, 
     12,   0,   0,   0,   5,   0, 
      0,   0,   1,   0,   4,   0, 
      0,   0,   2,   0, 252,   1, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
    133,   1,   0,   0,  77, 105, 
     99, 114, 111, 115, 111, 102, 
    116,  32,  40,  82,  41,  32, 
     72,  76,  83,  76,  32,  83, 
    104,  97, 100, 101, 114,  32, 
     67, 111, 109, 112, 105, 108, 
    101, 114,  32,  54,  46,  51, 
     46,  57,  54,  48,  48,  46, 
     49,  54,  51,  56,  52,   0, 
    171, 171,  73,  83,  71,  78, 
      8,   0,   0,   0,   0,   0, 
      0,   0,   8,   0,   0,   0, 
     79,  83,  71,  78,   8,   0, 
      0,   0,   0,   0,   0,   0, 
      8,   0,   0,   0,  83,  72, 
     69,  88, 196,   0,   0,   0, 
     80,   0,   5,   0,  49,   0, 
      0,   0, 106,   8,   0,   1, 
     89,   0,   0,   4,  70, 142, 
     32,   0,   0,   0,   0,   0, 
      1,   0,   0,   0,  88,  24, 
      0,   4,   0, 112,  16,   0, 
      0,   0,   0,   0,  85,  85, 
      0,   0, 158,   0,   0,   4, 
      0, 224,  17,   0,   0,   0, 
      0,   0,  16,   0,   0,   0, 
     95,   0,   0,   2, 114,   0, 
      2,   0, 104,   0,   0,   2, 
      1,   0,   0,   0, 155,   0, 
      0,   4,   8,   0,   0,   0, 
      8,   0,   0,   0,   1,   0, 
      0,   0,  35,   0,   0,   8, 
     18,   0,  16,   0,   0,   0, 
      0,   0,  26,   0,   2,   0, 
     10, 128,  32,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
     10,   0,   2,   0,  45,   0, 
      0, 136, 194,   0,   0, 128, 
     67,  85,  21,   0, 226,   0, 
     16,   0,   0,   0,   0,   0, 
     70,  10,   2,   0,  54, 121, 
     16,   0,   0,   0,   0,   0, 
    168,   0,   0,   9, 114, 224, 
     17,   0,   0,   0,   0,   0, 
     10,   0,  16,   0,   0,   0, 
      0,   0,   1,  64,   0,   0, 
      0,   0,   0,   0, 150,   7, 
     16,   0,   0,   0,   0,   0, 
     62,   0,   0,   1,  83,  84, 
     65,  84, 148,   0,   0,   0, 
      4,   0,   0,   0,   1,   0, 
      0,   0,   0,   0,   0,   0, 
      1,   0,   0,   0,   0,   0, 
      0,   0,   1,   0,   0,   0, 
      0,   0,   0,   0,   1,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      1,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      1,   0,   0,   0
};
