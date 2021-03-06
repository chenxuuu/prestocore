#if 0
//
// Generated by Microsoft (R) HLSL Shader Compiler 9.29.952.3111
//
//
//   fxc /nologo /Zpc /Tps_4_0 /Dop_main=lightingSpot /ElightingSpot
//    /Fhlighting_spot.h lighting_spot.psh
//
//
// Buffer Definitions: 
//
// cbuffer constants
// {
//
//   float3 light_color;                // Offset:    0 Size:    12
//   float3 light_position;             // Offset:   16 Size:    12
//   float light_kd;                    // Offset:   32 Size:     4
//   float light_ks;                    // Offset:   48 Size:     4
//   float light_specexp;               // Offset:   64 Size:     4
//   float surface_scale;               // Offset:   80 Size:     4
//   float k1;                          // Offset:   96 Size:     4
//   float k2;                          // Offset:  112 Size:     4
//   float k3;                          // Offset:  128 Size:     4
//   float k4;                          // Offset:  144 Size:     4
//   float2 pixel_size;                 // Offset:  160 Size:     8
//   float3 spot_dir;                   // Offset:  176 Size:    12
//   float spot_falloff;                // Offset:  192 Size:     4
//   float spot_coneangle;              // Offset:  208 Size:     4
//   float spot_specexp;                // Offset:  224 Size:     4
//   bool spot_has_cone;                // Offset:  240 Size:     4
//
// }
//
//
// Resource Bindings:
//
// Name                                 Type  Format         Dim Slot Elements
// ------------------------------ ---------- ------- ----------- ---- --------
// srcSampler                        sampler      NA          NA    0        1
// srcTex                            texture  float4          2d    0        1
// constants                         cbuffer      NA          NA    0        1
//
//
//
// Input signature:
//
// Name                 Index   Mask Register SysValue Format   Used
// -------------------- ----- ------ -------- -------- ------ ------
// SV_POSITION              0   xyzw        0      POS  float       
// COLOR                    0   xyzw        1     NONE  float       
// TEXCOORD                 0   xy          2     NONE  float   xy  
//
//
// Output signature:
//
// Name                 Index   Mask Register SysValue Format   Used
// -------------------- ----- ------ -------- -------- ------ ------
// SV_Target                0   xyzw        0   TARGET  float   xyzw
//
ps_4_0
dcl_constantbuffer cb0[16], immediateIndexed
dcl_sampler s0, mode_default
dcl_resource_texture2d (float,float,float,float) t0
dcl_input_ps linear v2.xy
dcl_output o0.xyzw
dcl_temps 3
sample r0.xyzw, v2.xyxx, t0.xyzw, s0
add r0.xyz, r0.xyzx, l(-0.500000, -0.500000, -0.000000, 0.000000)
mul r0.xyz, r0.xyzx, cb0[5].xxxx
mov r1.xy, -r0.xyxx
div r0.xy, v2.xyxx, cb0[10].xyxx
add r0.xyz, -r0.xyzx, cb0[1].xyzx
dp3 r0.w, r0.xyzx, r0.xyzx
rsq r0.w, r0.w
mad r2.xyz, r0.xyzx, r0.wwww, l(0.000000, 0.000000, 1.000000, 0.000000)
mul r0.xyz, r0.wwww, r0.xyzx
dp3 r0.w, r2.xyzx, r2.xyzx
rsq r0.w, r0.w
mul r2.xyz, r0.wwww, r2.xyzx
mov r1.z, l(1.000000)
dp3 r0.w, r1.xyzx, r1.xyzx
rsq r0.w, r0.w
mul r1.xyz, r0.wwww, r1.xyzx
dp3 r0.w, r1.xyzx, r2.xyzx
dp3 r1.x, r1.xyzx, r0.xyzx
max r1.x, r1.x, l(0.000000)
max r0.w, r0.w, l(0.000000)
log r0.w, r0.w
mul r0.w, r0.w, cb0[4].x
exp r0.w, r0.w
dp3 r1.y, cb0[11].xyzx, cb0[11].xyzx
rsq r1.y, r1.y
mul r1.yzw, r1.yyyy, cb0[11].xxyz
dp3 r0.x, r0.xyzx, r1.yzwy
max r0.x, -r0.x, l(0.000000)
add r0.y, r0.x, -cb0[12].x
log r0.x, r0.x
mul r0.x, r0.x, cb0[14].x
exp r0.x, r0.x
mul r0.y, r0.y, r0.x
add r0.z, -cb0[12].x, cb0[13].x
div_sat r0.y, r0.y, r0.z
movc r0.x, cb0[15].x, r0.y, r0.x
mul r0.xyz, r0.xxxx, cb0[0].xyzx
mul r1.yzw, r0.xxyz, cb0[3].xxxx
mul r0.xyz, r0.xyzx, cb0[2].xxxx
mul_sat r2.xyz, r1.xxxx, r0.xyzx
mul_sat r0.xyz, r0.wwww, r1.yzwy
max r0.w, r0.z, r0.y
max r1.w, r0.w, r0.x
mul r1.xyz, r0.xyzx, r1.wwww
mov r2.w, l(1.000000)
mul r0.xyzw, r2.xyzw, cb0[6].xxxx
mul r2.xyzw, r2.xyzw, cb0[7].xxxx
mad r0.xyzw, r0.xyzw, r1.xyzw, r2.xyzw
mad r0.xyzw, cb0[8].xxxx, r1.xyzw, r0.xyzw
add_sat o0.xyzw, r0.xyzw, cb0[9].xxxx
ret 
// Approximately 52 instruction slots used
#endif

const BYTE g_lightingSpot[] =
{
     68,  88,  66,  67, 185, 238, 
     34, 180, 213,  18, 228, 247, 
    120, 133,  81, 146,   9, 242, 
    185, 121,   1,   0,   0,   0, 
    224,  10,   0,   0,   5,   0, 
      0,   0,  52,   0,   0,   0, 
    128,   3,   0,   0, 244,   3, 
      0,   0,  40,   4,   0,   0, 
    100,  10,   0,   0,  82,  68, 
     69,  70,  68,   3,   0,   0, 
      1,   0,   0,   0, 152,   0, 
      0,   0,   3,   0,   0,   0, 
     28,   0,   0,   0,   0,   4, 
    255, 255,  16,   1,   0,   0, 
     16,   3,   0,   0, 124,   0, 
      0,   0,   3,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   1,   0, 
      0,   0,   0,   0,   0,   0, 
    135,   0,   0,   0,   2,   0, 
      0,   0,   5,   0,   0,   0, 
      4,   0,   0,   0, 255, 255, 
    255, 255,   0,   0,   0,   0, 
      1,   0,   0,   0,  12,   0, 
      0,   0, 142,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   1,   0,   0,   0, 
      1,   0,   0,   0, 115, 114, 
     99,  83,  97, 109, 112, 108, 
    101, 114,   0, 115, 114,  99, 
     84, 101, 120,   0,  99, 111, 
    110, 115, 116,  97, 110, 116, 
    115,   0, 142,   0,   0,   0, 
     16,   0,   0,   0, 176,   0, 
      0,   0,   0,   1,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,  48,   2,   0,   0, 
      0,   0,   0,   0,  12,   0, 
      0,   0,   2,   0,   0,   0, 
     60,   2,   0,   0,   0,   0, 
      0,   0,  76,   2,   0,   0, 
     16,   0,   0,   0,  12,   0, 
      0,   0,   2,   0,   0,   0, 
     60,   2,   0,   0,   0,   0, 
      0,   0,  91,   2,   0,   0, 
     32,   0,   0,   0,   4,   0, 
      0,   0,   2,   0,   0,   0, 
    100,   2,   0,   0,   0,   0, 
      0,   0, 116,   2,   0,   0, 
     48,   0,   0,   0,   4,   0, 
      0,   0,   2,   0,   0,   0, 
    100,   2,   0,   0,   0,   0, 
      0,   0, 125,   2,   0,   0, 
     64,   0,   0,   0,   4,   0, 
      0,   0,   2,   0,   0,   0, 
    100,   2,   0,   0,   0,   0, 
      0,   0, 139,   2,   0,   0, 
     80,   0,   0,   0,   4,   0, 
      0,   0,   2,   0,   0,   0, 
    100,   2,   0,   0,   0,   0, 
      0,   0, 153,   2,   0,   0, 
     96,   0,   0,   0,   4,   0, 
      0,   0,   2,   0,   0,   0, 
    100,   2,   0,   0,   0,   0, 
      0,   0, 156,   2,   0,   0, 
    112,   0,   0,   0,   4,   0, 
      0,   0,   2,   0,   0,   0, 
    100,   2,   0,   0,   0,   0, 
      0,   0, 159,   2,   0,   0, 
    128,   0,   0,   0,   4,   0, 
      0,   0,   2,   0,   0,   0, 
    100,   2,   0,   0,   0,   0, 
      0,   0, 162,   2,   0,   0, 
    144,   0,   0,   0,   4,   0, 
      0,   0,   2,   0,   0,   0, 
    100,   2,   0,   0,   0,   0, 
      0,   0, 165,   2,   0,   0, 
    160,   0,   0,   0,   8,   0, 
      0,   0,   2,   0,   0,   0, 
    176,   2,   0,   0,   0,   0, 
      0,   0, 192,   2,   0,   0, 
    176,   0,   0,   0,  12,   0, 
      0,   0,   2,   0,   0,   0, 
     60,   2,   0,   0,   0,   0, 
      0,   0, 201,   2,   0,   0, 
    192,   0,   0,   0,   4,   0, 
      0,   0,   2,   0,   0,   0, 
    100,   2,   0,   0,   0,   0, 
      0,   0, 214,   2,   0,   0, 
    208,   0,   0,   0,   4,   0, 
      0,   0,   2,   0,   0,   0, 
    100,   2,   0,   0,   0,   0, 
      0,   0, 229,   2,   0,   0, 
    224,   0,   0,   0,   4,   0, 
      0,   0,   2,   0,   0,   0, 
    100,   2,   0,   0,   0,   0, 
      0,   0, 242,   2,   0,   0, 
    240,   0,   0,   0,   4,   0, 
      0,   0,   2,   0,   0,   0, 
      0,   3,   0,   0,   0,   0, 
      0,   0, 108, 105, 103, 104, 
    116,  95,  99, 111, 108, 111, 
    114,   0,   1,   0,   3,   0, 
      1,   0,   3,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
    108, 105, 103, 104, 116,  95, 
    112, 111, 115, 105, 116, 105, 
    111, 110,   0, 108, 105, 103, 
    104, 116,  95, 107, 100,   0, 
      0,   0,   3,   0,   1,   0, 
      1,   0,   0,   0,   0,   0, 
      0,   0,   0,   0, 108, 105, 
    103, 104, 116,  95, 107, 115, 
      0, 108, 105, 103, 104, 116, 
     95, 115, 112, 101,  99, 101, 
    120, 112,   0, 115, 117, 114, 
    102,  97,  99, 101,  95, 115, 
     99,  97, 108, 101,   0, 107, 
     49,   0, 107,  50,   0, 107, 
     51,   0, 107,  52,   0, 112, 
    105, 120, 101, 108,  95, 115, 
    105, 122, 101,   0,   1,   0, 
      3,   0,   1,   0,   2,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0, 115, 112, 111, 116, 
     95, 100, 105, 114,   0, 115, 
    112, 111, 116,  95, 102,  97, 
    108, 108, 111, 102, 102,   0, 
    115, 112, 111, 116,  95,  99, 
    111, 110, 101,  97, 110, 103, 
    108, 101,   0, 115, 112, 111, 
    116,  95, 115, 112, 101,  99, 
    101, 120, 112,   0, 115, 112, 
    111, 116,  95, 104,  97, 115, 
     95,  99, 111, 110, 101,   0, 
      0,   0,   1,   0,   1,   0, 
      1,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,  77, 105, 
     99, 114, 111, 115, 111, 102, 
    116,  32,  40,  82,  41,  32, 
     72,  76,  83,  76,  32,  83, 
    104,  97, 100, 101, 114,  32, 
     67, 111, 109, 112, 105, 108, 
    101, 114,  32,  57,  46,  50, 
     57,  46,  57,  53,  50,  46, 
     51,  49,  49,  49,   0, 171, 
    171, 171,  73,  83,  71,  78, 
    108,   0,   0,   0,   3,   0, 
      0,   0,   8,   0,   0,   0, 
     80,   0,   0,   0,   0,   0, 
      0,   0,   1,   0,   0,   0, 
      3,   0,   0,   0,   0,   0, 
      0,   0,  15,   0,   0,   0, 
     92,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      3,   0,   0,   0,   1,   0, 
      0,   0,  15,   0,   0,   0, 
     98,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      3,   0,   0,   0,   2,   0, 
      0,   0,   3,   3,   0,   0, 
     83,  86,  95,  80,  79,  83, 
     73,  84,  73,  79,  78,   0, 
     67,  79,  76,  79,  82,   0, 
     84,  69,  88,  67,  79,  79, 
     82,  68,   0, 171,  79,  83, 
     71,  78,  44,   0,   0,   0, 
      1,   0,   0,   0,   8,   0, 
      0,   0,  32,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   3,   0,   0,   0, 
      0,   0,   0,   0,  15,   0, 
      0,   0,  83,  86,  95,  84, 
     97, 114, 103, 101, 116,   0, 
    171, 171,  83,  72,  68,  82, 
     52,   6,   0,   0,  64,   0, 
      0,   0, 141,   1,   0,   0, 
     89,   0,   0,   4,  70, 142, 
     32,   0,   0,   0,   0,   0, 
     16,   0,   0,   0,  90,   0, 
      0,   3,   0,  96,  16,   0, 
      0,   0,   0,   0,  88,  24, 
      0,   4,   0, 112,  16,   0, 
      0,   0,   0,   0,  85,  85, 
      0,   0,  98,  16,   0,   3, 
     50,  16,  16,   0,   2,   0, 
      0,   0, 101,   0,   0,   3, 
    242,  32,  16,   0,   0,   0, 
      0,   0, 104,   0,   0,   2, 
      3,   0,   0,   0,  69,   0, 
      0,   9, 242,   0,  16,   0, 
      0,   0,   0,   0,  70,  16, 
     16,   0,   2,   0,   0,   0, 
     70, 126,  16,   0,   0,   0, 
      0,   0,   0,  96,  16,   0, 
      0,   0,   0,   0,   0,   0, 
      0,  10, 114,   0,  16,   0, 
      0,   0,   0,   0,  70,   2, 
     16,   0,   0,   0,   0,   0, 
      2,  64,   0,   0,   0,   0, 
      0, 191,   0,   0,   0, 191, 
      0,   0,   0, 128,   0,   0, 
      0,   0,  56,   0,   0,   8, 
    114,   0,  16,   0,   0,   0, 
      0,   0,  70,   2,  16,   0, 
      0,   0,   0,   0,   6, 128, 
     32,   0,   0,   0,   0,   0, 
      5,   0,   0,   0,  54,   0, 
      0,   6,  50,   0,  16,   0, 
      1,   0,   0,   0,  70,   0, 
     16, 128,  65,   0,   0,   0, 
      0,   0,   0,   0,  14,   0, 
      0,   8,  50,   0,  16,   0, 
      0,   0,   0,   0,  70,  16, 
     16,   0,   2,   0,   0,   0, 
     70, 128,  32,   0,   0,   0, 
      0,   0,  10,   0,   0,   0, 
      0,   0,   0,   9, 114,   0, 
     16,   0,   0,   0,   0,   0, 
     70,   2,  16, 128,  65,   0, 
      0,   0,   0,   0,   0,   0, 
     70, 130,  32,   0,   0,   0, 
      0,   0,   1,   0,   0,   0, 
     16,   0,   0,   7, 130,   0, 
     16,   0,   0,   0,   0,   0, 
     70,   2,  16,   0,   0,   0, 
      0,   0,  70,   2,  16,   0, 
      0,   0,   0,   0,  68,   0, 
      0,   5, 130,   0,  16,   0, 
      0,   0,   0,   0,  58,   0, 
     16,   0,   0,   0,   0,   0, 
     50,   0,   0,  12, 114,   0, 
     16,   0,   2,   0,   0,   0, 
     70,   2,  16,   0,   0,   0, 
      0,   0, 246,  15,  16,   0, 
      0,   0,   0,   0,   2,  64, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
    128,  63,   0,   0,   0,   0, 
     56,   0,   0,   7, 114,   0, 
     16,   0,   0,   0,   0,   0, 
    246,  15,  16,   0,   0,   0, 
      0,   0,  70,   2,  16,   0, 
      0,   0,   0,   0,  16,   0, 
      0,   7, 130,   0,  16,   0, 
      0,   0,   0,   0,  70,   2, 
     16,   0,   2,   0,   0,   0, 
     70,   2,  16,   0,   2,   0, 
      0,   0,  68,   0,   0,   5, 
    130,   0,  16,   0,   0,   0, 
      0,   0,  58,   0,  16,   0, 
      0,   0,   0,   0,  56,   0, 
      0,   7, 114,   0,  16,   0, 
      2,   0,   0,   0, 246,  15, 
     16,   0,   0,   0,   0,   0, 
     70,   2,  16,   0,   2,   0, 
      0,   0,  54,   0,   0,   5, 
     66,   0,  16,   0,   1,   0, 
      0,   0,   1,  64,   0,   0, 
      0,   0, 128,  63,  16,   0, 
      0,   7, 130,   0,  16,   0, 
      0,   0,   0,   0,  70,   2, 
     16,   0,   1,   0,   0,   0, 
     70,   2,  16,   0,   1,   0, 
      0,   0,  68,   0,   0,   5, 
    130,   0,  16,   0,   0,   0, 
      0,   0,  58,   0,  16,   0, 
      0,   0,   0,   0,  56,   0, 
      0,   7, 114,   0,  16,   0, 
      1,   0,   0,   0, 246,  15, 
     16,   0,   0,   0,   0,   0, 
     70,   2,  16,   0,   1,   0, 
      0,   0,  16,   0,   0,   7, 
    130,   0,  16,   0,   0,   0, 
      0,   0,  70,   2,  16,   0, 
      1,   0,   0,   0,  70,   2, 
     16,   0,   2,   0,   0,   0, 
     16,   0,   0,   7,  18,   0, 
     16,   0,   1,   0,   0,   0, 
     70,   2,  16,   0,   1,   0, 
      0,   0,  70,   2,  16,   0, 
      0,   0,   0,   0,  52,   0, 
      0,   7,  18,   0,  16,   0, 
      1,   0,   0,   0,  10,   0, 
     16,   0,   1,   0,   0,   0, 
      1,  64,   0,   0,   0,   0, 
      0,   0,  52,   0,   0,   7, 
    130,   0,  16,   0,   0,   0, 
      0,   0,  58,   0,  16,   0, 
      0,   0,   0,   0,   1,  64, 
      0,   0,   0,   0,   0,   0, 
     47,   0,   0,   5, 130,   0, 
     16,   0,   0,   0,   0,   0, 
     58,   0,  16,   0,   0,   0, 
      0,   0,  56,   0,   0,   8, 
    130,   0,  16,   0,   0,   0, 
      0,   0,  58,   0,  16,   0, 
      0,   0,   0,   0,  10, 128, 
     32,   0,   0,   0,   0,   0, 
      4,   0,   0,   0,  25,   0, 
      0,   5, 130,   0,  16,   0, 
      0,   0,   0,   0,  58,   0, 
     16,   0,   0,   0,   0,   0, 
     16,   0,   0,   9,  34,   0, 
     16,   0,   1,   0,   0,   0, 
     70, 130,  32,   0,   0,   0, 
      0,   0,  11,   0,   0,   0, 
     70, 130,  32,   0,   0,   0, 
      0,   0,  11,   0,   0,   0, 
     68,   0,   0,   5,  34,   0, 
     16,   0,   1,   0,   0,   0, 
     26,   0,  16,   0,   1,   0, 
      0,   0,  56,   0,   0,   8, 
    226,   0,  16,   0,   1,   0, 
      0,   0,  86,   5,  16,   0, 
      1,   0,   0,   0,   6, 137, 
     32,   0,   0,   0,   0,   0, 
     11,   0,   0,   0,  16,   0, 
      0,   7,  18,   0,  16,   0, 
      0,   0,   0,   0,  70,   2, 
     16,   0,   0,   0,   0,   0, 
    150,   7,  16,   0,   1,   0, 
      0,   0,  52,   0,   0,   8, 
     18,   0,  16,   0,   0,   0, 
      0,   0,  10,   0,  16, 128, 
     65,   0,   0,   0,   0,   0, 
      0,   0,   1,  64,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   9,  34,   0,  16,   0, 
      0,   0,   0,   0,  10,   0, 
     16,   0,   0,   0,   0,   0, 
     10, 128,  32, 128,  65,   0, 
      0,   0,   0,   0,   0,   0, 
     12,   0,   0,   0,  47,   0, 
      0,   5,  18,   0,  16,   0, 
      0,   0,   0,   0,  10,   0, 
     16,   0,   0,   0,   0,   0, 
     56,   0,   0,   8,  18,   0, 
     16,   0,   0,   0,   0,   0, 
     10,   0,  16,   0,   0,   0, 
      0,   0,  10, 128,  32,   0, 
      0,   0,   0,   0,  14,   0, 
      0,   0,  25,   0,   0,   5, 
     18,   0,  16,   0,   0,   0, 
      0,   0,  10,   0,  16,   0, 
      0,   0,   0,   0,  56,   0, 
      0,   7,  34,   0,  16,   0, 
      0,   0,   0,   0,  26,   0, 
     16,   0,   0,   0,   0,   0, 
     10,   0,  16,   0,   0,   0, 
      0,   0,   0,   0,   0,  10, 
     66,   0,  16,   0,   0,   0, 
      0,   0,  10, 128,  32, 128, 
     65,   0,   0,   0,   0,   0, 
      0,   0,  12,   0,   0,   0, 
     10, 128,  32,   0,   0,   0, 
      0,   0,  13,   0,   0,   0, 
     14,  32,   0,   7,  34,   0, 
     16,   0,   0,   0,   0,   0, 
     26,   0,  16,   0,   0,   0, 
      0,   0,  42,   0,  16,   0, 
      0,   0,   0,   0,  55,   0, 
      0,  10,  18,   0,  16,   0, 
      0,   0,   0,   0,  10, 128, 
     32,   0,   0,   0,   0,   0, 
     15,   0,   0,   0,  26,   0, 
     16,   0,   0,   0,   0,   0, 
     10,   0,  16,   0,   0,   0, 
      0,   0,  56,   0,   0,   8, 
    114,   0,  16,   0,   0,   0, 
      0,   0,   6,   0,  16,   0, 
      0,   0,   0,   0,  70, 130, 
     32,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,  56,   0, 
      0,   8, 226,   0,  16,   0, 
      1,   0,   0,   0,   6,   9, 
     16,   0,   0,   0,   0,   0, 
      6, 128,  32,   0,   0,   0, 
      0,   0,   3,   0,   0,   0, 
     56,   0,   0,   8, 114,   0, 
     16,   0,   0,   0,   0,   0, 
     70,   2,  16,   0,   0,   0, 
      0,   0,   6, 128,  32,   0, 
      0,   0,   0,   0,   2,   0, 
      0,   0,  56,  32,   0,   7, 
    114,   0,  16,   0,   2,   0, 
      0,   0,   6,   0,  16,   0, 
      1,   0,   0,   0,  70,   2, 
     16,   0,   0,   0,   0,   0, 
     56,  32,   0,   7, 114,   0, 
     16,   0,   0,   0,   0,   0, 
    246,  15,  16,   0,   0,   0, 
      0,   0, 150,   7,  16,   0, 
      1,   0,   0,   0,  52,   0, 
      0,   7, 130,   0,  16,   0, 
      0,   0,   0,   0,  42,   0, 
     16,   0,   0,   0,   0,   0, 
     26,   0,  16,   0,   0,   0, 
      0,   0,  52,   0,   0,   7, 
    130,   0,  16,   0,   1,   0, 
      0,   0,  58,   0,  16,   0, 
      0,   0,   0,   0,  10,   0, 
     16,   0,   0,   0,   0,   0, 
     56,   0,   0,   7, 114,   0, 
     16,   0,   1,   0,   0,   0, 
     70,   2,  16,   0,   0,   0, 
      0,   0, 246,  15,  16,   0, 
      1,   0,   0,   0,  54,   0, 
      0,   5, 130,   0,  16,   0, 
      2,   0,   0,   0,   1,  64, 
      0,   0,   0,   0, 128,  63, 
     56,   0,   0,   8, 242,   0, 
     16,   0,   0,   0,   0,   0, 
     70,  14,  16,   0,   2,   0, 
      0,   0,   6, 128,  32,   0, 
      0,   0,   0,   0,   6,   0, 
      0,   0,  56,   0,   0,   8, 
    242,   0,  16,   0,   2,   0, 
      0,   0,  70,  14,  16,   0, 
      2,   0,   0,   0,   6, 128, 
     32,   0,   0,   0,   0,   0, 
      7,   0,   0,   0,  50,   0, 
      0,   9, 242,   0,  16,   0, 
      0,   0,   0,   0,  70,  14, 
     16,   0,   0,   0,   0,   0, 
     70,  14,  16,   0,   1,   0, 
      0,   0,  70,  14,  16,   0, 
      2,   0,   0,   0,  50,   0, 
      0,  10, 242,   0,  16,   0, 
      0,   0,   0,   0,   6, 128, 
     32,   0,   0,   0,   0,   0, 
      8,   0,   0,   0,  70,  14, 
     16,   0,   1,   0,   0,   0, 
     70,  14,  16,   0,   0,   0, 
      0,   0,   0,  32,   0,   8, 
    242,  32,  16,   0,   0,   0, 
      0,   0,  70,  14,  16,   0, 
      0,   0,   0,   0,   6, 128, 
     32,   0,   0,   0,   0,   0, 
      9,   0,   0,   0,  62,   0, 
      0,   1,  83,  84,  65,  84, 
    116,   0,   0,   0,  52,   0, 
      0,   0,   3,   0,   0,   0, 
      0,   0,   0,   0,   2,   0, 
      0,   0,  44,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   1,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      1,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   3,   0,   0,   0, 
      1,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0
};
