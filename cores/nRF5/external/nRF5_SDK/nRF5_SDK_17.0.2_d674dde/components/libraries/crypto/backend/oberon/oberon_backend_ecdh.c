# 1 "/home/jenkins/workspace/RUI_Release/rui-v3/external/nRF5_SDK/nRF5_SDK_17.0.2_d674dde/components/libraries/crypto/backend/oberon/oberon_backend_ecdh.c"
# 1 "/home/jenkins/workspace/RUI_Release/rui-v3//"
# 1 "<built-in>"
#define __STDC__ 1
#define __STDC_VERSION__ 199901L
#define __STDC_HOSTED__ 1
#define __GNUC__ 10
#define __GNUC_MINOR__ 2
#define __GNUC_PATCHLEVEL__ 1
#define __VERSION__ "10.2.1 20201103 (release)"
#define __ATOMIC_RELAXED 0
#define __ATOMIC_SEQ_CST 5
#define __ATOMIC_ACQUIRE 2
#define __ATOMIC_RELEASE 3
#define __ATOMIC_ACQ_REL 4
#define __ATOMIC_CONSUME 1
#define __OPTIMIZE_SIZE__ 1
#define __OPTIMIZE__ 1
#define __FINITE_MATH_ONLY__ 0
#define __SIZEOF_INT__ 4
#define __SIZEOF_LONG__ 4
#define __SIZEOF_LONG_LONG__ 8
#define __SIZEOF_SHORT__ 2
#define __SIZEOF_FLOAT__ 4
#define __SIZEOF_DOUBLE__ 8
#define __SIZEOF_LONG_DOUBLE__ 8
#define __SIZEOF_SIZE_T__ 4
#define __CHAR_BIT__ 8
#define __BIGGEST_ALIGNMENT__ 8
#define __ORDER_LITTLE_ENDIAN__ 1234
#define __ORDER_BIG_ENDIAN__ 4321
#define __ORDER_PDP_ENDIAN__ 3412
#define __BYTE_ORDER__ __ORDER_LITTLE_ENDIAN__
#define __FLOAT_WORD_ORDER__ __ORDER_LITTLE_ENDIAN__
#define __SIZEOF_POINTER__ 4
#define __SIZE_TYPE__ unsigned int
#define __PTRDIFF_TYPE__ int
#define __WCHAR_TYPE__ unsigned int
#define __WINT_TYPE__ unsigned int
#define __INTMAX_TYPE__ long long int
#define __UINTMAX_TYPE__ long long unsigned int
#define __CHAR16_TYPE__ short unsigned int
#define __CHAR32_TYPE__ long unsigned int
#define __SIG_ATOMIC_TYPE__ int
#define __INT8_TYPE__ signed char
#define __INT16_TYPE__ short int
#define __INT32_TYPE__ long int
#define __INT64_TYPE__ long long int
#define __UINT8_TYPE__ unsigned char
#define __UINT16_TYPE__ short unsigned int
#define __UINT32_TYPE__ long unsigned int
#define __UINT64_TYPE__ long long unsigned int
#define __INT_LEAST8_TYPE__ signed char
#define __INT_LEAST16_TYPE__ short int
#define __INT_LEAST32_TYPE__ long int
#define __INT_LEAST64_TYPE__ long long int
#define __UINT_LEAST8_TYPE__ unsigned char
#define __UINT_LEAST16_TYPE__ short unsigned int
#define __UINT_LEAST32_TYPE__ long unsigned int
#define __UINT_LEAST64_TYPE__ long long unsigned int
#define __INT_FAST8_TYPE__ int
#define __INT_FAST16_TYPE__ int
#define __INT_FAST32_TYPE__ int
#define __INT_FAST64_TYPE__ long long int
#define __UINT_FAST8_TYPE__ unsigned int
#define __UINT_FAST16_TYPE__ unsigned int
#define __UINT_FAST32_TYPE__ unsigned int
#define __UINT_FAST64_TYPE__ long long unsigned int
#define __INTPTR_TYPE__ int
#define __UINTPTR_TYPE__ unsigned int
#define __GXX_ABI_VERSION 1014
#define __SCHAR_MAX__ 0x7f
#define __SHRT_MAX__ 0x7fff
#define __INT_MAX__ 0x7fffffff
#define __LONG_MAX__ 0x7fffffffL
#define __LONG_LONG_MAX__ 0x7fffffffffffffffLL
#define __WCHAR_MAX__ 0xffffffffU
#define __WCHAR_MIN__ 0U
#define __WINT_MAX__ 0xffffffffU
#define __WINT_MIN__ 0U
#define __PTRDIFF_MAX__ 0x7fffffff
#define __SIZE_MAX__ 0xffffffffU
#define __SCHAR_WIDTH__ 8
#define __SHRT_WIDTH__ 16
#define __INT_WIDTH__ 32
#define __LONG_WIDTH__ 32
#define __LONG_LONG_WIDTH__ 64
#define __WCHAR_WIDTH__ 32
#define __WINT_WIDTH__ 32
#define __PTRDIFF_WIDTH__ 32
#define __SIZE_WIDTH__ 32
#define __INTMAX_MAX__ 0x7fffffffffffffffLL
#define __INTMAX_C(c) c ## LL
#define __UINTMAX_MAX__ 0xffffffffffffffffULL
#define __UINTMAX_C(c) c ## ULL
#define __INTMAX_WIDTH__ 64
#define __SIG_ATOMIC_MAX__ 0x7fffffff
#define __SIG_ATOMIC_MIN__ (-__SIG_ATOMIC_MAX__ - 1)
#define __SIG_ATOMIC_WIDTH__ 32
#define __INT8_MAX__ 0x7f
#define __INT16_MAX__ 0x7fff
#define __INT32_MAX__ 0x7fffffffL
#define __INT64_MAX__ 0x7fffffffffffffffLL
#define __UINT8_MAX__ 0xff
#define __UINT16_MAX__ 0xffff
#define __UINT32_MAX__ 0xffffffffUL
#define __UINT64_MAX__ 0xffffffffffffffffULL
#define __INT_LEAST8_MAX__ 0x7f
#define __INT8_C(c) c
#define __INT_LEAST8_WIDTH__ 8
#define __INT_LEAST16_MAX__ 0x7fff
#define __INT16_C(c) c
#define __INT_LEAST16_WIDTH__ 16
#define __INT_LEAST32_MAX__ 0x7fffffffL
#define __INT32_C(c) c ## L
#define __INT_LEAST32_WIDTH__ 32
#define __INT_LEAST64_MAX__ 0x7fffffffffffffffLL
#define __INT64_C(c) c ## LL
#define __INT_LEAST64_WIDTH__ 64
#define __UINT_LEAST8_MAX__ 0xff
#define __UINT8_C(c) c
#define __UINT_LEAST16_MAX__ 0xffff
#define __UINT16_C(c) c
#define __UINT_LEAST32_MAX__ 0xffffffffUL
#define __UINT32_C(c) c ## UL
#define __UINT_LEAST64_MAX__ 0xffffffffffffffffULL
#define __UINT64_C(c) c ## ULL
#define __INT_FAST8_MAX__ 0x7fffffff
#define __INT_FAST8_WIDTH__ 32
#define __INT_FAST16_MAX__ 0x7fffffff
#define __INT_FAST16_WIDTH__ 32
#define __INT_FAST32_MAX__ 0x7fffffff
#define __INT_FAST32_WIDTH__ 32
#define __INT_FAST64_MAX__ 0x7fffffffffffffffLL
#define __INT_FAST64_WIDTH__ 64
#define __UINT_FAST8_MAX__ 0xffffffffU
#define __UINT_FAST16_MAX__ 0xffffffffU
#define __UINT_FAST32_MAX__ 0xffffffffU
#define __UINT_FAST64_MAX__ 0xffffffffffffffffULL
#define __INTPTR_MAX__ 0x7fffffff
#define __INTPTR_WIDTH__ 32
#define __UINTPTR_MAX__ 0xffffffffU
#define __GCC_IEC_559 0
#define __GCC_IEC_559_COMPLEX 0
#define __FLT_EVAL_METHOD__ 0
#define __FLT_EVAL_METHOD_TS_18661_3__ 0
#define __DEC_EVAL_METHOD__ 2
#define __FLT_RADIX__ 2
#define __FLT_MANT_DIG__ 24
#define __FLT_DIG__ 6
#define __FLT_MIN_EXP__ (-125)
#define __FLT_MIN_10_EXP__ (-37)
#define __FLT_MAX_EXP__ 128
#define __FLT_MAX_10_EXP__ 38
#define __FLT_DECIMAL_DIG__ 9
#define __FLT_MAX__ 3.4028234663852886e+38F
#define __FLT_NORM_MAX__ 3.4028234663852886e+38F
#define __FLT_MIN__ 1.1754943508222875e-38F
#define __FLT_EPSILON__ 1.1920928955078125e-7F
#define __FLT_DENORM_MIN__ 1.4012984643248171e-45F
#define __FLT_HAS_DENORM__ 1
#define __FLT_HAS_INFINITY__ 1
#define __FLT_HAS_QUIET_NAN__ 1
#define __FP_FAST_FMAF 1
#define __DBL_MANT_DIG__ 53
#define __DBL_DIG__ 15
#define __DBL_MIN_EXP__ (-1021)
#define __DBL_MIN_10_EXP__ (-307)
#define __DBL_MAX_EXP__ 1024
#define __DBL_MAX_10_EXP__ 308
#define __DBL_DECIMAL_DIG__ 17
#define __DBL_MAX__ ((double)1.7976931348623157e+308L)
#define __DBL_NORM_MAX__ ((double)1.7976931348623157e+308L)
#define __DBL_MIN__ ((double)2.2250738585072014e-308L)
#define __DBL_EPSILON__ ((double)2.2204460492503131e-16L)
#define __DBL_DENORM_MIN__ ((double)4.9406564584124654e-324L)
#define __DBL_HAS_DENORM__ 1
#define __DBL_HAS_INFINITY__ 1
#define __DBL_HAS_QUIET_NAN__ 1
#define __LDBL_MANT_DIG__ 53
#define __LDBL_DIG__ 15
#define __LDBL_MIN_EXP__ (-1021)
#define __LDBL_MIN_10_EXP__ (-307)
#define __LDBL_MAX_EXP__ 1024
#define __LDBL_MAX_10_EXP__ 308
#define __DECIMAL_DIG__ 17
#define __LDBL_DECIMAL_DIG__ 17
#define __LDBL_MAX__ 1.7976931348623157e+308L
#define __LDBL_NORM_MAX__ 1.7976931348623157e+308L
#define __LDBL_MIN__ 2.2250738585072014e-308L
#define __LDBL_EPSILON__ 2.2204460492503131e-16L
#define __LDBL_DENORM_MIN__ 4.9406564584124654e-324L
#define __LDBL_HAS_DENORM__ 1
#define __LDBL_HAS_INFINITY__ 1
#define __LDBL_HAS_QUIET_NAN__ 1
#define __FLT32_MANT_DIG__ 24
#define __FLT32_DIG__ 6
#define __FLT32_MIN_EXP__ (-125)
#define __FLT32_MIN_10_EXP__ (-37)
#define __FLT32_MAX_EXP__ 128
#define __FLT32_MAX_10_EXP__ 38
#define __FLT32_DECIMAL_DIG__ 9
#define __FLT32_MAX__ 3.4028234663852886e+38F32
#define __FLT32_NORM_MAX__ 3.4028234663852886e+38F32
#define __FLT32_MIN__ 1.1754943508222875e-38F32
#define __FLT32_EPSILON__ 1.1920928955078125e-7F32
#define __FLT32_DENORM_MIN__ 1.4012984643248171e-45F32
#define __FLT32_HAS_DENORM__ 1
#define __FLT32_HAS_INFINITY__ 1
#define __FLT32_HAS_QUIET_NAN__ 1
#define __FP_FAST_FMAF32 1
#define __FLT64_MANT_DIG__ 53
#define __FLT64_DIG__ 15
#define __FLT64_MIN_EXP__ (-1021)
#define __FLT64_MIN_10_EXP__ (-307)
#define __FLT64_MAX_EXP__ 1024
#define __FLT64_MAX_10_EXP__ 308
#define __FLT64_DECIMAL_DIG__ 17
#define __FLT64_MAX__ 1.7976931348623157e+308F64
#define __FLT64_NORM_MAX__ 1.7976931348623157e+308F64
#define __FLT64_MIN__ 2.2250738585072014e-308F64
#define __FLT64_EPSILON__ 2.2204460492503131e-16F64
#define __FLT64_DENORM_MIN__ 4.9406564584124654e-324F64
#define __FLT64_HAS_DENORM__ 1
#define __FLT64_HAS_INFINITY__ 1
#define __FLT64_HAS_QUIET_NAN__ 1
#define __FLT32X_MANT_DIG__ 53
#define __FLT32X_DIG__ 15
#define __FLT32X_MIN_EXP__ (-1021)
#define __FLT32X_MIN_10_EXP__ (-307)
#define __FLT32X_MAX_EXP__ 1024
#define __FLT32X_MAX_10_EXP__ 308
#define __FLT32X_DECIMAL_DIG__ 17
#define __FLT32X_MAX__ 1.7976931348623157e+308F32x
#define __FLT32X_NORM_MAX__ 1.7976931348623157e+308F32x
#define __FLT32X_MIN__ 2.2250738585072014e-308F32x
#define __FLT32X_EPSILON__ 2.2204460492503131e-16F32x
#define __FLT32X_DENORM_MIN__ 4.9406564584124654e-324F32x
#define __FLT32X_HAS_DENORM__ 1
#define __FLT32X_HAS_INFINITY__ 1
#define __FLT32X_HAS_QUIET_NAN__ 1
#define __SFRACT_FBIT__ 7
#define __SFRACT_IBIT__ 0
#define __SFRACT_MIN__ (-0.5HR-0.5HR)
#define __SFRACT_MAX__ 0X7FP-7HR
#define __SFRACT_EPSILON__ 0x1P-7HR
#define __USFRACT_FBIT__ 8
#define __USFRACT_IBIT__ 0
#define __USFRACT_MIN__ 0.0UHR
#define __USFRACT_MAX__ 0XFFP-8UHR
#define __USFRACT_EPSILON__ 0x1P-8UHR
#define __FRACT_FBIT__ 15
#define __FRACT_IBIT__ 0
#define __FRACT_MIN__ (-0.5R-0.5R)
#define __FRACT_MAX__ 0X7FFFP-15R
#define __FRACT_EPSILON__ 0x1P-15R
#define __UFRACT_FBIT__ 16
#define __UFRACT_IBIT__ 0
#define __UFRACT_MIN__ 0.0UR
#define __UFRACT_MAX__ 0XFFFFP-16UR
#define __UFRACT_EPSILON__ 0x1P-16UR
#define __LFRACT_FBIT__ 31
#define __LFRACT_IBIT__ 0
#define __LFRACT_MIN__ (-0.5LR-0.5LR)
#define __LFRACT_MAX__ 0X7FFFFFFFP-31LR
#define __LFRACT_EPSILON__ 0x1P-31LR
#define __ULFRACT_FBIT__ 32
#define __ULFRACT_IBIT__ 0
#define __ULFRACT_MIN__ 0.0ULR
#define __ULFRACT_MAX__ 0XFFFFFFFFP-32ULR
#define __ULFRACT_EPSILON__ 0x1P-32ULR
#define __LLFRACT_FBIT__ 63
#define __LLFRACT_IBIT__ 0
#define __LLFRACT_MIN__ (-0.5LLR-0.5LLR)
#define __LLFRACT_MAX__ 0X7FFFFFFFFFFFFFFFP-63LLR
#define __LLFRACT_EPSILON__ 0x1P-63LLR
#define __ULLFRACT_FBIT__ 64
#define __ULLFRACT_IBIT__ 0
#define __ULLFRACT_MIN__ 0.0ULLR
#define __ULLFRACT_MAX__ 0XFFFFFFFFFFFFFFFFP-64ULLR
#define __ULLFRACT_EPSILON__ 0x1P-64ULLR
#define __SACCUM_FBIT__ 7
#define __SACCUM_IBIT__ 8
#define __SACCUM_MIN__ (-0X1P7HK-0X1P7HK)
#define __SACCUM_MAX__ 0X7FFFP-7HK
#define __SACCUM_EPSILON__ 0x1P-7HK
#define __USACCUM_FBIT__ 8
#define __USACCUM_IBIT__ 8
#define __USACCUM_MIN__ 0.0UHK
#define __USACCUM_MAX__ 0XFFFFP-8UHK
#define __USACCUM_EPSILON__ 0x1P-8UHK
#define __ACCUM_FBIT__ 15
#define __ACCUM_IBIT__ 16
#define __ACCUM_MIN__ (-0X1P15K-0X1P15K)
#define __ACCUM_MAX__ 0X7FFFFFFFP-15K
#define __ACCUM_EPSILON__ 0x1P-15K
#define __UACCUM_FBIT__ 16
#define __UACCUM_IBIT__ 16
#define __UACCUM_MIN__ 0.0UK
#define __UACCUM_MAX__ 0XFFFFFFFFP-16UK
#define __UACCUM_EPSILON__ 0x1P-16UK
#define __LACCUM_FBIT__ 31
#define __LACCUM_IBIT__ 32
#define __LACCUM_MIN__ (-0X1P31LK-0X1P31LK)
#define __LACCUM_MAX__ 0X7FFFFFFFFFFFFFFFP-31LK
#define __LACCUM_EPSILON__ 0x1P-31LK
#define __ULACCUM_FBIT__ 32
#define __ULACCUM_IBIT__ 32
#define __ULACCUM_MIN__ 0.0ULK
#define __ULACCUM_MAX__ 0XFFFFFFFFFFFFFFFFP-32ULK
#define __ULACCUM_EPSILON__ 0x1P-32ULK
#define __LLACCUM_FBIT__ 31
#define __LLACCUM_IBIT__ 32
#define __LLACCUM_MIN__ (-0X1P31LLK-0X1P31LLK)
#define __LLACCUM_MAX__ 0X7FFFFFFFFFFFFFFFP-31LLK
#define __LLACCUM_EPSILON__ 0x1P-31LLK
#define __ULLACCUM_FBIT__ 32
#define __ULLACCUM_IBIT__ 32
#define __ULLACCUM_MIN__ 0.0ULLK
#define __ULLACCUM_MAX__ 0XFFFFFFFFFFFFFFFFP-32ULLK
#define __ULLACCUM_EPSILON__ 0x1P-32ULLK
#define __QQ_FBIT__ 7
#define __QQ_IBIT__ 0
#define __HQ_FBIT__ 15
#define __HQ_IBIT__ 0
#define __SQ_FBIT__ 31
#define __SQ_IBIT__ 0
#define __DQ_FBIT__ 63
#define __DQ_IBIT__ 0
#define __TQ_FBIT__ 127
#define __TQ_IBIT__ 0
#define __UQQ_FBIT__ 8
#define __UQQ_IBIT__ 0
#define __UHQ_FBIT__ 16
#define __UHQ_IBIT__ 0
#define __USQ_FBIT__ 32
#define __USQ_IBIT__ 0
#define __UDQ_FBIT__ 64
#define __UDQ_IBIT__ 0
#define __UTQ_FBIT__ 128
#define __UTQ_IBIT__ 0
#define __HA_FBIT__ 7
#define __HA_IBIT__ 8
#define __SA_FBIT__ 15
#define __SA_IBIT__ 16
#define __DA_FBIT__ 31
#define __DA_IBIT__ 32
#define __TA_FBIT__ 63
#define __TA_IBIT__ 64
#define __UHA_FBIT__ 8
#define __UHA_IBIT__ 8
#define __USA_FBIT__ 16
#define __USA_IBIT__ 16
#define __UDA_FBIT__ 32
#define __UDA_IBIT__ 32
#define __UTA_FBIT__ 64
#define __UTA_IBIT__ 64
#define __REGISTER_PREFIX__ 
#define __USER_LABEL_PREFIX__ 
#define __GNUC_STDC_INLINE__ 1
#define __STRICT_ANSI__ 1
#define __CHAR_UNSIGNED__ 1
#define __GCC_HAVE_SYNC_COMPARE_AND_SWAP_1 1
#define __GCC_HAVE_SYNC_COMPARE_AND_SWAP_2 1
#define __GCC_HAVE_SYNC_COMPARE_AND_SWAP_4 1
#define __GCC_ATOMIC_BOOL_LOCK_FREE 2
#define __GCC_ATOMIC_CHAR_LOCK_FREE 2
#define __GCC_ATOMIC_CHAR16_T_LOCK_FREE 2
#define __GCC_ATOMIC_CHAR32_T_LOCK_FREE 2
#define __GCC_ATOMIC_WCHAR_T_LOCK_FREE 2
#define __GCC_ATOMIC_SHORT_LOCK_FREE 2
#define __GCC_ATOMIC_INT_LOCK_FREE 2
#define __GCC_ATOMIC_LONG_LOCK_FREE 2
#define __GCC_ATOMIC_LLONG_LOCK_FREE 1
#define __GCC_ATOMIC_TEST_AND_SET_TRUEVAL 1
#define __GCC_ATOMIC_POINTER_LOCK_FREE 2
#define __HAVE_SPECULATION_SAFE_VALUE 1
#define __GCC_HAVE_DWARF2_CFI_ASM 1
#define __PRAGMA_REDEFINE_EXTNAME 1
#define __SIZEOF_WCHAR_T__ 4
#define __SIZEOF_WINT_T__ 4
#define __SIZEOF_PTRDIFF_T__ 4
#define __ARM_FEATURE_DSP 1
#define __ARM_FEATURE_QBIT 1
#define __ARM_FEATURE_SAT 1
#undef __ARM_FEATURE_CRYPTO
# 1 "<built-in>"
#define __ARM_FEATURE_UNALIGNED 1
#undef __ARM_FEATURE_QRDMX
# 1 "<built-in>"
#undef __ARM_FEATURE_CRC32
# 1 "<built-in>"
#undef __ARM_FEATURE_DOTPROD
# 1 "<built-in>"
#undef __ARM_FEATURE_COMPLEX
# 1 "<built-in>"
#define __ARM_32BIT_STATE 1
#undef __ARM_FEATURE_MVE
# 1 "<built-in>"
#undef __ARM_FEATURE_CMSE
# 1 "<built-in>"
#undef __ARM_FEATURE_LDREX
# 1 "<built-in>"
#define __ARM_FEATURE_LDREX 7
#define __ARM_FEATURE_CLZ 1
#undef __ARM_FEATURE_NUMERIC_MAXMIN
# 1 "<built-in>"
#define __ARM_FEATURE_SIMD32 1
#define __ARM_SIZEOF_MINIMAL_ENUM 1
#define __ARM_SIZEOF_WCHAR_T 4
#undef __ARM_ARCH_PROFILE
# 1 "<built-in>"
#define __ARM_ARCH_PROFILE 77
#define __arm__ 1
#undef __ARM_ARCH
# 1 "<built-in>"
#define __ARM_ARCH 7
#define __APCS_32__ 1
#define __GCC_ASM_FLAG_OUTPUTS__ 1
#define __thumb__ 1
#define __thumb2__ 1
#define __THUMBEL__ 1
#undef __ARM_ARCH_ISA_THUMB
# 1 "<built-in>"
#define __ARM_ARCH_ISA_THUMB 2
#define __ARMEL__ 1
#define __VFP_FP__ 1
#undef __ARM_FP
# 1 "<built-in>"
#define __ARM_FP 4
#undef __ARM_FP16_FORMAT_IEEE
# 1 "<built-in>"
#undef __ARM_FP16_FORMAT_ALTERNATIVE
# 1 "<built-in>"
#undef __ARM_FP16_ARGS
# 1 "<built-in>"
#undef __ARM_FEATURE_FP16_SCALAR_ARITHMETIC
# 1 "<built-in>"
#undef __ARM_FEATURE_FP16_VECTOR_ARITHMETIC
# 1 "<built-in>"
#undef __ARM_FEATURE_FP16_FML
# 1 "<built-in>"
#define __ARM_FEATURE_FMA 1
#undef __ARM_NEON__
# 1 "<built-in>"
#undef __ARM_NEON
# 1 "<built-in>"
#undef __ARM_NEON_FP
# 1 "<built-in>"
#define __THUMB_INTERWORK__ 1
#define __ARM_ARCH_7EM__ 1
#define __ARM_PCS_VFP 1
#define __ARM_EABI__ 1
#undef __FDPIC__
# 1 "<built-in>"
#define __ARM_ARCH_EXT_IDIV__ 1
#define __ARM_FEATURE_IDIV 1
#define __ARM_ASM_SYNTAX_UNIFIED__ 1
#undef __ARM_FEATURE_COPROC
# 1 "<built-in>"
#define __ARM_FEATURE_COPROC 15
#undef __ARM_FEATURE_CDE
# 1 "<built-in>"
#undef __ARM_FEATURE_CDE_COPROC
# 1 "<built-in>"
#undef __ARM_FEATURE_MATMUL_INT8
# 1 "<built-in>"
#undef __ARM_FEATURE_BF16_SCALAR_ARITHMETIC
# 1 "<built-in>"
#undef __ARM_FEATURE_BF16_VECTOR_ARITHMETIC
# 1 "<built-in>"
#undef __ARM_BF16_FORMAT_ALTERNATIVE
# 1 "<built-in>"
#define __GXX_TYPEINFO_EQUALITY_INLINE 0
#define __ELF__ 1
# 1 "<command-line>"
#define __USES_INITFINI__ 1
#define nrf52840 1
#define SUPPORT_LORA 1
#define LORA_RF_LP 1
#define LORA_IO_SPI_PORT 2
#define SYS_RTC_COUNTER_PORT 2
#define ATCMD_CUST_TABLE_SIZE 64
#define WAN_TYPE 0
#define LORA_STACK_VER 0x040407
#define RAK4631_V2 .0+RAK5005-O_V1.0 1
#define rak4630 1
#define BATTERY_LEVEL_SUPPORT 1
#define BLE_CENTRAL_SUPPORT 1
#define APP_TIMER_V2 1
#define APP_TIMER_V2_RTC1_ENABLED 1
#define BOARD_PCA10056 1
#define S140 1
#define CONFIG_GPIO_AS_PINRESET 1
#define FLOAT_ABI_HARD 1
#define NRF52840_XXAA 1
#define NRF_SD_BLE_API_VERSION 6
#define USER_UART 1
#define USBD_CDC 1
#define BLE_SUPPORT 1
#define DFU_SUPPORT 1
#define BL_SETTINGS_ACCESS_ONLY 1
#define NRF_DFU_SVCI_ENABLED 1
#define NRF_DFU_TRANSPORT_BLE 1
#define REGION_AS923 1
#define REGION_AU915 1
#define REGION_CN470 1
#define REGION_CN779 1
#define REGION_EU433 1
#define REGION_EU868 1
#define REGION_KR920 1
#define REGION_IN865 1
#define REGION_US915 1
#define REGION_RU864 1
#define SOFT_SE 1
#define SECURE_ELEMENT_PRE_PROVISIONED 1
#define LORAMAC_CLASSB_ENABLED 1
#define SOFTDEVICE_PRESENT 1
#define SWI_DISABLE0 1
#define __HEAP_SIZE 7168
#define __STACK_SIZE 7168
#define DEBUG 1
#define WISBLOCK_BASE_5005_O 1
#define SUPPORT_WDT 1
#define SUPPORT_USB 1
#define SUPPORT_BLE 1
#define SUPPORT_NFC 1
#define SUPPORT_SPI 1
#define SUPPORT_AT 1
# 1 "/home/jenkins/workspace/RUI_Release/rui-v3/external/nRF5_SDK/nRF5_SDK_17.0.2_d674dde/components/libraries/crypto/backend/oberon/oberon_backend_ecdh.c"
# 41 "/home/jenkins/workspace/RUI_Release/rui-v3/external/nRF5_SDK/nRF5_SDK_17.0.2_d674dde/components/libraries/crypto/backend/oberon/oberon_backend_ecdh.c"
# 1 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h" 1
# 44 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define SDK_CONFIG_H 
# 63 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define NRF_BL_FW_COPY_PROGRESS_STORE_STEP 8




#define NRF_DFU_SETTINGS_VERSION 1
# 77 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define BSP_BTN_BLE_ENABLED 1
# 90 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define BLE_ADVERTISING_ENABLED 1






#define BLE_DB_DISCOVERY_ENABLED 1





#define BLE_DTM_ENABLED 0



#define NRF_RADIO_ANTENNA_PIN_1 21




#define NRF_RADIO_ANTENNA_PIN_2 23




#define NRF_RADIO_ANTENNA_PIN_3 26




#define NRF_RADIO_ANTENNA_PIN_4 27




#define NRF_RADIO_ANTENNA_PIN_5 28




#define NRF_RADIO_ANTENNA_PIN_6 29




#define NRF_RADIO_ANTENNA_PIN_7 30




#define NRF_RADIO_ANTENNA_PIN_8 31




#define NRF_RADIO_ANTENNA_COUNT 12
# 156 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define BLE_RACP_ENABLED 0





#define NRF_BLE_CONN_PARAMS_ENABLED 1





#define NRF_BLE_CONN_PARAMS_MAX_SLAVE_LATENCY_DEVIATION 499






#define NRF_BLE_CONN_PARAMS_MAX_SUPERVISION_TIMEOUT_DEVIATION 65535
# 184 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define NRF_BLE_GATT_ENABLED 1





#define NRF_BLE_GQ_ENABLED 1



#define NRF_BLE_GQ_DATAPOOL_ELEMENT_SIZE 20




#define NRF_BLE_GQ_DATAPOOL_ELEMENT_COUNT 8




#define NRF_BLE_GQ_GATTC_WRITE_MAX_DATA_LEN 16




#define NRF_BLE_GQ_GATTS_HVX_MAX_DATA_LEN 16






#define NRF_BLE_LESC_ENABLED 1





#define NRF_BLE_QWR_ENABLED 1



#define NRF_BLE_QWR_MAX_ATTR 0







#define NRF_BLE_SCAN_ENABLED 1



#define NRF_BLE_SCAN_BUFFER 255




#define NRF_BLE_SCAN_NAME_MAX_LEN 32




#define NRF_BLE_SCAN_SHORT_NAME_MAX_LEN 32




#define NRF_BLE_SCAN_SCAN_INTERVAL 160




#define NRF_BLE_SCAN_SCAN_DURATION 0




#define NRF_BLE_SCAN_SCAN_WINDOW 80




#define NRF_BLE_SCAN_MIN_CONNECTION_INTERVAL 7.5




#define NRF_BLE_SCAN_MAX_CONNECTION_INTERVAL 30




#define NRF_BLE_SCAN_SLAVE_LATENCY 0




#define NRF_BLE_SCAN_SUPERVISION_TIMEOUT 4000
# 295 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define NRF_BLE_SCAN_SCAN_PHY 1





#define NRF_BLE_SCAN_FILTER_ENABLE 1



#define NRF_BLE_SCAN_UUID_CNT 1




#define NRF_BLE_SCAN_NAME_CNT 1




#define NRF_BLE_SCAN_SHORT_NAME_CNT 0




#define NRF_BLE_SCAN_ADDRESS_CNT 1




#define NRF_BLE_SCAN_APPEARANCE_CNT 0
# 335 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define PEER_MANAGER_ENABLED 1



#define PM_MAX_REGISTRANTS 3






#define PM_FLASH_BUFFERS 4
# 355 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define PM_CENTRAL_ENABLED 1
# 365 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define PM_SERVICE_CHANGED_ENABLED 1
# 374 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define PM_PEER_RANKS_ENABLED 1







#define PM_LESC_ENABLED 1





#define PM_RA_PROTECTION_ENABLED 0



#define PM_RA_PROTECTION_TRACKED_PEERS_NUM 8




#define PM_RA_PROTECTION_MIN_WAIT_INTERVAL 4000




#define PM_RA_PROTECTION_MAX_WAIT_INTERVAL 64000






#define PM_RA_PROTECTION_REWARD_PERIOD 10000
# 418 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define PM_HANDLER_SEC_DELAY_MS 0
# 434 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define BLE_ANCS_C_ENABLED 0






#define BLE_ANS_C_ENABLED 0






#define BLE_BAS_C_ENABLED 0





#define BLE_BAS_ENABLED 1




#define BLE_BAS_CONFIG_LOG_ENABLED 0
# 470 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define BLE_BAS_CONFIG_LOG_LEVEL 4
# 486 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define BLE_BAS_CONFIG_INFO_COLOR 0
# 502 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define BLE_BAS_CONFIG_DEBUG_COLOR 0
# 513 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define BLE_CSCS_ENABLED 0






#define BLE_CTS_C_ENABLED 0






#define BLE_DIS_ENABLED 1






#define BLE_GLS_ENABLED 0






#define BLE_HIDS_ENABLED 1






#define BLE_HRS_C_ENABLED 0






#define BLE_HRS_ENABLED 0






#define BLE_HTS_ENABLED 0






#define BLE_IAS_C_ENABLED 0





#define BLE_IAS_ENABLED 0




#define BLE_IAS_CONFIG_LOG_ENABLED 0
# 591 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define BLE_IAS_CONFIG_LOG_LEVEL 3
# 607 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define BLE_IAS_CONFIG_INFO_COLOR 0
# 623 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define BLE_IAS_CONFIG_DEBUG_COLOR 0
# 634 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define BLE_LBS_C_ENABLED 0






#define BLE_LBS_ENABLED 0






#define BLE_LLS_ENABLED 0






#define BLE_NUS_C_ENABLED 1





#define BLE_NUS_ENABLED 1




#define BLE_NUS_CONFIG_LOG_ENABLED 0
# 677 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define BLE_NUS_CONFIG_LOG_LEVEL 3
# 693 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define BLE_NUS_CONFIG_INFO_COLOR 0
# 709 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define BLE_NUS_CONFIG_DEBUG_COLOR 0
# 720 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define BLE_RCS_C_ENABLED 1






#define BLE_RSCS_C_ENABLED 0






#define BLE_RSCS_ENABLED 0






#define BLE_TPS_ENABLED 0
# 753 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define NRF_MPU_ENABLED 0





#define NRF_MPU_CLI_CMDS 0







#define NRF_STACK_GUARD_ENABLED 0
# 781 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define NRF_STACK_GUARD_CONFIG_SIZE 7
# 795 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define NRF_CRYPTO_ENABLED 1
# 808 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define NRF_CRYPTO_ALLOCATOR 0







#define NRF_CRYPTO_BACKEND_CC310_BL_ENABLED 0





#define NRF_CRYPTO_BACKEND_CC310_BL_ECC_SECP224R1_ENABLED 0






#define NRF_CRYPTO_BACKEND_CC310_BL_ECC_SECP256R1_ENABLED 1
# 838 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define NRF_CRYPTO_BACKEND_CC310_BL_HASH_SHA256_ENABLED 1
# 847 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define NRF_CRYPTO_BACKEND_CC310_BL_HASH_LITTLE_ENDIAN_DIGEST_ENABLED 0
# 856 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define NRF_CRYPTO_BACKEND_CC310_BL_HASH_AUTOMATIC_RAM_BUFFER_ENABLED 0






#define NRF_CRYPTO_BACKEND_CC310_BL_HASH_AUTOMATIC_RAM_BUFFER_SIZE 4096
# 872 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define NRF_CRYPTO_BACKEND_CC310_BL_ECC_LITTLE_ENDIAN_ENABLED 0
# 881 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define NRF_CRYPTO_BACKEND_CC310_BL_INTERRUPTS_ENABLED 1
# 890 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define NRF_CRYPTO_BACKEND_CC310_ENABLED 1





#define NRF_CRYPTO_BACKEND_CC310_AES_CBC_ENABLED 1






#define NRF_CRYPTO_BACKEND_CC310_AES_CTR_ENABLED 1






#define NRF_CRYPTO_BACKEND_CC310_AES_ECB_ENABLED 1






#define NRF_CRYPTO_BACKEND_CC310_AES_CBC_MAC_ENABLED 1






#define NRF_CRYPTO_BACKEND_CC310_AES_CMAC_ENABLED 1






#define NRF_CRYPTO_BACKEND_CC310_AES_CCM_ENABLED 1






#define NRF_CRYPTO_BACKEND_CC310_AES_CCM_STAR_ENABLED 1






#define NRF_CRYPTO_BACKEND_CC310_CHACHA_POLY_ENABLED 1






#define NRF_CRYPTO_BACKEND_CC310_ECC_SECP160R1_ENABLED 1






#define NRF_CRYPTO_BACKEND_CC310_ECC_SECP160R2_ENABLED 1






#define NRF_CRYPTO_BACKEND_CC310_ECC_SECP192R1_ENABLED 1






#define NRF_CRYPTO_BACKEND_CC310_ECC_SECP224R1_ENABLED 1






#define NRF_CRYPTO_BACKEND_CC310_ECC_SECP256R1_ENABLED 1






#define NRF_CRYPTO_BACKEND_CC310_ECC_SECP384R1_ENABLED 1






#define NRF_CRYPTO_BACKEND_CC310_ECC_SECP521R1_ENABLED 1






#define NRF_CRYPTO_BACKEND_CC310_ECC_SECP160K1_ENABLED 1






#define NRF_CRYPTO_BACKEND_CC310_ECC_SECP192K1_ENABLED 1






#define NRF_CRYPTO_BACKEND_CC310_ECC_SECP224K1_ENABLED 1






#define NRF_CRYPTO_BACKEND_CC310_ECC_SECP256K1_ENABLED 1







#define NRF_CRYPTO_BACKEND_CC310_ECC_CURVE25519_ENABLED 1






#define NRF_CRYPTO_BACKEND_CC310_ECC_ED25519_ENABLED 1
# 1046 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define NRF_CRYPTO_BACKEND_CC310_HASH_SHA256_ENABLED 1
# 1055 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define NRF_CRYPTO_BACKEND_CC310_HASH_SHA512_ENABLED 1
# 1064 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define NRF_CRYPTO_BACKEND_CC310_HMAC_SHA256_ENABLED 1
# 1073 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define NRF_CRYPTO_BACKEND_CC310_HMAC_SHA512_ENABLED 1






#define NRF_CRYPTO_BACKEND_CC310_RNG_ENABLED 1
# 1090 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define NRF_CRYPTO_BACKEND_CC310_INTERRUPTS_ENABLED 1
# 1100 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define NRF_CRYPTO_BACKEND_CIFRA_ENABLED 0





#define NRF_CRYPTO_BACKEND_CIFRA_AES_EAX_ENABLED 1







#define NRF_CRYPTO_BACKEND_MBEDTLS_ENABLED 0





#define NRF_CRYPTO_BACKEND_MBEDTLS_AES_CBC_ENABLED 1






#define NRF_CRYPTO_BACKEND_MBEDTLS_AES_CTR_ENABLED 1






#define NRF_CRYPTO_BACKEND_MBEDTLS_AES_CFB_ENABLED 1






#define NRF_CRYPTO_BACKEND_MBEDTLS_AES_ECB_ENABLED 1






#define NRF_CRYPTO_BACKEND_MBEDTLS_AES_CBC_MAC_ENABLED 1






#define NRF_CRYPTO_BACKEND_MBEDTLS_AES_CMAC_ENABLED 1






#define NRF_CRYPTO_BACKEND_MBEDTLS_AES_CCM_ENABLED 1






#define NRF_CRYPTO_BACKEND_MBEDTLS_AES_GCM_ENABLED 1
# 1178 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define NRF_CRYPTO_BACKEND_MBEDTLS_ECC_SECP192R1_ENABLED 1
# 1187 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define NRF_CRYPTO_BACKEND_MBEDTLS_ECC_SECP224R1_ENABLED 1
# 1196 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define NRF_CRYPTO_BACKEND_MBEDTLS_ECC_SECP256R1_ENABLED 1
# 1205 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define NRF_CRYPTO_BACKEND_MBEDTLS_ECC_SECP384R1_ENABLED 1
# 1214 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define NRF_CRYPTO_BACKEND_MBEDTLS_ECC_SECP521R1_ENABLED 1
# 1223 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define NRF_CRYPTO_BACKEND_MBEDTLS_ECC_SECP192K1_ENABLED 1
# 1232 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define NRF_CRYPTO_BACKEND_MBEDTLS_ECC_SECP224K1_ENABLED 1
# 1241 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define NRF_CRYPTO_BACKEND_MBEDTLS_ECC_SECP256K1_ENABLED 1
# 1250 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define NRF_CRYPTO_BACKEND_MBEDTLS_ECC_BP256R1_ENABLED 1
# 1259 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define NRF_CRYPTO_BACKEND_MBEDTLS_ECC_BP384R1_ENABLED 1
# 1268 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define NRF_CRYPTO_BACKEND_MBEDTLS_ECC_BP512R1_ENABLED 1
# 1277 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define NRF_CRYPTO_BACKEND_MBEDTLS_ECC_CURVE25519_ENABLED 1
# 1286 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define NRF_CRYPTO_BACKEND_MBEDTLS_HASH_SHA256_ENABLED 1
# 1295 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define NRF_CRYPTO_BACKEND_MBEDTLS_HASH_SHA512_ENABLED 1
# 1304 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define NRF_CRYPTO_BACKEND_MBEDTLS_HMAC_SHA256_ENABLED 1
# 1313 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define NRF_CRYPTO_BACKEND_MBEDTLS_HMAC_SHA512_ENABLED 1







#define NRF_CRYPTO_BACKEND_MICRO_ECC_ENABLED 0







#define NRF_CRYPTO_BACKEND_MICRO_ECC_ECC_SECP192R1_ENABLED 1
# 1338 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define NRF_CRYPTO_BACKEND_MICRO_ECC_ECC_SECP224R1_ENABLED 1
# 1347 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define NRF_CRYPTO_BACKEND_MICRO_ECC_ECC_SECP256R1_ENABLED 1
# 1356 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define NRF_CRYPTO_BACKEND_MICRO_ECC_ECC_SECP256K1_ENABLED 1
# 1367 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define NRF_CRYPTO_BACKEND_NRF_HW_RNG_ENABLED 0







#define NRF_CRYPTO_BACKEND_NRF_HW_RNG_MBEDTLS_CTR_DRBG_ENABLED 1
# 1385 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define NRF_CRYPTO_BACKEND_NRF_SW_ENABLED 0







#define NRF_CRYPTO_BACKEND_NRF_SW_HASH_SHA256_ENABLED 1
# 1402 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define NRF_CRYPTO_BACKEND_OBERON_ENABLED 0





#define NRF_CRYPTO_BACKEND_OBERON_CHACHA_POLY_ENABLED 1
# 1417 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define NRF_CRYPTO_BACKEND_OBERON_ECC_SECP256R1_ENABLED 1
# 1426 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define NRF_CRYPTO_BACKEND_OBERON_ECC_CURVE25519_ENABLED 1
# 1435 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define NRF_CRYPTO_BACKEND_OBERON_ECC_ED25519_ENABLED 1
# 1444 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define NRF_CRYPTO_BACKEND_OBERON_HASH_SHA256_ENABLED 1
# 1453 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define NRF_CRYPTO_BACKEND_OBERON_HASH_SHA512_ENABLED 1
# 1462 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define NRF_CRYPTO_BACKEND_OBERON_HMAC_SHA256_ENABLED 1
# 1471 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define NRF_CRYPTO_BACKEND_OBERON_HMAC_SHA512_ENABLED 1
# 1480 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define NRF_CRYPTO_BACKEND_OPTIGA_ENABLED 0







#define NRF_CRYPTO_BACKEND_OPTIGA_RNG_ENABLED 0
# 1497 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define NRF_CRYPTO_BACKEND_OPTIGA_ECC_SECP256R1_ENABLED 1
# 1508 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define NRF_CRYPTO_CURVE25519_BIG_ENDIAN_ENABLED 0
# 1522 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define NRF_CRYPTO_RNG_STATIC_MEMORY_BUFFERS_ENABLED 1
# 1531 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define NRF_CRYPTO_RNG_AUTO_INIT_ENABLED 1
# 1551 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define BLE_DFU_ENABLED 1






#define NRF_DFU_BLE_BUTTONLESS_SUPPORTS_BONDS 0
# 1592 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define COMP_ENABLED 0
# 1603 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define COMP_CONFIG_REF 1
# 1612 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define COMP_CONFIG_MAIN_MODE 0
# 1622 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define COMP_CONFIG_SPEED_MODE 2
# 1631 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define COMP_CONFIG_HYST 0
# 1642 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define COMP_CONFIG_ISOURCE 0
# 1657 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define COMP_CONFIG_INPUT 0
# 1674 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define COMP_CONFIG_IRQ_PRIORITY 6
# 1683 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define EGU_ENABLED 0





#define GPIOTE_ENABLED 1



#define GPIOTE_CONFIG_NUM_OF_LOW_POWER_EVENTS 4
# 1710 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define GPIOTE_CONFIG_IRQ_PRIORITY 6







#define I2S_ENABLED 0





#define I2S_CONFIG_SCK_PIN 31






#define I2S_CONFIG_LRCK_PIN 30




#define I2S_CONFIG_MCK_PIN 255






#define I2S_CONFIG_SDOUT_PIN 29






#define I2S_CONFIG_SDIN_PIN 28
# 1759 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define I2S_CONFIG_MASTER 0
# 1768 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define I2S_CONFIG_FORMAT 0
# 1777 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define I2S_CONFIG_ALIGN 0
# 1787 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define I2S_CONFIG_SWIDTH 1
# 1797 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define I2S_CONFIG_CHANNELS 1
# 1823 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define I2S_CONFIG_MCK_SETUP 536870912
# 1839 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define I2S_CONFIG_RATIO 2000
# 1856 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define I2S_CONFIG_IRQ_PRIORITY 6





#define I2S_CONFIG_LOG_ENABLED 0
# 1873 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define I2S_CONFIG_LOG_LEVEL 3
# 1889 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define I2S_CONFIG_INFO_COLOR 0
# 1905 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define I2S_CONFIG_DEBUG_COLOR 0
# 1915 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define LPCOMP_ENABLED 0
# 1938 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define LPCOMP_CONFIG_REFERENCE 3
# 1948 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define LPCOMP_CONFIG_DETECTION 2
# 1963 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define LPCOMP_CONFIG_INPUT 0






#define LPCOMP_CONFIG_HYST 0
# 1987 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define LPCOMP_CONFIG_IRQ_PRIORITY 6







#define NRFX_CLOCK_ENABLED 1
# 2004 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define NRFX_CLOCK_CONFIG_LF_SRC 1
# 2019 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define NRFX_CLOCK_CONFIG_IRQ_PRIORITY 6





#define NRFX_CLOCK_CONFIG_LOG_ENABLED 0
# 2036 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define NRFX_CLOCK_CONFIG_LOG_LEVEL 3
# 2052 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define NRFX_CLOCK_CONFIG_INFO_COLOR 0
# 2068 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define NRFX_CLOCK_CONFIG_DEBUG_COLOR 0
# 2078 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define NRFX_COMP_ENABLED 0
# 2089 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define NRFX_COMP_CONFIG_REF 1
# 2098 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define NRFX_COMP_CONFIG_MAIN_MODE 0
# 2108 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define NRFX_COMP_CONFIG_SPEED_MODE 2
# 2117 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define NRFX_COMP_CONFIG_HYST 0
# 2128 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define NRFX_COMP_CONFIG_ISOURCE 0
# 2143 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define NRFX_COMP_CONFIG_INPUT 0
# 2158 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define NRFX_COMP_CONFIG_IRQ_PRIORITY 6





#define NRFX_COMP_CONFIG_LOG_ENABLED 0
# 2175 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define NRFX_COMP_CONFIG_LOG_LEVEL 3
# 2191 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define NRFX_COMP_CONFIG_INFO_COLOR 0
# 2207 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define NRFX_COMP_CONFIG_DEBUG_COLOR 0
# 2217 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define NRFX_GPIOTE_ENABLED 1



#define NRFX_GPIOTE_CONFIG_NUM_OF_LOW_POWER_EVENTS 1
# 2236 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define NRFX_GPIOTE_CONFIG_IRQ_PRIORITY 6





#define NRFX_GPIOTE_CONFIG_LOG_ENABLED 0
# 2253 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define NRFX_GPIOTE_CONFIG_LOG_LEVEL 3
# 2269 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define NRFX_GPIOTE_CONFIG_INFO_COLOR 0
# 2285 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define NRFX_GPIOTE_CONFIG_DEBUG_COLOR 0
# 2295 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define NRFX_I2S_ENABLED 0





#define NRFX_I2S_CONFIG_SCK_PIN 31






#define NRFX_I2S_CONFIG_LRCK_PIN 30




#define NRFX_I2S_CONFIG_MCK_PIN 255






#define NRFX_I2S_CONFIG_SDOUT_PIN 29






#define NRFX_I2S_CONFIG_SDIN_PIN 28
# 2336 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define NRFX_I2S_CONFIG_MASTER 0
# 2345 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define NRFX_I2S_CONFIG_FORMAT 0
# 2354 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define NRFX_I2S_CONFIG_ALIGN 0
# 2364 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define NRFX_I2S_CONFIG_SWIDTH 1
# 2374 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define NRFX_I2S_CONFIG_CHANNELS 1
# 2400 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define NRFX_I2S_CONFIG_MCK_SETUP 536870912
# 2416 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define NRFX_I2S_CONFIG_RATIO 2000
# 2431 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define NRFX_I2S_CONFIG_IRQ_PRIORITY 6





#define NRFX_I2S_CONFIG_LOG_ENABLED 0
# 2448 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define NRFX_I2S_CONFIG_LOG_LEVEL 3
# 2464 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define NRFX_I2S_CONFIG_INFO_COLOR 0
# 2480 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define NRFX_I2S_CONFIG_DEBUG_COLOR 0
# 2490 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define NRFX_LPCOMP_ENABLED 0
# 2513 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define NRFX_LPCOMP_CONFIG_REFERENCE 3
# 2523 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define NRFX_LPCOMP_CONFIG_DETECTION 2
# 2538 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define NRFX_LPCOMP_CONFIG_INPUT 0






#define NRFX_LPCOMP_CONFIG_HYST 0
# 2560 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define NRFX_LPCOMP_CONFIG_IRQ_PRIORITY 6





#define NRFX_LPCOMP_CONFIG_LOG_ENABLED 0
# 2577 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define NRFX_LPCOMP_CONFIG_LOG_LEVEL 3
# 2593 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define NRFX_LPCOMP_CONFIG_INFO_COLOR 0
# 2609 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define NRFX_LPCOMP_CONFIG_DEBUG_COLOR 0
# 2619 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define NRFX_NFCT_ENABLED 1
# 2633 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define NRFX_NFCT_CONFIG_IRQ_PRIORITY 6





#define NRFX_NFCT_CONFIG_LOG_ENABLED 0
# 2650 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define NRFX_NFCT_CONFIG_LOG_LEVEL 3
# 2666 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define NRFX_NFCT_CONFIG_INFO_COLOR 0
# 2682 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define NRFX_NFCT_CONFIG_DEBUG_COLOR 0
# 2692 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define NRFX_PDM_ENABLED 1







#define NRFX_PDM_CONFIG_MODE 1
# 2709 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define NRFX_PDM_CONFIG_EDGE 0
# 2719 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define NRFX_PDM_CONFIG_CLOCK_FREQ 138412032
# 2734 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define NRFX_PDM_CONFIG_IRQ_PRIORITY 6





#define NRFX_PDM_CONFIG_LOG_ENABLED 0
# 2751 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define NRFX_PDM_CONFIG_LOG_LEVEL 3
# 2767 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define NRFX_PDM_CONFIG_INFO_COLOR 0
# 2783 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define NRFX_PDM_CONFIG_DEBUG_COLOR 0
# 2793 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define NRFX_POWER_ENABLED 1
# 2807 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define NRFX_POWER_CONFIG_IRQ_PRIORITY 6
# 2816 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define NRFX_POWER_CONFIG_DEFAULT_DCDCEN 0
# 2825 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define NRFX_POWER_CONFIG_DEFAULT_DCDCENHV 0







#define NRFX_PPI_ENABLED 0




#define NRFX_PPI_CONFIG_LOG_ENABLED 0
# 2849 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define NRFX_PPI_CONFIG_LOG_LEVEL 3
# 2865 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define NRFX_PPI_CONFIG_INFO_COLOR 0
# 2881 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define NRFX_PPI_CONFIG_DEBUG_COLOR 0
# 2891 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define NRFX_PRS_ENABLED 1





#define NRFX_PRS_BOX_0_ENABLED 0






#define NRFX_PRS_BOX_1_ENABLED 0






#define NRFX_PRS_BOX_2_ENABLED 0






#define NRFX_PRS_BOX_3_ENABLED 0






#define NRFX_PRS_BOX_4_ENABLED 1





#define NRFX_PRS_CONFIG_LOG_ENABLED 0
# 2942 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define NRFX_PRS_CONFIG_LOG_LEVEL 3
# 2958 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define NRFX_PRS_CONFIG_INFO_COLOR 0
# 2974 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define NRFX_PRS_CONFIG_DEBUG_COLOR 0
# 2984 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define NRFX_PWM_ENABLED 0





#define NRFX_PWM0_ENABLED 0






#define NRFX_PWM1_ENABLED 0






#define NRFX_PWM2_ENABLED 0






#define NRFX_PWM_DEFAULT_CONFIG_OUT0_PIN 31






#define NRFX_PWM_DEFAULT_CONFIG_OUT1_PIN 31






#define NRFX_PWM_DEFAULT_CONFIG_OUT2_PIN 31






#define NRFX_PWM_DEFAULT_CONFIG_OUT3_PIN 31
# 3047 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define NRFX_PWM_DEFAULT_CONFIG_BASE_CLOCK 4
# 3056 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define NRFX_PWM_DEFAULT_CONFIG_COUNT_MODE 0




#define NRFX_PWM_DEFAULT_CONFIG_TOP_VALUE 1000
# 3072 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define NRFX_PWM_DEFAULT_CONFIG_LOAD_MODE 0
# 3081 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define NRFX_PWM_DEFAULT_CONFIG_STEP_MODE 0
# 3096 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define NRFX_PWM_DEFAULT_CONFIG_IRQ_PRIORITY 6





#define NRFX_PWM_CONFIG_LOG_ENABLED 0
# 3113 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define NRFX_PWM_CONFIG_LOG_LEVEL 3
# 3129 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define NRFX_PWM_CONFIG_INFO_COLOR 0
# 3145 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define NRFX_PWM_CONFIG_DEBUG_COLOR 0
# 3161 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define NRFX_PWM_NRF52_ANOMALY_109_WORKAROUND_ENABLED 0
# 3173 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define NRFX_PWM_NRF52_ANOMALY_109_EGU_INSTANCE 5
# 3183 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define NRFX_QDEC_ENABLED 0
# 3197 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define NRFX_QDEC_CONFIG_REPORTPER 0
# 3212 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define NRFX_QDEC_CONFIG_SAMPLEPER 7






#define NRFX_QDEC_CONFIG_PIO_A 31






#define NRFX_QDEC_CONFIG_PIO_B 31






#define NRFX_QDEC_CONFIG_PIO_LED 31




#define NRFX_QDEC_CONFIG_LEDPRE 511
# 3247 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define NRFX_QDEC_CONFIG_LEDPOL 1






#define NRFX_QDEC_CONFIG_DBFEN 0






#define NRFX_QDEC_CONFIG_SAMPLE_INTEN 0
# 3276 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define NRFX_QDEC_CONFIG_IRQ_PRIORITY 6





#define NRFX_QDEC_CONFIG_LOG_ENABLED 0
# 3293 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define NRFX_QDEC_CONFIG_LOG_LEVEL 3
# 3309 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define NRFX_QDEC_CONFIG_INFO_COLOR 0
# 3325 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define NRFX_QDEC_CONFIG_DEBUG_COLOR 0
# 3335 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define NRFX_QSPI_ENABLED 0





#define NRFX_QSPI_CONFIG_SCK_DELAY 1




#define NRFX_QSPI_CONFIG_XIP_OFFSET 0
# 3358 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define NRFX_QSPI_CONFIG_READOC 0
# 3369 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define NRFX_QSPI_CONFIG_WRITEOC 0
# 3378 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define NRFX_QSPI_CONFIG_ADDRMODE 0
# 3387 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define NRFX_QSPI_CONFIG_MODE 0
# 3410 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define NRFX_QSPI_CONFIG_FREQUENCY 15




#define NRFX_QSPI_PIN_SCK NRF_QSPI_PIN_NOT_CONNECTED




#define NRFX_QSPI_PIN_CSN NRF_QSPI_PIN_NOT_CONNECTED




#define NRFX_QSPI_PIN_IO0 NRF_QSPI_PIN_NOT_CONNECTED




#define NRFX_QSPI_PIN_IO1 NRF_QSPI_PIN_NOT_CONNECTED




#define NRFX_QSPI_PIN_IO2 NRF_QSPI_PIN_NOT_CONNECTED




#define NRFX_QSPI_PIN_IO3 NRF_QSPI_PIN_NOT_CONNECTED
# 3455 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define NRFX_QSPI_CONFIG_IRQ_PRIORITY 6







#define NRFX_RNG_ENABLED 1





#define NRFX_RNG_CONFIG_ERROR_CORRECTION 1
# 3484 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define NRFX_RNG_CONFIG_IRQ_PRIORITY 6





#define NRFX_RNG_CONFIG_LOG_ENABLED 0
# 3501 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define NRFX_RNG_CONFIG_LOG_LEVEL 3
# 3517 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define NRFX_RNG_CONFIG_INFO_COLOR 0
# 3533 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define NRFX_RNG_CONFIG_DEBUG_COLOR 0
# 3544 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define NRFX_SYSTICK_ENABLED 1





#define NRFX_RTC_ENABLED 0





#define NRFX_RTC0_ENABLED 0






#define NRFX_RTC1_ENABLED 0






#define NRFX_RTC2_ENABLED 0




#define NRFX_RTC_MAXIMUM_LATENCY_US 2000






#define NRFX_RTC_DEFAULT_CONFIG_FREQUENCY 32768






#define NRFX_RTC_DEFAULT_CONFIG_RELIABLE 0
# 3604 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define NRFX_RTC_DEFAULT_CONFIG_IRQ_PRIORITY 6





#define NRFX_RTC_CONFIG_LOG_ENABLED 0
# 3621 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define NRFX_RTC_CONFIG_LOG_LEVEL 3
# 3637 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define NRFX_RTC_CONFIG_INFO_COLOR 0
# 3653 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define NRFX_RTC_CONFIG_DEBUG_COLOR 0
# 3663 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define NRFX_SAADC_ENABLED 1
# 3673 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define NRFX_SAADC_CONFIG_RESOLUTION 1
# 3689 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define NRFX_SAADC_CONFIG_OVERSAMPLE 0






#define NRFX_SAADC_CONFIG_LP_MODE 0
# 3711 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define NRFX_SAADC_CONFIG_IRQ_PRIORITY 6





#define NRFX_SAADC_CONFIG_LOG_ENABLED 0
# 3728 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define NRFX_SAADC_CONFIG_LOG_LEVEL 3
# 3744 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define NRFX_SAADC_CONFIG_INFO_COLOR 0
# 3760 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define NRFX_SAADC_CONFIG_DEBUG_COLOR 0
# 3770 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define NRFX_SPIM_ENABLED 1





#define NRFX_SPIM0_ENABLED 0






#define NRFX_SPIM1_ENABLED 0






#define NRFX_SPIM2_ENABLED 1



#define NRFX_SPIM3_ENABLED 1
#define SPI3_ENABLED 1
#define NRFX_SPIM_EXTENDED_ENABLED 0
#define NRFX_SPIM3_NRF52840_ANOMALY_198_WORKAROUND_ENABLED 0
# 3808 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define NRFX_SPIM_MISO_PULL_CFG 1
# 3823 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define NRFX_SPIM_DEFAULT_CONFIG_IRQ_PRIORITY 6





#define NRFX_SPIM_CONFIG_LOG_ENABLED 0
# 3840 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define NRFX_SPIM_CONFIG_LOG_LEVEL 3
# 3856 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define NRFX_SPIM_CONFIG_INFO_COLOR 0
# 3872 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define NRFX_SPIM_CONFIG_DEBUG_COLOR 0
# 3888 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define NRFX_SPIM_NRF52_ANOMALY_109_WORKAROUND_ENABLED 0







#define NRFX_SPIS_ENABLED 0





#define NRFX_SPIS0_ENABLED 0






#define NRFX_SPIS1_ENABLED 0






#define NRFX_SPIS2_ENABLED 0
# 3931 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define NRFX_SPIS_DEFAULT_CONFIG_IRQ_PRIORITY 6






#define NRFX_SPIS_DEFAULT_DEF 255






#define NRFX_SPIS_DEFAULT_ORC 255





#define NRFX_SPIS_CONFIG_LOG_ENABLED 0
# 3962 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define NRFX_SPIS_CONFIG_LOG_LEVEL 3
# 3978 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define NRFX_SPIS_CONFIG_INFO_COLOR 0
# 3994 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define NRFX_SPIS_CONFIG_DEBUG_COLOR 0
# 4010 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define NRFX_SPIS_NRF52_ANOMALY_109_WORKAROUND_ENABLED 0







#define NRFX_SPI_ENABLED 1





#define NRFX_SPI0_ENABLED 0






#define NRFX_SPI1_ENABLED 0






#define NRFX_SPI2_ENABLED 1
# 4048 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define NRFX_SPI_MISO_PULL_CFG 1
# 4063 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define NRFX_SPI_DEFAULT_CONFIG_IRQ_PRIORITY 6





#define NRFX_SPI_CONFIG_LOG_ENABLED 0
# 4080 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define NRFX_SPI_CONFIG_LOG_LEVEL 3
# 4096 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define NRFX_SPI_CONFIG_INFO_COLOR 0
# 4112 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define NRFX_SPI_CONFIG_DEBUG_COLOR 0
# 4122 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define NRFX_SWI_ENABLED 0





#define NRFX_EGU_ENABLED 0






#define NRFX_SWI0_DISABLED 0






#define NRFX_SWI1_DISABLED 0






#define NRFX_SWI2_DISABLED 0






#define NRFX_SWI3_DISABLED 0






#define NRFX_SWI4_DISABLED 0






#define NRFX_SWI5_DISABLED 0





#define NRFX_SWI_CONFIG_LOG_ENABLED 0
# 4187 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define NRFX_SWI_CONFIG_LOG_LEVEL 3
# 4203 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define NRFX_SWI_CONFIG_INFO_COLOR 0
# 4219 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define NRFX_SWI_CONFIG_DEBUG_COLOR 0
# 4229 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define NRFX_TIMER_ENABLED 1





#define NRFX_TIMER0_ENABLED 0






#define NRFX_TIMER1_ENABLED 0






#define NRFX_TIMER2_ENABLED 0






#define NRFX_TIMER3_ENABLED 0






#define NRFX_TIMER4_ENABLED 1




#define TIMER4_ENABLED 1
# 4285 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define NRFX_TIMER_DEFAULT_CONFIG_FREQUENCY 0
# 4294 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define NRFX_TIMER_DEFAULT_CONFIG_MODE 0
# 4305 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define NRFX_TIMER_DEFAULT_CONFIG_BIT_WIDTH 0
# 4320 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define NRFX_TIMER_DEFAULT_CONFIG_IRQ_PRIORITY 6





#define NRFX_TIMER_CONFIG_LOG_ENABLED 0
# 4337 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define NRFX_TIMER_CONFIG_LOG_LEVEL 3
# 4353 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define NRFX_TIMER_CONFIG_INFO_COLOR 0
# 4369 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define NRFX_TIMER_CONFIG_DEBUG_COLOR 0
# 4379 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define NRFX_TWIM_ENABLED 1





#define NRFX_TWIM0_ENABLED 1






#define NRFX_TWIM1_ENABLED 1
# 4402 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define NRFX_TWIM_DEFAULT_CONFIG_FREQUENCY 26738688






#define NRFX_TWIM_DEFAULT_CONFIG_HOLD_BUS_UNINIT 0
# 4424 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define NRFX_TWIM_DEFAULT_CONFIG_IRQ_PRIORITY 6





#define NRFX_TWIM_CONFIG_LOG_ENABLED 0
# 4441 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define NRFX_TWIM_CONFIG_LOG_LEVEL 3
# 4457 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define NRFX_TWIM_CONFIG_INFO_COLOR 0
# 4473 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define NRFX_TWIM_CONFIG_DEBUG_COLOR 0
# 4488 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define NRFX_TWIM_NRF52_ANOMALY_109_WORKAROUND_ENABLED 0







#define NRFX_TWIS_ENABLED 0





#define NRFX_TWIS0_ENABLED 0






#define NRFX_TWIS1_ENABLED 0
# 4518 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define NRFX_TWIS_ASSUME_INIT_AFTER_RESET_ONLY 0
# 4527 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define NRFX_TWIS_NO_SYNC_MODE 0




#define NRFX_TWIS_DEFAULT_CONFIG_ADDR0 0




#define NRFX_TWIS_DEFAULT_CONFIG_ADDR1 0
# 4547 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define NRFX_TWIS_DEFAULT_CONFIG_SCL_PULL 0
# 4557 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define NRFX_TWIS_DEFAULT_CONFIG_SDA_PULL 0
# 4572 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define NRFX_TWIS_DEFAULT_CONFIG_IRQ_PRIORITY 6





#define NRFX_TWIS_CONFIG_LOG_ENABLED 0
# 4589 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define NRFX_TWIS_CONFIG_LOG_LEVEL 3
# 4605 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define NRFX_TWIS_CONFIG_INFO_COLOR 0
# 4621 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define NRFX_TWIS_CONFIG_DEBUG_COLOR 0
# 4631 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define NRFX_TWI_ENABLED 1





#define NRFX_TWI0_ENABLED 0






#define NRFX_TWI1_ENABLED 0
# 4654 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define NRFX_TWI_DEFAULT_CONFIG_FREQUENCY 26738688






#define NRFX_TWI_DEFAULT_CONFIG_HOLD_BUS_UNINIT 0
# 4676 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define NRFX_TWI_DEFAULT_CONFIG_IRQ_PRIORITY 6





#define NRFX_TWI_CONFIG_LOG_ENABLED 0
# 4693 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define NRFX_TWI_CONFIG_LOG_LEVEL 3
# 4709 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define NRFX_TWI_CONFIG_INFO_COLOR 0
# 4725 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define NRFX_TWI_CONFIG_DEBUG_COLOR 0
# 4735 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define NRFX_UARTE_ENABLED 1



#define NRFX_UARTE0_ENABLED 1




#define NRFX_UARTE1_ENABLED 1
# 4753 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define NRFX_UARTE_DEFAULT_CONFIG_HWFC 0
# 4762 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define NRFX_UARTE_DEFAULT_CONFIG_PARITY 0
# 4787 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define NRFX_UARTE_DEFAULT_CONFIG_BAUDRATE 30801920
# 4802 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define NRFX_UARTE_DEFAULT_CONFIG_IRQ_PRIORITY 6





#define NRFX_UARTE_CONFIG_LOG_ENABLED 0
# 4819 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define NRFX_UARTE_CONFIG_LOG_LEVEL 3
# 4835 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define NRFX_UARTE_CONFIG_INFO_COLOR 0
# 4851 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define NRFX_UARTE_CONFIG_DEBUG_COLOR 0
# 4861 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define NRFX_UART_ENABLED 1



#define NRFX_UART0_ENABLED 0
# 4874 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define NRFX_UART_DEFAULT_CONFIG_HWFC 0
# 4883 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define NRFX_UART_DEFAULT_CONFIG_PARITY 0
# 4908 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define NRFX_UART_DEFAULT_CONFIG_BAUDRATE 30924800
# 4923 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define NRFX_UART_DEFAULT_CONFIG_IRQ_PRIORITY 6





#define NRFX_UART_CONFIG_LOG_ENABLED 0
# 4940 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define NRFX_UART_CONFIG_LOG_LEVEL 3
# 4956 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define NRFX_UART_CONFIG_INFO_COLOR 0
# 4972 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define NRFX_UART_CONFIG_DEBUG_COLOR 0
# 4982 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define NRFX_USBD_ENABLED 1
# 4996 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define NRFX_USBD_CONFIG_IRQ_PRIORITY 3
# 5005 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define NRFX_USBD_CONFIG_DMASCHEDULER_MODE 0
# 5018 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define NRFX_USBD_CONFIG_DMASCHEDULER_ISO_BOOST 1
# 5028 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define NRFX_USBD_CONFIG_ISO_IN_ZLP 0
# 5039 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define NRFX_USBD_USE_WORKAROUND_FOR_ANOMALY_211 0







#define NRFX_WDT_ENABLED 0
# 5057 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define NRFX_WDT_CONFIG_BEHAVIOUR 1






#define NRFX_WDT_CONFIG_RELOAD_VALUE 2000
# 5079 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define NRFX_WDT_CONFIG_IRQ_PRIORITY 6





#define NRFX_WDT_CONFIG_LOG_ENABLED 0
# 5096 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define NRFX_WDT_CONFIG_LOG_LEVEL 3
# 5112 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define NRFX_WDT_CONFIG_INFO_COLOR 0
# 5128 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define NRFX_WDT_CONFIG_DEBUG_COLOR 0
# 5138 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define NRF_CLOCK_ENABLED 1
# 5149 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define CLOCK_CONFIG_LF_SRC 1






#define CLOCK_CONFIG_LF_CAL_ENABLED 0
# 5173 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define CLOCK_CONFIG_IRQ_PRIORITY 6







#define PDM_ENABLED 1







#define PDM_CONFIG_MODE 1
# 5198 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define PDM_CONFIG_EDGE 0
# 5208 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define PDM_CONFIG_CLOCK_FREQ 138412032
# 5225 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define PDM_CONFIG_IRQ_PRIORITY 6







#define POWER_ENABLED 1
# 5249 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define POWER_CONFIG_IRQ_PRIORITY 6
# 5258 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define POWER_CONFIG_DEFAULT_DCDCEN 1
# 5267 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define POWER_CONFIG_DEFAULT_DCDCENHV 0
# 5276 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define PPI_ENABLED 1





#define PWM_ENABLED 0





#define PWM_DEFAULT_CONFIG_OUT0_PIN 31






#define PWM_DEFAULT_CONFIG_OUT1_PIN 31






#define PWM_DEFAULT_CONFIG_OUT2_PIN 31






#define PWM_DEFAULT_CONFIG_OUT3_PIN 31
# 5324 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define PWM_DEFAULT_CONFIG_BASE_CLOCK 4
# 5333 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define PWM_DEFAULT_CONFIG_COUNT_MODE 0




#define PWM_DEFAULT_CONFIG_TOP_VALUE 1000
# 5349 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define PWM_DEFAULT_CONFIG_LOAD_MODE 0
# 5358 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define PWM_DEFAULT_CONFIG_STEP_MODE 0
# 5375 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define PWM_DEFAULT_CONFIG_IRQ_PRIORITY 6






#define PWM0_ENABLED 0






#define PWM1_ENABLED 0






#define PWM2_ENABLED 0
# 5410 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define PWM_NRF52_ANOMALY_109_WORKAROUND_ENABLED 0
# 5422 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define PWM_NRF52_ANOMALY_109_EGU_INSTANCE 5
# 5432 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define QDEC_ENABLED 0
# 5446 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define QDEC_CONFIG_REPORTPER 0
# 5461 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define QDEC_CONFIG_SAMPLEPER 7






#define QDEC_CONFIG_PIO_A 31






#define QDEC_CONFIG_PIO_B 31






#define QDEC_CONFIG_PIO_LED 31




#define QDEC_CONFIG_LEDPRE 511
# 5496 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define QDEC_CONFIG_LEDPOL 1






#define QDEC_CONFIG_DBFEN 0






#define QDEC_CONFIG_SAMPLE_INTEN 0
# 5527 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define QDEC_CONFIG_IRQ_PRIORITY 6







#define QSPI_ENABLED 0





#define QSPI_CONFIG_SCK_DELAY 1




#define QSPI_CONFIG_XIP_OFFSET 0
# 5558 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define QSPI_CONFIG_READOC 0
# 5569 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define QSPI_CONFIG_WRITEOC 0
# 5578 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define QSPI_CONFIG_ADDRMODE 0
# 5587 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define QSPI_CONFIG_MODE 0
# 5610 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define QSPI_CONFIG_FREQUENCY 15




#define QSPI_PIN_SCK NRF_QSPI_PIN_NOT_CONNECTED




#define QSPI_PIN_CSN NRF_QSPI_PIN_NOT_CONNECTED




#define QSPI_PIN_IO0 NRF_QSPI_PIN_NOT_CONNECTED




#define QSPI_PIN_IO1 NRF_QSPI_PIN_NOT_CONNECTED




#define QSPI_PIN_IO2 NRF_QSPI_PIN_NOT_CONNECTED




#define QSPI_PIN_IO3 NRF_QSPI_PIN_NOT_CONNECTED
# 5657 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define QSPI_CONFIG_IRQ_PRIORITY 6







#define RNG_ENABLED 1





#define RNG_CONFIG_ERROR_CORRECTION 1




#define RNG_CONFIG_POOL_SIZE 64
# 5693 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define RNG_CONFIG_IRQ_PRIORITY 6







#define RTC_ENABLED 1





#define RTC_DEFAULT_CONFIG_FREQUENCY 32768






#define RTC_DEFAULT_CONFIG_RELIABLE 0
# 5731 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define RTC_DEFAULT_CONFIG_IRQ_PRIORITY 6






#define RTC0_ENABLED 0






#define RTC1_ENABLED 0






#define RTC2_ENABLED 1




#define NRF_MAXIMUM_LATENCY_US 2000







#define SAADC_ENABLED 1
# 5775 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define SAADC_CONFIG_RESOLUTION 1
# 5791 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define SAADC_CONFIG_OVERSAMPLE 0






#define SAADC_CONFIG_LP_MODE 0
# 5815 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define SAADC_CONFIG_IRQ_PRIORITY 6







#define SPIS_ENABLED 0
# 5839 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define SPIS_DEFAULT_CONFIG_IRQ_PRIORITY 6
# 5850 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define SPIS_DEFAULT_MODE 0
# 5859 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define SPIS_DEFAULT_BIT_ORDER 0






#define SPIS_DEFAULT_DEF 255






#define SPIS_DEFAULT_ORC 255






#define SPIS0_ENABLED 0






#define SPIS1_ENABLED 0






#define SPIS2_ENABLED 0
# 5908 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define SPIS_NRF52_ANOMALY_109_WORKAROUND_ENABLED 0







#define SPI_ENABLED 1
# 5932 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define SPI_DEFAULT_CONFIG_IRQ_PRIORITY 6
# 5942 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define NRF_SPI_DRV_MISO_PULLUP_CFG 1





#define SPI0_ENABLED 0





#define SPI0_USE_EASY_DMA 0







#define SPI1_ENABLED 0





#define SPI1_USE_EASY_DMA 0







#define SPI2_ENABLED 1





#define SPI2_USE_EASY_DMA 0
# 5998 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define SPIM_NRF52_ANOMALY_109_WORKAROUND_ENABLED 0







#define TIMER_ENABLED 1
# 6022 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define TIMER_DEFAULT_CONFIG_FREQUENCY 0
# 6031 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define TIMER_DEFAULT_CONFIG_MODE 0
# 6042 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define TIMER_DEFAULT_CONFIG_BIT_WIDTH 0
# 6059 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define TIMER_DEFAULT_CONFIG_IRQ_PRIORITY 6






#define TIMER0_ENABLED 0






#define TIMER1_ENABLED 1






#define TIMER2_ENABLED 1






#define TIMER3_ENABLED 1
# 6102 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define TWIS_ENABLED 0





#define TWIS0_ENABLED 0






#define TWIS1_ENABLED 0
# 6124 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define TWIS_ASSUME_INIT_AFTER_RESET_ONLY 0
# 6133 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define TWIS_NO_SYNC_MODE 0




#define TWIS_DEFAULT_CONFIG_ADDR0 0




#define TWIS_DEFAULT_CONFIG_ADDR1 0
# 6153 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define TWIS_DEFAULT_CONFIG_SCL_PULL 0
# 6163 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define TWIS_DEFAULT_CONFIG_SDA_PULL 0
# 6180 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define TWIS_DEFAULT_CONFIG_IRQ_PRIORITY 6







#define TWI_ENABLED 1
# 6197 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define TWI_DEFAULT_CONFIG_FREQUENCY 26738688






#define TWI_DEFAULT_CONFIG_CLR_BUS_INIT 0






#define TWI_DEFAULT_CONFIG_HOLD_BUS_UNINIT 0
# 6228 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define TWI_DEFAULT_CONFIG_IRQ_PRIORITY 6





#define TWI0_ENABLED 1





#define TWI0_USE_EASY_DMA 0







#define TWI1_ENABLED 0





#define TWI1_USE_EASY_DMA 0
# 6269 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define TWIM_NRF52_ANOMALY_109_WORKAROUND_ENABLED 0







#define UART_ENABLED 1







#define UART_DEFAULT_CONFIG_HWFC 0
# 6294 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define UART_DEFAULT_CONFIG_PARITY 0
# 6317 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define UART_DEFAULT_CONFIG_BAUDRATE 30801920
# 6334 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define UART_DEFAULT_CONFIG_IRQ_PRIORITY 6






#define UART_EASY_DMA_SUPPORT 1






#define UART_LEGACY_SUPPORT 1





#define UART0_ENABLED 1





#define UART0_CONFIG_USE_EASY_DMA 0







#define UART1_ENABLED 1
# 6377 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define USBD_ENABLED 1
# 6393 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define USBD_CONFIG_IRQ_PRIORITY 3
# 6402 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define USBD_CONFIG_DMASCHEDULER_MODE 0
# 6415 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define USBD_CONFIG_DMASCHEDULER_ISO_BOOST 1
# 6426 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define USBD_CONFIG_ISO_IN_ZLP 0







#define WDT_ENABLED 1
# 6444 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define WDT_CONFIG_BEHAVIOUR 9






#define WDT_CONFIG_RELOAD_VALUE 100000
# 6468 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define WDT_CONFIG_IRQ_PRIORITY 6
# 6489 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define NRF_TWI_SENSOR_ENABLED 0
# 6502 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define APP_FIFO_ENABLED 1






#define APP_GPIOTE_ENABLED 0






#define APP_PWM_ENABLED 1





#define APP_SCHEDULER_ENABLED 1





#define APP_SCHEDULER_WITH_PAUSE 0






#define APP_SCHEDULER_WITH_PROFILER 0







#define APP_SDCARD_ENABLED 0
# 6552 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define APP_SDCARD_SPI_INSTANCE 0
# 6566 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define APP_SDCARD_FREQ_INIT 67108864
# 6580 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define APP_SDCARD_FREQ_DATA 1073741824







#define APP_TIMER_ENABLED 1
# 6600 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define APP_TIMER_CONFIG_RTC_FREQUENCY 0
# 6617 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define APP_TIMER_CONFIG_IRQ_PRIORITY 6
# 6627 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define APP_TIMER_CONFIG_OP_QUEUE_SIZE 50






#define APP_TIMER_CONFIG_USE_SCHEDULER 0
# 6644 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define APP_TIMER_KEEPS_RTC_ACTIVE 0
# 6655 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define APP_TIMER_SAFE_WINDOW_MS 300000
# 6665 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define APP_TIMER_WITH_PROFILER 0






#define APP_TIMER_CONFIG_SWI_NUMBER 0
# 6683 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define APP_UART_ENABLED 1







#define APP_UART_DRIVER_INSTANCE 1
# 6703 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define APP_USBD_AUDIO_ENABLED 0





#define APP_USBD_ENABLED 1
# 6718 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define APP_USBD_VID 0x1915
# 6728 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define APP_USBD_PID 0x521F
# 6737 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define APP_USBD_DEVICE_VER_MAJOR 1
# 6746 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define APP_USBD_DEVICE_VER_MINOR 0
# 6755 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define APP_USBD_DEVICE_VER_SUB 0






#define APP_USBD_CONFIG_SELF_POWERED 1






#define APP_USBD_CONFIG_MAX_POWER 100
# 6778 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define APP_USBD_CONFIG_POWER_EVENTS_PROCESS 1
# 6789 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define APP_USBD_CONFIG_EVENT_QUEUE_ENABLE 0







#define APP_USBD_CONFIG_EVENT_QUEUE_SIZE 32
# 6812 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define APP_USBD_CONFIG_SOF_HANDLING_MODE 2
# 6827 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define APP_USBD_CONFIG_SOF_TIMESTAMP_PROVIDE 0
# 6837 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define APP_USBD_CONFIG_DESC_STRING_SIZE 31
# 6846 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define APP_USBD_CONFIG_DESC_STRING_UTF_ENABLED 0







#define APP_USBD_STRINGS_LANGIDS APP_USBD_LANG_AND_SUBLANG(APP_USBD_LANG_ENGLISH, APP_USBD_SUBLANG_ENGLISH_US)







#define APP_USBD_STRING_ID_MANUFACTURER 1





#define APP_USBD_STRINGS_MANUFACTURER_EXTERN 0
# 6882 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define APP_USBD_STRINGS_MANUFACTURER APP_USBD_STRING_DESC("Nordic Semiconductor")
# 6892 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define APP_USBD_STRING_ID_PRODUCT 2





#define APP_USBD_STRINGS_PRODUCT_EXTERN 0







#define APP_USBD_STRINGS_PRODUCT APP_USBD_STRING_DESC("Rak4631 Serial COM")
# 6916 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define APP_USBD_STRING_ID_SERIAL 3





#define APP_USBD_STRING_SERIAL_EXTERN 1







#define APP_USBD_STRING_SERIAL g_extern_serial_number
# 6940 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define APP_USBD_STRING_ID_CONFIGURATION 4





#define APP_USBD_STRING_CONFIGURATION_EXTERN 0







#define APP_USBD_STRINGS_CONFIGURATION APP_USBD_STRING_DESC("Default configuration")
# 6975 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define APP_USBD_STRINGS_USER X(APP_USER_1, , APP_USBD_STRING_DESC("User 1"))







#define APP_USBD_HID_ENABLED 0







#define APP_USBD_HID_DEFAULT_IDLE_RATE 0
# 7000 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define APP_USBD_HID_REPORT_IDLE_TABLE_SIZE 4
# 7009 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define APP_USBD_HID_GENERIC_ENABLED 0






#define APP_USBD_HID_KBD_ENABLED 0






#define APP_USBD_HID_MOUSE_ENABLED 0






#define APP_USBD_MSC_ENABLED 0






#define CRC16_ENABLED 0






#define CRC32_ENABLED 1






#define ECC_ENABLED 0





#define FDS_ENABLED 1
# 7069 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define FDS_VIRTUAL_PAGES 3
# 7082 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define FDS_VIRTUAL_PAGE_SIZE 1024
# 7091 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define FDS_VIRTUAL_PAGES_RESERVED 4
# 7110 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define FDS_BACKEND 2
# 7123 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define FDS_OP_QUEUE_SIZE 4
# 7139 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define FDS_CRC_CHECK_ON_READ 0
# 7150 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define FDS_CRC_CHECK_ON_WRITE 0
# 7163 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define FDS_MAX_USERS 4
# 7174 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define HARDFAULT_HANDLER_ENABLED 1
# 7188 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define HARDFAULT_HANDLER_GDB_PSP_BACKTRACE 1







#define HCI_MEM_POOL_ENABLED 0



#define HCI_TX_BUF_SIZE 600




#define HCI_RX_BUF_SIZE 600




#define HCI_RX_BUF_QUEUE_SIZE 4







#define HCI_SLIP_ENABLED 0
# 7240 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define HCI_UART_BAUDRATE 30801920
# 7249 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define HCI_UART_FLOW_CONTROL 0




#define HCI_UART_RX_PIN 8




#define HCI_UART_TX_PIN 6




#define HCI_UART_RTS_PIN 5




#define HCI_UART_CTS_PIN 7







#define HCI_TRANSPORT_ENABLED 0



#define HCI_MAX_PACKET_SIZE_IN_BITS 8000
# 7290 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define LED_SOFTBLINK_ENABLED 0






#define LOW_POWER_PWM_ENABLED 0





#define MEM_MANAGER_ENABLED 0





#define MEMORY_MANAGER_SMALL_BLOCK_COUNT 1






#define MEMORY_MANAGER_SMALL_BLOCK_SIZE 32






#define MEMORY_MANAGER_MEDIUM_BLOCK_COUNT 0






#define MEMORY_MANAGER_MEDIUM_BLOCK_SIZE 256






#define MEMORY_MANAGER_LARGE_BLOCK_COUNT 0






#define MEMORY_MANAGER_LARGE_BLOCK_SIZE 256






#define MEMORY_MANAGER_XLARGE_BLOCK_COUNT 0






#define MEMORY_MANAGER_XLARGE_BLOCK_SIZE 1320






#define MEMORY_MANAGER_XXLARGE_BLOCK_COUNT 0






#define MEMORY_MANAGER_XXLARGE_BLOCK_SIZE 3444






#define MEMORY_MANAGER_XSMALL_BLOCK_COUNT 0






#define MEMORY_MANAGER_XSMALL_BLOCK_SIZE 64






#define MEMORY_MANAGER_XXSMALL_BLOCK_COUNT 0






#define MEMORY_MANAGER_XXSMALL_BLOCK_SIZE 32





#define MEM_MANAGER_CONFIG_LOG_ENABLED 0
# 7417 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define MEM_MANAGER_CONFIG_LOG_LEVEL 3
# 7433 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define MEM_MANAGER_CONFIG_INFO_COLOR 0
# 7449 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define MEM_MANAGER_CONFIG_DEBUG_COLOR 0
# 7458 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define MEM_MANAGER_DISABLE_API_PARAM_CHECK 0







#define NRF_BALLOC_ENABLED 1




#define NRF_BALLOC_CONFIG_DEBUG_ENABLED 0





#define NRF_BALLOC_CONFIG_HEAD_GUARD_WORDS 1






#define NRF_BALLOC_CONFIG_TAIL_GUARD_WORDS 1






#define NRF_BALLOC_CONFIG_BASIC_CHECKS_ENABLED 0






#define NRF_BALLOC_CONFIG_DOUBLE_FREE_CHECK_ENABLED 0






#define NRF_BALLOC_CONFIG_DATA_TRASHING_CHECK_ENABLED 0






#define NRF_BALLOC_CLI_CMDS 0
# 7522 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define NRF_CSENSE_ENABLED 0



#define NRF_CSENSE_PAD_HYSTERESIS 15




#define NRF_CSENSE_PAD_DEVIATION 70




#define NRF_CSENSE_MIN_PAD_VALUE 20




#define NRF_CSENSE_MAX_PADS_NUMBER 20




#define NRF_CSENSE_MAX_VALUE 1000






#define NRF_CSENSE_OUTPUT_PIN 26







#define NRF_DRV_CSENSE_ENABLED 0






#define USE_COMP 0



#define TIMER0_FOR_CSENSE 1




#define TIMER1_FOR_CSENSE 2
# 7586 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define MEASUREMENT_PERIOD 20
# 7597 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define NRF_FPRINTF_ENABLED 1





#define NRF_QUEUE_ENABLED 1





#define NRF_QUEUE_CLI_CMDS 0
# 7618 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define NRF_SERIAL_ENABLED 1





#define NRF_FSTORAGE_ENABLED 1
# 7638 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define NRF_FSTORAGE_PARAM_CHECK_DISABLED 0
# 7652 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define NRF_FSTORAGE_SD_QUEUE_SIZE 4







#define NRF_FSTORAGE_SD_MAX_RETRIES 8
# 7670 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define NRF_FSTORAGE_SD_MAX_WRITE_SIZE 4096
# 7682 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define NRF_GFX_ENABLED 0






#define NRF_MEMOBJ_ENABLED 1





#define NRF_PWR_MGMT_ENABLED 1






#define NRF_PWR_MGMT_CONFIG_DEBUG_PIN_ENABLED 0
# 7741 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define NRF_PWR_MGMT_SLEEP_DEBUG_PIN 31
# 7752 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define NRF_PWR_MGMT_CONFIG_CPU_USAGE_MONITOR_ENABLED 0





#define NRF_PWR_MGMT_CONFIG_STANDBY_TIMEOUT_ENABLED 0





#define NRF_PWR_MGMT_CONFIG_STANDBY_TIMEOUT_S 3
# 7773 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define NRF_PWR_MGMT_CONFIG_FPU_SUPPORT_ENABLED 1






#define NRF_PWR_MGMT_CONFIG_AUTO_SHUTDOWN_RETRY 1






#define NRF_PWR_MGMT_CONFIG_USE_SCHEDULER 0






#define NRF_PWR_MGMT_CONFIG_HANDLER_PRIORITY_COUNT 3
# 7817 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define NRF_SECTION_ITER_ENABLED 1






#define NRF_SORTLIST_ENABLED 1






#define NRF_SPI_MNGR_ENABLED 0






#define NRF_STRERROR_ENABLED 1






#define NRF_TWI_MNGR_ENABLED 0






#define RETARGET_ENABLED 1






#define SLIP_ENABLED 0





#define TASK_MANAGER_ENABLED 0





#define TASK_MANAGER_CLI_CMDS 0




#define TASK_MANAGER_CONFIG_MAX_TASKS 2




#define TASK_MANAGER_CONFIG_STACK_SIZE 1024






#define TASK_MANAGER_CONFIG_STACK_PROFILER_ENABLED 1
# 7901 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define TASK_MANAGER_CONFIG_STACK_GUARD 7
# 7913 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define BUTTON_ENABLED 1






#define BUTTON_HIGH_ACCURACY_ENABLED 0
# 7933 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define APP_USBD_CDC_ACM_ENABLED 1
# 7943 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define APP_USBD_CDC_ACM_ZLP_ON_EPSIZE_WRITE 1
# 7956 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define NRF_CLI_ENABLED 0




#define NRF_CLI_ARGC_MAX 12






#define NRF_CLI_BUILD_IN_CMDS_ENABLED 1




#define NRF_CLI_CMD_BUFF_SIZE 128






#define NRF_CLI_ECHO_STATUS 1






#define NRF_CLI_WILDCARD_ENABLED 0




#define NRF_CLI_PRINTF_BUFF_SIZE 23





#define NRF_CLI_HISTORY_ENABLED 1



#define NRF_CLI_HISTORY_ELEMENT_SIZE 32




#define NRF_CLI_HISTORY_ELEMENT_COUNT 8
# 8016 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define NRF_CLI_VT100_COLORS_ENABLED 1






#define NRF_CLI_STATISTICS_ENABLED 1






#define NRF_CLI_LOG_BACKEND 1






#define NRF_CLI_USES_TASK_MANAGER_ENABLED 0






#define NRF_LOG_BACKEND_UART_ENABLED 0



#define NRF_LOG_BACKEND_UART_TX_PIN 29
# 8071 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define NRF_LOG_BACKEND_UART_BAUDRATE 30801920
# 8081 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define NRF_LOG_BACKEND_UART_TEMP_BUFFER_SIZE 256
# 8096 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define NRF_LOG_BACKEND_RTT_ENABLED 1
# 8106 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define NRF_LOG_BACKEND_RTT_TEMP_BUFFER_SIZE 128




#define NRF_LOG_BACKEND_RTT_TX_RETRY_DELAY_MS 1
# 8122 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define NRF_LOG_BACKEND_RTT_TX_RETRY_CNT 3
# 8131 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define NRF_LOG_STR_FORMATTER_TIMESTAMP_FORMAT_ENABLED 1
# 8141 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define NRF_LOG_ENABLED 1





#define NRF_LOG_USES_COLORS 1
# 8162 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define NRF_LOG_COLOR_DEFAULT 3
# 8178 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define NRF_LOG_ERROR_COLOR 2
# 8194 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define NRF_LOG_WARNING_COLOR 7
# 8208 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define NRF_LOG_DEFAULT_LEVEL 4
# 8217 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define NRF_LOG_DEFERRED 0
# 8235 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define NRF_LOG_BUFSIZE 1024
# 8249 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define NRF_LOG_STR_PUSH_BUFFER_SIZE 128
# 8258 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define NRF_LOG_ALLOW_OVERFLOW 1







#define NRF_LOG_USES_TIMESTAMP 0



#define NRF_LOG_TIMESTAMP_DEFAULT_FREQUENCY 0
# 8279 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define NRF_LOG_FILTERS_ENABLED 0






#define NRF_LOG_CLI_CMDS 0
# 8299 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define NRF_LOG_MSGPOOL_ELEMENT_SIZE 20
# 8309 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define NRF_LOG_MSGPOOL_ELEMENT_COUNT 8
# 8326 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define NRF_MPU_CONFIG_LOG_ENABLED 0
# 8337 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define NRF_MPU_CONFIG_LOG_LEVEL 3
# 8353 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define NRF_MPU_CONFIG_INFO_COLOR 0
# 8369 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define NRF_MPU_CONFIG_DEBUG_COLOR 0







#define NRF_STACK_GUARD_CONFIG_LOG_ENABLED 0
# 8388 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define NRF_STACK_GUARD_CONFIG_LOG_LEVEL 3
# 8404 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define NRF_STACK_GUARD_CONFIG_INFO_COLOR 0
# 8420 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define NRF_STACK_GUARD_CONFIG_DEBUG_COLOR 0







#define TASK_MANAGER_CONFIG_LOG_ENABLED 0
# 8439 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define TASK_MANAGER_CONFIG_LOG_LEVEL 3
# 8455 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define TASK_MANAGER_CONFIG_INFO_COLOR 0
# 8471 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define TASK_MANAGER_CONFIG_DEBUG_COLOR 0
# 8485 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define CLOCK_CONFIG_LOG_ENABLED 0
# 8496 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define CLOCK_CONFIG_LOG_LEVEL 3
# 8512 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define CLOCK_CONFIG_INFO_COLOR 0
# 8528 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define CLOCK_CONFIG_DEBUG_COLOR 0







#define COMP_CONFIG_LOG_ENABLED 0
# 8547 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define COMP_CONFIG_LOG_LEVEL 3
# 8563 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define COMP_CONFIG_INFO_COLOR 0
# 8579 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define COMP_CONFIG_DEBUG_COLOR 0







#define GPIOTE_CONFIG_LOG_ENABLED 0
# 8598 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define GPIOTE_CONFIG_LOG_LEVEL 3
# 8614 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define GPIOTE_CONFIG_INFO_COLOR 0
# 8630 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define GPIOTE_CONFIG_DEBUG_COLOR 0







#define LPCOMP_CONFIG_LOG_ENABLED 0
# 8649 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define LPCOMP_CONFIG_LOG_LEVEL 3
# 8665 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define LPCOMP_CONFIG_INFO_COLOR 0
# 8681 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define LPCOMP_CONFIG_DEBUG_COLOR 0







#define MAX3421E_HOST_CONFIG_LOG_ENABLED 0
# 8700 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define MAX3421E_HOST_CONFIG_LOG_LEVEL 3
# 8716 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define MAX3421E_HOST_CONFIG_INFO_COLOR 0
# 8732 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define MAX3421E_HOST_CONFIG_DEBUG_COLOR 0







#define NRFX_USBD_CONFIG_LOG_ENABLED 0
# 8751 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define NRFX_USBD_CONFIG_LOG_LEVEL 3
# 8767 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define NRFX_USBD_CONFIG_INFO_COLOR 0
# 8783 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define NRFX_USBD_CONFIG_DEBUG_COLOR 0







#define PDM_CONFIG_LOG_ENABLED 0
# 8802 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define PDM_CONFIG_LOG_LEVEL 3
# 8818 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define PDM_CONFIG_INFO_COLOR 0
# 8834 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define PDM_CONFIG_DEBUG_COLOR 0







#define PPI_CONFIG_LOG_ENABLED 0
# 8853 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define PPI_CONFIG_LOG_LEVEL 3
# 8869 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define PPI_CONFIG_INFO_COLOR 0
# 8885 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define PPI_CONFIG_DEBUG_COLOR 0







#define PWM_CONFIG_LOG_ENABLED 0
# 8904 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define PWM_CONFIG_LOG_LEVEL 3
# 8920 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define PWM_CONFIG_INFO_COLOR 0
# 8936 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define PWM_CONFIG_DEBUG_COLOR 0







#define QDEC_CONFIG_LOG_ENABLED 0
# 8955 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define QDEC_CONFIG_LOG_LEVEL 3
# 8971 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define QDEC_CONFIG_INFO_COLOR 0
# 8987 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define QDEC_CONFIG_DEBUG_COLOR 0







#define RNG_CONFIG_LOG_ENABLED 0
# 9006 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define RNG_CONFIG_LOG_LEVEL 3
# 9022 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define RNG_CONFIG_INFO_COLOR 0
# 9038 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define RNG_CONFIG_DEBUG_COLOR 0






#define RNG_CONFIG_RANDOM_NUMBER_LOG_ENABLED 0







#define RTC_CONFIG_LOG_ENABLED 0
# 9064 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define RTC_CONFIG_LOG_LEVEL 3
# 9080 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define RTC_CONFIG_INFO_COLOR 0
# 9096 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define RTC_CONFIG_DEBUG_COLOR 0







#define SAADC_CONFIG_LOG_ENABLED 0
# 9115 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define SAADC_CONFIG_LOG_LEVEL 3
# 9131 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define SAADC_CONFIG_INFO_COLOR 0
# 9147 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define SAADC_CONFIG_DEBUG_COLOR 0







#define SPIS_CONFIG_LOG_ENABLED 0
# 9166 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define SPIS_CONFIG_LOG_LEVEL 3
# 9182 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define SPIS_CONFIG_INFO_COLOR 0
# 9198 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define SPIS_CONFIG_DEBUG_COLOR 0







#define SPI_CONFIG_LOG_ENABLED 0
# 9217 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define SPI_CONFIG_LOG_LEVEL 3
# 9233 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define SPI_CONFIG_INFO_COLOR 0
# 9249 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define SPI_CONFIG_DEBUG_COLOR 0







#define TIMER_CONFIG_LOG_ENABLED 0
# 9268 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define TIMER_CONFIG_LOG_LEVEL 3
# 9284 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define TIMER_CONFIG_INFO_COLOR 0
# 9300 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define TIMER_CONFIG_DEBUG_COLOR 0







#define TWIS_CONFIG_LOG_ENABLED 0
# 9319 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define TWIS_CONFIG_LOG_LEVEL 3
# 9335 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define TWIS_CONFIG_INFO_COLOR 0
# 9351 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define TWIS_CONFIG_DEBUG_COLOR 0







#define TWI_CONFIG_LOG_ENABLED 0
# 9370 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define TWI_CONFIG_LOG_LEVEL 3
# 9386 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define TWI_CONFIG_INFO_COLOR 0
# 9402 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define TWI_CONFIG_DEBUG_COLOR 0







#define UART_CONFIG_LOG_ENABLED 0
# 9421 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define UART_CONFIG_LOG_LEVEL 3
# 9437 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define UART_CONFIG_INFO_COLOR 0
# 9453 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define UART_CONFIG_DEBUG_COLOR 0







#define USBD_CONFIG_LOG_ENABLED 0
# 9472 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define USBD_CONFIG_LOG_LEVEL 3
# 9488 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define USBD_CONFIG_INFO_COLOR 0
# 9504 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define USBD_CONFIG_DEBUG_COLOR 0







#define WDT_CONFIG_LOG_ENABLED 0
# 9523 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define WDT_CONFIG_LOG_LEVEL 3
# 9539 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define WDT_CONFIG_INFO_COLOR 0
# 9555 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define WDT_CONFIG_DEBUG_COLOR 0
# 9569 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define APP_TIMER_CONFIG_LOG_ENABLED 0
# 9580 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define APP_TIMER_CONFIG_LOG_LEVEL 3
# 9596 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define APP_TIMER_CONFIG_INITIAL_LOG_LEVEL 3
# 9612 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define APP_TIMER_CONFIG_INFO_COLOR 0
# 9628 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define APP_TIMER_CONFIG_DEBUG_COLOR 0







#define APP_USBD_CDC_ACM_CONFIG_LOG_ENABLED 0
# 9647 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define APP_USBD_CDC_ACM_CONFIG_LOG_LEVEL 3
# 9663 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define APP_USBD_CDC_ACM_CONFIG_INFO_COLOR 0
# 9679 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define APP_USBD_CDC_ACM_CONFIG_DEBUG_COLOR 0







#define APP_USBD_CONFIG_LOG_ENABLED 0
# 9698 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define APP_USBD_CONFIG_LOG_LEVEL 3
# 9714 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define APP_USBD_CONFIG_INFO_COLOR 0
# 9730 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define APP_USBD_CONFIG_DEBUG_COLOR 0







#define APP_USBD_DUMMY_CONFIG_LOG_ENABLED 0
# 9749 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define APP_USBD_DUMMY_CONFIG_LOG_LEVEL 3
# 9765 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define APP_USBD_DUMMY_CONFIG_INFO_COLOR 0
# 9781 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define APP_USBD_DUMMY_CONFIG_DEBUG_COLOR 0







#define APP_USBD_MSC_CONFIG_LOG_ENABLED 0
# 9800 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define APP_USBD_MSC_CONFIG_LOG_LEVEL 3
# 9816 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define APP_USBD_MSC_CONFIG_INFO_COLOR 0
# 9832 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define APP_USBD_MSC_CONFIG_DEBUG_COLOR 0







#define APP_USBD_NRF_DFU_TRIGGER_CONFIG_LOG_ENABLED 0
# 9851 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define APP_USBD_NRF_DFU_TRIGGER_CONFIG_LOG_LEVEL 3
# 9867 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define APP_USBD_NRF_DFU_TRIGGER_CONFIG_INFO_COLOR 0
# 9883 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define APP_USBD_NRF_DFU_TRIGGER_CONFIG_DEBUG_COLOR 0







#define NRF_ATFIFO_CONFIG_LOG_ENABLED 0
# 9902 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define NRF_ATFIFO_CONFIG_LOG_LEVEL 3
# 9914 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define NRF_ATFIFO_CONFIG_LOG_INIT_FILTER_LEVEL 3
# 9930 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define NRF_ATFIFO_CONFIG_INFO_COLOR 0
# 9946 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define NRF_ATFIFO_CONFIG_DEBUG_COLOR 0







#define NRF_BALLOC_CONFIG_LOG_ENABLED 0
# 9965 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define NRF_BALLOC_CONFIG_LOG_LEVEL 3
# 9981 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define NRF_BALLOC_CONFIG_INITIAL_LOG_LEVEL 3
# 9997 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define NRF_BALLOC_CONFIG_INFO_COLOR 0
# 10013 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define NRF_BALLOC_CONFIG_DEBUG_COLOR 0







#define NRF_BLOCK_DEV_EMPTY_CONFIG_LOG_ENABLED 0
# 10032 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define NRF_BLOCK_DEV_EMPTY_CONFIG_LOG_LEVEL 3
# 10044 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define NRF_BLOCK_DEV_EMPTY_CONFIG_LOG_INIT_FILTER_LEVEL 3
# 10060 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define NRF_BLOCK_DEV_EMPTY_CONFIG_INFO_COLOR 0
# 10076 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define NRF_BLOCK_DEV_EMPTY_CONFIG_DEBUG_COLOR 0







#define NRF_BLOCK_DEV_QSPI_CONFIG_LOG_ENABLED 0
# 10095 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define NRF_BLOCK_DEV_QSPI_CONFIG_LOG_LEVEL 3
# 10107 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define NRF_BLOCK_DEV_QSPI_CONFIG_LOG_INIT_FILTER_LEVEL 3
# 10123 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define NRF_BLOCK_DEV_QSPI_CONFIG_INFO_COLOR 0
# 10139 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define NRF_BLOCK_DEV_QSPI_CONFIG_DEBUG_COLOR 0







#define NRF_BLOCK_DEV_RAM_CONFIG_LOG_ENABLED 0
# 10158 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define NRF_BLOCK_DEV_RAM_CONFIG_LOG_LEVEL 3
# 10170 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define NRF_BLOCK_DEV_RAM_CONFIG_LOG_INIT_FILTER_LEVEL 3
# 10186 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define NRF_BLOCK_DEV_RAM_CONFIG_INFO_COLOR 0
# 10202 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define NRF_BLOCK_DEV_RAM_CONFIG_DEBUG_COLOR 0







#define NRF_CLI_BLE_UART_CONFIG_LOG_ENABLED 0
# 10221 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define NRF_CLI_BLE_UART_CONFIG_LOG_LEVEL 3
# 10237 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define NRF_CLI_BLE_UART_CONFIG_INFO_COLOR 0
# 10253 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define NRF_CLI_BLE_UART_CONFIG_DEBUG_COLOR 0







#define NRF_CLI_LIBUARTE_CONFIG_LOG_ENABLED 0
# 10272 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define NRF_CLI_LIBUARTE_CONFIG_LOG_LEVEL 3
# 10288 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define NRF_CLI_LIBUARTE_CONFIG_INFO_COLOR 0
# 10304 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define NRF_CLI_LIBUARTE_CONFIG_DEBUG_COLOR 0







#define NRF_CLI_UART_CONFIG_LOG_ENABLED 0
# 10323 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define NRF_CLI_UART_CONFIG_LOG_LEVEL 3
# 10339 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define NRF_CLI_UART_CONFIG_INFO_COLOR 0
# 10355 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define NRF_CLI_UART_CONFIG_DEBUG_COLOR 0







#define NRF_LIBUARTE_CONFIG_LOG_ENABLED 0
# 10374 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define NRF_LIBUARTE_CONFIG_LOG_LEVEL 3
# 10390 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define NRF_LIBUARTE_CONFIG_INFO_COLOR 0
# 10406 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define NRF_LIBUARTE_CONFIG_DEBUG_COLOR 0







#define NRF_MEMOBJ_CONFIG_LOG_ENABLED 0
# 10425 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define NRF_MEMOBJ_CONFIG_LOG_LEVEL 3
# 10441 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define NRF_MEMOBJ_CONFIG_INFO_COLOR 0
# 10457 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define NRF_MEMOBJ_CONFIG_DEBUG_COLOR 0







#define NRF_PWR_MGMT_CONFIG_LOG_ENABLED 0
# 10476 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define NRF_PWR_MGMT_CONFIG_LOG_LEVEL 3
# 10492 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define NRF_PWR_MGMT_CONFIG_INFO_COLOR 0
# 10508 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define NRF_PWR_MGMT_CONFIG_DEBUG_COLOR 0







#define NRF_QUEUE_CONFIG_LOG_ENABLED 0
# 10527 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define NRF_QUEUE_CONFIG_LOG_LEVEL 3
# 10539 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define NRF_QUEUE_CONFIG_LOG_INIT_FILTER_LEVEL 3
# 10555 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define NRF_QUEUE_CONFIG_INFO_COLOR 0
# 10571 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define NRF_QUEUE_CONFIG_DEBUG_COLOR 0







#define NRF_SDH_ANT_LOG_ENABLED 0
# 10590 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define NRF_SDH_ANT_LOG_LEVEL 3
# 10606 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define NRF_SDH_ANT_INFO_COLOR 0
# 10622 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define NRF_SDH_ANT_DEBUG_COLOR 0







#define NRF_SDH_BLE_LOG_ENABLED 1
# 10641 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define NRF_SDH_BLE_LOG_LEVEL 3
# 10657 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define NRF_SDH_BLE_INFO_COLOR 0
# 10673 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define NRF_SDH_BLE_DEBUG_COLOR 0







#define NRF_SDH_LOG_ENABLED 1
# 10692 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define NRF_SDH_LOG_LEVEL 3
# 10708 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define NRF_SDH_INFO_COLOR 0
# 10724 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define NRF_SDH_DEBUG_COLOR 0







#define NRF_SDH_SOC_LOG_ENABLED 1
# 10743 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define NRF_SDH_SOC_LOG_LEVEL 3
# 10759 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define NRF_SDH_SOC_INFO_COLOR 0
# 10775 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define NRF_SDH_SOC_DEBUG_COLOR 0







#define NRF_SORTLIST_CONFIG_LOG_ENABLED 0
# 10794 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define NRF_SORTLIST_CONFIG_LOG_LEVEL 3
# 10810 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define NRF_SORTLIST_CONFIG_INFO_COLOR 0
# 10826 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define NRF_SORTLIST_CONFIG_DEBUG_COLOR 0







#define NRF_TWI_SENSOR_CONFIG_LOG_ENABLED 0
# 10845 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define NRF_TWI_SENSOR_CONFIG_LOG_LEVEL 3
# 10861 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define NRF_TWI_SENSOR_CONFIG_INFO_COLOR 0
# 10877 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define NRF_TWI_SENSOR_CONFIG_DEBUG_COLOR 0







#define PM_LOG_ENABLED 1
# 10896 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define PM_LOG_LEVEL 3
# 10912 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define PM_LOG_INFO_COLOR 0
# 10928 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define PM_LOG_DEBUG_COLOR 0
# 10942 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define SER_HAL_TRANSPORT_CONFIG_LOG_ENABLED 0
# 10953 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define SER_HAL_TRANSPORT_CONFIG_LOG_LEVEL 3
# 10969 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define SER_HAL_TRANSPORT_CONFIG_INFO_COLOR 0
# 10985 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define SER_HAL_TRANSPORT_CONFIG_DEBUG_COLOR 0
# 11009 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define NFC_AC_REC_ENABLED 0






#define NFC_AC_REC_PARSER_ENABLED 0





#define NFC_BLE_OOB_ADVDATA_ENABLED 0







#define ADVANCED_ADVDATA_SUPPORT 0
# 11039 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define NFC_BLE_OOB_ADVDATA_PARSER_ENABLED 0





#define NFC_BLE_PAIR_LIB_ENABLED 0




#define NFC_BLE_PAIR_LIB_LOG_ENABLED 0
# 11061 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define NFC_BLE_PAIR_LIB_LOG_LEVEL 3
# 11077 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define NFC_BLE_PAIR_LIB_INFO_COLOR 0
# 11093 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define NFC_BLE_PAIR_LIB_DEBUG_COLOR 0
# 11106 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define BLE_NFC_SEC_PARAM_BOND 1





#define BLE_NFC_SEC_PARAM_KDIST_OWN_ENC 1






#define BLE_NFC_SEC_PARAM_KDIST_OWN_ID 1






#define BLE_NFC_SEC_PARAM_KDIST_PEER_ENC 1






#define BLE_NFC_SEC_PARAM_KDIST_PEER_ID 1
# 11152 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define BLE_NFC_SEC_PARAM_MIN_KEY_SIZE 7
# 11169 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define BLE_NFC_SEC_PARAM_MAX_KEY_SIZE 16
# 11181 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define NFC_BLE_PAIR_MSG_ENABLED 0






#define NFC_CH_COMMON_ENABLED 0






#define NFC_EP_OOB_REC_ENABLED 0






#define NFC_HS_REC_ENABLED 0






#define NFC_LE_OOB_REC_ENABLED 0






#define NFC_LE_OOB_REC_PARSER_ENABLED 0






#define NFC_NDEF_LAUNCHAPP_MSG_ENABLED 1






#define NFC_NDEF_LAUNCHAPP_REC_ENABLED 1





#define NFC_NDEF_MSG_ENABLED 1







#define NFC_NDEF_MSG_TAG_TYPE 4







#define NFC_NDEF_MSG_PARSER_ENABLED 0




#define NFC_NDEF_MSG_PARSER_LOG_ENABLED 0
# 11268 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define NFC_NDEF_MSG_PARSER_LOG_LEVEL 3
# 11284 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define NFC_NDEF_MSG_PARSER_INFO_COLOR 0
# 11295 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define NFC_NDEF_RECORD_ENABLED 1





#define NFC_NDEF_RECORD_PARSER_ENABLED 0




#define NFC_NDEF_RECORD_PARSER_LOG_ENABLED 0
# 11317 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define NFC_NDEF_RECORD_PARSER_LOG_LEVEL 3
# 11333 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define NFC_NDEF_RECORD_PARSER_INFO_COLOR 0
# 11344 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define NFC_NDEF_TEXT_RECORD_ENABLED 1






#define NFC_NDEF_URI_MSG_ENABLED 1






#define NFC_NDEF_URI_REC_ENABLED 1





#define NFC_PLATFORM_ENABLED 1




#define NFC_PLATFORM_LOG_ENABLED 4
# 11380 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define NFC_PLATFORM_LOG_LEVEL 3
# 11396 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define NFC_PLATFORM_INFO_COLOR 0
# 11412 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define NFC_PLATFORM_DEBUG_COLOR 0
# 11422 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define NFC_T2T_PARSER_ENABLED 0




#define NFC_T2T_PARSER_LOG_ENABLED 0
# 11438 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define NFC_T2T_PARSER_LOG_LEVEL 3
# 11454 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define NFC_T2T_PARSER_INFO_COLOR 0
# 11464 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define NFC_T4T_APDU_ENABLED 0




#define NFC_T4T_APDU_LOG_ENABLED 0
# 11480 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define NFC_T4T_APDU_LOG_LEVEL 3
# 11496 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define NFC_T4T_APDU_LOG_COLOR 0
# 11506 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define NFC_T4T_CC_FILE_PARSER_ENABLED 0




#define NFC_T4T_CC_FILE_PARSER_LOG_ENABLED 0
# 11522 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define NFC_T4T_CC_FILE_PARSER_LOG_LEVEL 3
# 11538 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define NFC_T4T_CC_FILE_PARSER_INFO_COLOR 0
# 11548 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define NFC_T4T_HL_DETECTION_PROCEDURES_ENABLED 0




#define NFC_T4T_HL_DETECTION_PROCEDURES_LOG_ENABLED 0
# 11564 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define NFC_T4T_HL_DETECTION_PROCEDURES_LOG_LEVEL 3
# 11580 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define NFC_T4T_HL_DETECTION_PROCEDURES_INFO_COLOR 0






#define APDU_BUFF_SIZE 250




#define CC_STORAGE_BUFF_SIZE 64







#define NFC_T4T_TLV_BLOCK_PARSER_ENABLED 0




#define NFC_T4T_TLV_BLOCK_PARSER_LOG_ENABLED 0
# 11616 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define NFC_T4T_TLV_BLOCK_PARSER_LOG_LEVEL 3
# 11632 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define NFC_T4T_TLV_BLOCK_PARSER_INFO_COLOR 0
# 11653 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define SEGGER_RTT_CONFIG_BUFFER_SIZE_UP 512




#define SEGGER_RTT_CONFIG_MAX_NUM_UP_BUFFERS 2




#define SEGGER_RTT_CONFIG_BUFFER_SIZE_DOWN 16




#define SEGGER_RTT_CONFIG_MAX_NUM_DOWN_BUFFERS 2
# 11683 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define SEGGER_RTT_CONFIG_DEFAULT_MODE 0
# 11698 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define NRF_SDH_BLE_ENABLED 1
# 11711 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define NRF_SDH_BLE_GAP_DATA_LENGTH 27




#define NRF_SDH_BLE_PERIPHERAL_LINK_COUNT 1




#define NRF_SDH_BLE_CENTRAL_LINK_COUNT 5






#define NRF_SDH_BLE_TOTAL_LINK_COUNT 6






#define NRF_SDH_BLE_GAP_EVENT_LENGTH 6




#define NRF_SDH_BLE_GATT_MAX_MTU_SIZE 247






#define NRF_SDH_BLE_GATTS_ATTR_TAB_SIZE 1408




#define NRF_SDH_BLE_VS_UUID_COUNT 3
# 11772 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define NRF_SDH_BLE_SERVICE_CHANGED 0
# 11786 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define NRF_SDH_BLE_OBSERVER_PRIO_LEVELS 4
# 11796 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define BLE_ADV_BLE_OBSERVER_PRIO 1






#define BLE_ANCS_C_BLE_OBSERVER_PRIO 2






#define BLE_ANS_C_BLE_OBSERVER_PRIO 2






#define BLE_BAS_BLE_OBSERVER_PRIO 2






#define BLE_BAS_C_BLE_OBSERVER_PRIO 2






#define BLE_BPS_BLE_OBSERVER_PRIO 2






#define BLE_CONN_PARAMS_BLE_OBSERVER_PRIO 1






#define BLE_CONN_STATE_BLE_OBSERVER_PRIO 0






#define BLE_CSCS_BLE_OBSERVER_PRIO 2






#define BLE_CTS_C_BLE_OBSERVER_PRIO 2






#define BLE_DB_DISC_BLE_OBSERVER_PRIO 1






#define BLE_DFU_BLE_OBSERVER_PRIO 2






#define BLE_DIS_C_BLE_OBSERVER_PRIO 2






#define BLE_GLS_BLE_OBSERVER_PRIO 2






#define BLE_HIDS_BLE_OBSERVER_PRIO 2






#define BLE_HRS_BLE_OBSERVER_PRIO 2






#define BLE_HRS_C_BLE_OBSERVER_PRIO 2






#define BLE_HTS_BLE_OBSERVER_PRIO 2






#define BLE_IAS_BLE_OBSERVER_PRIO 2






#define BLE_IAS_C_BLE_OBSERVER_PRIO 2






#define BLE_LBS_BLE_OBSERVER_PRIO 2






#define BLE_LBS_C_BLE_OBSERVER_PRIO 2






#define BLE_LESC_OBSERVER_PRIO 2






#define BLE_LLS_BLE_OBSERVER_PRIO 2






#define BLE_LNS_BLE_OBSERVER_PRIO 2






#define BLE_NUS_BLE_OBSERVER_PRIO 2






#define BLE_NUS_C_BLE_OBSERVER_PRIO 2






#define BLE_OTS_BLE_OBSERVER_PRIO 2






#define BLE_OTS_C_BLE_OBSERVER_PRIO 2






#define BLE_RCS_C_BLE_OBSERVER_PRIO 2






#define BLE_RSCS_BLE_OBSERVER_PRIO 2






#define BLE_RSCS_C_BLE_OBSERVER_PRIO 2






#define BLE_TPS_BLE_OBSERVER_PRIO 2






#define BSP_BTN_BLE_OBSERVER_PRIO 1






#define NFC_BLE_PAIR_LIB_BLE_OBSERVER_PRIO 1
# 12181 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define NRF_BLE_BMS_BLE_OBSERVER_PRIO 2






#define NRF_BLE_CGMS_BLE_OBSERVER_PRIO 2






#define NRF_BLE_ES_BLE_OBSERVER_PRIO 2






#define NRF_BLE_GATTS_C_BLE_OBSERVER_PRIO 2






#define NRF_BLE_GATT_BLE_OBSERVER_PRIO 1






#define NRF_BLE_QWR_BLE_OBSERVER_PRIO 2






#define NRF_BLE_SCAN_OBSERVER_PRIO 1




#define PM_BLE_OBSERVER_PRIO 1
# 12243 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define NRF_SDH_ENABLED 1
# 12260 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define NRF_SDH_DISPATCH_MODEL 0
# 12276 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define NRF_SDH_CLOCK_LF_SRC 1




#define NRF_SDH_CLOCK_LF_RC_CTIV 0







#define NRF_SDH_CLOCK_LF_RC_TEMP_CTIV 0
# 12308 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define NRF_SDH_CLOCK_LF_ACCURACY 7
# 12322 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define NRF_SDH_REQ_OBSERVER_PRIO_LEVELS 2







#define NRF_SDH_STATE_OBSERVER_PRIO_LEVELS 2







#define NRF_SDH_STACK_OBSERVER_PRIO_LEVELS 2
# 12349 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define CLOCK_CONFIG_STATE_OBSERVER_PRIO 0






#define POWER_CONFIG_STATE_OBSERVER_PRIO 0






#define RNG_CONFIG_STATE_OBSERVER_PRIO 0
# 12378 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define NRF_SDH_ANT_STACK_OBSERVER_PRIO 0
# 12387 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define NRF_SDH_BLE_STACK_OBSERVER_PRIO 0
# 12396 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define NRF_SDH_SOC_STACK_OBSERVER_PRIO 0
# 12411 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define NRF_SDH_SOC_ENABLED 1
# 12421 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define NRF_SDH_SOC_OBSERVER_PRIO_LEVELS 2
# 12431 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define BLE_ADV_SOC_OBSERVER_PRIO 1






#define BLE_DFU_SOC_OBSERVER_PRIO 1






#define CLOCK_CONFIG_SOC_OBSERVER_PRIO 0






#define POWER_CONFIG_SOC_OBSERVER_PRIO 0



#define NRF_BL_SETTINGS_PAGE_PROTECT 1
# 12467 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sdk_config.h"
#define NDEF_FILE_SIZE 1024
# 42 "/home/jenkins/workspace/RUI_Release/rui-v3/external/nRF5_SDK/nRF5_SDK_17.0.2_d674dde/components/libraries/crypto/backend/oberon/oberon_backend_ecdh.c" 2
# 1 "/home/jenkins/workspace/RUI_Release/rui-v3/external/nRF5_SDK/nRF5_SDK_17.0.2_d674dde/components/libraries/util/nordic_common.h" 1
# 45 "/home/jenkins/workspace/RUI_Release/rui-v3/external/nRF5_SDK/nRF5_SDK_17.0.2_d674dde/components/libraries/util/nordic_common.h"
#define NORDIC_COMMON_H__ 
# 80 "/home/jenkins/workspace/RUI_Release/rui-v3/external/nRF5_SDK/nRF5_SDK_17.0.2_d674dde/components/libraries/util/nordic_common.h"
#define NRF_MODULE_ENABLED(module) ((defined(module ## _ENABLED) && (module ## _ENABLED)) ? 1 : 0)




#define MSB_32(a) (((a) & 0xFF000000) >> 24)

#define LSB_32(a) ((a) & 0x000000FF)



#define MSB_16(a) (((a) & 0xFF00) >> 8)

#define LSB_16(a) ((a) & 0x00FF)



#define MIN(a,b) ((a) < (b) ? (a) : (b))


#define MAX(a,b) ((a) < (b) ? (b) : (a))
# 116 "/home/jenkins/workspace/RUI_Release/rui-v3/external/nRF5_SDK/nRF5_SDK_17.0.2_d674dde/components/libraries/util/nordic_common.h"
#define CONCAT_2(p1,p2) CONCAT_2_(p1, p2)

#define CONCAT_2_(p1,p2) p1 ##p2
# 135 "/home/jenkins/workspace/RUI_Release/rui-v3/external/nRF5_SDK/nRF5_SDK_17.0.2_d674dde/components/libraries/util/nordic_common.h"
#define CONCAT_3(p1,p2,p3) CONCAT_3_(p1, p2, p3)

#define CONCAT_3_(p1,p2,p3) p1 ##p2 ##p3

#define STRINGIFY_(val) #val


#define STRINGIFY(val) STRINGIFY_(val)



#define ARRAY_SIZE(arr) (sizeof(arr) / sizeof((arr)[0]))






#define SET_BIT(W,B) ((W) |= (uint32_t)(1U << (B)))







#define CLR_BIT(W,B) ((W) &= (~(uint32_t)(1U << (B))))
# 172 "/home/jenkins/workspace/RUI_Release/rui-v3/external/nRF5_SDK/nRF5_SDK_17.0.2_d674dde/components/libraries/util/nordic_common.h"
#define IS_SET(W,B) (((W) >> (B)) & 1)

#define BIT_0 0x01
#define BIT_1 0x02
#define BIT_2 0x04
#define BIT_3 0x08
#define BIT_4 0x10
#define BIT_5 0x20
#define BIT_6 0x40
#define BIT_7 0x80
#define BIT_8 0x0100
#define BIT_9 0x0200
#define BIT_10 0x0400
#define BIT_11 0x0800
#define BIT_12 0x1000
#define BIT_13 0x2000
#define BIT_14 0x4000
#define BIT_15 0x8000
#define BIT_16 0x00010000
#define BIT_17 0x00020000
#define BIT_18 0x00040000
#define BIT_19 0x00080000
#define BIT_20 0x00100000
#define BIT_21 0x00200000
#define BIT_22 0x00400000
#define BIT_23 0x00800000
#define BIT_24 0x01000000
#define BIT_25 0x02000000
#define BIT_26 0x04000000
#define BIT_27 0x08000000
#define BIT_28 0x10000000
#define BIT_29 0x20000000
#define BIT_30 0x40000000
#define BIT_31 0x80000000

#define UNUSED_VARIABLE(X) ((void)(X))
#define UNUSED_PARAMETER(X) UNUSED_VARIABLE(X)
#define UNUSED_RETURN_VALUE(X) UNUSED_VARIABLE(X)
# 43 "/home/jenkins/workspace/RUI_Release/rui-v3/external/nRF5_SDK/nRF5_SDK_17.0.2_d674dde/components/libraries/crypto/backend/oberon/oberon_backend_ecdh.c" 2
